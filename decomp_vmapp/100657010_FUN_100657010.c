
void FUN_100657010(void)

{
  long lVar1;
  
  lVar1 = CHostHardwareInfoBase::getOsVersion();
  if (lVar1 != 0) {
    FUN_100657050(lVar1,0);
    return;
  }
  FUN_1008e3970("","pvsHostInfo",0,"CDspHostInfo::GetOsVersion() : CHwOsVersion is NULL!");
  return;
}

