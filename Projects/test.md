Test 1 - curly brace (current problem, line 4 turns blue):
```cpp
 １|  #include <iostream>
 ２|  
 ３|  int main()
 ４|  {
 ５|      std::cout << "Hello Wolrd !";
 ６|  
 ７|      return 0;
 ８|  }
1６|  
```

Test 2 - semicolon instead of brace:
```cpp
1|  #include <iostream>
2|  
3|  int main()
4|  
5|      std::cout << "Here is some text.";
6|  
7|      return 0;
8|  ;
```

Test 3 - parenthesis instead of brace:
```cpp
1|  #include <iostream>
2|  
3|  int main()
4|  
5|      std::cout << "Here is some text.";
6|  
7|      return 0;
8|  )
```

Test 4 - colon instead of brace:
```cpp
1|  #include <iostream>
2|  
3|  int main()
4|  :
5|      std::cout << "Here is some text.";
6|  
7|      return 0;
8|  :
```

Test 5 - underscore instead of brace:
```cpp
1|  #include <iostream>
2|  
3|  int main()
4|  _
5|      std::cout << "Here is some text.";
6|  
7|      return 0;
8|  _
```

Test 6 - plain text block, no syntax highlighting at all (guaranteed all white):
```text
1|  #include <iostream>
2|  
3|  int main()
4|  {
5|      std::cout << "Here is some text.";
6|  
7|      return 0;
8|  }
```
