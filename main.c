#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
/**
��һ�⣺
int main() {
	float x,y,z,sum,multiply,average;
	printf("����������ʵ����");
	scanf("%f %f %f",&x,&y,&z);
	sum = x+y+z;
	multiply = x*y*z;
	average = sum/3;
	printf("sum = %f, multiply = %f, average = %f",sum,multiply,average);
	return 0;
}
**/

/**
�ڶ���
int main(){
	int a,b,rem;
	int sum,sub;
	long mul;
	float div,aver;
	scanf("%d %d",&a,&b);
	sum = a + b;
	sub = a - b;
	mul = (long)a * b;
	div = (float)a / b;
	rem = a % b;
	aver = (float)sum / 2;
	printf("sum = %d, sub = %d, mul = %ld, div = %f, rem = %d, aver = %f",sum,sub,mul,div,rem,aver);
	return 0;
}
**/

/**
�����⣺
int main(){
	int a;
	char c;
	scanf("%d",&a);
	c = a + 48;
	putchar(c);
}
**/

/**
������
#define PI 3.14
int main(){
	int r;
	scanf("%d",&r);
	printf("�����%f",4*PI*r*r);
	printf("���Ϊ%f",(4*PI*r*r*r)/3);
}
**/

/**
������
int main(){
	int a,b;
	long l;
	char c1,c2[10];
//����Ҳ����ʹ��puts��gets����
	gets(c2);
	puts(c2);

	float f;
	scanf("%d %d %ld %c %f %s",&a,&b,&l,&c1,&f,&c2);
	printf("%d %d %ld %c %f %s",a,b,l,c1,f,c2);
}
**/

/**
������
int min(a,b,c){
	return a < b ? (a < c ? a : c) : (b < c ? b : c);
}

int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",min(a,b,c));
}
**/


/**
������
int main(){
	char c;
	scanf("%c",&c);
	if(c > 'A' && c < 'Z'){
		c = c + 32;
		printf("%c",c);
	}else if(c > 'a' && c < 'z'){
		c = c - 32;
		printf("%c",c);
	}else{
		printf("%c",c);
	}
}

**/

/**
�ڰ���
int main(){
	int x;
	scanf("%d",&x);
	if(x < 0 && x != -3){
		x = x*x + x - 6;
	}else if( x >= 0 && x<10 && x != 2 && x != 3){
		x = x*x - 5*x + 6;
	}else{
		x = x*x - x -1;
	}

	printf("%d",x);
}
**/

/**
�ھ���
int main(){
	char s[100];
	gets(s);
	int i;
	for(i = 0; s[i] != '\0'; i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] = s[i];
		}else if(s[i] >= 'A' && s[i] <= 'Z'){
			if(s[i] == 'Z'){
				s[i] = 'a';
			}else{
				s[i] = s[i] + 32 + 1;
			}
		}
	}


//  ��������
//	for(i = 0; s[i] >= 'a' && s[i] <= 'z'; i++){
//		s[i] = s[i];
//	}
//	printf("%d",i);
//	for(i = 0; s[i] >= 'A' && s[i] <= 'Z'; i++){
//		if(s[i] == 'Z'){
//			s[i] = 'a';
//		}else{
//			s[i] = s[i] + 32 + 1;
//		}
//	}
	puts(s);
}
**/

/**
��10��
ע��C������ֻ�����ֲ���Ϊָ�������ſ��Ըı��������ı���ֵ
 int &x,int &y���Ϸ�
 int x,int y ���ı��������ı���ֵ
int swap(int *x,int *y){
	int mid;
	mid = *x;
	*x = *y;
	*y = mid;
	return 0;
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a > b){
		printf("%d %d\n",a,b);
	}else{
		swap(&a,&b);
		printf("------------------------\n");
		printf("%d %d\n",a,b);
	}
	return 0;
}
**/

/**
stupid topic
int main(){
	int a = 255,b=8,c=34;
	int a1,a2;
	char c1,c2;
	scanf("%d%d",&a1,&a2);
	scanf("%c%c",&c1,&c2);
	printf("%d,%d\n%c%c\n",a1,a2,c1,c2);


	printf("|%x,%o%-3d|\n",a,b,c);
	printf("%f%%\n",1.0/3);
	printf("%f%\n",1.0/3);
	printf("%f",1.0/3);
}
**/

/**
��ʮһ��
int main(){
	srand((unsigned)time(NULL));
    int a = rand()%10,b;
    scanf("%d",&b);
    if(a == b)
    	printf("�����");
    printf("ϵͳ���ɵ�����%d\n",a);
    return 0;
}
**/

/**
��ʮ����
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a*a + b*b > 100){
		printf("%d",(a*a + b*b)/100);
	}else{
	    printf("%d",a + b);
	}
}
**/

