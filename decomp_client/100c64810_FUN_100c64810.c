
undefined8 FUN_100c64810(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (DAT_1023167f0 == (undefined **)0x0) {
    FUN_100bf2780(9,1,"err.c",0x127);
    if (DAT_1023167f0 == (undefined **)0x0) {
      DAT_1023167f0 = &PTR_FUN_10224e4e8;
    }
    FUN_100bf2780(10,1,"err.c",0x12a);
  }
  lVar1 = (*(code *)*DAT_1023167f0)(1);
  uVar2 = 0;
  if (lVar1 != 0) {
    FUN_100bf2780(9,1,"err.c",0x19a);
    uVar2 = FUN_100c60be0(lVar1,param_1);
    FUN_100bf2780(10,1,"err.c",0x19c);
  }
  return uVar2;
}

