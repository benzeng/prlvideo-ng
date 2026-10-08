
/* Function Stack Size: 0x14 bytes */

void PDBarButtonItem::setActiveIO_(ID param_1,SEL param_2,char param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  dispatch_time_t dVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  
  if (*(char *)(param_1 + _activeIO) != param_3) {
    *(char *)(param_1 + _activeIO) = param_3;
    uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_ioStatusView_102269620);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    if (param_3 == '\0') {
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_setStatusVisible__102269630,0);
      (*(code *)PTR__objc_release_1021e1c70)(uVar2);
      return;
    }
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_setStatusVisible__102269630,1);
    puVar1 = PTR__objc_release_1021e1c70;
    (*(code *)PTR__objc_release_1021e1c70)(uVar2);
    _objc_initWeak(local_38,param_1);
    dVar3 = _dispatch_time(0,100000000);
    local_60 = PTR___NSConcreteStackBlock_1021e1280;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_100023010;
    local_48 = &DAT_1021ed120;
    uVar2 = _objc_loadWeakRetained(local_38);
    _objc_initWeak(local_40,uVar2);
    (*(code *)puVar1)(uVar2);
    _dispatch_after(dVar3,PTR___dispatch_main_q_1021e1860,&local_60);
    _objc_destroyWeak(local_40);
    _objc_destroyWeak(local_38);
  }
  return;
}

