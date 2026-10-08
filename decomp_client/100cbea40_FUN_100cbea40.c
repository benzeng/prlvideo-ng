
long FUN_100cbea40(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100bf3540(0x130,"cmac.c",0x62);
  lVar2 = 0;
  if (lVar1 != 0) {
    FUN_100c66060(lVar1);
    *(undefined4 *)(lVar1 + 0x128) = 0xffffffff;
    lVar2 = lVar1;
  }
  return lVar2;
}