/**
��ʮ����
int main(){
	int y,x;
	scanf("%d",&x);
	if(100 > x && x >= 0){
		y = 3*x + 10;
		printf("%d",y);
	}else if(x >=100){
		y = x*x*x - 20;
		printf("%d",y);
	}else{
		printf("error");
	}

}
**/
/**
��ʮ����
int main(){
	int data1, data2;
	char op;
	printf("������������Ҫ����ĵ���ʽ:\n");
	scanf("%d%c%d",&data1,&op,&data2);
	switch(op){
		case '+':printf("%d + %d = %d",data1,data2,data1 + data2);break;
		case '-':printf("%d - %d = %d",data1,data2,data1 - data2);break;
		case '*':printf("%d * %d = %d",data1,data2,data1 * data2);break;
		case '/':printf("%d / %d = %d",data1,data2,data1 / data2);break;
		default :printf("error");
	}
}
**/

/**
��ʮ����
int main(){
	int a;
	scanf("%d",&a);
	if(a % 3 == 0 && a % 5 == 0 && a % 7 == 0){
		printf("�������Ա�3,5,7����");
	}else if(a % 3 == 0 && a % 5 == 0){
		printf("�������Ա�3,5����");
	}else if(a % 5 == 0 && a % 7 == 0){
		printf("�������Ա�5,7����");
	}else if(a % 3 == 0 && a % 7 == 0){
		printf("�������Ա�3,7����");
	}else if(a % 3 == 0){
		printf("�������Ա�3����");
	}else if(a % 5 == 0){
		printf("�������Ա�5����");
	}else if(a % 7 == 0){
		printf("�������Ա�7����");
	}else{
		printf("error");
	}
}
**/

/**
��ʮ����
int main(){
	printf("�������¼��ַ���\n");
	printf("1.������1.71%\n");
	printf("2.  ����1.98%\n");
	printf("3.  һ��2.25%\n");
	printf("4.  ����2.79%\n");
	printf("5.  ����3.33%\n");
	printf("������ѡ��ķ���:");
	int a;
	float b;
	scanf("%d",&a);
	printf("���������Ľ��:");
	scanf("%f",&b);
	switch(a){
		case 1 : printf("����ȡ��%f�Ľ��",b*(1 + 0.0171));break;
		case 2 : printf("����ȡ��%f�Ľ��",b*(1 + 0.0198));break;
		case 3 : printf("����ȡ��%f�Ľ��",b*(1 + 0.0225));break;
		case 4 : printf("����ȡ��%f�Ľ��",b*(1 + 0.0279));break;
		case 5 : printf("����ȡ��%f�Ľ��",b*(1 + 0.0333));break;
	}
}
**/

/**
��ʮ����
int main(){
	int x,y;
	scanf("%d",&x);
	y = x > 0 ? 1 : (x == 0 ? 0 : -1);
	printf("y = %d",y);
}
**/

/**
��ʮ����
int main(){
	long l;
	int num,g,s,b,q,w;
	scanf("%ld",&l);
	g = l % 10;
	s = (l / 10) % 10;
	b = (l / 100) % 10;
	q = (l / 1000) % 10;
	w = l / 10000;
	if(w != 0){
		printf("����λ��\n");
	}else if(q != 0){
		printf("����λ��\n");
	}else if(b != 0){
		printf("����λ��\n");
	}else if(s != 0){
		printf("�Ƕ�λ��\n");
	}else{
		printf("��һλ��\n");
	}

	int end;
	end = g * 10000 + s * 1000 + b * 100 + q * 10 + w;
	printf("���ú�Ľ��Ϊ%d",end);
}
**/

/**
��ʮ����
int main(){
	int i;
	for(i = 200; i >= 0; i--){
		if(i % 7 == 0){
			printf("%d\n",i);
		}
	}
}
**/

/**
��20��
int findMin(int num[10]){
	int i,j=0;
	for(i = 0; i < 10; i++){
		if(num[j] > num[i]){
			num[j] = num[i];
		}
	}
	return num[j];
}

int main(){
	int a[10],i;
	for(i = 0; i < 10; i++){
		scanf("%d",&a[i]);
	}
	printf("��Сֵ��:%d",findMin(a));
}
**/

/**
��21��
int main(){
	int m,n,x = 0,y = 0;
	printf("������m(m<n)");
	scanf("%d",&m);
	printf("������n(m<n)");
	scanf("%d",&n);
	for( ; m <= n; m++){
		if(m % 2 == 0){
			y = y + m;
		}else{
			x = x + m;
		}
	}
	printf("ż����Ϊ:%d,������Ϊ:%d",y,x);
}
**/

/**
��22��
int main(){
	int x = 1,y = 0;
	while(x != 0){
		printf("������x��ֵ\n");
		scanf("%d",&x);
		if(0 < x && x < 100){
			y = 3*x + 10;
			printf("y = %d\n",y);
		}else if(x >= 100){
			y = x*x*x - 20;
			printf("y = %d\n",y);
		}else if(x < 0){
			printf("error");
		}
	}
	printf("TY,BYE!");

}
**/

