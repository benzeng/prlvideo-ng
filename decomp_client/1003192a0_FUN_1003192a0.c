
undefined8 FUN_1003192a0(long param_1,uint param_2)

{
  int *piVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar4 = *(uint **)(param_1 + 0x48);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  if (1 < *puVar4) {
    FUN_1003226a0(puVar8);
    puVar4 = (uint *)*puVar8;
  }
  puVar3 = *(uint **)(puVar4 + 4);
  puVar5 = (uint *)0x0;
  if (*(uint **)(puVar4 + 4) != (uint *)0x0) {
    do {
      while (puVar6 = puVar3, uVar7 = puVar6[6], uVar7 < param_2) {
        puVar3 = *(uint **)(puVar6 + 4);
        if (*(uint **)(puVar6 + 4) == (uint *)0x0) {
          if (puVar5 == (uint *)0x0) goto LAB_10031931e;
          uVar7 = puVar5[6];
          puVar6 = puVar5;
          goto LAB_100319319;
        }
      }
      puVar3 = *(uint **)(puVar6 + 2);
      puVar5 = puVar6;
    } while (*(uint **)(puVar6 + 2) != (uint *)0x0);
LAB_100319319:
    if (uVar7 <= param_2) goto LAB_100319325;
  }
LAB_10031931e:
  puVar6 = puVar4 + 2;
LAB_100319325:
  if (1 < *puVar4) {
    FUN_1003226a0(puVar8);
    puVar4 = (uint *)*puVar8;
  }
  uVar9 = 0;
  if (puVar6 != puVar4 + 2) {
    piVar1 = *(int **)(puVar6 + 8);
    uVar9 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = *(undefined8 *)(puVar6 + 10);
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      uVar9 = 0;
      if (piVar1[1] != 0) {
        uVar9 = uVar2;
      }
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        operator_delete(piVar1);
      }
    }
  }
  return uVar9;
}

