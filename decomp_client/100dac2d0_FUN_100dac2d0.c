
undefined8 FUN_100dac2d0(undefined8 *param_1,long *param_2,undefined8 param_3,code *param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  
  pcVar3 = FUN_100dac1f0;
  if (param_4 != (code *)0x0) {
    pcVar3 = param_4;
  }
  lVar2 = *param_2;
  if (lVar2 != 0) goto LAB_100dac2fb;
  param_1 = (undefined8 *)*param_1;
  while( true ) {
    *param_2 = (long)param_1;
    if (param_1 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = (*pcVar3)(param_3,*param_1);
    if (iVar1 != 0) break;
    lVar2 = *param_2;
LAB_100dac2fb:
    param_1 = *(undefined8 **)(lVar2 + 8);
  }
  return 1;
}

