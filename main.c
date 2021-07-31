#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
/**
第一题：
int main() {
	float x,y,z,sum,multiply,average;
	printf("请输入三个实数：");
	scanf("%f %f %f",&x,&y,&z);
	sum = x+y+z;
	multiply = x*y*z;
	average = sum/3;
	printf("sum = %f, multiply = %f, average = %f",sum,multiply,average);
	return 0;
}
**/

/**
第二题
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
第三题：
int main(){
	int a;
	char c;
	scanf("%d",&a);
	c = a + 48;
	putchar(c);
}
**/

/**
第四题
#define PI 3.14
int main(){
	int r;
	scanf("%d",&r);
	printf("表面积%f",4*PI*r*r);
	printf("体积为%f",(4*PI*r*r*r)/3);
}
**/

/**
第五题
int main(){
	int a,b;
	long l;
	char c1,c2[10];
//这里也可以使用puts，gets方法
	gets(c2);
	puts(c2);

	float f;
	scanf("%d %d %ld %c %f %s",&a,&b,&l,&c1,&f,&c2);
	printf("%d %d %ld %c %f %s",a,b,l,c1,f,c2);
}
**/

/**
第六题
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
第七题
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
第八题
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
第九题
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


//  方法不好
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
第10题
注意C语言中只有这种参数为指针的情况才可以改变主函数的变量值
 int &x,int &y不合法
 int x,int y 不改变主函数的变量值
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
第十一题
int main(){
	srand((unsigned)time(NULL));
    int a = rand()%10,b;
    scanf("%d",&b);
    if(a == b)
    	printf("答对了");
    printf("系统生成的数是%d\n",a);
    return 0;
}
**/

/**
第十二题
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
第十三题
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
第十四题
int main(){
	int data1, data2;
	char op;
	printf("请输入两个需要运算的的算式:\n");
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
第十五题
int main(){
	int a;
	scanf("%d",&a);
	if(a % 3 == 0 && a % 5 == 0 && a % 7 == 0){
		printf("此数可以被3,5,7整除");
	}else if(a % 3 == 0 && a % 5 == 0){
		printf("此数可以被3,5整除");
	}else if(a % 5 == 0 && a % 7 == 0){
		printf("此数可以被5,7整除");
	}else if(a % 3 == 0 && a % 7 == 0){
		printf("此数可以被3,7整除");
	}else if(a % 3 == 0){
		printf("此数可以被3整除");
	}else if(a % 5 == 0){
		printf("此数可以被5整除");
	}else if(a % 7 == 0){
		printf("此数可以被7整除");
	}else{
		printf("error");
	}
}
**/

/**
第十六题
int main(){
	printf("现有如下几种方案\n");
	printf("1.三个月1.71%\n");
	printf("2.  半年1.98%\n");
	printf("3.  一年2.25%\n");
	printf("4.  两年2.79%\n");
	printf("5.  三年3.33%\n");
	printf("请输入选择的方案:");
	int a;
	float b;
	scanf("%d",&a);
	printf("请输入存入的金额:");
	scanf("%f",&b);
	switch(a){
		case 1 : printf("可以取出%f的金额",b*(1 + 0.0171));break;
		case 2 : printf("可以取出%f的金额",b*(1 + 0.0198));break;
		case 3 : printf("可以取出%f的金额",b*(1 + 0.0225));break;
		case 4 : printf("可以取出%f的金额",b*(1 + 0.0279));break;
		case 5 : printf("可以取出%f的金额",b*(1 + 0.0333));break;
	}
}
**/

/**
第十七题
int main(){
	int x,y;
	scanf("%d",&x);
	y = x > 0 ? 1 : (x == 0 ? 0 : -1);
	printf("y = %d",y);
}
**/

/**
第十八题
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
		printf("是五位数\n");
	}else if(q != 0){
		printf("是四位数\n");
	}else if(b != 0){
		printf("是三位数\n");
	}else if(s != 0){
		printf("是二位数\n");
	}else{
		printf("是一位数\n");
	}

	int end;
	end = g * 10000 + s * 1000 + b * 100 + q * 10 + w;
	printf("倒置后的结果为%d",end);
}
**/

/**
第十九题
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
第20题
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
	printf("最小值是:%d",findMin(a));
}
**/

/**
第21题
int main(){
	int m,n,x = 0,y = 0;
	printf("请输入m(m<n)");
	scanf("%d",&m);
	printf("请输入n(m<n)");
	scanf("%d",&n);
	for( ; m <= n; m++){
		if(m % 2 == 0){
			y = y + m;
		}else{
			x = x + m;
		}
	}
	printf("偶数和为:%d,奇数和为:%d",y,x);
}
**/

