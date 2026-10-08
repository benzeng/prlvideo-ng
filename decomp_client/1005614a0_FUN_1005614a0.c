
undefined4 * FUN_1005614a0(undefined4 *param_1,long *param_2,uint param_3)

{
  int iVar1;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  ulong local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  if (0 < *(int *)(param_2[2] + 0x14)) {
    iVar1 = 0;
    do {
      local_48 = 0xffffffff;
      local_44 = 0xffffffff;
      local_38 = 0;
      local_40 = 0;
      (**(code **)(*param_2 + 0x60))(local_60,param_2,iVar1,0,&local_48);
      if (local_58 == param_3) {
        local_78 = 0xffffffff;
        local_74 = 0xffffffff;
        local_68 = 0;
        local_70 = 0;
        (**(code **)(*param_2 + 0x60))(param_1,param_2,iVar1,0,&local_78);
        return param_1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_2[2] + 0x14));
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return param_1;
}

