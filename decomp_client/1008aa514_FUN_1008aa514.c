
undefined8 * FUN_1008aa514(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *local_30;
  undefined8 *local_10;
  
  if (param_1 == (undefined8 *)0x0) {
    local_30 = (undefined8 *)0x0;
  }
  else {
    for (local_10 = *(undefined8 **)*param_1; (undefined8 *)*param_1 != local_10;
        local_10 = (undefined8 *)*local_10) {
      iVar1 = (*(code *)param_1[2])(local_10[2],param_2);
      if (-1 < iVar1) break;
    }
    local_30 = local_10;
  }
  return local_30;
}

