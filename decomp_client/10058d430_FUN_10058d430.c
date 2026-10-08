
undefined8 * FUN_10058d430(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x48) + 0x50);
  if (((lVar1 == 0) || (*(int *)(lVar1 + 4) == 0)) ||
     (*(long *)(*(long *)(param_2 + 0x48) + 0x58) == 0)) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    FUN_10015aab0(param_1);
  }
  return param_1;
}

