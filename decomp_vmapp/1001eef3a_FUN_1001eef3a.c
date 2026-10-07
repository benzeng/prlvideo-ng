
undefined4 FUN_1001eef3a(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 local_34;
  undefined8 local_10;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    local_34 = 0xffffffff;
  }
  else {
    local_10 = FUN_1001eeee4(param_1,param_2);
    if (local_10 == 0) {
      local_10 = FUN_1001eed90(param_1,param_2);
    }
    if (local_10 == 0) {
      local_34 = 0xffffffff;
    }
    else {
      iVar1 = FUN_1001eafb8(*(undefined8 *)(local_10 + 8),param_3);
      if (iVar1 == -1) {
        local_34 = 0xffffffff;
      }
      else {
        local_34 = 0;
      }
    }
  }
  return local_34;
}

