
undefined8 * FUN_10023f9f0(undefined8 *param_1,long param_2)

{
  undefined4 local_24;
  undefined4 local_20 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  if (*(int *)(param_2 + 0x30) == 0) {
    local_20[0] = 0;
    FUN_100129840(param_1,local_20);
  }
  else {
    local_24 = 1;
    FUN_100129840(param_1,&local_24);
  }
  return param_1;
}

