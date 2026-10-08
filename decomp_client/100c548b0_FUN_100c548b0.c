
long FUN_100c548b0(void)

{
  long lVar1;
  
  lVar1 = FUN_100bf3540(0xd8,"eng_lib.c",0x45);
  if (lVar1 == 0) {
    FUN_100c62ee0(0x26,0x7a,0x41,"eng_lib.c",0x47);
    lVar1 = 0;
  }
  else {
    ___bzero(lVar1,0xd8);
    *(undefined4 *)(lVar1 + 0xac) = 1;
    FUN_100bf50a0(9,lVar1,lVar1 + 0xb8);
  }
  return lVar1;
}

