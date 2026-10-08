
undefined8 FUN_100bf3540(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (0 < param_1) {
    if (DAT_102316040 == '\0') {
      DAT_102316040 = '\x01';
    }
    if (DAT_102316048 != (code *)0x0) {
      if (DAT_102316041 == '\0') {
        DAT_102316041 = '\x01';
      }
      (*DAT_102316048)(0,param_1,param_2,param_3,0);
    }
    uVar1 = (*(code *)PTR_FUN_102305358)((long)param_1,param_2,param_3);
    if (DAT_102316048 != (code *)0x0) {
      (*DAT_102316048)(uVar1,param_1,param_2,param_3,1);
    }
  }
  return uVar1;
}

