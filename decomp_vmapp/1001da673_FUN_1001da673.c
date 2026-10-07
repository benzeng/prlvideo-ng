
void FUN_1001da673(long param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined8 local_20;
  
  local_20 = param_3;
  if (param_3 == 0) {
    local_20 = FUN_1001d8bb3(param_1);
    FUN_1001da3f9(param_1,local_20);
    *(long *)(param_1 + 0x28) = local_20;
  }
  FUN_1001da12b(param_1,param_2,0,local_20,param_4,0xffffffff,0);
  return;
}

