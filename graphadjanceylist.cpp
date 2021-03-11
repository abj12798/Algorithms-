#include<iostream>
#include<vector>
#include<queue>



using namespace std;

void addEdge(vector <int> adj[], int u, int v){


	adj[u].push_back(v);
	adj[v].push_back(u);
	
}

void BFSin(vector <int> adj[], int s, bool* visited){


		queue<int> q;
		
		q.push(s);
		visited[s] = true;
		while(q.empty() == false){
		
			int u = q.front();
			
			cout<<u<<"  ";
			
			q.pop();
			
			for(int i : adj[u]){
		
					
					if(visited[i] == false){
						
						visited[i] = true;
						
						q.push(i);
						
			        }
			        
			}
			
			
		
		}




}

void BFS(vector <int> adj[],int s,int V){

	
	bool visited[V+1];
	
	

	for(int i = 0; i <= V; ++i){

		visited[i] = false;
		
	
	}
	for( int j = 0; j < V; j++){
	
	
		if(visited[j] == false){
		
			BFSin(adj,j,visited);
		
		}
	
	
	}
	
}

void printGraph(vector<int> adj[], int V) 
{ 
    for (int i = 0; i < V; i++) 
    {   
    	cout<<i<<" ";
        for (int x : adj[i]) 
           cout << x <<" "; 
        cout<<"\n"; 
    } 
} 
  

int main(){


	int V;
	
	cin>>V;
	
	vector<int> adj[V];
	
	addEdge(adj,0,1);
	addEdge(adj,0,2);
	addEdge(adj,2,1);
	addEdge(adj,3,2);
	
	printGraph(adj,V);
	
	BFS(adj,3,V);
	
	return 0;
	
}




