
undefined8 * FUN_00410600(undefined8 *param_1,long param_2,ulong param_3)

{
  char *__s2;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = param_3;
  param_1[8] = param_2;
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x38) = param_1;
  }
  else {
    puVar2 = puVar4;
    if (param_3 < (ulong)puVar4[3]) {
      param_1[6] = puVar4;
      *(undefined8 **)(param_2 + 0x38) = param_1;
    }
    else {
      do {
        puVar5 = puVar2;
        puVar2 = (undefined8 *)puVar5[6];
        if (puVar2 == (undefined8 *)0x0) break;
      } while ((ulong)puVar2[3] <= param_3);
      param_1[6] = puVar2;
      puVar5[6] = param_1;
    }
    __s2 = (char *)*param_1;
    puVar2 = puVar4;
    puVar5 = (undefined8 *)0x0;
    do {
      puVar3 = puVar2;
      iVar1 = strcmp((char *)*puVar3,__s2);
      if (iVar1 == 0) {
        if ((ulong)puVar3[3] <= param_3) goto LAB_0041070a;
        if (puVar5 != (undefined8 *)0x0) {
          puVar5[5] = puVar3[5];
        }
        goto LAB_00410680;
      }
      puVar2 = (undefined8 *)puVar3[5];
      puVar5 = puVar3;
    } while ((undefined8 *)puVar3[5] != (undefined8 *)0x0);
    puVar3 = (undefined8 *)0x0;
LAB_00410680:
    param_1[4] = puVar3;
    puVar2 = (undefined8 *)0x0;
    do {
      puVar5 = puVar4;
      if (param_3 < (ulong)puVar5[3]) {
        param_1[5] = puVar5;
        if (puVar2 == (undefined8 *)0x0) {
          return param_1;
        }
        goto LAB_004106b4;
      }
      puVar4 = (undefined8 *)puVar5[5];
      puVar2 = puVar5;
    } while ((undefined8 *)puVar5[5] != (undefined8 *)0x0);
    param_1[5] = 0;
LAB_004106b4:
    puVar2[5] = param_1;
  }
  return param_1;
  while ((ulong)puVar3[3] <= param_3) {
LAB_0041070a:
    puVar4 = puVar3;
    puVar3 = (undefined8 *)puVar4[4];
    if (puVar3 == (undefined8 *)0x0) break;
  }
  param_1[4] = puVar3;
  puVar4[4] = param_1;
  return param_1;
}