/**
��23��
int main(){
	int deno = 1,mole = 2;
	int i,num = 1;
	float sum = 0;
	for(i = 1;num <= 20; num++){
		sum = sum + ((float)mole / deno);
		i = mole;
		mole = mole + deno;
		deno = i;
	}
	printf("%f",sum);
}
**/

/**
��24��
int main(){
	float people = 13;
	int i = 0;
	while(people < 20){
		i++;
		people = people * 1.01;
	}
	printf("%d",i);
}
**/

/**
��25��
int main(){
	int i = 7;
	while(1){
		if(i % 2 == 1 && i % 3 == 2 && i % 5 == 4 && i % 6 == 5){
			break;
		}
		i = i + 7;
	}
	printf("%d",i);
}
**/

/**
��26��
int main(){
	float money = 0,averager = 0;
	int num = 2,i = 0;
	while(num <= 100){
		i++;
		money = money + 0.8 * num;
		num = num * 2;
	}
	averager = money / i;
	printf("%f",averager);
}
**/

/**
��27��
int main(){
	int x,y;
	printf("������x,y");
	scanf("%d %d",&x,&y);
	long end = pow(x,y);
	int lt = end % 1000;
	printf("�����λ���ǣ�%d",lt);
}
**/

/**
��28��
int main(){
	float s1[5],s2[5],s3[5],s4[5],s5[5],s6[5];
	float a,b,c,d,e;
	int i;
	for(i = 0;i < 5; i++){
		printf("�������%d�ſ��Գɼ�(������λѧ��)\n",i + 1);
		scanf("%f %f %f %f %f",&s1[i],&s2[i],&s3[i],&s4[i],&s5[i]);
		a += s1[i];
		b += s2[i];
		c += s3[i];
		d += s4[i];
		e += s5[i];
	}

	printf("��1λͬѧ���۳ɼ�Ϊ%f\n",a / 5);
	printf("��2λͬѧ���۳ɼ�Ϊ%f\n",b / 5);
	printf("��3λͬѧ���۳ɼ�Ϊ%f\n",c / 5);
	printf("��4λͬѧ���۳ɼ�Ϊ%f\n",d / 5);
	printf("��5λͬѧ���۳ɼ�Ϊ%f\n",e / 5);
}
**/

/**
��29��
int main(){
	int a,b,c,num;
	for(a = 1; a <= 9; a++){
			for(b = 1; b <= 9; b++){
				for(c = 1; c <= 9; c++){
					num = a*100 + b*10 + c;
					if(num == a*a*a + b*b*b + c*c*c){
						printf("%d\n",num);
					}
			}
		}
	}
}
**/

/**
��30��
int main(){
	int n,i,j;
	long sum = 0,mid = 1;
	printf("������n��ֵ\n");
	scanf("%d",&n);
//	for(i = 1; i <= n; i++){
//		mid = 1;
//		for(j = i; j > 0; j--){
//			mid = mid * j;
//		}
//		sum = sum + mid;
//	}

	for(i = 1; i <= n; i++){
		mid = mid * i;
		sum = sum + mid;
	}
	printf("%ld",sum);
}
**/


/**
��31��
int main(){
	int i;
	long sum = 0,num = 0;
	for(i = 1; i <= 7; i++){
		num = num*10 + i;
		sum = sum + num;
	}
	printf("%d",sum);
}
**/

/**
��32�� �������
int func(int r,int c){
	if(c == 1 || r == c){
		return 1;
	}
	return func(r - 1,c) + func(r - 1,c - 1);
}

int main(){
	int r,c;  //r:�� c:��
	int n = 10;

	for(r = 1; r <= n; r++){
		for(c = 1; c <= n - r; c++){
			printf("   ");
		}
		for(c = 1; c <= r; c++){
			printf("%6d",func(r,c));
		}
		printf("\n");
	}
}
**/



/**
��33��
int main(){
	int a,b,c,d,i=0;
	for(a = 1; a <= 4; a++){
		for(b = 1; b<= 4; b++){
			for(c = 1; c <= 4; c++){
				for(d = 1; d <= 4; d++){
					i++;
					printf("����Ҫ�������Ϊ:%d,��ǰ����Ϊ:%d\n",a*1000 + b*100 + c*10 + d,i);
				}
			}
		}
	}
}
**/



/** 34��ûɶ��˼**/


/**
��35��
int main(){
	int a,b,c,m;
	for(a = 1; a <= 30; a++){
		for(b = 1; b < 30; b++){
			m = a*a + b*b;
			if(sqrt(m) == (int)sqrt(m) && sqrt(m) <= 30){
				c = (int)sqrt(m);
				printf("%3d %3d %3d\n",a,b,c);
			}
		}
	}
}
**/


