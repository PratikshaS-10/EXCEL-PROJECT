#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include <unistd.h> // For sleep function
struct Health{
    char name[20];
    int score;
};

struct Health stats;
void QUESTIONS();
void get_choice();
void wellness_celebration();
void play_games();
void resources();
void health_status();
void display_scores();
void plot_scores();


int main(){
    /* int ratings[15],score=0;
    printf("****************WELCOME!!****************\n");
    printf("You can check your mental health here. Your information is confidential don't worry and take the test !!\n");
    printf("Rate on the scale of 1 to 5 on how strongly you agree or disagree with statement\n\n");
    printf("1 = Strongly Disagree, 2 = Disagree, 3 = Neutral, 4 = Agree, 5 = Strongly Agree\n\n");

    QUESTIONS();
    

    int n=sizeof(QUESTIONS)/sizeof(QUESTIONS[0]);
    for(int i=0;i<n;i++){
        printf("%s : ",QUESTIONS[i]);
        scanf("%d",&ratings[i]);

        while(ratings[i]<1 || ratings[i]>5){
            printf("Enter a valid number between 1 to 5 : ");
            scanf("%d",&ratings[i]);
}
        
        }

    for(int i=0;i<n;i++){
        score+=ratings[i];}

    printf("YOUR SCORE IS %d\n",score);
    
    if (score >=15 && score <=29) {
        printf("Your mental health seems to be in a generally good place, but check in with yourself periodically");}
        
    else if (score >= 29 && score <=44) {
        printf("You might be experiencing some challenges Consider seeking support from loved ones/professionals");}
    else if (score >=44 && score <= 59) {
        printf("You're likely experiencing emotional distress and may benefit from talking to a counselor or therapist");}
    else(60-75){
        printf("You might be going through significant mental health challenges It is strongly recommended to
         reach out to a mental health professional for guidance and support")}; */

        get_choice();

return 0;
}

/* void QUESTIONS(){
    char QUESTIONS[15][100]={
        "I have felt sad or down over the past two weeks",
        "I have felt anxious, nervous, or worried during the past two weeks",
        "I feel hopeless at times, as though things won't improve",
        "I have not found any healthy ways to cope with stress (eg, exercise, hobbies, talking to others)",
        "I feel like I cannot handle daily challenges (work, school, personal life)",
        "I have difficulty falling or staying asleep",
        "I often feel fatigued or low on energy during the day",
        "I have had thoughts about harming myself or ending my life in the past month",
        "I find it difficult to concentrate or focus on tasks",
        "I have experienced significant mood swings or fluctuations recently",
        "I don't feel connected to my friends, family, or community",
        "I am not comfortable reaching out to others for support (friends,family,or a counselor)",
        "I would rate my mental health as bad overall",
        "I don't have enough support in my life from family, friends, or professionals",
        "I don't feel that my life has purpose and is worth living"
    };
}
 */


void get_choice(){
        printf("\n1. If your score lies between 15 to 29 \n2. If your score is between 29 to 44\n3. If it is greater than 44\n");
        printf("4. To save your scores\n5. To see your score analysis\n6. EXIT\nENTER YOUR CHOICE FROM THESE ONLY:");
  
        int choice;
        scanf("%d",&choice);
        while(getchar()!='\n');
        if(choice>0 && choice<7){
            switch(choice){
            case 1:
            printf("Whoa !! You are having excellent mental health here's a reward for you !! ");
            wellness_celebration();
            break;
            case 2:
            printf("Don't worry its just a little higher than normal scores lets play some games to relive your stress!!\n");
            play_games();
            break;
            case 3:
            resources();
            break;
            case 4:
            health_status();
            break;
            case 5 :
            display_scores();
            plot_scores();
            break;
            case 6: 
            printf("Thankyou for using our service !!");
            return ;}
    
    }
        

    else{
        get_choice();
 }}



void fake_virus_alert() {
    printf("VIRUS ALERT! \n");
    sleep(2);
    printf("A dangerous virus has been detected on your system!\n");
    sleep(2);
    printf("Your files are at risk! Immediate action required!\n");
    sleep(2);
    printf("Just kidding! No viruses found! You're safe! 🎉\n");
}

void infinite_loop_prank() {
    printf("Simulating an infinite loop! Press Ctrl+C to stop it!\n");
    while (1) {
        printf("This is a prank! \n");
        sleep(1);
    }
}

