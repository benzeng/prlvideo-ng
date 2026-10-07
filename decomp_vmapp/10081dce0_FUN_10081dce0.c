
undefined8 FUN_10081dce0(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (0 < param_1) {
    if (DAT_1011c0650 == '\0') {
      DAT_1011c0650 = '\x01';
    }
    if (DAT_1011c0658 != (code *)0x0) {
      if (DAT_1011c0651 == '\0') {
        DAT_1011c0651 = '\x01';
      }
      (*DAT_1011c0658)(0,param_1,param_2,param_3,0);
    }
    uVar1 = (*(code *)PTR_FUN_1011ab5b0)((long)param_1,param_2,param_3);
    if (DAT_1011c0658 != (code *)0x0) {
      (*DAT_1011c0658)(uVar1,param_1,param_2,param_3,1);
    }
  }
  return uVar1;
}

