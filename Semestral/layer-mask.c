#include <stdio.h>

int main(void){
    //How do layer masks work in Photoshop? Give an example of a use case scenario for layer masks in Photoshop.
    //.1- A layer mask is a non-destructive tool used to hide or reveal specific portions of a layer without permanently erasing the original data.
    //.2- Edit, move, or hide individual components without affecting the rest of your artwork. Example: Trying to adjust the backround without affecting the subject or person
 float Hidden, Visible, Partially_Transparent, Invalid_Value, ur;
    printf("Enter number of pixels: \n");
    int user_response;
    scanf("%d",&user_response);

    if(ur==0){
   printf("Hidden \n", Hidden);
    }else if(ur==255){
        printf("Visible \n", Visible);
    }else if(ur>1<254){
        printf("Partially Transparent \n", Partially_Transparent);
    }else if(ur<0>255){
        printf("Invalid Value \n", Invalid_Value);
    }
    }

