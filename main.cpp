#include "Customer.h"
#include "Package.h"
#include "Booking.h"
#include "Admin.h"
#include "Feedback.h"
#include "Payment.h"
#include "Report.h"
int main ()
{
    
    Visitor *vc = new Customer();
    
    Package *pk = new Package();
    
    Booking *bk = new Booking();

    Payment *pmnt = new Payment();

    Admin *ad = new Admin();

    Feedback *fd = new Feedback();

    Report *rp = new Report();


  vc->login();

  pk->updatePackages();
  pk->deletePackages();

  bk->addBooking();
  bk->displayBookingDetails();

  ad->login();

  pmnt->checkPayment();
  pmnt->confirmPayment();
  pmnt->displayPaymeentDetails();

  fd->storeFeedbacks();
  fd->displayFeedbacks();

  rp->generateConfirmationDetails();



  delete vc;
  delete bk;
  delete ad;
  delete pmnt;
  delete fd;
  delete rp;
    
    return 0;
}
