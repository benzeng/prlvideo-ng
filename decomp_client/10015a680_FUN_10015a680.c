
bool FUN_10015a680(void)

{
  int iVar1;
  
  CHostHardwareInfoBase::getOsVersion();
  iVar1 = CHwOsVersion::getOsType();
  return iVar1 == 2;
}