/**
��36��
int isPrimeNumber(int n){
	int i;
	for(i = 2; i <= (int)sqrt(n); i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;

}

int main(){
	int n,i,sum;
	for(n = 500,i = 0; n > 1 && i < 10; n--){
		if(isPrimeNumber(n) == 1){
			sum = sum + n;
			printf("%d\n",n);
			i++;
		}
	}
	printf("%d",sum);
}
**/


/**
��37��:��°ͺղ���

int isPrimerNum(int n){
	if(n <= 1){
		return 0;
	}
	int i;
	for(i = 2; i <= (int)sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}


int main(){
	int i,j,sum = 0;
	for(i = 6; i < 2000; i = i + 2){
		for(j = 2; j <= (i/2);j++){
				if(isPrimerNum(j) && isPrimerNum(i - j)){
				sum++;
				printf("%3d�ɷֽ�Ϊ��������֮�ͣ�%3d = %3d + %3d\n",i,i,j,i - j);
				break; //�������������һ������ȫ���������ʽ
			}
		}
	}
	printf("����Ϊ:%d",sum);

//	printf("%d",isPrimerNum(66));
}
**/


/**
��38�⣺�ֽ�������
int isPrimerNum(int n){
	if(n <= 1){
		return 0;
	}
	int i;
	for(i = 2; i <= (int)sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int primeFactor(int n){
	if(isPrimerNum(n)){
		printf("%d",n);
		return n;
	}
	int i;
	for(i = 2; i <= n; i++){
		if(n % i == 0 && isPrimerNum(i)){
			printf("%d*",i);
			return primeFactor(n / i);
		}
	}
	return -1;
}

int main(){
	int n;
	scanf("%d",&n);
	primeFactor(n);
}

**/



/**
��39��
int main(){
	int n,i,end = 1;
	scanf("%d",&n);
	for(i = 10; n / i != 0; i = i * 10){
		end++;
	}
	printf("%d",end);
}
**/


/**
��40��
int main(){
	int a[3][3],i,j,sum = 0;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("������[%d]��[%d]��λ���ϵ���\n",i + 1,j + 1);
			scanf("%d",&a[i][j]);
			if(i + j == 2 && a[i][j] % 2 != 0){
				sum = sum + a[i][j];
			}

		}
	}
	printf("%d",sum);


}
**/

/**
��41��
int main(){
	int n,sum = 0,i,max,min,mid,a[10],maxIndex = 0,minIndex = 0;
	float average;
	printf("����Ҫ���뼸������2~10\n");
	scanf("%d",&n);
	printf("��������������Ҫ������\n");
	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}

	average = (float)sum / n;
	printf("ƽ��ֵΪ��%.2f\n",average);

	for(i = 0; i < n / 2; i++){
		mid = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = mid;
	}

	for(i = 0; i < n; i++){
		printf("����������е�����Ϊ��%d\n",a[i]);
	}

	for(i = 0; i < n / 2; i++){
		mid = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = mid;
	}

	for(i = 0; i < n; i++){
		printf("ԭ�������е�����Ϊ��%d\n",a[i]);
	}

	max = a[0];
	min = a[0];
	for(i = 0; i < n; i++){
		if(max < a[i]){
			max = a[i];
			maxIndex = i;
		}

		if(min > a[i]){
			min = a[i];
			minIndex = i;
		}
	}

	printf("���ֵΪ%d,���±�Ϊ%d\n��СֵΪ%d,���±�Ϊ%d\n",max,maxIndex,min,minIndex);

	mid = a[0];
	a[0] = a[minIndex];
	a[minIndex] = mid;

	mid = a[n - 1];
	a[n - 1] = a[maxIndex];
	a[maxIndex] = mid;

	for(i = 0; i < n; i++){
		printf("���������Сֵ�����е�����Ϊ��%d\n",a[i]);
	}
}

**/

/**
��42��
int main(){
	int a[30],i,j = 2,sum = 0;
	float b[6];
	for(i = 0; i < 30; i++){
		a[i] = j;
		sum = sum + a[i];
		if((i + 1) % 5 == 0){
				printf("��ǰa = %d\n",a[i]);
				printf("sum = %d\n",sum);
			b[(i + 1) / 5 - 1] = (float)sum / 5;
			sum = 0;
			printf("b = %f\n",b[(i + 1)/ 5 - 1]);
		}
		j = j + 2;

	}
}
**/

/**
��43��
int main(){
	int a[5][5],i,j;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			a[i][j] = i * 5 + j + 1;
		}
	}

	for(i = 0; i < 5; i++){
		for(j = 0; j <= i; j++){
			printf("%d��%d�е�����Ϊ��%d\n",i + 1,j + 1,a[i][j]);
		}
	}
}
**/


