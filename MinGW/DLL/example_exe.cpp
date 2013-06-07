#include <stdio.h>
#include "example_dll.h"
#include <vector>
int main(void)
{
		//Test DLL
       hello("World");
       printf("%d\n", Double(333));
       CppFunc();
       MyClass a;
       a.func();
		
		//Test STL 
		std::vector<int> v;
		v.push_back(3);
		v.push_back(8);
		printf("v size:%d", v.size());

       return 0;
}
