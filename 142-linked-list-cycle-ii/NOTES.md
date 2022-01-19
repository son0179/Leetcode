# 142 Linked List Cycle II



## The new thing I found out



### 	std::map

> about map :  [std::map - cppreference.com](https://en.cppreference.com/w/cpp/container/map)

* **sorted** associative container that contains **<key,value>** pair with **unique** key

* usually implemented as red-black trees(kinds of binary tree)

* so Time Complexity of searching, inserting, removing specific node is 
  $$
  log(n)
  $$
  (because using binary search to find target node)





### 	Etc

* In **if statement**, differently from **for statement**, can't declare valuable

  > error
  >
  > ```c++
  > if( ( auto target = visited.find( curnode ) ) != visited.end() )
  > ```

* **Why?**  

  * Before C99 ( ~ C88 ), initial condition( **for( *this* ; ; )**  ) in **for statement** isn't supported valuable declaration.

  * In C99, Compiler change the code like follows, so initial condition in **for statement** is supported valuable declaration.

    > ```c++
    >  for(int i; ; )
    > ```
    >
    > ​			⇣⇣⇣⇣⇣⇣
    >
    > ```c++
    > int i; 
    > for(i; ; )
    > ```

  * I think that this code transformation is applied only to the **for statement**, not the **if statement**, so valuable declaration cannot be used in the if statement.

