
uint8 Var=0;
void Thread1Function()
{
	while(TRUE)
	{
	if(Var == 0)
	printf("%d",&Var);
	Var++;	
	sleep(1); 
	}
}

void Thread2Function()
{
	while(TRUE)
	{
		if(Var == 1)
		{
		printf("%d ",&Var);
		Var = 0;
		}
	sleep(1);
}
}

int main()
{
	Thread_ptr1 = create_thread(Thread1Function,stack);
	Thread_ptr2 = create_thread();
	
}