
undefined8 FUN_10081e1f0(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_1011c0668 != (code *)0x0) {
      (*DAT_1011c0668)(param_1,0);
    }
    (*(code *)PTR__free_1011ab5a0)(param_1);
    if (DAT_1011c0668 != (code *)0x0) {
      (*DAT_1011c0668)(0,1);
    }
  }
  uVar1 = 0;
  if (0 < param_2) {
    if (DAT_1011c0650 == '\0') {
      DAT_1011c0650 = '\x01';
    }
    if (DAT_1011c0658 != (code *)0x0) {
      if (DAT_1011c0651 == '\0') {
        DAT_1011c0651 = '\x01';
      }
      (*DAT_1011c0658)(0,param_2,"mem.c",0x1c3,0);
    }
    uVar1 = (*(code *)PTR_FUN_1011ab588)((long)param_2,"mem.c",0x1c3);
    if (DAT_1011c0658 != (code *)0x0) {
      (*DAT_1011c0658)(uVar1,param_2,"mem.c",0x1c3,1);
    }
  }
  return uVar1;
}

