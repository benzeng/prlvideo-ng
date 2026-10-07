
void FUN_100252800(void)

{
  ID IVar1;
  
  if (DAT_1011b8938 == 0) {
    IVar1 = (*(code *)PTR__objc_msgSend_100ba25e8)(PTR_BTController_100bedb38,PTR_s_alloc_100bed228)
    ;
    DAT_1011b8938 = BTController::init(IVar1,PTR_s_init_100bed248);
  }
  return;
}