/**
��44��
int main(){
	char a[100],b[20],aEndIndex,bEndIndex,i,j;
	printf("�������ַ���a\n");
	gets(a);
	printf("�������ַ���b\n");
	gets(b);
	printf("������ַ���a\n");
	puts(a);
	for(aEndIndex = 0; a[aEndIndex] != '\0'; aEndIndex++){
	}

	for(bEndIndex = 0; b[bEndIndex] != '\0'; bEndIndex++){
	}
	if(bEndIndex < 5){
		for(i = 0; i < bEndIndex; i++){
			a[aEndIndex] = b[i];
			aEndIndex++;
		}
	}else{
		for(i = 0; i < 5; i++){
			a[aEndIndex] = b[i];
			aEndIndex++;
		}
	}

	printf("�ı����ַ���a\n");
	puts(a);
}
**/

/**
��45��
int main(){
	int a[3][3] = {1,2,3,4,5,6,7,8,9},b[3][3] = {1,1,1,1,1,1,1,1,1},i,j;

	printf("ת��ǰb����Ϊ��\n");
		for(i = 0; i < 3; i++){
			for(j = 0; j < 3; j++){
				printf("%3d",b[i][j]);
		}
		printf("\n");
	}



	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if(i == 0){
				b[j][2] = a[i][j];
			}
			if(i == 2){
				b[j][0] = a[i][j];
			}
		}
	}


	printf("\nת����b����Ϊ��\n");
		for(i = 0; i < 3; i++){
			for(j = 0; j < 3; j++){
				printf("%3d",b[i][j]);
		}
		printf("\n");
	}



}

**/


/**
��46��
void del(int a[],int n){
	int i,j,flag = 0;
	for(i = 0; i < 10; i++){
		if(a[i] == n){
			flag++;
			for(j = i; j < 10 - flag; j++){

				a[j] = a[j + 1];
				printf("a[%d] = %3d\n",j,a[j]);
				printf("\n");
			}
			i--;
		}
	}

	for(i = 10 - flag; i < 10; i++){
		a[i] =  -1 ;
	}
}

int main(){
	int i,j,a[10],n;
	for(i = 0; i < 10; i++){
		printf("������a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("����������ɾ������\n");
	scanf("%d",&n);
	del(a,n);
	for(i = 0; i < 10; i++){
		printf("a[%d] = %3d\n",i,a[i]);
	}
}
**/


/**
��47��
int main(){
	srand((int)time(NULL));
	int a[4][5],i,j,mid;
	printf("�任ǰ�����飺\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 5; j++){
			a[i][j] = rand() % 30 + 21;
			printf("a[%d][%d] = %d\t",i+1,j+1,a[i][j]);
		}
		printf("\n");
	}

	for(i = 0; i < 4; i++){
		mid = a[i][1];
		a[i][1] = a[i][3];
		a[i][3] = mid;
	}


	printf("�任������飺\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 5; j++){
			printf("a[%d][%d] = %d\t",i+1,j+1,a[i][j]);
		}
		printf("\n");
	}
}
**/


/**
��48��
����һ����������
int main(){
	int a[10] = {1,2,3,4,5,6,7,9,10};
	int i,j,n;

	printf("����ǰ�����飺\n");
	for(i = 0; i < 9; i++){
			printf("a[%d] = %d\n",i+1,a[i]);
		}



	printf("����������Ҫ���������\n");
	scanf("%d",&n);
	for(i = 0; i < 10; i++){
		if(a[i] >= n){
			break;
		}
	}

	for(j = 9; j > i; j--){
		a[j] = a[j - 1];
	}
	a[i] = n;

	printf("���������飺\n");
	for(i = 0; i < 10; i++){
			printf("a[%d] = %d\n",i+1,a[i]);
		}

}
**/

/**
��49��
һ�ּ����㷨
int main(){
	char c[20];
	printf("������һ���ַ���\n");
	gets(c);
	int i;
	for(i = 0; i < 20; i++){
		if((i + 1) % 2 == 0 && c[i] != '\0'){
			if((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z')){
				if(c[i] == 'A' || c[i] == 'a'){
					c[i] = c[i] + 26 - 1;
				}else{
					c[i] = c[i] - 1;
				}
			}
		}else if((i + 1) % 2 != 0 && c[i] != '\0'){
			if((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z')){
				if(c[i] == 'Z' || c[i] == 'z'){
					c[i] = c[i] - 26 + 1;
				}else{
					c[i] = c[i] + 1;
				}
			}
		}
	}

	puts(c);
}
**/


