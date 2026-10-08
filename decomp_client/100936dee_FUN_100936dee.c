
undefined4 FUN_100936dee(long param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined4 local_30;
  
  iVar1 = FUN_100936db5(param_1,param_2);
  if (iVar1 == 0) {
    if (((((byte)(param_3 >> 1) & 1) == 1) && ((*(uint *)(param_1 + 0x58) >> 1 & 1) != 0)) ||
       ((((byte)param_3 & 1) == 1 && ((*(uint *)(param_1 + 0x58) >> 2 & 1) != 0)))) {
      local_30 = 1;
    }
    else if (*(long *)(param_1 + 0x70) == param_2) {
      local_30 = 0;
    }
    else if ((**(int **)(param_1 + 0x70) == 1) &&
            (*(int *)(*(long *)(param_1 + 0x70) + 0xa0) == 0x2d)) {
      local_30 = 1;
    }
    else if ((**(int **)(param_1 + 0x70) == 5) ||
            (*(int *)(*(long *)(param_1 + 0x70) + 0xa0) == 0x2d)) {
      local_30 = FUN_100936dee(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
    }
    else {
      local_30 = FUN_100935332(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
    }
  }
  else {
    local_30 = 0;
  }
  return local_30;
}

