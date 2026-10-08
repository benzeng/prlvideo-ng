
long FUN_100c325a0(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100bf3540(0x40,"bn_recp.c",0x4c);
  lVar2 = 0;
  if (lVar1 != 0) {
    FUN_100c26700(lVar1);
    FUN_100c26700(lVar1 + 0x18);
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined4 *)(lVar1 + 0x38) = 1;
    lVar2 = lVar1;
  }
  return lVar2;
}

