
void FUN_100371a70(long param_1,int param_2,void *param_3,long param_4)

{
  long *plVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  void *pvVar6;
  size_t sVar7;
  
  uVar5 = param_2 << 2;
  if (*(long *)(param_4 + 0x20) == *(long *)(param_4 + 0x28)) {
    sVar7 = (ulong)uVar5 << 2;
  }
  else {
    pvVar6 = *(void **)(param_1 + 0x12b0);
    plVar1 = (long *)(param_1 + 0x12b0);
    if ((ulong)(*(long *)(param_1 + 0x12b8) - (long)pvVar6 >> 2) < (ulong)uVar5) {
      FUN_100374a70(plVar1);
      pvVar6 = (void *)*plVar1;
    }
    sVar7 = (ulong)uVar5 << 2;
    _memcpy(pvVar6,param_3,sVar7);
    param_3 = (void *)*plVar1;
    puVar2 = *(uint **)(param_4 + 0x28);
    for (puVar3 = *(uint **)(param_4 + 0x20); puVar3 != puVar2; puVar3 = puVar3 + 5) {
      lVar4 = (ulong)*puVar3 * 0x10;
      *(uint *)((long)param_3 + lVar4) = puVar3[1];
      *(uint *)((long)param_3 + lVar4 + 4) = puVar3[2];
      *(uint *)((long)param_3 + lVar4 + 8) = puVar3[3];
      *(uint *)((long)param_3 + lVar4 + 0xc) = puVar3[4];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100371b45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c57d8)(0x8dee,sVar7,param_3,0x88e0);
  return;
}