void fake_update_screen() {
    printf("System Update in Progress...\n");
    sleep(2);
    printf("Installing updates...\n");
    sleep(2);
    printf("This may take a while...\n");
    sleep(2);
    printf("Just kidding! No updates are being installed! 🎉\n");
}

void display_fun_positive_thought() {
    const char *thoughts[] = {
        "\"Life is short. Smile while you still have teeth!\"",
        "\"Slow and steady wins the race, but a little bit of fun never hurts!\"",
        "\"If you think you are too small to be effective, you have never been in bed with a mosquito!\"",
        "\"You can't make everyone happy. You're not pizza!\"",
        "\"The best things in life are free. The second best are very expensive!\""
    };

    // Seed the random number generator
    srand(time(NULL));
    int randomIndex = rand() % (sizeof(thoughts) / sizeof(thoughts[0]));

    // Display the fun positive thought
    printf("Here's a fun thought for you: %s\n", thoughts[randomIndex]);
}

void mystery_box() {
    const char *options[] = {
        "Fake Virus Alert",
        "Infinite Loop Prank",
        "Fake Update Screen",
        "Fun Positive Thought"
    };

    // Seed the random number generator
    srand(time(NULL));
    int randomIndex = rand() % (sizeof(options) / sizeof(options[0]));

    // Display the selected option
    printf("Congratulations! You've opened the mystery box! \n");
    // Execute the selected option
    switch (randomIndex) {
        case 0:
            fake_virus_alert();
            break;
        case 1:
            infinite_loop_prank();
            break;
        case 2:
            fake_update_screen();
            break;
        case 3:
            display_fun_positive_thought();
            break;
    }
}

void wellness_celebration() {
    printf("Congratulations on your perfect mental health score! \n");
    printf("Let's open a mystery box to see what fun surprise you get!\n");
    mystery_box();
}


void resources(){
    printf("\nBad score huh? Don't worry we will get it fixed. Here are some mental health resouces you can take help from :");
    printf("1. National Alliance on Mental Illness (NAMI)\n");
    printf("   Website: https://www.nami.org/\n");
    printf("   Provides support groups, educational resources, and advocacy for individuals affected by mental illness.\n\n");

    printf("2. Mental Health America (MHA)\n");
    printf("   Website: http://www.mentalhealthamerica.net/\n");
    printf("   Offers screening tools, educational materials, and support for mental health issues.\n\n");

    printf("3. Substance Abuse and Mental Health Services Administration (SAMHSA)\n");
    printf("   Website: http://www.samhsa.gov/\n");
    printf("   Provides a national helpline and resources for substance abuse and mental health treatment.\n\n");

    printf("4. Crisis Text Line\n");
    printf("   Website: https://www.crisistextline.org/\n");
    printf("   Text HOME to 741741 for free, 24/7 support via text for individuals in crisis.\n\n");

    printf("5. The Trevor Project\n");
    printf("   Website: http://www.thetrevorproject.org/\n");
    printf("   Focuses on crisis intervention and suicide prevention for LGBTQ youth.\n\n");

    printf("6. Veterans Crisis Line\n");
    printf("   Website: http://www.veteranscrisisline.net/\n");
    printf("   Call 1-800-273-8255 and press 1 for confidential support for veterans and their families.\n\n");

    printf("7. MindWise\n");
    printf("   Website: https://www.mindwise.org/\n");
    printf("   Offers mental health screenings and resources specifically for military members and their families.\n\n");

    printf("8. Psychology Today - Find a Therapist\n");
    printf("   Website: http://therapists.psychologytoday.com/rms/?utm_source=PT_Psych_Today\n");
    printf("   A directory to help individuals find mental health professionals in their area.\n\n");

    printf("9. National Eating Disorders Association (NEDA)\n");
    printf("   Website: https://www.nationaleatingdisorders.org/\n");
    printf("   Provides resources and support for individuals struggling with eating disorders.\n\n");

    printf("10. 7Cups\n");
    printf("    Website: https://www.7cups.com/\n");
    printf("    Offers free online therapy and emotional support through trained listeners and community forums.\n\n");
}



