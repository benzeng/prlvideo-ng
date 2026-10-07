
void FUN_100551320(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  iVar2 = *(int *)(param_2 + 4);
  uVar5 = iVar2 - 1;
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 < uVar5) {
    uVar5 = (uint)bVar1;
  }
  if (*(long *)(param_2 + 8) == 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)(int)uVar5 * 8) =
         *(undefined8 *)(param_2 + 0x10);
  }
  else {
    *(undefined8 *)(*(long *)(param_2 + 8) + 0x10) = *(undefined8 *)(param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(param_2 + 0x10) + 8) = *(undefined8 *)(param_2 + 8);
  }
  if ((*(uint *)(param_1 + 0x28) == uVar5) &&
     (*(long *)(*(long *)(param_1 + 0x20) + (long)(int)uVar5 * 8) == 0)) {
    uVar7 = -iVar2;
    uVar5 = ~(uint)bVar1;
    if (~(uint)bVar1 < uVar7) {
      uVar5 = uVar7;
    }
    lVar4 = (long)(int)~uVar5;
    lVar3 = (long)(int)(-2 - uVar5);
    do {
      lVar6 = lVar3;
      if (lVar4 < 1) break;
      lVar4 = lVar4 + -1;
      lVar3 = lVar6 + -1;
    } while (*(long *)(*(long *)(param_1 + 0x20) + lVar6 * 8) == 0);
    *(int *)(param_1 + 0x28) = (int)lVar6;
  }
  return;
}

