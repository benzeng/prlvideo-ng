
long FUN_1008573a0(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_10081ddd0(0x40,"bn_recp.c",0x4c);
  lVar2 = 0;
  if (lVar1 != 0) {
    FUN_10084b500(lVar1);
    FUN_10084b500(lVar1 + 0x18);
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined4 *)(lVar1 + 0x38) = 1;
    lVar2 = lVar1;
  }
  return lVar2;
}

