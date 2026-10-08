
undefined8 FUN_100a48af0(long param_1,undefined4 *param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined2 *puVar9;
  long *plVar10;
  undefined2 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  
  uVar2 = param_2[1];
  uVar17 = uVar2 >> 1;
  uVar18 = (ulong)uVar17;
  plVar8 = operator_new(0x28);
  uVar3 = *param_2;
  *(undefined4 *)(plVar8 + 1) = 1;
  *plVar8 = (long)&PTR_FUN_1022810a8;
  *(undefined4 *)((long)plVar8 + 0xc) = uVar3;
  if (uVar2 < 0x16) {
    *(char *)(plVar8 + 2) = (char)uVar17 * '\x02';
    puVar9 = (undefined2 *)((long)plVar8 + 0x12);
    if (uVar17 == 0) goto LAB_100a48c13;
  }
  else {
    uVar12 = (ulong)(uVar17 + 8 & 0xfffffff8);
    puVar9 = operator_new(uVar12 * 2);
    plVar8[4] = (long)puVar9;
    plVar8[2] = uVar12 | 1;
    plVar8[3] = uVar18;
  }
  puVar11 = puVar9;
  uVar12 = uVar18;
  if (uVar17 != 0) {
    uVar16 = 0;
    if (uVar17 != (uVar17 & 0xf)) {
      uVar16 = uVar18 - (uVar17 & 0xf);
      uVar12 = uVar18 - uVar16;
      puVar11 = puVar9 + uVar16;
      puVar1 = param_3 + uVar16;
      puVar15 = (undefined8 *)(puVar9 + 8);
      puVar13 = (undefined8 *)(param_3 + 8);
      lVar14 = uVar18 - (uVar18 & 0xf);
      do {
        uVar5 = puVar13[-1];
        uVar6 = *puVar13;
        uVar7 = puVar13[1];
        puVar15[-2] = puVar13[-2];
        puVar15[-1] = uVar5;
        *puVar15 = uVar6;
        puVar15[1] = uVar7;
        puVar15 = puVar15 + 4;
        puVar13 = puVar13 + 4;
        lVar14 = lVar14 + -0x10;
        param_3 = puVar1;
      } while (lVar14 != 0);
    }
    if (uVar18 == uVar16) goto LAB_100a48c13;
  }
  do {
    *puVar11 = *param_3;
    puVar11 = puVar11 + 1;
    param_3 = param_3 + 1;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
LAB_100a48c13:
  puVar9[uVar18] = 0;
  plVar4 = *(long **)(param_1 + 0x10);
  plVar10 = operator_new(0x18);
  plVar10[2] = (long)plVar8;
  LOCK();
  *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  UNLOCK();
  plVar10[1] = (long)plVar4;
  lVar14 = *plVar4;
  *plVar10 = lVar14;
  *(long **)(lVar14 + 8) = plVar10;
  *plVar4 = (long)plVar10;
  plVar4[2] = plVar4[2] + 1;
  LOCK();
  plVar4 = plVar8 + 1;
  lVar14 = *plVar4;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)lVar14 == 1) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return 1;
}

