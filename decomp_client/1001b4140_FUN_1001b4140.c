
bool FUN_1001b4140(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    bVar3 = false;
  }
  else {
    lVar2 = FUN_10015a340();
    lVar2 = FUN_100113a40(*(undefined8 *)(lVar2 + 0x180),param_2);
    if (lVar2 == 0) {
      bVar3 = false;
    }
    else {
      iVar1 = CHwUsbDevice::getUsbType();
      bVar3 = iVar1 == 0x3eb;
    }
  }
  return bVar3;
}