/**
第22题
int main(){
	int x = 1,y = 0;
	while(x != 0){
		printf("请输入x的值\n");
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
第23题
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
第24题
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
第25题
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
第26题
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
第27题
int main(){
	int x,y;
	printf("请输入x,y");
	scanf("%d %d",&x,&y);
	long end = pow(x,y);
	int lt = end % 1000;
	printf("最后三位数是：%d",lt);
}
**/

/**
第28题
int main(){
	float s1[5],s2[5],s3[5],s4[5],s5[5],s6[5];
	float a,b,c,d,e;
	int i;
	for(i = 0;i < 5; i++){
		printf("请输入第%d门考试成绩(共有五位学生)\n",i + 1);
		scanf("%f %f %f %f %f",&s1[i],&s2[i],&s3[i],&s4[i],&s5[i]);
		a += s1[i];
		b += s2[i];
		c += s3[i];
		d += s4[i];
		e += s5[i];
	}

	printf("第1位同学评价成绩为%f\n",a / 5);
	printf("第2位同学评价成绩为%f\n",b / 5);
	printf("第3位同学评价成绩为%f\n",c / 5);
	printf("第4位同学评价成绩为%f\n",d / 5);
	printf("第5位同学评价成绩为%f\n",e / 5);
}
**/

/**
第29题
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
第30题
int main(){
	int n,i,j;
	long sum = 0,mid = 1;
	printf("请输入n的值\n");
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
第31题
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
第32题 杨辉三角
int func(int r,int c){
	if(c == 1 || r == c){
		return 1;
	}
	return func(r - 1,c) + func(r - 1,c - 1);
}

int main(){
	int r,c;  //r:行 c:列
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
第33题
int main(){
	int a,b,c,d,i=0;
	for(a = 1; a <= 4; a++){
		for(b = 1; b<= 4; b++){
			for(c = 1; c <= 4; c++){
				for(d = 1; d <= 4; d++){
					i++;
					printf("符合要求的数字为:%d,当前个数为:%d\n",a*1000 + b*100 + c*10 + d,i);
				}
			}
		}
	}
}
**/



/** 34题没啥意思**/


/**
第35题
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
第36题
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
第37题:哥德巴赫猜想

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
				printf("%3d可分解为两个素数之和：%3d = %3d + %3d\n",i,i,j,i - j);
				break; //不加这个就是找一个数的全部素数组成式
			}
		}
	}
	printf("总数为:%d",sum);

//	printf("%d",isPrimerNum(66));
}
**/


/**
第38题：分解质因数
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
第39题
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
第40题
int main(){
	int a[3][3],i,j,sum = 0;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("请输入[%d]行[%d]列位置上的数\n",i + 1,j + 1);
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
第41题
int main(){
	int n,sum = 0,i,max,min,mid,a[10],maxIndex = 0,minIndex = 0;
	float average;
	printf("你想要输入几个数？2~10\n");
	scanf("%d",&n);
	printf("请依次输入你想要的数字\n");
	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}

	average = (float)sum / n;
	printf("平均值为：%.2f\n",average);

	for(i = 0; i < n / 2; i++){
		mid = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = mid;
	}

	for(i = 0; i < n; i++){
		printf("逆序处理后所有的数字为：%d\n",a[i]);
	}

	for(i = 0; i < n / 2; i++){
		mid = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = mid;
	}

	for(i = 0; i < n; i++){
		printf("原来的所有的数字为：%d\n",a[i]);
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

	printf("最大值为%d,其下标为%d\n最小值为%d,其下标为%d\n",max,maxIndex,min,minIndex);

	mid = a[0];
	a[0] = a[minIndex];
	a[minIndex] = mid;

	mid = a[n - 1];
	a[n - 1] = a[maxIndex];
	a[maxIndex] = mid;

	for(i = 0; i < n; i++){
		printf("交换最大最小值后所有的数字为：%d\n",a[i]);
	}
}

**/

/**
第42题
int main(){
	int a[30],i,j = 2,sum = 0;
	float b[6];
	for(i = 0; i < 30; i++){
		a[i] = j;
		sum = sum + a[i];
		if((i + 1) % 5 == 0){
				printf("当前a = %d\n",a[i]);
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
第43题
int main(){
	int a[5][5],i,j;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			a[i][j] = i * 5 + j + 1;
		}
	}

	for(i = 0; i < 5; i++){
		for(j = 0; j <= i; j++){
			printf("%d行%d列的数字为：%d\n",i + 1,j + 1,a[i][j]);
		}
	}
}
**/


/**
第44题
int main(){
	char a[100],b[20],aEndIndex,bEndIndex,i,j;
	printf("请输入字符串a\n");
	gets(a);
	printf("请输入字符串b\n");
	gets(b);
	printf("输入的字符串a\n");
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

	printf("改变后的字符串a\n");
	puts(a);
}
**/

