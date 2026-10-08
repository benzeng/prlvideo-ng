
bool FUN_1001b4060(long param_1)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = false;
    lVar1 = ___dynamic_cast(param_1,PTR_typeinfo_1021e16d8,PTR_typeinfo_1021e1668,0);
    if (lVar1 != 0) {
      iVar2 = CHwUsbDevice::getUsbType();
      bVar3 = true;
      if (iVar2 != 10) {
        iVar2 = CHwUsbDevice::getUsbType();
        bVar3 = iVar2 == 0xb;
      }
    }
  }
  return bVar3;
}

