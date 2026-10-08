
undefined8 * FUN_10036bf70(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x40) + 0x18);
  if (((lVar1 == 0) || (*(int *)(lVar1 + 4) == 0)) ||
     (*(long *)(*(long *)(param_2 + 0x40) + 0x20) == 0)) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    FUN_100188480(param_1);
  }
  return param_1;
}

