
undefined8 FUN_100812370(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == (long *)0x0) {
    uVar2 = 0x43;
    uVar3 = 0x17b;
  }
  else {
    if (*param_1 != 0) {
      return 1;
    }
    lVar1 = FUN_100811d80();
    *param_1 = lVar1;
    if (lVar1 != 0) {
      return 1;
    }
    uVar2 = 0x41;
    uVar3 = 0x180;
  }
  FUN_100887ce0(0x14,0xde,uVar2,"ssl_cert.c",uVar3);
  return 0;
}

