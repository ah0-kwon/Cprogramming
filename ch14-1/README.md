# 실습과제1
- 함수의 인자와 매개변수의 차이를 설명하라.
  >인자는 함수를 호출할 때 전달하는 값이고, 매개변수는 호출된 함수에서 전달받은 값을 저장하는 변수이다.
- 함수가 호출될 때 컴퓨터에 의해 자동으로 실행되는 2가지를 설명하라.
  >매개변수가 메모리에 할당되고 인자값으로 초기화된다.
- 값에 의한 함수 호출방식의 문제점을 설명하라.
  >값에 의한 호출방식으로 다른 함수에서 선언된 지역변수의 값을 변경하는 것은 불가능하다.
- 주소에 의한 함수 호출방식이 필요한 경우를 설명하라.
  >다른 함수에서 선언된 지역변수의 값을 변경해야 하는 경우 주소에 의한 함수 호출방식이 필요하다.
# 실습과제2

<img width="1085" height="348" alt="스크린샷 2026-09-22 230312" src="https://github.com/user-attachments/assets/5ce02acb-fcd2-4564-b418-dc5fc14ef2c6" />

- 위 그림과 같이 값에 의한 호출에서는 인자의 값이 매개변수에 전달되므로 매개변수를 변경해도 원래 변수의 값은 변경되지 않는다. 문제에서 add2(number)를 호출하면 number의 값 15가 value에 전달된다. add2 함수에서 value를 17로 변경해도 number와 value는 서로 다른 메모리 공간에 존재하므로 number는 15로 그대로 남는다. 따라서 함수가 종료되면 변경된 value는 사라지고 number는 15이므로 17이 출력되지 않는다.

#실행결과

<img width="313" height="68" alt="스크린샷 2026-09-22 235826" src="https://github.com/user-attachments/assets/ccbb2126-c244-452d-9187-c8adbb03c852" />

# 실습과제3

#실행결과

<img width="301" height="74" alt="스크린샷 2026-09-22 235925" src="https://github.com/user-attachments/assets/26e8b726-0d22-460d-b6a9-2f83a7e4468b" />

# 실습과제4

#실행결과

<img width="465" height="141" alt="스크린샷 2026-09-23 000236" src="https://github.com/user-attachments/assets/55834c28-2a07-4144-911f-0bdea3ac5356" />

- 세정수의 교환방법
  >x 값이 z로, z 값이 y로, y 값이 x로 이동했다.
- 24페이지처럼 시간에 따라 메모리의 상태 그리기

  <img width="896" height="281" alt="스크린샷 2026-09-23 010141" src="https://github.com/user-attachments/assets/8d67fec4-631d-45f4-803a-2783a4ea393c" />

# 실습과제5
