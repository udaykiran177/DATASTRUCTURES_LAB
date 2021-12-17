void mul(int n)
{
        temp1=head1;
        temp2=head2;
        /*while(temp1&&temp2)
        {

                for (int i=0;i<n;i++)
                {
                        printf("%d x ^ %d",temp1->quot*temp2->quot,temp1->deg+temp2-deg);
                        temp1=temp1->next;
                }
                temp2=temp2->next;

        }*/
        do
        {
                temp2=head2;
                while (temp2!=NULL)
                {
                        printf("%d X ^ %d",temp1->quot*temp2->quot,temp1->deg+temp2->deg);
                        temp2=temp2->next;
                }
                temp1=temp1->next;
        }while (temp1!=NULL);
}
