
long FUN_100be7b60(void)

{
  long lVar1;
  
  lVar1 = FUN_100bf3540(0xf8,"ssl_cert.c",0x18b);
  if (lVar1 == 0) {
    FUN_100c62ee0(0x14,0xe1,0x41,"ssl_cert.c",0x18d);
    lVar1 = 0;
  }
  else {
    ___bzero(lVar1,0xf8);
    *(long *)(lVar1 + 0x10) = lVar1 + 0x18;
    *(undefined4 *)(lVar1 + 0xf0) = 1;
  }
  return lVar1;
}

