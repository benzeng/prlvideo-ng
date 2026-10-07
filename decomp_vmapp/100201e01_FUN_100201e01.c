
undefined4 FUN_100201e01(undefined8 param_1,long param_2)

{
  undefined4 local_1c;
  
  if ((*(uint *)(param_2 + 0x58) >> 7 & 1) == 0) {
    local_1c = 0;
  }
  else {
    local_1c = FUN_100201cce(param_1,param_2,*(undefined8 *)(param_2 + 0xa8));
  }
  return local_1c;
}

