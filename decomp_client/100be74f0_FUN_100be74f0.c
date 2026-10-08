
long * FUN_100be74f0(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_100bf3540(0x128,"ssl_cert.c",0xb7);
  if (plVar1 == (long *)0x0) {
    FUN_100c62ee0(0x14,0xa2,0x41,"ssl_cert.c",0xb9);
    plVar1 = (long *)0x0;
  }
  else {
    ___bzero(plVar1,0x128);
    *plVar1 = (long)(plVar1 + 0xc);
    *(undefined4 *)(plVar1 + 0x24) = 1;
    lVar2 = FUN_100c6ca00();
    plVar1[0x14] = lVar2;
    lVar2 = FUN_100c6ca00();
    plVar1[0x11] = lVar2;
    lVar2 = FUN_100c6ca00();
    plVar1[0xe] = lVar2;
    lVar2 = FUN_100c6ca00();
    plVar1[0x1d] = lVar2;
  }
  return plVar1;
}

