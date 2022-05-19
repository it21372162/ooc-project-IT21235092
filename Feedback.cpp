#include "Feedback.h"
#include<cstring>

Feedback :: Feedback()
{
  
}

Feedback :: Feedback(int F_ID, const char F_des[], const char F_name[], Customer* Fcust, Admin* Fadm)
{
  feedbackID=F_ID;
  strcpy(fbDescription,F_des);
  strcpy(userName,F_name);

  Fcus=Fcust;
  Fadmin=Fadm;
}

void Feedback :: storeFeedbacks()
{
  
}

void Feedback :: displayFeedbacks()
{
  
}

Feedback :: ~Feedback()
{
  
}
