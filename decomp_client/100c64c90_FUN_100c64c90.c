
void FUN_100c64c90(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_20;
  
  if (DAT_1023167f0 == (undefined **)0x0) {
    FUN_100bf2780(9,1,"err.c",0x127);
    if (DAT_1023167f0 == (undefined **)0x0) {
      DAT_1023167f0 = &PTR_FUN_10224e4e8;
    }
    FUN_100bf2780(10,1,"err.c",0x12a);
  }
  lVar1 = (*(code *)DAT_1023167f0[5])(0);
  if (lVar1 != 0) {
    local_20 = lVar1;
    FUN_100bf2780(9,1,"err.c",0x217);
    lVar1 = FUN_100c60e10(lVar1,param_1);
    if (((DAT_102317368 == 1) && (DAT_102317360 != 0)) && (lVar2 = FUN_100c61180(), lVar2 == 0)) {
      FUN_100c60b60(DAT_102317360);
      DAT_102317360 = 0;
    }
    FUN_100bf2780(10,1,"err.c",0x21f);
    (*(code *)DAT_1023167f0[6])(&local_20);
    lVar2 = 0x54;
    if (lVar1 != 0) {
      do {
        if ((*(long *)(lVar1 + -0x1d0 + lVar2 * 8) != 0) &&
           ((*(byte *)(lVar1 + lVar2 * 4) & 1) != 0)) {
          FUN_100bf3910();
          *(undefined8 *)(lVar1 + -0x1d0 + lVar2 * 8) = 0;
        }
        *(undefined4 *)(lVar1 + lVar2 * 4) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar2 != 100);
      FUN_100bf3910(lVar1);
    }
  }
  return;
}

