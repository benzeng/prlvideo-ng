
void FUN_100964522(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 local_18;
  undefined8 local_10;
  
  if ((param_1 != 0) && ((*(uint *)(param_1 + 0x38) >> 3 & 1) == 0)) {
    if ((((*(uint *)(param_1 + 0x38) ^ 1) & 1) == 0) && ((*(uint *)(param_1 + 0x38) >> 1 & 1) == 0))
    {
      FUN_100963097(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      if (*(int *)(param_1 + 0x50) != 0) {
        FUN_100964360(param_1);
      }
      if (*(long *)(param_1 + 0x60) == 0) {
        local_10 = 0;
        local_18 = 0;
      }
      else {
        local_18 = **(undefined8 **)(param_1 + 0x60);
        local_10 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 8);
      }
      FUN_1009641b7(param_1,param_2,local_18,local_10,param_3,param_4);
    }
  }
  return;
}

