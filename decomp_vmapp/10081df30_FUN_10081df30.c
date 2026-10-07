
undefined8 FUN_10081df30(long param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 == 0) {
    if (0 < param_2) {
      if (DAT_1011c0650 == '\0') {
        DAT_1011c0650 = '\x01';
      }
      if (DAT_1011c0658 != (code *)0x0) {
        if (DAT_1011c0651 == '\0') {
          DAT_1011c0651 = '\x01';
        }
        (*DAT_1011c0658)(0,param_2,param_3,param_4,0);
      }
      uVar1 = (*(code *)PTR_FUN_1011ab588)((long)param_2,param_3,param_4);
      if (DAT_1011c0658 != (code *)0x0) {
        (*DAT_1011c0658)(uVar1,param_2,param_3,param_4,1);
      }
    }
  }
  else {
    uVar1 = 0;
    if (0 < param_2) {
      if (DAT_1011c0660 != (code *)0x0) {
        (*DAT_1011c0660)(param_1,0,param_2,param_3,param_4,0);
      }
      uVar1 = (*(code *)PTR_FUN_1011ab598)(param_1,(long)param_2,param_3,param_4);
      if (DAT_1011c0660 != (code *)0x0) {
        (*DAT_1011c0660)(param_1,uVar1,param_2,param_3,param_4,1);
      }
    }
  }
  return uVar1;
}

