
/* Function Stack Size: 0x18 bytes */

void PDDeviceBarViewContaner::setDeviceListVisible_animated_
               (ID param_1,SEL param_2,char param_3,char param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined1 local_78 [8];
  char local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 local_48 [8];
  char local_40;
  char local_3f;
  undefined1 local_38 [8];
  
  if (*(char *)(param_1 + _deviceListVisible) != param_3) {
    *(char *)(param_1 + _deviceListVisible) = param_3;
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setAnimationIsInProgress__102269518,1);
    if (param_3 != '\0') {
      (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_updateInstrinsicSize_1022694c8);
    }
    uVar4 = _objc_initWeak(local_38,param_1);
    puVar3 = PTR__OBJC_CLASS___NSAnimationContext_10226a898;
    puVar1 = PTR___NSConcreteStackBlock_1021e1280;
    local_68 = PTR___NSConcreteStackBlock_1021e1280;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_100020ad0;
    local_50 = &DAT_1021ed0c0;
    local_40 = param_4;
    local_3f = param_3;
    (*(code *)PTR__objc_retain_1021e1c78)(uVar4);
    _objc_initWeak(local_48,param_1);
    puVar2 = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(param_1);
    local_98 = puVar1;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_100020d20;
    local_80 = &DAT_1021ed0f0;
    uVar4 = _objc_loadWeakRetained(local_38);
    _objc_initWeak(local_78,uVar4);
    (*(code *)puVar2)(uVar4);
    local_70 = param_3;
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (puVar3,PTR_s_runAnimationGroup_completionHand_102269530,&local_68,&local_98);
    _objc_destroyWeak(local_78);
    _objc_destroyWeak(local_48);
    _objc_destroyWeak(local_38);
  }
  return;
}

