
bool FUN_10034d070(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  
  if ((*(char *)(param_1 + 0x30) == '\0') || (bVar3 = true, *(char *)(param_1 + 0x31) == '\0')) {
    uVar1 = *(uint *)(param_1 + 0x34);
    if ((uVar1 & 0x105) != 0) {
      cVar2 = FUN_10034c810(param_1);
      if (cVar2 != '\0') {
        return true;
      }
      uVar1 = *(uint *)(param_1 + 0x34);
    }
    bVar3 = (uVar1 & 0x38) != 0;
  }
  return bVar3;
}

