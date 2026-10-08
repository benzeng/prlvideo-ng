
void FUN_100c64130(void)

{
  undefined1 local_260 [600];
  
  FUN_100bf2be0(local_260);
  if (DAT_1023167f0 == (undefined **)0x0) {
    FUN_100bf2780(9,1,"err.c",0x127);
    if (DAT_1023167f0 == (undefined **)0x0) {
      DAT_1023167f0 = &PTR_FUN_10224e4e8;
    }
    FUN_100bf2780(10,1,"err.c",0x12a);
  }
  (*(code *)DAT_1023167f0[9])(local_260);
  return;
}

