
void FUN_100551130(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *(int *)(param_2 + 4) - 1;
  if (*(byte *)(param_1 + 0x10) < uVar3) {
    uVar3 = (uint)*(byte *)(param_1 + 0x10);
  }
  lVar4 = (long)(int)uVar3;
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(lVar1 + lVar4 * 8);
  uVar5 = 0;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = param_2;
    uVar5 = *(undefined8 *)(lVar1 + lVar4 * 8);
  }
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(long *)(lVar1 + lVar4 * 8) = param_2;
  if (*(int *)(param_1 + 0x28) < (int)uVar3) {
    *(uint *)(param_1 + 0x28) = uVar3;
  }
  return;
}

