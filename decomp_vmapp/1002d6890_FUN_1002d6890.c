
void FUN_1002d6890(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  *(undefined4 *)(param_1 + 0x858) = 0xffffffff;
  uVar3 = 0xffffffff;
  lVar4 = 0;
  do {
    lVar2 = *(long *)(param_1 + 0x48 + lVar4 * 8);
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x108);
      if (uVar1 <= uVar3) {
        uVar3 = uVar1;
      }
      *(uint *)(param_1 + 0x858) = uVar3;
    }
    lVar2 = *(long *)(param_1 + 0x50 + lVar4 * 8);
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x108);
      if (uVar1 <= uVar3) {
        uVar3 = uVar1;
      }
      *(uint *)(param_1 + 0x858) = uVar3;
    }
    lVar4 = lVar4 + 2;
  } while (lVar4 != 0xfe);
  return;
}