/**
��50��
ƽ����������
int main(){
	int n;
	printf("������һ����\n");
	scanf("%d",&n);
	int a[n][n];
	int i,j,val = 1;
	for(i = 0; i < ceil((float)n / 2); i++){ // nΪż����תn/2Ȧ ��nΪ������תn/2+ 1Ȧ ��i����Ȧ��

									//������n = 4Ϊ��
		for(j = i; j < n - i; j++){  //�����i+1Ȧ��һ������ �����������Ҹ�4��λ�ø�ֵ
			a[i][j] = val;
			val++;
		}
		for(j = i + 1; j < n - i; j++){  //�����i+1Ȧ��һ������ �����������¸�3��λ�ø�ֵ
			a[j][n - i - 1] = val;
			val++;
		}
		for(j = n - i - 2; j > i; j--){  //�����i+1Ȧ�ڶ������� �������������2��λ�ø�ֵ
			a[n - 1 - i][j] = val;
			val++;
		}
		for(j = n - i - 1; j > i; j--){  //�����i+1Ȧ�ڶ������� �����������ϸ�3��λ�ø�ֵ
			a[j][i] = val;
			val++;
		}
	}




	printf("ƽ���������飺\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

}
**/

/**
��51�� Сдת��д
int main(){
	char c[100];
	int i;
	gets(c);
	for(i = 0; c[i] != '\0'; i++){
		if(c[i] >= 'a' && c[i] <= 'z'){
			c[i] = c[i] - 32;
		}
	}
	printf("\n");
	puts(c);
}
**/


/**
�ַ�������
int main(){
	int i,len;
	char c[80],mid;
	gets(c);
	len = strlen(c);
	for(i = 0; i < len/2; i++){
		mid = c[i];
		c[i] = c[len - 1 - i];
		c[len - 1 - i] = mid;
	}

	puts(c);
}
**/

/**
��53��Ѱ���ַ�
int main(){
	char c[80],ch;
	int i,len,num = 0;
	printf("������һ���ַ���\n");
	gets(c);
	printf("������һ��ҪѰ�ҵ��ַ�\n");
	//scanf("%c",&ch);
	ch = getchar();
	len = strlen(c);
	for(i = 0; i < len; i++){
		if(c[i] == ch){
			num++;
		}
	}

	printf("���ַ���������ַ�������%d��",num);
}
**/

/**
��54��
����һ��Ӣ���ַ�����ͳ�Ƶ��ʸ���
int main(){
	char s[100];
	int i,n = 0;
	gets(s);
	for(i = 0; s[i] != '\0'; i++){
		if(s[i] == ' '){
			n++;
		}
	}

	printf("��������ַ�������%d������",n + 1);
}
**/


/**
��55��
��ָ�뷽��,��дһ������,��������Խ���Ԫ��֮��Sum��
int main(){
	int a[3][3],i,j,sum = 0,*p = *a;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("a[%d][%d]=",i + 1, j + 1);
			scanf("%d",&a[i][j]);
			if(i == j){
				sum = sum + *(p + i*3 + j);
			}
		}
	}

	printf("�þ������Խ���Ԫ��֮��Ϊ%d\n",sum);
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
**/


/**
��56�⣬ָ��ʵ������
int main(){
	int a[15],i,*p = a,*q,mid;
	for(i = 0; i < 15; i++){
		printf("�������%d������",i+1);
		scanf("%d",&a[i]);
	}
	q = &a[14];
	for(i = 0; i < 7; i++){
		mid = *p;
		*p = *q;
		*q = mid;
		p++;
		q--;
	}

	p = a;

	for(i = 0; i < 15; i++){
		printf("%3d",*(p + i));
	}
}
**/

/**
��57����ָ���ȡ����������Сֵ�Լ��±�
int main(){
	int a[3][6],max,min,i,j,rMaxIndex,cMaxIndex,rMinIndex,cMinIndex,*p = *a;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 6; j++){
			printf("a[%d][%d]=",i + 1, j + 1);
			scanf("%d",&a[i][j]);
			if(*p > max){
				max = *p;
				rMaxIndex = i;
				cMaxIndex = j;
			}

			if(*p < min){
				min = *p;
				rMinIndex = i;
				cMinIndex = j;
			}
			p++;
		}
	}

		for(i = 0; i < 3; i++){
			for(j = 0; j < 6; j++){
				printf("%3d",a[i][j]);
			}
		printf("\n");
	}

	printf("MAX = %d,MIN = %d\n",max,min);
	printf("���ֵ�±�Ϊ%d %d\n",rMaxIndex,cMaxIndex);
	printf("��Сֵ�±�Ϊ%d %d\n",rMinIndex,cMinIndex);
}
**/

/**
��58��
int main(){
	char s[100];
	int i,lowNum = 0,upNum = 0,other = 0;
	gets(s);
	for(i = 0; s[i] != '\0'; i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			lowNum++;
		}else if(s[i] >= 'A' && s[i] <= 'Z'){
			upNum++;
		}else{
			other++;
		}
	}

	printf("Сд��ĸ��%d��\n��д��ĸ��%d��\n������ĸ��%d��",lowNum,upNum,other);
}
**/


