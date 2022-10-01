(int*) (*funtion_name(int))
 {
 }
 int* function1(int)\
 time_out(function1,int j);
 int* function2(int)
 
void time_out(funtion_name,int i)
{
 int * temp = (*funtion_name(i));
}

int gloabal_data[20] = 0;



main(){
{
hw_init();
os_init();
tx_thread_create(thread_function1,"thread1",stack_size,priority);
tx_kernel_enter();

}


void thread_function1()
{
mutex_get();
gloabal_data[0]++;
mutex_put();
}
 

void thread_function2()
{
mutex_get();
gloabal_data[0]--;
mutex_put();
}
int split_sentence();
char *sentence = "today is wednseday";
char words[][] = {"\0"};
main()
{

char user_word[];
int word_count = 0;
word_count = split_sentence();
printf("Type in a Word to search");
scanf("%s",&user_word[0]);
for (int i =0 ; i < word_count; i++)
{
if(strcmp(&user_word[0],&words[i]));
}


}

int split_sentence()
{
char *temp_sentence = sentence;  
int word_count = 0, char_cnt[2] = 0 ;
while(*temp_sentence != '\0')
{
*temp_sentence++;
char_cnt[0]++;
if (*temp_sentence == " ")
{
memcpy(&words[word_count][0],sentence-char_cnt[1],(char_cnt[0]-1));
word_count++;
char_cnt[1] =0;
}
}
return word_count;
}