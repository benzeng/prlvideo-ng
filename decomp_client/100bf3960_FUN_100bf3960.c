
undefined8 FUN_100bf3960(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_102316058 != (code *)0x0) {
      (*DAT_102316058)(param_1,0);
    }
    (*(code *)PTR__free_102305370)(param_1);
    if (DAT_102316058 != (code *)0x0) {
      (*DAT_102316058)(0,1);
    }
  }
  uVar1 = 0;
  if (0 < param_2) {
    if (DAT_102316040 == '\0') {
      DAT_102316040 = '\x01';
    }
    if (DAT_102316048 != (code *)0x0) {
      if (DAT_102316041 == '\0') {
        DAT_102316041 = '\x01';
      }
      (*DAT_102316048)(0,param_2,"mem.c",0x1c3,0);
    }
    uVar1 = (*(code *)PTR_FUN_102305358)((long)param_2,"mem.c",0x1c3);
    if (DAT_102316048 != (code *)0x0) {
      (*DAT_102316048)(uVar1,param_2,"mem.c",0x1c3,1);
    }
  }
  return uVar1;
}

