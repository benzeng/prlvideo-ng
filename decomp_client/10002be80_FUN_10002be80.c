
void FUN_10002be80(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = (*(code *)PTR__objc_retain_1021e1c78)(param_2);
  cVar2 = FUN_10002afd0(*(undefined8 *)(param_1 + 0x10));
  if (cVar2 != '\0') {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithUnsignedInt__102269200,
                       param_3);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar1,PTR_s_addFeedbackButton_identificator__1022697f0,uVar3,uVar4);
    (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar3);
  return;
}

