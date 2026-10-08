
/* Function Stack Size: 0x20 bytes */

void MacPromoWindow::webView_didStartProvisionalLoadForFrame_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  FUN_100df99c0("","prl_client_app",0,"Promo content loading is started");
  UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_center_102269e40);
                    /* WARNING: Could not recover jumptable at 0x000100073b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,PTR_s_makeKeyAndOrderFront__102269e48,param_1);
  return;
}

