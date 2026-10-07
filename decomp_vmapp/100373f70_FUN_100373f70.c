
long * FUN_100373f70(long param_1,long *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  long *plVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  long *plVar12;
  
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    *param_2 = param_1 + 8;
    return (long *)(param_1 + 8);
  }
  puVar1 = (uint *)*param_3;
  puVar2 = (uint *)param_3[1];
  puVar3 = (uint *)param_3[0x19];
  puVar4 = (uint *)param_3[0x18];
  plVar5 = *(long **)(param_1 + 8);
LAB_100373fa3:
  plVar12 = plVar5;
  puVar9 = (uint *)plVar12[5];
  puVar8 = (uint *)plVar12[4];
  puVar10 = puVar1;
  for (puVar6 = puVar8; puVar7 = puVar1, puVar11 = puVar8, puVar6 != puVar9; puVar6 = puVar6 + 1) {
    if (puVar2 == puVar10) goto LAB_100374110;
    if (*puVar10 < *puVar6) goto LAB_100374110;
    if (*puVar6 < *puVar10) break;
    puVar10 = puVar10 + 1;
  }
  do {
    puVar10 = puVar1;
    puVar6 = puVar8;
    if (puVar7 == puVar2) break;
    if (puVar9 == puVar11) goto joined_r0x000100374079;
    if (*puVar11 < *puVar7) goto joined_r0x000100374079;
    if (*puVar7 < *puVar11) break;
    puVar7 = puVar7 + 1;
    puVar11 = puVar11 + 1;
  } while( true );
  puVar11 = puVar4;
  for (puVar7 = (uint *)plVar12[0x1c]; puVar7 != (uint *)plVar12[0x1d]; puVar7 = puVar7 + 1) {
    if (puVar3 == puVar11) goto LAB_100374110;
    if (*puVar11 < *puVar7) goto LAB_100374110;
    if (*puVar7 < *puVar11) break;
    puVar11 = puVar11 + 1;
  }
joined_r0x000100374079:
  do {
    puVar7 = puVar1;
    if (puVar10 == puVar2) goto joined_r0x0001003740ac;
    if (puVar9 == puVar6) goto LAB_100374120;
    if (*puVar6 < *puVar10) goto LAB_100374120;
    if (*puVar10 < *puVar6) goto joined_r0x0001003740ac;
    puVar10 = puVar10 + 1;
    puVar6 = puVar6 + 1;
  } while( true );
LAB_100374110:
  plVar5 = (long *)*plVar12;
  if ((long *)*plVar12 == (long *)0x0) {
    *param_2 = (long)plVar12;
    return plVar12;
  }
  goto LAB_100373fa3;
joined_r0x0001003740ac:
  if (puVar8 == puVar9) goto LAB_1003740d2;
  if (puVar2 == puVar7) goto LAB_100374139;
  if (*puVar7 < *puVar8) goto LAB_100374139;
  if (*puVar8 < *puVar7) goto LAB_1003740d2;
  puVar8 = puVar8 + 1;
  puVar7 = puVar7 + 1;
  goto joined_r0x0001003740ac;
LAB_1003740d2:
  if (puVar4 == puVar3) {
LAB_100374139:
    *param_2 = (long)plVar12;
    return param_2;
  }
  puVar8 = (uint *)plVar12[0x1c];
  puVar9 = puVar4;
  while ((uint *)plVar12[0x1d] != puVar8) {
    if (*puVar8 < *puVar9) break;
    if (*puVar9 < *puVar8) goto LAB_100374139;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
    if (puVar3 == puVar9) goto LAB_100374139;
  }
LAB_100374120:
  plVar5 = (long *)plVar12[1];
  if ((long *)plVar12[1] == (long *)0x0) {
    *param_2 = (long)plVar12;
    return plVar12 + 1;
  }
  goto LAB_100373fa3;
}

