
int * FUN_100561370(int *param_1,long *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  if (-1 < param_4) {
    local_48 = 0xffffffff;
    local_44 = 0xffffffff;
    local_38 = 0;
    local_40 = 0;
    iVar3 = (**(code **)(*param_2 + 0x80))(param_2,&local_48);
    if ((-1 < param_3) && (param_4 < iVar3)) {
      local_60 = 0xffffffff;
      local_5c = 0xffffffff;
      local_50 = 0;
      local_58 = 0;
      iVar3 = (**(code **)(*param_2 + 0x78))(param_2,&local_60);
      if (param_3 < iVar3) {
        iVar3 = *(int *)(param_2[3] + 0xc);
        iVar1 = *(int *)(param_2[3] + 8);
        local_78 = 0xffffffff;
        local_74 = 0xffffffff;
        local_68 = 0;
        local_70 = 0;
        iVar4 = (**(code **)(*param_2 + 0x78))(param_2,&local_78);
        if (iVar3 - iVar1 == iVar4) {
          uVar2 = **(uint **)(param_2[3] + 0x10 +
                             ((long)param_3 + (long)*(int *)(param_2[3] + 8)) * 8);
          *param_1 = param_3;
          param_1[1] = param_4;
          *(ulong *)(param_1 + 2) = (ulong)uVar2;
          *(long **)(param_1 + 4) = param_2;
          return param_1;
        }
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

