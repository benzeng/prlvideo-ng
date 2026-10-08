
void FUN_10002ca60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = (*(code *)PTR__objc_retain_1021e1c78)(param_2);
  uVar6 = _objc_loadWeakRetained(param_1 + 0x20);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_class_102269100);
  cVar3 = (*(code *)puVar1)(uVar7,PTR_s_isMouseInShowMenuArea_102269828);
  cVar4 = (*(code *)puVar1)(uVar6,PTR_s_inShowMenuArea_102269838);
  if (cVar3 != cVar4) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_setInShowMenuArea__102269830,(int)cVar3);
    puVar2 = PTR_s_onShowMenuTimeout_102269840;
    if (cVar3 == '\0') {
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (PTR__OBJC_CLASS___NSObject_10226a8f0,
                 PTR_s_cancelPreviousPerformRequestsWit_102269858,uVar6);
    }
    else {
      (*(code *)puVar1)(uVar6,PTR_s_showMenuDelay_102269848);
      (*(code *)puVar1)(uVar6,PTR_s_performSelector_withObject_after_102269850,puVar2,0);
    }
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  _objc_autoreleaseReturnValue(uVar5);
  return;
}

