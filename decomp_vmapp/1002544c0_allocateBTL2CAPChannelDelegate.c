
/* Function Stack Size: 0x10 bytes */

void BTController::allocateBTL2CAPChannelDelegate(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR_BTL2CAPChannelDelegate_100bedb60,PTR_s_new_100bed280);
  *(undefined8 *)(param_1 + _impl_allocated) = uVar1;
  return;
}

