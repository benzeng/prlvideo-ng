
/* Function Stack Size: 0x18 bytes */

void BTL2CAPChannelDelegate::l2capChannelQueueSpaceAvailable_(ID param_1,SEL param_2,ID param_3)

{
  undefined2 uVar1;
  uint uVar2;
  
  if (1 < DAT_1011b55f8) {
    uVar1 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_3,PTR_s_PSM_100bed488);
    FUN_1008e3970("","LocalDevices",2,"l2capChannelQueueSpaceAvailable (PSM:0x%x)",uVar1);
  }
  uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_flags_100bed490);
  setFlags_(param_1,PTR_s_setFlags__100bed498,uVar2 | 2);
  return;
}

