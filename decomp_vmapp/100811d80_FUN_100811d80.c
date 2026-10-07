
long * FUN_100811d80(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_10081ddd0(0x128,"ssl_cert.c",0xb7);
  if (plVar1 == (long *)0x0) {
    FUN_100887ce0(0x14,0xa2,0x41,"ssl_cert.c",0xb9);
    plVar1 = (long *)0x0;
  }
  else {
    ___bzero(plVar1,0x128);
    *plVar1 = (long)(plVar1 + 0xc);
    *(undefined4 *)(plVar1 + 0x24) = 1;
    lVar2 = FUN_100891760();
    plVar1[0x14] = lVar2;
    lVar2 = FUN_100891760();
    plVar1[0x11] = lVar2;
    lVar2 = FUN_100891760();
    plVar1[0xe] = lVar2;
    lVar2 = FUN_100891760();
    plVar1[0x1d] = lVar2;
  }
  return plVar1;
}

