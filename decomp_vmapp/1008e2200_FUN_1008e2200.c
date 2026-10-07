
long FUN_1008e2200(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_10081ddd0(0x130,"cmac.c",0x62);
  lVar2 = 0;
  if (lVar1 != 0) {
    FUN_10088ae60(lVar1);
    *(undefined4 *)(lVar1 + 0x128) = 0xffffffff;
    lVar2 = lVar1;
  }
  return lVar2;
}

