
void FUN_100108040(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  puVar4 = *(uint **)(param_1 + 0x18);
  puVar8 = (undefined8 *)(param_1 + 0x18);
  uVar7 = (ulong)(int)(puVar4[3] - puVar4[2]);
  lVar5 = (long)(int)((puVar4[3] - 1) - puVar4[2]);
  do {
    if ((long)uVar7 < 1) {
      return;
    }
    if (1 < *puVar4) {
      FUN_100108f90(puVar8,puVar4[1]);
      puVar4 = (uint *)*puVar8;
    }
    plVar1 = *(long **)(puVar4 + ((int)puVar4[2] + lVar5) * 2 + 4);
    plVar2 = *(long **)(*plVar1 + 0x10);
    lVar3 = *plVar2;
    lVar6 = 0;
    if (lVar3 != 0) {
      lVar6 = *(long *)(lVar3 + 0x10);
    }
    uVar7 = uVar7 - 1;
    lVar5 = lVar5 + -1;
  } while (lVar6 != param_2);
  plVar2 = plVar2 + 2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  lVar5 = *(long *)(*plVar1 + 0x10);
  if ((*(char *)(lVar5 + 0x14) != '\0') && (*(int *)(lVar5 + 0x10) == 0)) {
    FUN_100108920(puVar8,uVar7 & 0xffffffff);
    return;
  }
  return;
}

