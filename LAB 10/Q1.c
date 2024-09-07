#include<stdio.h> 

void max_heapify(int heap_max[],int n,int i) 
{ 
    int largest=i,left=2*i+1,right=2*i+2,temp; 
    if(left<n && heap_max[left]>heap_max[largest]) 
        largest=left; 
    if(right<n && heap_max[right]>heap_max[largest]) 
        largest=right; 
    if(largest!=i) 
    { 
        temp=heap_max[i]; 
        heap_max[i]=heap_max[largest]; 
        heap_max[largest]=temp; 
        max_heapify(heap_max,n,largest); 
    } 
} 
void min_heapify(int heap_min[],int n,int i) 
{ 
    int smallest=i,left=2*i+1,right=2*i+2,temp; 
    if(left<n && heap_min[left]<heap_min[smallest]) 
        smallest=left; 
    if(right<n && heap_min[right]<heap_min[smallest]) 
        smallest=right; 
    if(smallest!=i) 
    { 
        temp=heap_min[i]; 
        heap_min[i]=heap_min[smallest]; 
        heap_min[smallest]=temp; 
        min_heapify(heap_min,n,smallest); 
    } 
}
int main() 
{ 
    int heap_max[10],heap_min[10],i,n,largest,smallest,pos,temp;  
    printf("Enter the no. of elements : "); 
    scanf("%d",&n); 
    printf("Enter the elements : "); 
    for(i=0;i<n;i++) 
        scanf("%d",&heap_max[i]); 
    for(i=0;i<n;i++) 
        heap_min[i]=heap_max[i]; 
    for(i=(n/2)-1;i>=0;i--) 
        max_heapify(heap_max,n,i); 
    for(i=(n/2)-1;i>=0;i--) 
        min_heapify(heap_min,n,i); 
    printf("Max heap : "); 
    for(i=0;i<n;i++) 
        printf("%d ",heap_max[i]); 
    printf("\nMin heap : "); 
    for(i=0;i<n;i++) 
        printf("%d ",heap_min[i]); 
   
}