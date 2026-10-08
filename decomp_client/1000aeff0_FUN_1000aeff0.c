
void FUN_1000aeff0(long param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_1000a9690(param_2);
  iVar2 = FUN_1000a97b0(param_1,2);
  if (param_3 == '\0') {
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x28) = *(byte *)(lVar1 + 0x28) & 0xfd;
    }
    if (0 < iVar2) {
      iVar2 = FUN_1000a97b0(param_1,2);
      if (iVar2 == 0) {
        FUN_10005a280(param_1 + 0x95);
        return;
      }
    }
  }
  else {
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x28) = *(byte *)(lVar1 + 0x28) | 2;
    }
    if (iVar2 == 0) {
      FUN_10005a0e0(param_1 + 0x95);
      return;
    }
  }
  return;
}

