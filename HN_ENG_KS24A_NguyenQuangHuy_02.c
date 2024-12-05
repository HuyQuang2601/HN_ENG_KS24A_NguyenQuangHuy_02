#include <stdio.h>

int main(){
	int i,j,chose,num,a,arr[10];
	int chan = 0, le = 0;
	int firstMax, secondMax;
	int add, val;
	int position,key,index;
	do{
	
	printf("\tMENU\n");
	printf("1.Nhap so phan tu va gia tri cho mang\n");
	printf("2.In ra gia tri cac phan tu trong mang\n");
	printf("3.Dem so cac phan tu chan le\n");
	printf("4.Tim gia tri lon thu hai trong mang\n");
	printf("5.Them mot phan tu vao dau mang\n");
	printf("6.Xoa mot phan tu tai vi tri cu the\n");
	printf("7.Sap xep mang theo thu tu giam dan\n");
	printf("8.Nhap vao mot phan tu va tim kiem\n");
	printf("9.In ra toan bo so nguyen to trong mang da duoc binh phuong\n");
	printf("10.Sap xep mang theo thu tu giam dan\n");
	printf("11.Thoat\n");
	scanf("%d", &chose);
	
	switch(chose){
		case 1:
			printf("Nhap so phan tu cho mang: ");
			scanf("%d", &a);
			for(int i=0; i<a; i++){
				printf("Nhap gia tri cua arr[%d]: ",i);
				scanf("%d", &arr[i]);
			}
			printf("\n");
			break;
		case 2:
			for(int i=0; i<a; i++){
				printf("arr[%d] = %d ", i, arr[i]);
			}
			printf("\n");
			break;
		case 3:
			for(int i=0; i<a; i++){
				if(arr[i]%2==0){
				chan++;
				}
			}
				printf("Mang co %d phan tu chan\n", chan);
		
			for(int i=0; i<a; i++){
				if(arr[i]%2!=0){
				le++;
				}
			}
			printf("Mang co %d phan tu le\n", le );
			printf("\n");
			break;
		case 4:
			firstMax = arr[0];
		    for(int i = a-1; i >0; i--){
		        if(arr[i] >= firstMax){
		            secondMax = firstMax;
		            firstMax = arr[i];
		        }else if (arr[i] > secondMax){
		            secondMax = arr[i];
		        }
		    }
		    printf("Gia tri lon thu hai trong mang la: %d", secondMax);	
			break;
		case 5:
			a++;
				printf("Nhap vi tri ban muon them: ");
				scanf("%d", &index);
				for( int i=a; i>index; i--){
					arr[i]=arr[i-1];
				}
				printf("Nhap phan tu ban muon them: ");
				scanf("%d", &arr[index]);
				break;
		case 6:
		
			printf("Vi tri muon xoa trong mang: ");
			scanf("%d", &position);
			if (position < 1 || position > a + 1) {
			    printf("Vi tri khong hop le\n");
			}
			for(i = position-1 ; i< a-1; i++){
				arr[i] = arr[i+1];
			}
			a--;
			for(i=0; i<a; i++){
				printf("%d ", arr[i]);
			}
				printf("\n");				
			
				break;
		case 7:
		printf("Cac so chua duoc sap xep la: ");
			for(int i=0; i<a; i++){
				printf("%d ", arr[i]);
			}
			for(int i = 0; i < a; i++){
				key = arr[i];
				j = i - 1;
				while(j >=0 && arr[j] < key){
				arr[j+1] = arr[j];
				j = j - 1;
				}
			arr[j+1] = key;	
			}
			printf("\nCac so da duoc sap xep lai la: ");
			for(int i = 0; i < a; i++){
			printf("%d ", arr[i]);
			}
			printf("\n");
			break;

		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			printf("Thoat chuong trinh");
			break;
	
		}
		
	}while(chose!=11);
}



