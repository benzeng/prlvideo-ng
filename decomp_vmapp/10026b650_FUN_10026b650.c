
void FUN_10026b650(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  QString local_38;
  undefined1 local_29;
  
  *param_1 = &PTR_FUN_100baf230;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = PTR_shared_null_100ba20d0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  FUN_1003e0650(param_1 + 6,param_4,0xff);
  param_1[0x2a] = 1;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  uVar2 = CVmCommonOptions::getOsVersion();
  *(undefined4 *)((long)param_1 + 0x14) = uVar2;
  *(undefined4 *)((long)param_1 + 0x10c) = uVar2;
  CVmDevice::getSystemName();
  QString::operator=((QString *)(param_1 + 3),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026b731;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10026b731:
  cVar1 = FUN_1003f9110();
  if (cVar1 != '\0') {
    FUN_1003e0350(1);
  }
  cVar1 = FUN_1003f9130();
  if (cVar1 != '\0') {
    FUN_1003e0390(0);
  }
  return;
}

