
void FUN_100303e30(long param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 in_RAX;
  undefined8 local_38;
  
  if (0 < param_2) {
    local_38 = in_RAX;
    do {
      (*(code *)DAT_1011c4a88[0x285])(*DAT_1011c4a88,1,&local_38);
      local_38 = CONCAT44((int)local_38,(int)local_38);
      uVar1 = 0;
      if ((int)local_38 != 0) {
        FUN_1003070c0(*(long *)(param_1 + 0x30) + 0x2060,(long)&local_38 + 4);
        uVar1 = (int)local_38;
      }
      *param_3 = uVar1;
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

