
undefined8 * FUN_100230920(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  if (((*(long *)(param_2 + 0x18) != 0) && (*(int *)(*(long *)(param_2 + 0x18) + 4) != 0)) &&
     (*(long *)(param_2 + 0x20) != 0)) {
    iVar1 = FUN_100319ae0();
    if (iVar1 == 2) {
      local_20[0] = 1;
      FUN_100129840(param_1,local_20);
    }
  }
  local_24 = 2;
  FUN_100129840(param_1,&local_24);
  local_28 = 3;
  FUN_100129840(param_1,&local_28);
  local_2c = 4;
  FUN_100129840(param_1,&local_2c);
  local_30 = 5;
  FUN_100129840(param_1,&local_30);
  local_34 = 6;
  FUN_100129840(param_1,&local_34);
  local_38 = 7;
  FUN_100129840(param_1,&local_38);
  return param_1;
}

