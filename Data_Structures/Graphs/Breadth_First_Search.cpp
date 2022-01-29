// CPP program showing Breadth first search in graph
#include <iostream>
#include <list>
using namespace std;

class Graph{
    int V;
    list<int> *arr;
    public:
    Graph(int value);
    void addElem(int u, int x);
    void BFS(int vertid);
};
Graph::Graph(int value){
    V = value;
    arr = new list<int>[V];
}
void Graph::addElem(int u, int x){
    arr[u].push_back(x);
}
void Graph::BFS(int vertid){
    
    list<int> queue;
    int visited[V] {0};
    queue.push_back(arr[vertid].front());
    visited[vertid] = 1;
    
    int curr;
    while(!queue.empty()){
        cout<<queue.front()<<endl;
        curr = queue.front()-1;
        queue.pop_front();
    
        
        for(auto it = arr[curr].begin(); it!=arr[curr].end();it++){
            //cout<<!visited[(*it)-1]<<" ";
            if(!visited[(*it)-1]){
                queue.push_back(*it);
                visited[(*it)-1] = 1;
            }
        }
    }
}

int main(){
    Graph gr1(5);
    gr1.addElem(0,1);
    gr1.addElem(0,4);
    gr1.addElem(0,2);
    gr1.addElem(1,2);
    gr1.addElem(1,1);
    gr1.addElem(1,5);
    gr1.addElem(2,3);
    gr1.addElem(2,4);
    gr1.addElem(2,1);
    gr1.addElem(2,5);
    gr1.addElem(3,4);
    gr1.addElem(3,3);
    gr1.addElem(4,5);
    gr1.addElem(4,2);
    gr1.BFS(2);
    return 0;
}
