
undefined8 * FUN_100378250(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x38) + 0x18);
  if (((lVar1 == 0) || (*(int *)(lVar1 + 4) == 0)) ||
     (*(long *)(*(long *)(param_2 + 0x38) + 0x20) == 0)) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    FUN_100323d90(param_1);
  }
  return param_1;
}

