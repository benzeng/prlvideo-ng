
bool FUN_100ac4940(long param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100acd480(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 8) {
    uVar2 = FUN_100acd450(*(undefined8 *)(param_1 + 0x10));
    if (0x806 < uVar2) {
      return true;
    }
  }
  return *(int *)(*(long *)(param_1 + 0xaf0) + 4) != 0;
}

