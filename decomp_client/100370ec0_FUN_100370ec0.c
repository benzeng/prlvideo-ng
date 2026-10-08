
undefined8 * FUN_100370ec0(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (-1 < param_3) {
    lVar1 = *(long *)(param_2 + 0x10);
    if (param_3 < *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8)) {
      puVar2 = *(undefined8 **)(lVar1 + 0x10 + ((long)*(int *)(lVar1 + 8) + (long)param_3) * 8);
      piVar3 = (int *)*puVar2;
      uVar4 = puVar2[1];
      *param_1 = piVar3;
      param_1[1] = uVar4;
      if (piVar3 == (int *)0x0) {
        return param_1;
      }
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      return param_1;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  return param_1;
}

