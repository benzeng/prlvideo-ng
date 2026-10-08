
void FUN_10090e00a(long param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined8 local_20;
  
  local_20 = param_3;
  if (param_3 == 0) {
    local_20 = FUN_10090c4db(param_1);
    FUN_10090dd21(param_1,local_20);
    *(long *)(param_1 + 0x28) = local_20;
  }
  FUN_10090da53(param_1,param_2,0,local_20,0xffffffff,param_4,0);
  return;
}