/**
第45题
int main(){
	int a[3][3] = {1,2,3,4,5,6,7,8,9},b[3][3] = {1,1,1,1,1,1,1,1,1},i,j;

	printf("转换前b数组为：\n");
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


	printf("\n转换后b数组为：\n");
		for(i = 0; i < 3; i++){
			for(j = 0; j < 3; j++){
				printf("%3d",b[i][j]);
		}
		printf("\n");
	}



}

**/


/**
第46题
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
		printf("请输入a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("请输入你想删除的数\n");
	scanf("%d",&n);
	del(a,n);
	for(i = 0; i < 10; i++){
		printf("a[%d] = %3d\n",i,a[i]);
	}
}
**/


/**
第47题
int main(){
	srand((int)time(NULL));
	int a[4][5],i,j,mid;
	printf("变换前的数组：\n");
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


	printf("变换后的数组：\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 5; j++){
			printf("a[%d][%d] = %d\t",i+1,j+1,a[i][j]);
		}
		printf("\n");
	}
}
**/


/**
第48题
插入一个数到数组
int main(){
	int a[10] = {1,2,3,4,5,6,7,9,10};
	int i,j,n;

	printf("插入前的数组：\n");
	for(i = 0; i < 9; i++){
			printf("a[%d] = %d\n",i+1,a[i]);
		}



	printf("请输入你想要插入的数字\n");
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

	printf("插入后的数组：\n");
	for(i = 0; i < 10; i++){
			printf("a[%d] = %d\n",i+1,a[i]);
		}

}
**/

/**
第49题
一种加密算法
int main(){
	char c[20];
	printf("请输入一个字符串\n");
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
第50题
平方螺旋数组
int main(){
	int n;
	printf("请输入一个数\n");
	scanf("%d",&n);
	int a[n][n];
	int i,j,val = 1;
	for(i = 0; i < ceil((float)n / 2); i++){ // n为偶数旋转n/2圈 ，n为奇数旋转n/2+ 1圈 ，i代表圈数

									//以下以n = 4为例
		for(j = i; j < n - i; j++){  //处理第i+1圈第一行数据 ，正方向向右给4个位置赋值
			a[i][j] = val;
			val++;
		}
		for(j = i + 1; j < n - i; j++){  //处理第i+1圈第一列数据 ，正方向向下给3个位置赋值
			a[j][n - i - 1] = val;
			val++;
		}
		for(j = n - i - 2; j > i; j--){  //处理第i+1圈第二行数据 ，正方向向左给2个位置赋值
			a[n - 1 - i][j] = val;
			val++;
		}
		for(j = n - i - 1; j > i; j--){  //处理第i+1圈第二列数据 ，正方向向上给3个位置赋值
			a[j][i] = val;
			val++;
		}
	}




	printf("平方螺旋数组：\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

}
**/

/**
第51题 小写转大写
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
字符串逆序
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
第53题寻找字符
int main(){
	char c[80],ch;
	int i,len,num = 0;
	printf("请输入一个字符串\n");
	gets(c);
	printf("请输入一个要寻找的字符\n");
	//scanf("%c",&ch);
	ch = getchar();
	len = strlen(c);
	for(i = 0; i < len; i++){
		if(c[i] == ch){
			num++;
		}
	}

	printf("该字符在输入的字符窜中有%d个",num);
}
**/

/**
第54题
输入一行英文字符串，统计单词个数
int main(){
	char s[100];
	int i,n = 0;
	gets(s);
	for(i = 0; s[i] != '\0'; i++){
		if(s[i] == ' '){
			n++;
		}
	}

	printf("你输入的字符串中有%d个单词",n + 1);
}
**/


/**
第55题
用指针方法,编写一个函数,求矩阵主对角线元素之和Sum。
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

	printf("该矩阵主对角线元素之和为%d\n",sum);
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
**/


/**
第56题，指针实现逆序
int main(){
	int a[15],i,*p = a,*q,mid;
	for(i = 0; i < 15; i++){
		printf("请输入第%d个数字",i+1);
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
第57题用指针获取数组的最大最小值以及下标
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
	printf("最大值下标为%d %d\n",rMaxIndex,cMaxIndex);
	printf("最小值下标为%d %d\n",rMinIndex,cMinIndex);
}
**/

/**
第58题
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

	printf("小写字母有%d个\n大写字母有%d个\n其它字母有%d个",lowNum,upNum,other);
}
**/


/**
第59题
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
第60题
void *findDay(int n){
	switch(n){
		case 1: printf("星期一\n");break;
		case 2: printf("星期二\n");break;
		case 3: printf("星期三\n");break;
		case 4: printf("星期四\n");break;
		case 5: printf("星期五\n");break;
		case 6: printf("星期六\n");break;
		case 7: printf("星期天\n");break;
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
第61题
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
	printf("请输入一个字符串\n");
	gets(s);
	reverse(s);
	puts(s);
}
**/

