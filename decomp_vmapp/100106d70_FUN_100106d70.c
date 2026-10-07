
bool FUN_100106d70(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = FUN_100106810();
  if (iVar1 == 0) {
    if (*(long *)(*(long *)(DAT_1011c3650 + 0x10) + 0x120) != 0) {
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmCommonOptions();
      iVar1 = CVmCommonOptions::getOsType();
      iVar2 = CVmCommonOptions::getOsVersion();
      if (*param_1 != iVar1) {
        return true;
      }
      if (param_1[1] != iVar2) {
        return true;
      }
    }
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    iVar1 = CVmCommonOptions::getOsType();
    iVar2 = CVmCommonOptions::getOsVersion();
    bVar3 = true;
    if (*param_1 == iVar1) {
      bVar3 = param_1[1] != iVar2;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