/**
��59��
int main(){
	char a[100] = {"zhe ti mu chu de shi zhen de sha bi"};
	char s[100];
	int i;
	strcpy(s,a);
	char *p = &s;
	while(*p != '\0'){
		printf("%3c",*p);
		p++;
	}
	return 0;
}
**/

/**
��60��
void *findDay(int n){
	switch(n){
		case 1: printf("����һ\n");break;
		case 2: printf("���ڶ�\n");break;
		case 3: printf("������\n");break;
		case 4: printf("������\n");break;
		case 5: printf("������\n");break;
		case 6: printf("������\n");break;
		case 7: printf("������\n");break;
		default : printf("error\n");break;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	findDay(n);
}
**/


/**
��61��
void reverse(char s[]){
	char *p = s,mid;
	int i,length = strlen(s);
	for(i = 0; i < length / 2; i++,p++){
		mid = *p;
		*p = *(p + (length - 1 - i));
		*(p + (length - 1 - i)) = mid;
	}
}

int main(){
	char s[100];
	printf("������һ���ַ���\n");
	gets(s);
	reverse(s);
	puts(s);
}
**/

/**
��62��
int main(){
	struct worker{
		long number;
		char name[10];
		char sex[10];
		int birth_year;
		char job[10];
	}work[10];

	int i,maxOld,minOld,maxIndex,minIndex;
	for(i = 0; i < 10; i++){
		printf("�������%d��ְ����Ϣ\n",i + 1);
		scanf("%ld %s %s %d %s",&work[i].number,work[i].name,work[i].sex,&work[i].birth_year,work[i].job);
		if(i == 0){
			maxOld = work[i].birth_year;
			maxIndex = i;
			minOld = work[i].birth_year;
			minIndex = i;
		}
		if(maxOld > work[i].birth_year){
			maxOld = work[i].birth_year;
			maxIndex = i;
		}
		if(minOld < work[i].birth_year){
			minOld = work[i].birth_year;
			minIndex = i;
		}
	}

	printf("�����������Ϣ��%ld %s %s %d %s\n",work[maxIndex].number,work[maxIndex].name,work[maxIndex].sex,work[maxIndex].birth_year,work[maxIndex].job);
	printf("������С����Ϣ��%ld %s %s %d %s",work[minIndex].number,work[minIndex].name,work[minIndex].sex,work[minIndex].birth_year,work[minIndex].job);


}
**/


/**
��64��
int main(){
	struct students{
		long num;
		char name[10];
		int midGrade;
		int finGrade;
		int aver;
	}student[3],*p = student;

	struct students temp;

	int i,j;
	for(i = 0; i < 3; i++){
		printf("�������%d��ѧ������\n",i + 1);
		scanf("%ld %s %d %d",&p->num,p->name,&p->midGrade,&p->finGrade);
		p -> aver = (p -> midGrade + p -> finGrade) / 2;
		p++;
	}


	for(p = student; p < student + 3; p++){
		printf("ѧ��:%3d ����:%3s ���гɼ�:%3d ��ĩ�ɼ�:%3d ƽ���ɼ�:%3d\n",p->num,p->name,p->midGrade,p->finGrade,p->aver);
	}

	//����
	for(i = 0; i < 3; i++){
		for(j = i; j < 3; j++){
			if(student[i].aver < student[j].aver){
				temp = student[i];
				student[i] = student[j];
				student[j] = temp;
			}
		}
	}

	printf("�����ĳɼ���\n");
	for(p = student; p < student + 3; p++){
		printf("ѧ��:%3d ����:%3s ���гɼ�:%3d ��ĩ�ɼ�:%3d ƽ���ɼ�:%3d\n",p->num,p->name,p->midGrade,p->finGrade,p->aver);
	}
}
**/

/**
��64��ûɶ��˼
**/


/**
��65��
void fun(int min,int max){
	int flag = 0;
	while(min < max){
		if(min % 4 == 1 && min % 5 == 3 && min % 7 == 4){
			printf("%3d\t",min);
			flag++;

			if(flag % 6 == 0){
			printf("\n");
			}
		}
		min++;

	}
}

int main(){
	fun(200,5000);
}
**/

/*
 * -----------------------------------
����ʹ��dev c++����������
����ʹ��clion
*-----------------------------------------
*/



/**
 * ����ʮ����
 * @param n
 * @return

int isPrimeNumber(int n){
    if(n <= 1){
        return 0;
    }

    for(int i = 2; i < (int)sqrt((double)n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n = 1;
    printf("%d",isPrimeNumber(2));
}
*/

/**
 * ��67��
 * @param n
 * @param m
 * @return

int fun(int n,int m){
    return abs(n - m);
}

int main(){
    int n = 1,m = 2;
    printf("%d", fun(n,m));
}
 */

