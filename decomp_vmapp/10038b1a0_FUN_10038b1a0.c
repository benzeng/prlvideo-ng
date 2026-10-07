
void FUN_10038b1a0(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  ulong uVar5;
  
  iVar3 = **(int **)(param_1 + 0xd0);
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)(*(long *)(*(int **)(param_1 + 0xd0) + 2) + 8);
    do {
      if (*(long *)(puVar4 + -2) == param_2) {
        puVar1 = *(ulong **)(param_1 + 0xd8);
        lVar2 = *(long *)puVar1[1];
        uVar5 = *puVar1 | *(ulong *)(lVar2 + 0x3058);
        *puVar1 = uVar5;
        *puVar1 = uVar5 | *(ulong *)(lVar2 + 0x3070);
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

