
void FUN_100aff6d0(void)

{
  long lVar1;
  
  lVar1 = CHostHardwareInfoBase::getOsVersion();
  if (lVar1 != 0) {
    FUN_100aff710(lVar1,0);
    return;
  }
  FUN_100df99c0("","pvsHostInfo",0,"CDspHostInfo::GetOsVersion() : CHwOsVersion is NULL!");
  return;
}

