
/* Function Stack Size: 0x18 bytes */

void BTController::closeL2CAPChannel_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__objc_msgSend_100ba25e8;
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_3,PTR_s_l2cap_100bed450);
  FUN_1008e3970("","LocalDevices",0,"closeL2CAPChannel() chn=%p",uVar3);
  uVar3 = (*(code *)puVar1)(param_3,PTR_s_dev_100bed438);
  (*(code *)puVar1)(uVar3,PTR_s_release_100bed2a0);
  uVar3 = (*(code *)puVar1)(param_3,PTR_s_l2cap_100bed450);
  (*(code *)puVar1)(uVar3,PTR_s_setDelegate__100bed290,0);
  uVar3 = (*(code *)puVar1)(param_3,PTR_s_l2cap_100bed450);
  uVar2 = (*(code *)puVar1)(uVar3,PTR_s_closeChannel_100bed460);
  *(undefined4 *)(param_1 + _result) = uVar2;
  uVar3 = (*(code *)puVar1)(param_3,PTR_s_l2cap_100bed450);
  (*(code *)puVar1)(uVar3,PTR_s_release_100bed2a0);
  (*(code *)puVar1)(param_3,PTR_s_setL2cap__100bed458,0);
  return;
}

