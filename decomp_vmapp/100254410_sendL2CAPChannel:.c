
/* Function Stack Size: 0x18 bytes */

void BTController::sendL2CAPChannel_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  puVar4 = PTR__objc_msgSend_100ba25e8;
  uVar1 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_3,PTR_s_l2cap_100bed450);
  uVar2 = (*(code *)puVar4)(param_3,PTR_s_data_100bed468);
  uVar2 = (*(code *)puVar4)(uVar2,PTR_s_bytes_100bed470);
  uVar3 = (*(code *)puVar4)(param_3,PTR_s_data_100bed468);
  uVar5 = (*(code *)puVar4)(uVar3,PTR_s_length_100bed478);
  uVar3 = (*(code *)puVar4)(param_3,PTR_s_data_100bed468);
  uVar6 = (*(code *)puVar4)(uVar1,PTR_s_writeAsync_length_refcon__100bed480,uVar2,uVar5,uVar3);
  *(undefined4 *)(param_1 + _result) = uVar6;
  return;
}

