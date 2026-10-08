
void FUN_1005b09f0(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  if (*(char *)(lVar2 + 0x6e) == '\0') {
    lVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
    uVar1 = *(uint *)(lVar2 + 0x50);
    if (uVar1 < 9) {
      if ((0x152U >> (uVar1 & 0x1f) & 1) != 0) {
        FUN_1005b0e20(param_1);
        return;
      }
      if (uVar1 == 0) {
        FUN_1005b0a60(param_1);
        return;
      }
      if (uVar1 == 7) {
        FUN_1005b0c60(param_1);
        return;
      }
    }
  }
  return;
}

