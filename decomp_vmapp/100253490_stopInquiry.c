
/* Function Stack Size: 0x10 bytes */

int BTController::stopInquiry(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = _result;
  *(undefined4 *)(param_1 + _result) = 0xe00002cd;
  *(undefined1 *)(param_1 + _inquiry_in_progress) = 0;
  lVar2 = _inquiry;
  puVar1 = PTR__objc_msgSend_100ba25e8;
  if (*(long *)(param_1 + _inquiry) != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                      (*(long *)(param_1 + _inquiry),PTR_s_stop_100bed3d8);
    *(undefined4 *)(param_1 + _result) = uVar3;
    (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar2),PTR_s_release_100bed2a0);
    *(undefined8 *)(param_1 + lVar2) = 0;
    lVar4 = _result;
  }
  return *(int *)(param_1 + lVar4);
}

