
void FUN_100888f30(void)

{
  undefined1 local_260 [600];
  
  FUN_10081d470(local_260);
  if (DAT_1011c0db0 == (undefined **)0x0) {
    FUN_10081d010(9,1,"err.c",0x127);
    if (DAT_1011c0db0 == (undefined **)0x0) {
      DAT_1011c0db0 = &PTR_FUN_100bde1a8;
    }
    FUN_10081d010(10,1,"err.c",0x12a);
  }
  (*(code *)DAT_1011c0db0[9])(local_260);
  return;
}