void health_status(){
    FILE *fptr;
    fptr=fopen("stats.bin","ab");
    if(fptr==NULL){
        printf("FILE CAN'T BE OPENED");
        //return;
    }
    printf("ENTER YOUR NAME :");
    fgets(stats.name,sizeof(stats.name),stdin);
    stats.name[strcspn(stats.name,"\n")]='\0';

    printf("Enter your score : ");
    scanf("%d ",&stats.score);
    while(getchar()!='\n');
    getchar();

    fwrite(&stats,sizeof(stats),1,fptr);
    fclose(fptr);
}

void display_scores(){
    char user_name[20];
    int found=0;
    float total_scores=0,total_score_sq=0;
    int max_score=0,min_score=75;
    FILE *fptr;
    fptr=fopen("stats.bin","rb");
    if(fptr==NULL){
        printf("No such file exists");
    }

    printf("Enter your name to see your scores : ");
    fgets(user_name,sizeof(user_name),stdin);
    user_name[strcspn(user_name,"\n")]='\0';

    printf("The mental health scores for % s are :\n",user_name);

    while(fread(&stats,sizeof(stats),1,fptr)){
        if(strcmp(stats.name,user_name)==0){
            found++;
            printf("score %d : %d \n",found,stats.score);
            total_scores+=stats.score;
            total_score_sq+=stats.score * stats.score;

            if(stats.score<=min_score){
                min_score=stats.score;
            }
            else if(stats.score>=max_score){
                max_score=stats.score;
            }        
    }}

    if(found!=0){
        printf("Your average score is : %f\n",(total_scores/found));
        printf("The variation in your scores is %f\n",(total_score_sq/found)-pow((total_scores/found),2));
        printf("Your best and worst scores are :%d ,%d\n",min_score,max_score);

    }
    
        
    if(found==0){
        printf("not found\n");
    }

    fclose(fptr);
} 

void plot_scores(){
    FILE *fptr;
    FILE *dataptr;
    char user_name[20];
    int found=0;
    fptr=fopen("stats.bin","rb");
    if (fptr == NULL) {
        printf("No such file exists");
        return; // Return if the file can't be opened
    }

    dataptr=fopen("data.txt","a");
    if (dataptr == NULL) {
        printf("No such file exists");
        return; // Return if the file can't be opened
    }
    
    printf("Enter your name to see plot : ");
    fgets(user_name,sizeof(user_name),stdin);
    user_name[strcspn(user_name,"\n")]='\0';

    while(fread(&stats,sizeof(stats),1,fptr)){
        if(strcmp(stats.name,user_name)==0){
            found++;
            fprintf(dataptr,"test no : %d , score : %d\n",found,stats.score);
}}

fclose(fptr);
fclose(dataptr);

if(found!=0){
    fprintf(dataptr,"SCORES FOR %s : \n",user_name);
    system("python generate_chart.py");
}
else {
        printf("No scores found for %s\n", user_name);
    }
}

 void play_games(){
    int game;
    printf("Select one of following games : \n1.NUMBER GUESSING GAME \n2.STONE,PAPER,SCISSORS\n");
    printf("ENTER HERE : ");
    scanf("%d",&game);
    while(getchar()!='\n');
    if(game==1){
        int random,guess,attempts=0;
        srand(time(NULL));
        random=rand()%100 +1;
        printf("%d",random);
        printf("Guess the number between 1 to 100 : ");
    while(guess!=random){
        scanf("%d",&guess);
        attempts++;
        if(guess<random){
        printf("No NO Guess a larger number : ");
    }
    else if(guess>random){
        printf("Too large take a smaller guess : ");
    }
    else{
        printf("yayy !! you got the correct number in %d attempts ",attempts);
    }}}
    else if(game==2){
        int userChoice, computerChoice;
    char *choices[] = {"Stone", "Paper", "Scissors"};
    
    // Seed the random number generator
    srand(time(NULL));

    printf("Welcome to Stone, Paper, Scissors!\n");
    printf("Please choose:\n");
    printf("0: Stone\n");
    printf("1: Paper\n");
    printf("2: Scissors\n");
    printf("Enter your choice (0-2): ");
    
    // Get user input
    scanf("%d", &userChoice);
    while(getchar()!='\n');

    // Validate user input
    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice! Please enter a number between 0 and 2.\n");
        return ; // Exit the program with an error code
    }

    // Generate computer's choice
    computerChoice = rand() % 3;

    // Display choices
    printf("You chose: %s\n", choices[userChoice]);
    printf("Computer chose: %s\n", choices[computerChoice]);

    // Determine the winner
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }


}
        
    }
