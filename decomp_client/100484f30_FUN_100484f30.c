
undefined8 * FUN_100484f30(undefined8 *param_1,long param_2)

{
  undefined8 local_38;
  undefined8 local_30 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  local_30[0] = *(undefined8 *)(*(long *)(param_2 + 0x68) + 0x40);
  FUN_100359270(param_1,local_30);
  local_38 = *(undefined8 *)(*(long *)(param_2 + 0x68) + 0x38);
  FUN_100359270(param_1,&local_38);
  return param_1;
}

