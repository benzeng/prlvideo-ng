
undefined8 *
FUN_100373e60(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (param_3 == (undefined8 *)0x0) {
    return param_4;
  }
  puVar1 = (uint *)*param_2;
LAB_100373e96:
  puVar4 = (uint *)param_3[4];
  puVar5 = puVar4;
  for (puVar6 = puVar1; puVar2 = puVar1, puVar6 != (uint *)param_2[1]; puVar6 = puVar6 + 1) {
    if ((uint *)param_3[5] == puVar5) goto LAB_100373f40;
    if (*puVar5 < *puVar6) goto LAB_100373f40;
    if (*puVar6 < *puVar5) break;
    puVar5 = puVar5 + 1;
  }
  do {
    if (puVar4 == (uint *)param_3[5]) break;
    if ((uint *)param_2[1] == puVar2) goto LAB_100373f50;
    if (*puVar2 < *puVar4) goto LAB_100373f50;
    if (*puVar4 < *puVar2) break;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  } while( true );
  if ((uint *)param_2[0x18] != (uint *)param_2[0x19]) {
    puVar4 = (uint *)param_3[0x1c];
    puVar6 = (uint *)param_2[0x18];
    do {
      if ((uint *)param_3[0x1d] == puVar4) goto LAB_100373f40;
      if (*puVar4 < *puVar6) goto LAB_100373f40;
      if (*puVar6 < *puVar4) break;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    } while ((uint *)param_2[0x19] != puVar6);
  }
LAB_100373f50:
  puVar3 = (undefined8 *)*param_3;
  param_4 = param_3;
joined_r0x000100373f56:
  param_3 = puVar3;
  if (param_3 == (undefined8 *)0x0) {
    return param_4;
  }
  goto LAB_100373e96;
LAB_100373f40:
  puVar3 = (undefined8 *)param_3[1];
  goto joined_r0x000100373f56;
}

