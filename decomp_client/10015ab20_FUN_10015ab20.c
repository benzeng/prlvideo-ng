
bool FUN_10015ab20(void)

{
  int iVar1;
  
  CHostHardwareInfoBase::getOsVersion();
  iVar1 = CHwOsVersion::getOsType();
  return iVar1 == 1;
}

