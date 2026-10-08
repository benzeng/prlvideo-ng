
int * FUN_100552270(int *param_1,long *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  if ((-1 < param_4) && (param_2[2] != 0)) {
    local_40 = 0xffffffff;
    local_3c = 0xffffffff;
    local_30 = 0;
    local_38 = 0;
    iVar1 = (**(code **)(*param_2 + 0x80))(param_2,&local_40);
    if ((-1 < param_3) && (param_4 < iVar1)) {
      local_58 = 0xffffffff;
      local_54 = 0xffffffff;
      local_48 = 0;
      local_50 = 0;
      iVar1 = (**(code **)(*param_2 + 0x78))(param_2,&local_58);
      if (param_3 < iVar1) {
        *param_1 = param_3;
        param_1[1] = param_4;
        *(long *)(param_1 + 2) = (long)param_3;
        *(long **)(param_1 + 4) = param_2;
        return param_1;
      }
    }
  }
  *param_1 = -1;
  param_1[1] = -1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}

