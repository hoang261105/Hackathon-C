#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int num[100],currentIndex,n;
	int sum,sumNumber;
	int max,min,m,k,l;
	do{
		printf("*******************************MENU****************************\n");
		printf("1. Nhap gia tri phan tu cua mang\n");
		printf("2. In cac gia tri phan tu trong mang\n");
		printf("3. Tinh tong phan tu chia het cho 2 va 3 trong mang\n");
		printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
		printf("5. Su dung thuat toan chen sap xep mang tang dan\n");
		printf("6. Tinh tong cac phan t la so nguyen to trong mang\n");
		printf("7. Sap xep cac phan tu le chia het cho 5 o dau mang theo thu tu giam dan, cac phan tu chan chia het cho 5 o cuoi mang theo thu tu tang dan, con lai o giua theo thu tu giam dan\n");
		printf("8. Nhap gia tri m tu ban phim, chen gia tri m vao mang sap xep tang dan\n");
		printf("9. Thoat\n");
		printf("Lua chon cua ban");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap so phan tu cua mang: ");
				scanf("%d",&n);
				for(int i=0;i<n;i++){
					printf("num[%d]= ",currentIndex);
					scanf("%d",&num[currentIndex]);
					currentIndex++;
				}
				break;
			case 2:
				printf("Gia tri cac phan tu trong mang la:\n");
				for(int i=0;i<currentIndex;i++){
					printf("%d\t",num[i]);
				}
				printf("\n");
				break;
			case 3:
				sum=0;
				printf("Cac phan tu co gia tri chia het cho 2 va 3 trong mang la: \n");
				for(int i=0;i<currentIndex;i++){
					if(num[i]%2==0 && num[i]%3==0){
						printf("%d\t",num[i]);
					    sum+=num[i];
					}
				}
				printf("Tong cac so chan trong mang la: %d",sum);
				break;
			case 4:
				max=num[0];
				min=num[0];
				for(int i=0;i<currentIndex;i++){
					if(max<num[i]){
						max=num[i];
					}
					if(min>num[i]){
						min=num[i];
					}
				}
				printf("GTLN la %d va GTNN la %d",max,min);
				break;
			case 5:
				for(int i=1;i<currentIndex;i++){
                    int key = num[i];
                    int j = i-1;
                    while(j>=0 && key<num[j]){ 
                        num[j+1] = num[j]; 
                        j-=1;
                    }
                    num[j+1] = key;
                }
                printf("Mang sau khi sap xep la:\n");
	                for(int i=0;i<currentIndex;i++){
		                printf("%d\t",num[i]);
                }
				break;
			case 6:
				sumNumber = 0;
				printf("Cac so nguyen to trong mang: ");
				for(int i=0;i<currentIndex;i++){
					int isPrime=0;
				    if(num[i]>=2){
				    	for(int j=2;j<=sqrt(num[i]);j++){
				    	    if(num[i]%j==0){
				    	    	isPrime=1;
				    	    	break;
				            } 
					    }
					}else{
				        isPrime=1;
				    }
				    if(isPrime==0){
				    	printf("%d\t",num[i]);
				    	sumNumber+=num[i];
				    }
				}
				printf("Tong cac so nguyen to trong mang la: %d\n",sumNumber);
				break;
			case 7:
				
				break;
			case 8:
				printf("Nhap gia tri m tu ban phim vao mang ");
                scanf("%d", &m);
                num[currentIndex]=m;
                currentIndex++;
                for (int i=1; i < currentIndex; i++){
                    int key=num[i];
                    int j=i-1;
                    while (j >= 0 && key<num[j]) {
                        num[j+1] = num[j];
                    j-=1;
                }
                num[j+1]=key;
                }
                printf("Day so sau khi sap xep lai la:\n");
                for(int i=0;i<currentIndex;i++){
		            printf("%d\t",num[i]);
                }
				break;
			case 9:
				exit(0);
			default:
				printf("Vui long chon t 1 den 9: ");
		}
	} while(1==1);
}
