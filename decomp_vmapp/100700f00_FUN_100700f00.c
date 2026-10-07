
undefined8 FUN_100700f00(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = _malloc(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    return 0xffffffff;
  }
  *puVar3 = param_2;
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    *param_1 = (long)puVar3;
    param_1[1] = (long)puVar3;
    puVar3[2] = 0;
  }
  else {
    if ((int)param_1[3] == 1) {
      puVar3[2] = 0;
      puVar3[1] = puVar4;
      puVar4[2] = puVar3;
      *param_1 = (long)puVar3;
      return 0;
    }
    if ((int)param_1[3] == 2) {
      lVar1 = param_1[1];
      puVar3[2] = lVar1;
      puVar3[1] = 0;
      if (lVar1 != 0) {
        *(undefined8 **)(lVar1 + 8) = puVar3;
      }
      param_1[1] = (long)puVar3;
      return 0;
    }
    do {
      iVar2 = (*(code *)param_1[2])(param_2,*puVar4);
      if (iVar2 < 0) {
        if (puVar4 == (undefined8 *)*param_1) {
          *param_1 = (long)puVar3;
          puVar3[2] = 0;
        }
        else {
          lVar1 = puVar4[2];
          *(undefined8 **)(lVar1 + 8) = puVar3;
          puVar3[2] = lVar1;
        }
        puVar4[2] = puVar3;
        puVar3[1] = puVar4;
        return 0;
      }
      puVar4 = (undefined8 *)puVar4[1];
    } while (puVar4 != (undefined8 *)0x0);
    lVar1 = param_1[1];
    *(undefined8 **)(lVar1 + 8) = puVar3;
    puVar3[2] = lVar1;
    param_1[1] = (long)puVar3;
  }
  puVar3[1] = 0;
  return 0;
}

