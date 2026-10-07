
long FUN_1008796b0(void)

{
  long lVar1;
  
  lVar1 = FUN_10081ddd0(0xd8,"eng_lib.c",0x45);
  if (lVar1 == 0) {
    FUN_100887ce0(0x26,0x7a,0x41,"eng_lib.c",0x47);
    lVar1 = 0;
  }
  else {
    ___bzero(lVar1,0xd8);
    *(undefined4 *)(lVar1 + 0xac) = 1;
    FUN_10081f930(9,lVar1,lVar1 + 0xb8);
  }
  return lVar1;
}

