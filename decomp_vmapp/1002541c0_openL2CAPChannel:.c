
/* Function Stack Size: 0x18 bytes */

void BTController::openL2CAPChannel_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long local_30;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  local_30 = 0;
  uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_3,PTR_s_dev_100bed438);
  uVar2 = (*(code *)puVar1)(param_3,PTR_s_psm_100bed440);
  iVar3 = (*(code *)puVar1)(uVar4,PTR_s_openL2CAPChannelAsync_withPSM_de_100bed448,&local_30,uVar2,
                            param_3);
  *(int *)(param_1 + _result) = iVar3;
  if ((iVar3 == 0) && (local_30 != 0)) {
    lVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_3,PTR_s_l2cap_100bed450);
    if (lVar5 != 0) {
      FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","chn.l2cap == nil",
                    "../Usb/Virtual/Bluetooth/BTController_objc.mm",0x187,
                    "-[BTController openL2CAPChannel:]");
    }
    (*(code *)puVar1)(param_3,PTR_s_setL2cap__100bed458,local_30);
    uVar4 = (*(code *)puVar1)(param_3,PTR_s_l2cap_100bed450);
    (*(code *)puVar1)(uVar4,PTR_s_retain_100bed3c0);
    lVar5 = (*(code *)puVar1)(param_3,PTR_s_l2cap_100bed450);
    if (lVar5 != 0) {
      uVar4 = (*(code *)puVar1)(param_3,PTR_s_dev_100bed438);
      (*(code *)puVar1)(uVar4,PTR_s_retain_100bed3c0);
    }
    uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_3,PTR_s_l2cap_100bed450);
    FUN_1008e3970("","LocalDevices",0,"openL2CAPChannel() chn=%p",uVar4);
  }
  return;
}

