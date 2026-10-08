
void FUN_10073bf10(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  uVar4 = FUN_10073b300(param_1 + 0x10);
  iVar3 = FUN_10018a9d0(uVar4);
  puVar8 = (undefined8 *)(param_1 + 0x20);
  iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 8);
  iVar2 = *(int *)(*(long *)(param_1 + 0x20) + 0xc);
  lVar6 = (long)((iVar2 + -1) - iVar1);
  for (lVar7 = (long)(iVar2 - iVar1); 0 < lVar7; lVar7 = lVar7 + -1) {
    puVar5 = (uint *)*puVar8;
    if (1 < *puVar5) {
      FUN_10073c480(puVar8,puVar5[1]);
      puVar5 = (uint *)*puVar8;
    }
    uVar4 = 0;
    if (**(long **)(puVar5 + ((int)puVar5[2] + lVar6) * 2 + 4) != 0) {
      uVar4 = *(undefined8 *)(**(long **)(puVar5 + ((int)puVar5[2] + lVar6) * 2 + 4) + 0x10);
    }
    lVar6 = lVar6 + -1;
    FUN_100d786b0(uVar4,iVar3 == 0x30000004);
  }
  return;
}

