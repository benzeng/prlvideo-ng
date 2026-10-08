
undefined8 FUN_10026e430(undefined8 param_1)

{
  char cVar1;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [68];
  uint local_34;
  
  CAbstractTask::getDefaultSubTaskList();
  FUN_1001cda40(local_78,DAT_102310918);
  FUN_1001091d0(local_78);
  if ((local_34 & 8) == 0) {
    local_80 = 0;
    FUN_1001298a0(param_1,&local_80);
  }
  else {
    FUN_100274820(param_1);
    local_7c = 0;
    FUN_100129840(param_1,&local_7c);
  }
  cVar1 = UpgradeUtils::isNeedToInstallUpdateOnAppStart((int *)0x0);
  if (cVar1 == '\0') {
    local_84 = 7;
    FUN_1001298a0(param_1,&local_84);
  }
  cVar1 = FUN_100d80680();
  if (cVar1 != '\0') {
    cVar1 = FUN_100d80630(1);
    if (cVar1 == '\0') goto LAB_10026e4e4;
  }
  local_88 = 6;
  FUN_1001298a0(param_1,&local_88);
LAB_10026e4e4:
  cVar1 = FUN_100d80680();
  if (cVar1 == '\0') {
    local_8c = 3;
    FUN_1001298a0(param_1,&local_8c);
    local_90 = 5;
    FUN_1001298a0(param_1,&local_90);
    local_94 = 8;
    FUN_1001298a0(param_1,&local_94);
    local_98 = 9;
    FUN_1001298a0(param_1,&local_98);
    local_9c = 0xc;
    FUN_1001298a0(param_1,&local_9c);
  }
  cVar1 = FUN_100075300();
  if (cVar1 == '\0') {
    local_a0 = 0xf;
    FUN_1001298a0(param_1,&local_a0);
  }
  local_a4 = 4;
  FUN_1001298a0(param_1,&local_a4);
  return param_1;
}

