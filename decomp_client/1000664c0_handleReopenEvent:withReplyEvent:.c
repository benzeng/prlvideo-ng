
/* Function Stack Size: 0x20 bytes */

void CMacCocoaApplicationDelegate::handleReopenEvent_withReplyEvent_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  short sVar1;
  undefined8 uVar2;
  int local_20 [4];
  
  if (3 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",4,"Handled app reopen apple event");
  }
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_aeDesc_102269ba8);
  sVar1 = _AEGetParamDesc(uVar2,0x70726474,0x2a2a2a2a,local_20);
  if ((sVar1 != 0) || (local_20[0] != 0x69726172)) {
    uVar2 = FUN_1001d50a0();
    uVar2 = FUN_1001d50d0(uVar2);
    FUN_1001d9980(uVar2,6);
  }
  return;
}

