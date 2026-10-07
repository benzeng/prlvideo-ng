
undefined8 FUN_1005202d0(long *param_1,long param_2)

{
  void *pvVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined1 local_38 [4];
  undefined4 local_34;
  
  local_34 = (undefined4)((ulong)in_RAX >> 0x20);
  if (*(short *)(param_2 + 0x16) == 0) {
    return 0xf0000003;
  }
  lVar4 = FUN_1002a6120(param_2,0,1);
  if (lVar4 == 0) {
    return 0xf0000003;
  }
  if (*(uint *)(lVar4 + 8) < 8) {
    return 0xf0000009;
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getTimeSync();
  _local_38 = CONCAT35(local_34._1_3_,0x3c);
  cVar2 = CVmToolsTimeSync::isEnabled();
  if (cVar2 == '\0') {
    bVar7 = 0;
LAB_1005203d0:
    _local_38 = CONCAT14(bVar7,local_38);
  }
  else {
    cVar2 = CVmToolsTimeSync::isKeepTimeDiff();
    if (cVar2 != '\0') {
      _local_38 = CONCAT14(1,local_38);
      if (*param_1 == 0) {
        pvVar5 = operator_new(8);
        FUN_10051f380(pvVar5);
        pvVar1 = (void *)*param_1;
        if ((pvVar1 != pvVar5) && (pvVar1 != (void *)0x0)) {
          FUN_10051f430(pvVar1);
          operator_delete(pvVar1);
        }
        *param_1 = (long)pvVar5;
      }
      goto LAB_1005203f2;
    }
    cVar2 = CVmToolsTimeSync::isSyncHostToGuest();
    bVar7 = 4;
    if (cVar2 == '\0') {
      bVar7 = 2;
    }
    _local_38 = CONCAT14(bVar7,local_38);
    cVar2 = CVmToolsTimeSync::isSyncTimezoneDisabled();
    if (cVar2 != '\0') {
      bVar7 = bVar7 | 8;
      goto LAB_1005203d0;
    }
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_10051f430(pvVar1);
    operator_delete(pvVar1);
    *param_1 = 0;
  }
LAB_1005203f2:
  uVar3 = CVmToolsTimeSync::getSyncInterval();
  _local_38 = CONCAT44(local_34,uVar3);
  uVar6 = FUN_1002a6120(param_2,0,1);
  FUN_1002a5a50(uVar6,0,local_38,8);
  return 0;
}

