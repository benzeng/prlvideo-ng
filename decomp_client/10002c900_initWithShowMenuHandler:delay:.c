
/* Function Stack Size: 0x20 bytes */

ID PDFullScreenMouseHandler::initWithShowMenuHandler_delay_
             (ID param_1,SEL param_2,ID param_3,undefined4 param_4,double param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 local_48 [8];
  objc_super local_40;
  
  uVar4 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  local_40.super_class = (class_t *)PTR_PDFullScreenMouseHandler_10226abb0;
  local_40.receiver = param_1;
  IVar5 = _objc_msgSendSuper2(&local_40,PTR_s_init_102268ca8);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (IVar5 != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(IVar5,PTR_s_setMenuAreaHandler__102269818,uVar4);
    (*(code *)puVar1)(param_5,IVar5,PTR_s_setShowMenuDelay__102269820);
    uVar6 = (*(code *)puVar1)(IVar5,PTR_s_class_102269100);
    cVar3 = (*(code *)puVar1)(uVar6,PTR_s_isMouseInShowMenuArea_102269828);
    (*(code *)puVar1)(IVar5,PTR_s_setInShowMenuArea__102269830,(int)cVar3);
    puVar2 = PTR__OBJC_CLASS___NSEvent_10226a8b0;
    local_68 = PTR___NSConcreteStackBlock_1021e1280;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_10002ca60;
    local_50 = &DAT_1021ed230;
    _objc_initWeak(local_48,IVar5);
    uVar6 = (*(code *)puVar1)(puVar2,PTR_s_addLocalMonitorForEventsMatching_102269860,0x20,&local_68
                             );
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_msgSend_1021e1c68)(IVar5,PTR_s_setMonitor__102269868,uVar6);
    (*(code *)PTR__objc_release_1021e1c70)(uVar6);
    _objc_destroyWeak(local_48);
  }
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  return IVar5;
}

