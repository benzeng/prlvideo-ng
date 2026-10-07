
bool FUN_100506b70(long param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  undefined2 *puVar4;
  bool bVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar3 + 4);
  bVar5 = *(uint *)(param_2 + 1) < uVar2 + 2;
  if (!bVar5) {
    puVar4 = (undefined2 *)*param_2;
    *puVar4 = (short)uVar2;
    _memcpy(puVar4 + 1,(void *)(*(long *)(lVar3 + 0x10) + lVar3),(long)*(int *)(lVar3 + 4));
    *(uint *)(param_2 + 1) = (int)param_2[1] + (-2 - (uVar2 & 0xffff));
    *param_2 = (ulong)(uVar2 & 0xffff) + 2 + *param_2;
    puVar1 = (uint *)(*(long *)(param_1 + 8) + 0x34);
    *puVar1 = *puVar1 | 1;
  }
  return bVar5;
}

