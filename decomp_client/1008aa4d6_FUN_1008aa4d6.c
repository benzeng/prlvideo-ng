
undefined4 FUN_1008aa4d6(ulong param_1,ulong param_2)

{
  undefined4 local_1c;
  
  if (param_1 < param_2) {
    local_1c = 0xffffffff;
  }
  else if (param_1 == param_2) {
    local_1c = 0;
  }
  else {
    local_1c = 1;
  }
  return local_1c;
}

