
void FUN_1005513c0(long param_1,undefined2 *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar3 = *(int *)(param_2 + 2);
  uVar5 = (ulong)(uint)(*(int *)(param_1 + 0xc) * iVar3);
  if ((long)param_2 + uVar5 != (ulong)*(uint *)(param_1 + 8) + *(long *)(param_1 + 0x18)) {
    *(short *)(uVar5 + 2 + (long)param_2) = (short)iVar3;
    iVar3 = *(int *)(param_2 + 2);
  }
  *param_2 = 0;
  uVar4 = iVar3 - 1;
  if (*(byte *)(param_1 + 0x10) < uVar4) {
    uVar4 = (uint)*(byte *)(param_1 + 0x10);
  }
  lVar6 = (long)(int)uVar4;
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(lVar1 + lVar6 * 8);
  uVar7 = 0;
  if (lVar2 != 0) {
    *(undefined2 **)(lVar2 + 8) = param_2;
    uVar7 = *(undefined8 *)(lVar1 + lVar6 * 8);
  }
  *(undefined8 *)(param_2 + 8) = uVar7;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined2 **)(lVar1 + lVar6 * 8) = param_2;
  if (*(int *)(param_1 + 0x28) < (int)uVar4) {
    *(uint *)(param_1 + 0x28) = uVar4;
  }
  return;
}

