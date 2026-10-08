
int FUN_1009373c5(undefined8 param_1,long param_2)

{
  undefined4 local_2c;
  undefined4 local_c;
  
  local_2c = FUN_100936d13(param_1,param_2);
  if (local_2c == 0) {
    if ((*(uint *)(param_2 + 0x58) >> 1 & 1) == 0) {
      local_c = FUN_10093718f(param_1,param_2);
    }
    else {
      local_c = FUN_100936f6a(param_1,param_2);
    }
    local_2c = local_c;
  }
  return local_2c;
}

