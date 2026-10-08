
/* Function Stack Size: 0x18 bytes */

void PDLFeedbackButtonDelegate::windowDidBecomeKey_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  dispatch_time_t dVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  
  uVar2 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_owner_1022697b0);
  cVar1 = FUN_10002ab20(uVar3);
  if (cVar1 != '\0') {
    _objc_initWeak(local_38,uVar2);
    dVar4 = _dispatch_time(0,1000000000);
    local_60 = PTR___NSConcreteStackBlock_1021e1280;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_10002abb0;
    local_48 = &DAT_1021ed170;
    uVar3 = _objc_loadWeakRetained(local_38);
    _objc_initWeak(local_40,uVar3);
    (*(code *)PTR__objc_release_1021e1c70)(uVar3);
    _dispatch_after(dVar4,PTR___dispatch_main_q_1021e1860,&local_60);
    _objc_destroyWeak(local_40);
    _objc_destroyWeak(local_38);
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  return;
}

