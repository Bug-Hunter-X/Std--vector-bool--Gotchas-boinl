Instead of:
```c++
#include <vector>
#include <algorithm>

int main() {
  std::vector<bool> myBools(10); 
  myBools[5] = true; // This does not work as expected
  std::random_shuffle(myBools.begin(), myBools.end()); //This might not work as expected
  return 0;
}
```
Use:
```c++
#include <vector>
#include <algorithm>

int main() {
  std::vector<char> myBools(10); //Use std::vector<char> or std::vector<int>
  myBools[5] = 1; 
  std::random_shuffle(myBools.begin(), myBools.end()); // This will work as expected
  return 0;
}
```