/**
第62题
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
		printf("请输入第%d个职工信息\n",i + 1);
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

	printf("年龄最大者信息：%ld %s %s %d %s\n",work[maxIndex].number,work[maxIndex].name,work[maxIndex].sex,work[maxIndex].birth_year,work[maxIndex].job);
	printf("年龄最小者信息：%ld %s %s %d %s",work[minIndex].number,work[minIndex].name,work[minIndex].sex,work[minIndex].birth_year,work[minIndex].job);


}
**/


/**
第64题
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
		printf("请输入第%d个学生数据\n",i + 1);
		scanf("%ld %s %d %d",&p->num,p->name,&p->midGrade,&p->finGrade);
		p -> aver = (p -> midGrade + p -> finGrade) / 2;
		p++;
	}


	for(p = student; p < student + 3; p++){
		printf("学号:%3d 姓名:%3s 期中成绩:%3d 期末成绩:%3d 平均成绩:%3d\n",p->num,p->name,p->midGrade,p->finGrade,p->aver);
	}

	//排序
	for(i = 0; i < 3; i++){
		for(j = i; j < 3; j++){
			if(student[i].aver < student[j].aver){
				temp = student[i];
				student[i] = student[j];
				student[j] = temp;
			}
		}
	}

	printf("排序后的成绩表\n");
	for(p = student; p < student + 3; p++){
		printf("学号:%3d 姓名:%3s 期中成绩:%3d 期末成绩:%3d 平均成绩:%3d\n",p->num,p->name,p->midGrade,p->finGrade,p->aver);
	}
}
**/

/**
第64题没啥意思
**/


/**
第65题
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
以上使用dev c++给我用吐了
以下使用clion
*-----------------------------------------
*/



/**
 * 第六十六题
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
 * 第67题
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
 * 第68题
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
    printf("请输入一个字符串\n");
    gets(s);
    delString(s);
    puts(s);
}
 */

/**
 * 第69题
 * @param n
 * @return

//根据“水仙花数”的定义，判断一个数是否为“水仙花数”，
// 最重要的是要把给出的三位数的个位、十位、百位分别拆分，
// 并求其立方和，若立方和与给出的三位数相等， 三位数为“水仙花数”，反之，则不是。
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
 * 第70题
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
    printf("请输入x的值\n");
    scanf("%f",&x);
    printf("请输入n的值\n");
    scanf("%d",&n);
    printf("p(n,x) = %f",p(n,x));
}
 */

/**
 * 第71题
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
    printf("请输入十个数\n");
    for(int i = 0; i < 10; i++){
        printf("第%d个数=",i + 1);
        scanf("%d",&a[i]);
    }
    sort(a);
    for(int i = 0; i < 10; i++){
        printf("%3d",a[i]);
    }
}
*/

/**
 * 第72题
 * @return

int main(){
   int n;
   char name[100][100],*p[100],*temp;
    printf("请输入有几位室友\n");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        printf("请输入第%d位室友的姓名\n",i + 1);
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

    printf("排序后\n");
    for(int i = 0; i < n; i++){
        printf("%s\n",p[i]);
    }
}
*/


/**
 * 第73题
 * @param n
 * @param m

//地址传递方式
void fun1(int *n,int *m){
    int temp;
    temp = *n;
    *n = *m;
    *m = temp;
}

//全局变量的方式
int x,y;
void fun2(){
    int temp = x;
    x = y;
    y = temp;
}


int main(){
    int n,m;
    printf("输入n,m\n");
    scanf("%d,%d",&n,&m);
    fun1(&n,&m);
    printf("第一次交换后的n = %d,m = %d\n",n,m);

    printf("输入x,y\n");
    scanf("%d,%d",&x,&y);
    fun2();
    printf("第二次交换后的x = %d,y = %d",x,y);

}
 */

/**
 * 第74题
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
    printf("请输入矩阵的行与列大小\n");
    scanf("%d %d",&M,&N);
    int a[M][N],c[M]; //如果把这一行放到M,N定义那一行的地方会使a的大小永远为0，因为它是直接初始化而且M,N改变后a不随其改变
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
        printf("第%d列的最小值为:%d\n",j + 1,findMax(c));
    }
}

 */




//第75题伞兵题



/**
 * 第76题
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
    printf("需要前多少项的斐波那契数列\n");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        printf("%d\n",Fibonacci(i));
    }
}
 */


/**
 * 第77题
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


//最后两道I/O题不写了，如果考试有的话我愿称之为脑瘫出题人
