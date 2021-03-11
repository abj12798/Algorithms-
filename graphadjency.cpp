#include<iostream>
#include<vector>

using namespace  std;

class graph{

	private:
		bool** adjMatrix;
		int numVertices;
		
	public:
		graph(int numVertices){
			
			this->numVertices = numVertices;
			adjMatrix = new bool*[numVertices];
			
			for(int i = 0; i < numVertices; i++){
			
				adjMatrix[i] = new bool[numVertices];
				
			
			} 
		
		
		}
		
		//Add edges
		
		void addEdge(int i, int j){
		
			adjMatrix[i][j] = true;
			adjMatrix[j][i] = true;
			
		
		}
		
		
		//Remove edge
		
		void rmedge(int i, int j){
		
			adjMatrix[i][j] = false;
			adjMatrix[j][i] = false;
			
		
		}
		
		
		// calculate degree.
		
		int degree(){
			
		   int deg = 0;
		
		   for(int i = 0; i < numVertices; ++i){
		   
		   		for(int j = 0; j < numVertices; ++j){
		   		
		   			if( adjMatrix[i][j]){
		   			 
		   			  deg++;
		   			
		   			}
		   		
		   		}
		   
		   }
		   
		   
		
		   return deg;
		}

     //check two vertices are adjacent or not.
     
      bool checkadjacent(int i, int j){
      
      
      		if(adjMatrix[i][j])
      			return true;
      			
      		else
      			return false;
      			
      	}
};


int main(){


	
    graph g(4);
    
    
    
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(2,3);
    
    cout<<g.degree()<<endl;














}

