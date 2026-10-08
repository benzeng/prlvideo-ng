
bool FUN_10018d9f0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    CVmConfiguration::getExternalConfigInfo();
    uVar1 = CVmExternalConfigInfo::getType();
    *param_2 = uVar1;
  }
  CVmConfiguration::getExternalConfigInfo();
  iVar2 = CVmExternalConfigInfo::getType();
  return iVar2 != 0;
}

