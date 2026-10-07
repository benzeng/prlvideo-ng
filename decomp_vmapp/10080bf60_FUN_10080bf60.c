
long FUN_10080bf60(ulong param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = FUN_10081ddd0(0x68,"d1_both.c",0xb5);
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = 0;
  if ((param_1 == 0) || (lVar2 = FUN_10081ddd0(param_1 & 0xffffffff,"d1_both.c",0xba), lVar2 != 0))
  {
    *(long *)(lVar1 + 0x58) = lVar2;
    lVar3 = 0;
    if (param_2 != 0) {
      uVar4 = param_1 + 7 >> 3;
      lVar3 = FUN_10081ddd0(uVar4 & 0xffffffff,"d1_both.c",199);
      if (lVar3 == 0) {
        if (lVar2 != 0) {
          FUN_10081e1a0(lVar2);
        }
        goto LAB_10080c007;
      }
      ___bzero(lVar3,uVar4);
    }
    *(long *)(lVar1 + 0x60) = lVar3;
  }
  else {
LAB_10080c007:
    FUN_10081e1a0(lVar1);
    lVar1 = 0;
  }
  return lVar1;
}

