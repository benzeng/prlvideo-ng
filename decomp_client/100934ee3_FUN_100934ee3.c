
undefined4 FUN_100934ee3(long param_1,uint param_2)

{
  undefined4 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else if ((*(uint *)(param_1 + 0x58) & param_2) == 0) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}

