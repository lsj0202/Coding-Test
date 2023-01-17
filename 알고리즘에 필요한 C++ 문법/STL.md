# <span style="color:tomato">STL</span> 
C++은 STL(Standard Template Library)을 제공하며 이는 자료구조, 함수등을 제공하는 라이브러리를 뜻합니다. 알고리즘, 컨테이너, 이터레이터, 펑터 이렇게 4가지를 제공합니다.

# <h4 style="color:green">알고리즘</h4> 
정렬, 탐색 등에 관한 함수로 이루어져 있습니다. sort()가 대표적입니다.

# <h4 style="color:green">컨테이너</h4> 
컨테이너는 여러가지 의미로 쓰이는데, 클라우드 서비스의 컨테이너도 있고 물건을 많이 담을 수 있는 컨테이너 박스라는 의미도 있습니다. 여기서의 컨테이너는 박스라는 의미도 있습니다. 컨테이너란 C++에서 제공하는 자료구조를 의미합니다.
<br>

1.시퀀스 컨테이너 : 데이터를 단순히 저장해 놓는 자료구조를 뜻하며 array, vector, deque, forward_list, list 가 있습니다.

2.연관 컨테이너 : 자료가 저장됨에 따라 자동정렬 되는 자료구조를 말합니다. 중복키가 가능한 것은 이름에 multi가 붙습니다. 
set, map, multiset, multimap이 있습니다.

3.정렬되지 않는 컨테이너는 자료가 저장됨에 따라 자동정렬이 되지 않는 자료구조를 말합니다. unordered_set, unordered_map, unordered_multiset,multimap 이 있습니다.

4.컨테이너 어댑터는 시퀀스 컨테이너를 이용해 만든 자료구조를 뜻하며 stack, queue는 dequeue로 만들어져 있으며 priority_queue는 vector을 이용해 힙 자료구조를 만듭니다.

