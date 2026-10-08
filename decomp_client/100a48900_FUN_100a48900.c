
bool FUN_100a48900(long param_1,undefined4 *param_2,void *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined4 *puVar3;
  bool bVar4;
  ulong uVar5;
  
  plVar2 = *(long **)(param_1 + 0x10);
  puVar3 = (undefined4 *)*plVar2;
  uVar1 = param_2[1];
  uVar5 = (ulong)uVar1;
  bVar4 = uVar5 + 8 + (long)puVar3 <= *(ulong *)(param_1 + 0x18);
  if (bVar4) {
    *puVar3 = *param_2;
    puVar3[1] = uVar1;
    *plVar2 = (long)(puVar3 + 2);
    _memcpy(puVar3 + 2,param_3,uVar5);
    *plVar2 = *plVar2 + uVar5;
  }
  return bVar4;
}

