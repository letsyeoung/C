#include <stdio.h>



//정수형변수출력
int main()
{
  int a;
  a = 50;

  printf("a의 값은 %d 입니다", a);
  printf("출력될 자리", 출력할 변수);

  return 0;

}

int main() 
{
  int a = 10;
  int b = 20;
  int c = 30;

  printf("a의 값은 %d 이며, b의 값은 %d 이고, c의 값은 %d 입니다.", a,b,c);

  return 0;
}



//실수형변수출력
int main()
{
  float a = 1.3f; // `f` float라는 걸 명시하기 위해서. f 안쓰면 double로 인식한다.
  double b = 1.345454 ;

  printf("a는 %f 입니다. \n", a); // %.3f = 소수점 3번째자리까지 표기한다는 뜻.   
  printf("b는 %f 입니다. \n", b); 

  return 0;
}



//입력받기
int main()
{
  int a; // 변수선언

  printf("정수를 입력하세요 : "); //출력
  scanf("%d", &a); //입력 저장할 변수 앞에 꼭 !! & 붙어야한다.
  printf("입력받은 정수 : %d", a); //출력
  
  return 0;
}


int main()
{
  int a;
  int b;
  float c;
  float d;
  
  printf("정수 a 입력 : ");
  scanf("%d", &a);
  printf("입력받은 정수 a : %d\n", a);
  
  printf("실수 c 입력 : ");
  scanf("%f", b);
  printf("입력받은 실수 c : %f\n", b);
  
  printf("정수 b 와 실수 d 입력 : ");
  scanf("%d %f", c, d);
  printf("입력받은 b d : %d %f\n", c, d);
  
  return 0;
}

