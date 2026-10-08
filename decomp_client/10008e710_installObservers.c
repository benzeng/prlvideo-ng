
/* Function Stack Size: 0x10 bytes */

void CMacShortcutRecognizerEventsObserver::installObservers(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  ID local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ID local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ID local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  puVar1 = PTR___NSConcreteStackBlock_1021e1280;
  local_50 = PTR___NSConcreteStackBlock_1021e1280;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_10008e8e0;
  local_38 = &DAT_1021ee020;
  local_30 = param_1;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSEvent_10226a8b0,
                     PTR_s_addGlobalMonitorForEventsMatchin_10226a1e8,0x1000,&local_50);
  (*(code *)puVar2)(param_1,PTR_s_setGlobalEventsMonitor__10226a1f0,uVar3);
  local_78 = puVar1;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_10008eab0;
  local_60 = &DAT_1021ee050;
  local_58 = param_1;
  uVar3 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSEvent_10226a8b0,
                            PTR_s_addLocalMonitorForEventsMatching_102269860,0x1000,&local_78);
  (*(code *)puVar2)(param_1,PTR_s_setLocalEventsMonitor__10226a1f8,uVar3);
  uVar3 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSDistributedNotificationCenter_10226a958,
                            PTR_s_defaultCenter_102268ba8);
  local_a0 = puVar1;
  local_98 = 0xc2000000;
  local_94 = 0;
  local_90 = FUN_10008ec80;
  local_88 = &DAT_1021ee080;
  local_80 = param_1;
  uVar4 = (*(code *)puVar2)(uVar3,PTR_s_addObserverForName_object_queue__1022692e0,
                            &cf_com_apple_Carbon_TISNotifySelectedKeyboardInputSourceChanged,0,0,
                            &local_a0);
  (*(code *)puVar2)(param_1,PTR_s_setLocaleChangeObserver__10226a200,uVar4);
  local_c8 = puVar1;
  local_c0 = 0xc2000000;
  local_bc = 0;
  local_b8 = FUN_10008ecf0;
  local_b0 = &DAT_1021ee0b0;
  local_a8 = param_1;
  uVar3 = (*(code *)puVar2)(uVar3,PTR_s_addObserverForName_object_queue__1022692e0,
                            &cf_com_apple_tiswitcher_InputSourceWillChange,0,0,&local_c8);
  (*(code *)puVar2)(param_1,PTR_s_setTiswitcherObserver__10226a208,uVar3);
  return;
}

