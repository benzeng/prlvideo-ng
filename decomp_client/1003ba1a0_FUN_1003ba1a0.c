
bool FUN_1003ba1a0(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = BootDevice::getBootingNumber();
  uVar2 = BootDevice::getBootingNumber();
  return uVar1 < uVar2;
}

