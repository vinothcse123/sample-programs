#include<iostream>

#include <map>

int main()
{
   using namespace std;
   multimap<int,int> mmap;

   mmap.insert(make_pair<int,int>(5,5));
   mmap.insert(make_pair<int,int>(5,4));
   mmap.insert(make_pair<int,int>(5,5));
   mmap.insert(make_pair<int,int>(85,5));
   mmap.insert(make_pair<int,int>(4,4));
   mmap.insert(make_pair<int,int>(8,4));
   mmap.insert(make_pair<int,int>(5,5));

   multimap<int,int>::iterator iter;

   for( iter = mmap.begin(); iter!=mmap.end(); iter++)
   {
      printf("\n  :: %d ", iter->second );
   }

   printf("\n  :: %d ", mmap.size() );

   iter=mmap.find(5);

   printf("\n No of elements with key :: %d ", mmap.count(5) );


   int count=mmap.count(5);
   int iter_count=1;
   for( iter=mmap.find(5); iter_count <= count; iter++,iter_count++)
   {
      printf("\n FIND  :: %d ", iter->second);
   }

   return 0;
}
