int main() 
{ 
    int A; 
    scanf("%d",&A); 
    if (A > 0) 
        printf("Positive"); 
    else if (A < 0) 
        printf("Negative"); 
    else if (A == 0) 
        printf("Zero"); 
    else
	printf("Invaild Input");
    return 0; 
}
