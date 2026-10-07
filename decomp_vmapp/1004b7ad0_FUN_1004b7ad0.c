
void FUN_1004b7ad0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  bool bVar3;
  
  puVar1 = PTR_shared_null_100ba2188;
  *param_1 = PTR_shared_null_100ba2188;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[0x203] = 0;
  FUN_1004bef50(param_1 + 0x206);
  param_1[0x207] = PTR_shared_null_100ba20d8;
  param_1[0x208] = puVar1;
  QMutex::QMutex((QMutex *)(param_1 + 0x209),0);
  ___bzero(param_1 + 3,0x1000);
  param_1[0x205] = 0;
  param_1[0x204] = 0;
  bVar3 = true;
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    iVar2 = CVmCommonOptions::getOsType();
    if (iVar2 == 8) {
      bVar3 = false;
    }
    else {
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmCommonOptions();
      iVar2 = CVmCommonOptions::getOsType();
      bVar3 = iVar2 != 9;
    }
  }
  *(bool *)(param_1 + 0x20a) = bVar3;
  return;
}

