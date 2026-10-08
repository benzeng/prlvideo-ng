
long FUN_100ae8410(undefined8 *param_1,long param_2,long param_3)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  
  iVar6 = (int)((ulong)(param_3 - param_2) >> 2);
  if (iVar6 != 0) {
    puVar1 = (uint *)*param_1;
    lVar2 = *(long *)(puVar1 + 4);
    uVar4 = param_2 - ((long)puVar1 + lVar2);
    if ((puVar1[2] & 0x7fffffff) == 0) {
      lVar5 = (long)(int)(uVar4 >> 2);
    }
    else {
      if (1 < *puVar1) {
        FUN_1000bf180(param_1,puVar1[1],puVar1[2] & 0x7fffffff,0);
        puVar1 = (uint *)*param_1;
        lVar2 = *(long *)(puVar1 + 4);
      }
      iVar3 = (int)(uVar4 >> 2);
      lVar5 = (long)iVar3;
      _memmove((void *)((long)puVar1 + lVar5 * 4 + lVar2),
               (void *)((long)puVar1 + (iVar6 + lVar5) * 4 + lVar2),
               (long)(int)(puVar1[1] - (iVar3 + iVar6)) << 2);
      puVar1 = (uint *)*param_1;
      puVar1[1] = puVar1[1] - iVar6;
      lVar2 = *(long *)(puVar1 + 4);
    }
    param_2 = (long)puVar1 + lVar5 * 4 + lVar2;
  }
  return param_2;
}

