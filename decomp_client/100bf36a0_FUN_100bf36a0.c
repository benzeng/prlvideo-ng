
undefined8 FUN_100bf36a0(long param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 == 0) {
    if (0 < param_2) {
      if (DAT_102316040 == '\0') {
        DAT_102316040 = '\x01';
      }
      if (DAT_102316048 != (code *)0x0) {
        if (DAT_102316041 == '\0') {
          DAT_102316041 = '\x01';
        }
        (*DAT_102316048)(0,param_2,param_3,param_4,0);
      }
      uVar1 = (*(code *)PTR_FUN_102305358)((long)param_2,param_3,param_4);
      if (DAT_102316048 != (code *)0x0) {
        (*DAT_102316048)(uVar1,param_2,param_3,param_4,1);
      }
    }
  }
  else {
    uVar1 = 0;
    if (0 < param_2) {
      if (DAT_102316050 != (code *)0x0) {
        (*DAT_102316050)(param_1,0,param_2,param_3,param_4,0);
      }
      uVar1 = (*(code *)PTR_FUN_102305368)(param_1,(long)param_2,param_3,param_4);
      if (DAT_102316050 != (code *)0x0) {
        (*DAT_102316050)(param_1,uVar1,param_2,param_3,param_4,1);
      }
    }
  }
  return uVar1;
}

