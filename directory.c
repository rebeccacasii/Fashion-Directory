#include <stdio.h>
#include <stdlib.h>


int intro()
{
	int choice1;
		do
		{
			printf("\t\tWelcome!\n\t\tWhat would you like to do?\n");
			printf("\t\t(1)Find your aesthetic\n");
			printf("\t\t(2)Find specific items\n");
			scanf("%d",&choice1);

		}while(choice1 < 1 || choice1 >2);

		return choice1;
}


int whatitems()
{
	int choice2;
		do
		{
		printf("\t\tWhat item are you looking for?\n");
		printf("\t\t(1)Shoes\n");
		printf("\t\t(2)Tops\n");
		printf("\t\t(3)Dresses\n");
		printf("\t\t(4)Pants\n");
		printf("\t\t(5)Jeans\n");
		scanf("%d", &choice2);
	}while(choice2 < 1 || choice2 >5);

		return choice2;
}

int shoes()
{
	int chs;
	do{
	printf("What kind of shoes are you looking for?\n");
	printf("\t\t(1)Pumps\n");
	printf("\t\t(2)Heels\n");
	printf("\t\t(3)Sandals\n");
	printf("\t\t(4)Kitten Heels\n");
	printf("\t\t(5)Surprise me!\n");
	scanf("%d",&chs );

	}while(chs < 1 || chs >5);
	//scanf("%d",&chs );
	return chs;
}

int tops()
{
	int cht;
	printf("What kind of tops are you looking for?\n");
	printf("\t\t(1)Casual\n");
	printf("\t\t(2)Professional\n");
	printf("\t\t(3)Going Out\n");
	printf("\t\t(4)Surprise me!\n");

	scanf("%d",&cht );

	return cht;
}



int dresses()
{
	int cht;
	printf("What kind of tops are you looking for?\n");
	printf("\t\t(1)Casual\n");
	printf("\t\t(2)Professional\n");
	printf("\t\t(3)Going Out\n");
	printf("\t\t(4)Surprise me!\n");

	scanf("%d",&cht );

	return cht;
}

int Pants()
{
	int cht;
	printf("What kind of tops are you looking for?\n");
	printf("\t\t(1)Casual\n");
	printf("\t\t(2)Professional\n");
	printf("\t\t(3)Party\n");
	printf("\t\t(4)Surprise me!\n");

	scanf("%d",&cht );

	return cht;
}

int Jeans()
{
	int cht;
	printf("What kind of jeans are you looking for?\n");
	printf("\t\t(1)Skinny\n");
	printf("\t\t(2)Flare\n");
	printf("\t\t(3)Mom\n");
	printf("\t\t(3)Stretch\n");
	printf("\t\t(4)Surprise me!\n");

	scanf("%d",&cht );

	return cht;
}


int main()
{
	int ch1, ch2, ch3;

	ch1 =intro();//welcome screen

	if(ch1== 2)//takes user to type menu
	{
			ch2 = whatitems();
			if(ch2 == 1)//takes userm to types of shoes
			{
				ch3 = shoes();
			}
			if(ch2 == 2)//takes user to types of tops
			{
				ch3 = tops();
				if(ch3 == 1)
				{
					printf("Copy This Link in Browser\n");
					printf("https://www.pinterest.com/rebeccacasimir2/casual/tops/\n");

				}
			}
			if(ch2 == 3)//takes user to types of dresses
			{
				ch3 = dresses();
			}
			if(ch2 == 4)//takes user to types of pants
			{
				ch3 = Pants();
			}
			if(ch2 == 5)//takes user to types of jeans
			{
				ch3 = Jeans();
			}
	}
	return 0;

}
