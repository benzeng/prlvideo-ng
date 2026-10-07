
ulong * FUN_100114930(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  
  lVar1 = *param_1;
  puVar3 = (ulong *)(lVar1 + *(long *)(lVar1 + 0x10));
  if ((long)*(int *)(lVar1 + 4) == 0) {
    return puVar3;
  }
  if ((*puVar3 <= param_2) &&
     (puVar4 = puVar3 + (long)*(int *)(lVar1 + 4) * 4 + -4, param_2 <= *puVar4)) {
    puVar5 = (ulong *)(*(long *)(lVar1 + 0x10) + 0x20 + lVar1);
    while (puVar5 < puVar4) {
      uVar2 = ((long)puVar4 - (long)puVar3 >> 5) - ((long)puVar4 - (long)puVar3 >> 0x3f) &
              0xffffffffffffffe;
      puVar5 = puVar3 + uVar2 * 2;
      if (param_2 < puVar3[uVar2 * 2]) {
        puVar4 = puVar3 + uVar2 * 2;
        puVar5 = puVar3;
      }
      puVar3 = puVar5;
      puVar5 = puVar3 + 4;
    }
    return puVar3;
  }
  return (ulong *)((long)*(int *)(lVar1 + 4) * 0x20 + *(long *)(lVar1 + 0x10) + lVar1);
}