/**
 * ��68��
 * @param s

void delString(char s[]){
    int i,j;
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] >= '0' && s[i] <= '9'){
            for(j = i; s[j] != '\0'; j++){
                s[j] = s[j + 1];
            }
            s[j] = '\0';
            i--;
        }
    }
}


int main(){
    char s[100];
    printf("������һ���ַ���\n");
    gets(s);
    delString(s);
    puts(s);
}
 */

/**
 * ��69��
 * @param n
 * @return

//���ݡ�ˮ�ɻ������Ķ��壬�ж�һ�����Ƿ�Ϊ��ˮ�ɻ�������
// ����Ҫ����Ҫ�Ѹ�������λ���ĸ�λ��ʮλ����λ�ֱ��֣�
// �����������ͣ������������������λ����ȣ� ��λ��Ϊ��ˮ�ɻ���������֮�����ǡ�
int isDaffodil(int n){
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;
    if(a*a*a + b*b*b + c*c*c == n){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int i;
    for(i = 100; i < 1000; i++){
        if(isDaffodil(i)){
            printf("%d\n",i);
        }
    }
}
**/



/**
 * ��70��
 * @param n
 * @param x
 * @return

float p(int n,float x){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return x;
    }
    if(n > 1){
        return (2*n - 1)*x*p(n - 1,x) - (n - 1)*p(n - 2,x) / n;
    }
}

int main(){
    float x;
    int n;
    printf("������x��ֵ\n");
    scanf("%f",&x);
    printf("������n��ֵ\n");
    scanf("%d",&n);
    printf("p(n,x) = %f",p(n,x));
}
 */

/**
 * ��71��
 * @param a
void sort(int a[10]){
    for(int i = 0; i < 10; i++){
        for(int j = i; j < 10; j++){
            if(a[i] < a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(){
    int a[10];
    printf("������ʮ����\n");
    for(int i = 0; i < 10; i++){
        printf("��%d����=",i + 1);
        scanf("%d",&a[i]);
    }
    sort(a);
    for(int i = 0; i < 10; i++){
        printf("%3d",a[i]);
    }
}
*/

/**
 * ��72��
 * @return

int main(){
   int n;
   char name[100][100],*p[100],*temp;
    printf("�������м�λ����\n");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        printf("�������%dλ���ѵ�����\n",i + 1);
        scanf("%s",name[i]);
        p[i] = name[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(strcmp(name[i],name[j]) < 0){
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    printf("�����\n");
    for(int i = 0; i < n; i++){
        printf("%s\n",p[i]);
    }
}
*/


/**
 * ��73��
 * @param n
 * @param m

//��ַ���ݷ�ʽ
void fun1(int *n,int *m){
    int temp;
    temp = *n;
    *n = *m;
    *m = temp;
}

//ȫ�ֱ����ķ�ʽ
int x,y;
void fun2(){
    int temp = x;
    x = y;
    y = temp;
}


int main(){
    int n,m;
    printf("����n,m\n");
    scanf("%d,%d",&n,&m);
    fun1(&n,&m);
    printf("��һ�ν������n = %d,m = %d\n",n,m);

    printf("����x,y\n");
    scanf("%d,%d",&x,&y);
    fun2();
    printf("�ڶ��ν������x = %d,y = %d",x,y);

}
 */

/**
 * ��74��
 * @param c
 * @return

int findMax(int c[]){
    int min;
    if(sizeof(c) / sizeof(c[0]) > 0){
        min = c[0];
    }else{
        return -1;
    }
    for(int i = 0; i < sizeof(c) / sizeof(c[0]); i++){
        if(c[i] < min){
            min = c[i];
        }
    }
    return min;
}

int main(){
    int M,N;
    printf("���������������д�С\n");
    scanf("%d %d",&M,&N);
    int a[M][N],c[M]; //�������һ�зŵ�M,N������һ�еĵط���ʹa�Ĵ�С��ԶΪ0����Ϊ����ֱ�ӳ�ʼ������M,N�ı��a������ı�
                        //wssb
    for(int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("a[%d][%d]=",i + 1,j + 1);
            scanf("%d",&a[i][j]);
        }
    }


    for(int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }


    for(int j = 0; j < N; j++){
        for (int i = 0; i < M; i++) {
            c[i] = a[i][j];
        }
        printf("��%d�е���СֵΪ:%d\n",j + 1,findMax(c));
    }
}

 */




//��75��ɡ����



/**
 * ��76��
 * @param n
 * @return

int Fibonacci(int n){
    if(n < 1){
        return 0;
    }else if (n == 1 || n == 2){
        return 1;
    }else if(n > 2){
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

int main(){
    int n;
    printf("��Ҫǰ�������쳲���������\n");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        printf("%d\n",Fibonacci(i));
    }
}
 */


/**
 * ��77��
 * @param n
 * @return

int sum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    return sum;
}


int main(){
    int n;
    scanf("%d",&n);
    printf("%d", sum(n));
}
**/


//�������I/O�ⲻд�ˣ���������еĻ���Ը��֮Ϊ��̱������
