
bool FUN_100088d60(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = BootDevice::getBootingNumber();
    uVar2 = BootDevice::getBootingNumber();
    bVar3 = uVar1 < uVar2;
  }
  return bVar3;
}

