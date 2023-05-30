#include <stdio.h>
#include <stdlib.h>  // rand 함수 사용을 위한 호출
#include <time.h>	// rand 함수 초기화를 위한 호출

int main (void)

{
	printf("\x1b[31m\n\n\n                                          Huge Chunsik Maker	\n\n\n\x1b[0m");
	// 해당 폰트 색상 입력
	printf("Huge Chunsik Maker에 오신 것을 환영합니다.  \n");
	printf("\n\n\nHuge Chunsik Maker는 아기 춘식이를 커다랗게 성장시키는 육성 시뮬레이션입니다.\n");
	printf("춘식이는 식사를 하면 성장하고, 당신과 함께 시간을 보내면 애정이 깊어집니다.\n");
	printf("하지만 항상 좋은 일만 있을 수는 없겠죠?\n");
	printf("어느 날 갑자기 나쁜 일이 생길 수도 있지만, 게임 내의 모든 역경은 사랑으로 극복할 수 있습니다.\n");
	printf("춘식이가 동네에서 가장 커다란 반려동물이 될 때까지 당신의 춘식이를 애정으로 보살펴 주세요.\n\n\n");
	
	printf("게임을 시작하시려면 1을, 종료하시려면 0을 입력해 주세요.  \n\n");

	int start; // 시작값 입력을 위한 변수 설정
	double weight = 20; // 몸무게 계산을 위한 변수 설정, 초기 몸무게는 20kg, 소수점 단위로 계산이 있기 때문에 double형 지정
	int trust = 0; // 애정도 계산을 위한 변수 설정
	int i = 1; // 턴 진행을 위한 변수 설정
	int eat = 0; // 식사 횟수 계산을 위한 변수 설정 (당장 중요한 건 아니고, 나중에 춘식이가 목표달성할 때까지 먹은 끼니가 몇 끼니였는지 출력하고 싶어서 일단 넣어 봄)
	int sick = 0; // 춘식이가 병에 걸린 횟수 계산을 위한 변수 설정 (위와 동일함)
	srand((unsigned)time(NULL));	//춘식이의 상태를 확인하기 위한 난수 초기화		

	scanf("%d", &start);

		if(start!=1)
		{
			printf("게임 시작을 입력하지 않아 프로그램을 종료합니다. \n");
			
			return 0;
		}	
		else
		{

			printf("게임을 시작합니다. \n\n\n");
			printf("힘겨운 취업 준비 기간을 버텨내 드디어 꿈에 그리던 회사에 입사한 당신.  \n");
			printf("취업만 하고 나면 꽃길이 기다릴 줄 알았는데 직장인으로써의 삶은 생각보다 훨씬 녹록치 않았습니다.  \n");
			printf("취업을 하며 상경한 탓에 아는 사람 하나 없는 도시는 쓸쓸하기만 했죠.  \n");
			printf("이 넓은 도시에 마음 붙일 곳 하나 없다니... 반려동물이라도 있었더라면 참 좋았을 텐데...  \n");
			printf("혼자 스치듯이 했던 생각을 누군가 들었던 걸까요?  \n");
			printf("비가 세차게 오던 날 밤, 당신의 집 앞에 다 젖은 박스 하나가 버려져 있었습니다.  \n");
			printf("쓰레기인 줄 알고 그냥 지나치려던 때, 박스가 달싹거렸습니다.  \n");
			printf("홀린 듯이 상자를 들춰 보았더니 글쎄, 귀여운 춘식이가 한 마리 있는 게 아니겠어요?  \n");
			printf("그날 이후 임시 보호라는 명목으로 춘식이를 기르게 된 지도 벌써 2년째.  \n");
			printf("당신은 이왕 이렇게 된 거, 춘식이를 잘 키워 보기로 결정했습니다. 누가 봐도 깜짝 놀랄 정도로요!  \n");
			printf("목표는 클수록 좋다는 말이 있죠. 당신은 춘식이를 동네에서 가장 큰 반려동물로 키우기로 결정했습니다.  \n");
			printf("100kg 정도가 되면 다른 춘식이들과 비교해도 월등히 크겠죠? 또, 엄청나게 커진 춘식이는 얼마나 귀여울까요.  \n");
			printf("그렇게 당신의 도전이 시작되었습니다.  \n\n\n");
			printf("춘식이의 현재 몸무게는 %.1fkg이고, 애정도는 %d입니다.  \n", weight, trust);	
			
							
					for(i=1 ; weight<=110 ; i=i+1)  // 한 번에 한 턴씩을 진행함.
					{	
			
						printf("\n\n\n");
						
						if(weight >= 100)
						{
							printf("사랑으로 보살핀 덕분일까요? 춘식이가 눈에 띄게 성장했습니다!  \n");
							printf("공원에 산책을 갈 때 다른 춘식이들과 비교해도 세 배는 되는 것 같아요.  \n");
							printf("당신은 떨리는 마음으로 춘식이의 몸무게를 측정했습니다.  \n");
							printf("세상에나, 춘식이가 드디어 100kg을 넘었습니다!  \n");
							printf("당신은 목표를 달성했습니다. 춘식이는 가장 귀여운 춘식이 대회에 나가 명예롭게도 1등상을 수상했습니다.  \n");
							printf("춘식이 동호회에서 만난 친구들 덕분에 당신도 더는 외롭지 않아졌습니다.  \n");
							printf("정말 잘 된 일이네요~~  \n\n");
							printf("~GOOD ENDING~ 제일 귀여운 나의 춘식이  \n\n\n");
							printf("게임 클리어를 축하합니다! 춘식이의 최종 스코어는 다음과 같습니다.  \n\n");
							printf("몸무게 : %.1f  애정도 : %d   \n", weight, trust);
							printf("춘식이와 함께한 날의 수 : %d  \n", i);
							printf("춘식이가 아팠던 날의 수 :  %d  \n", sick);
							printf("춘식이가 성장까지 먹은 캔의 수  : %d  \n", eat);
							printf("종합 스코어 : %d \n\n\n", (int)(i + weight + trust + eat)/sick);
							printf("춘식이와의 새로운 추억 쌓기에도 도전해 보세요! \n");
			
							return 0;
						}
						else
							printf("당신은 춘식이와 시간을 보냅니다.  \n");
					

						int condition = (rand() % 10 + 1);  // 1 ~ 10 까지 경우의 수 뽑음
					
						if(condition!=1) // 뽑힌 경우의 수가 1이 아니라면 (춘식이가 건강함)~
						{
							printf("춘식이와 여러 놀이를 하다 보니 반나절이 금세 지나갔습니다.  \n");
							printf("배고파 보이는 춘식이에게 맛있는 간식캔을 따 주었습니다.  \n");
							printf("춘식이는 순식간에 한 캔을 다 비웠습니다.  \n\n");
							
							weight += 0.3;
							eat++;
						
							int toilet = (rand() % 2 + 1);  // 1 ~ 2 까지 경우의 수 뽑음
							
							if(toilet==1) // 뽑힌 경우의 수가 1이라면 (춘식이가 응가를 쌈)
							{
								printf("배부르게 먹은 춘식이는 화장실에 갑니다.  \n");
								printf("잘 먹고 잘 싸는 게 모든 반려동물의 가장 중요한 할 일 아니겠어요?  \n");
								printf("춘식이의 기분이 좋아 보입니다.  \n");
								
								weight -= 0.2;
								trust += 5;
								printf("춘식이의  몸무게는 %.1fkg이고, 애정도는 %d입니다.  \n", weight, trust);
							}		
							else if(toilet!=1) // 뽑힌 경우의 수가 1이 아니라면 (춘식이가 화장실에 가지 않음)
							{	
								printf("식사를 마친 당신과 춘식이는 잠자리에 들었습니다.  \n");
								printf("춘식이는 당신의 품에서 새근새근 잘도 잡니다.  \n");
								printf("춘식이는 지금 무슨 꿈을 꾸고 있을까요?  \n");
								printf("잠든 춘식이를 토닥여 주다가 당신도 스르륵 잠들었습니다. 오늘도 즐거운 하루였네요.  \n");
								
								trust += 5;
								printf("춘식이의  몸무게는 %.1fkg이고, 애정도는 %d입니다.  \n", weight, trust);
							}
						}

						else if(condition==1)  // 뽑힌 경우의 수가 1이라면 (춘식이가 아픔)
						{
							printf("춘식이의 상태가 이상해 보입니다. \n");
							printf("식사를 거부하고 구석에 틀어박혀 나오지를 않습니다.  \n");
							printf("당신은 아파 보이는 춘식이를 정성껏 간호했습니다.  \n");
							printf("식사를 하지 않아 춘식이가 조금 야위어 보입니다.  \n\n");
							weight -= 0.5;
							
							for( ; sick<=i ; sick++)  // 춘식이가 나을 때까지 아픈 상태를 지속시키기 위한 반복문
							{
								double k = (rand() % 100 + 1); // 1부터 100까지의 확률을 구함
								double healthy = (trust * 0.1); // 애정도에 0.1을 곱한 만큼 건강해질 확률로 설정
								
								if(k<=healthy) // 무작위로 뽑은 수 k가 healthy의 범위 내에 있다면~
								{
									printf("당신의 간호 덕분에 춘식이가 건강해졌습니다.  \n");
									printf("춘식이는 건강해져서 기분이 좋아 보입니다.  \n");
									trust += 5; // 한 턴이 종료되는 지점에 애정도가 올라가야 함
									weight -= 0.5;
									printf("춘식이의 현재 몸무게는 %.1fkg이고, 애정도는 %d입니다.  \n\n", weight, trust);
								
									break;
								}	

								else if(k>healthy)
								{
									int death = (rand() % 10 + 1);  // 1 ~ 100 까지 경우의 수 뽑음
					
									if(death==10)  //뽑은 경우의 수가 1~10 범위 안에 있다면(춘식이가 죽음)
									{
										printf("시름시름 앓던 춘식이의 상태가 눈에 띄게 안 좋아졌습니다.  \n");
										printf("병원에 데리고 갔더니 입원을 권했습니다.  \n");
										printf("떨어지기 싫어하는 춘식이를 어르고 달래서 겨우 입원시키고, 당신은 무거운 발걸음으로 집에 돌아왔습니다.  \n");
										printf("그리고, 그게 춘식이와의 마지막이었습니다.  \n");
										printf("어디서부터 무엇이 잘못되었던 걸까요... \n\n\n");
										printf("춘식이의 최종 몸무게는 %.1fkg이고, 애정도는 %d였습니다. \n\n", weight, trust);
										printf("~BAD ENDING~ 돌아오지 않는 춘식이 \n\n");
										printf("다시 처음부터 GOOD ENDING에 도전해 보세요!  \n\n");
																			
										return 0;
									}

									else if(death!=10)
									{
										printf("간호가 소용 없었던 것 같습니다.  \n");
										printf("춘식이의 상태를 조금 더 지켜봐 주세요.  \n");
										trust += 5; // 낫지 않아도 한 턴이 종료되므로 애정도가 올라가야 함
										printf("춘식이의 현재 몸무게는 %.1fkg이고, 애정도는 %d입니다.  \n\n", weight, trust);
										weight -= 0.5;
										sick++;
										i++;
									}
								}				
							}								
						}
					}
				}
			return 0;
}
