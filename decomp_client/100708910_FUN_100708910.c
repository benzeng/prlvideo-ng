
undefined8 * FUN_100708910(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 0xc) == *(int *)(lVar1 + 8)) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    FUN_1007170a0(param_1,lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8);
  }
  return param_1;
}

