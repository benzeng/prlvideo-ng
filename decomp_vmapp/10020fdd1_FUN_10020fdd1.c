
undefined4 FUN_10020fdd1(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_2c;
  
  if ((*(uint *)(param_2 + 0x40) >> 4 & 1) == 0) {
    local_2c = FUN_10020d3ad(param_1,0,param_3,param_4,0,1,0,0);
  }
  else {
    local_2c = FUN_10020d3ad(param_1,0,param_3,param_4,param_2 + 0x30,1,1,0);
  }
  return local_2c;
}

