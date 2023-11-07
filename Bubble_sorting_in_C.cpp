
extern "C"
{
    #include<stdio.h>

    void Bubble_sorting_in_C(int *data, int len)
    {
        printf("Bubble sorting Algorithm in C\n");
        int index1, index2;
        int temp;

        for(index1 = 0; index1<len;index1++)
        {

            for(index2 = index1; (index2 < len);index2++)
            {
                if(data[index1] > data[index2])
                {
                    temp = data[index2];
                    data[index2] = data[index1];
                    data[index1] = temp;
                }
            }
        }

        for(index1 = 0; index1< len; index1++)
        {

            printf("%d",data[index1]);

        }
    }

}

