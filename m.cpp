/* Given an array of int and a integer target,find the index such that the sum of those index is the target number 



*/
#include <iostream>
#include <vector>
void num_(std::vector<int>&input_arr,int size)
{
    int i,j,target;
    bool flag = false;
    std::cout<<"Enter target: ";
    std::cin>>target;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(input_arr[i]+input_arr[j] == target)
            {
                std::cout<<i<<" , "<<j;
                flag = true;
               
            }         
        }
        if(flag) break;
    }
    if(!flag)
    {
        std::cout<<"No matching indices found\n";
    }
    

}

int main(int argc, char const *argv[])
{
    std::vector<int>vec;
    int size,i;
    std::cout<<"Enter the size of your array: ";
    std::cin>>size;
    vec.resize(size);
    for(i=0;i<size;i++)
    {
        std::cin>>vec[i];
    }
    num_(vec,size);

    return 0;
}

/* Sample Output

Enter the size of your array: 4
1
2
3
4
Enter the target value: 4

0 , 2

*/
