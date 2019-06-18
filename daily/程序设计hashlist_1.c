#include <stdio.h>
#define c 3
#define SIZE 20
#define prime_mox 19
#define INT_MIN -2147483648
#define KK_MIN -1
typedef struct
{
    int key;           //关键字
    int KK;           //原输入顺序
    // infotype  orther;    可扩充
} *Point, HASH[SIZE+5], HNODE;

void Initlist( Point list)      //初始化,注销
{
    for( int i=0; i<SIZE; i++ )
    {
        list[i].key=INT_MIN;    //关键字初始化
        list[i].KK=KK_MIN;
    }
}

void Hash_arithmetic( Point node, Point P_list2)
{
    int j=node->key%prime_mox;
    while( P_list2[j].key  != INT_MIN )
    {
        j=(j+c)%SIZE;
    }
    P_list2[j]=*node;
    //printf("%-9d%d\n",P_list2[j].key, j);
}

int  input_or_insertion( Point list, int n )
{
    HNODE list_node;
    printf("enter number( 换行 Ctrl + Z == end ):\n");
    while( scanf("%d", &list_node.key) !=EOF )
    {
        list_node.KK=n;
        n++;
      if(n>20)
        {
            if( n==21 )
            printf("输入数据总大小超出合理范围，操作非法，请按Ctrl + Z结束，并按6注销表\n");
            continue;
        }
        Hash_arithmetic( &list_node, list );
        // printf("%-5d\t", list_node.key);
    }
    return n;
}


int SeachHash( Point list, int Key_S)
{
    int j=Key_S%prime_mox;
    if( list[j].key == INT_MIN )
        return -1;
    else if(list[j].key == Key_S )
        return j;
    else
    {
        for( int i=1; i<=SIZE; i++ )    //3的倍数每10次其个位数循环一次，3的倍数每20次其值%20循环一次，推断
        {
            j=(j+c)%SIZE;
            if( list[j].key == INT_MIN )
                return -1;
            else if(list[j].key == Key_S )
                return j;
        }
        return -1;
    }
}

int Delete( Point list, int *n,int De)
{
    int flag1;
    flag1=SeachHash( list, De );
    if( flag1 != -1)
    {
        list[flag1].key=INT_MIN;
        for( int i=0; i<SIZE; i++)
        {
            if(list[i].KK>list[flag1].KK)
                list[i].KK--;
        }
        list[flag1].KK=-1;
        *n=*n-1;
    }
    return flag1;
}

void oldlist_restore( Point list, Point list_o )    //还原表
{
    for( int i=0; i<SIZE; i++ )
    {
        if( list[i].KK != KK_MIN )
            list_o[list[i].KK]=list[i];
    }
}

void outputHash( Point list, int n )
{
    int i;
    for( i=0; i<SIZE; i++ )
        printf("%-7d", i+1);
    printf("\n");
    for( int i=0; i<SIZE; i++)
    {
        if( list[i].key != INT_MIN )
        {
            printf("%-7d", list[i].key);
        }
        else
        {
            printf("/      ");
        }
    }
    printf("\n");
    for( int k=0; k<SIZE; k++ )
    {
        printf("%-7d", list[k].KK+1);
    }
    printf("\n__________________________________________________________________________________\n");
}

void output_old( Point list_o, int n )
{
    int i;
    for( i=0; i<n; i++)
        printf("%-7d",i+1);
    printf("\n");
    for( i=0; i<n; i++ )
        printf("%-7d", list_o[i].key);
    printf("\n__________________________________________________________________________________\n");
}


int main()
{
    //freopen("in.txt", "r", stdin );

    int N=0, flag;
    int chose;
    HASH list_a, list_old;
    Initlist( list_a );
    printf("==========================\n");
    printf("||1.创建并插入\t\t||\n||2.查找\t\t||\n||3.删除\t\t||\n||4.输出hash表\t\t||\n||5.输出原表\t\t||\n||6.注销表\t\t||\n||-1.退出操作系统\t||\n");
    printf("==========================\n");
    while( scanf("%d",&chose)&& chose != -1)
    {
        switch(chose)
        {
        case 1:                                            //创建并插入;
        {
            N=input_or_insertion( list_a, N );
            printf("__________________________________________________________________________________\n");
            break;
        }
        case 2:                                           //查找
        {
            int key_Seacher;
            printf("please enter number:\n");
            scanf("%d", &key_Seacher);
            flag=SeachHash( list_a, key_Seacher );
            if(flag ==-1)
                printf("not find it\n");
            else
                printf("the number in %d\n", flag+1);
            printf("\n__________________________________________________________________________________\n");
            break;
        }
        case 3:                                           //删除
        {
            int key_Delete;
            printf("please enter your delete number:\n");
            scanf("%d", &key_Delete);
            flag=Delete( list_a, &N, key_Delete );
            if( flag == -1)
                printf("Don't find the number and don't delete it\n");
            else
                printf("OK\n");
            printf("\n__________________________________________________________________________________\n");
            break;
        }
        case 4:                                       //输出hash表
        {
            outputHash( list_a, N );
            break;
        }
        case 5:                                     //输出原表
        {
            Initlist( list_old );
            oldlist_restore( list_a, list_old );
            output_old( list_old, N );
            break;
        }
        case 6:
        {
            Initlist( list_a );
            Initlist( list_old );
            N=0;
            printf("OK");
            printf("\n__________________________________________________________________________________\n");
            break;
        }
        default:
            printf("输入操作有误，请重新输入：\n");
            break;
        }
    }
    return 0;
}
