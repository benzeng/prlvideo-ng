
undefined8 FUN_1008bd2c0(undefined8 *param_1,uint param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if ((param_2 & 0x1000) == 0) {
    lVar4 = 0;
    uVar1 = 0;
    if ((param_4 != -1) &&
       ((lVar4 = FUN_1008afdf0(param_2), lVar4 == 0 ||
        (iVar3 = FUN_1008afb30(lVar4,param_3,param_4), uVar1 = param_2, iVar3 == 0))))
    goto LAB_1008bd420;
  }
  else {
    uVar2 = FUN_100821ab0(*param_1);
    lVar4 = FUN_1008b0780(0,param_3,param_4,param_2,uVar2);
    if (lVar4 == 0) {
      FUN_100887ce0(0xb,0x8a,0xd,"x509_att.c",0x134);
      return 0;
    }
    uVar1 = *(uint *)(lVar4 + 4);
  }
  lVar5 = FUN_100884e10();
  param_1[2] = lVar5;
  if (lVar5 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (param_2 == 0) {
      return 1;
    }
    lVar5 = FUN_1008a8980();
    if (lVar5 != 0) {
      if (((param_2 & 0x1000) == 0) && (param_4 == -1)) {
        iVar3 = FUN_10089b920(lVar5,param_2,param_3);
        if (iVar3 == 0) goto LAB_1008bd420;
      }
      else {
        FUN_10089b8d0(lVar5,uVar1,lVar4);
      }
      iVar3 = FUN_1008852e0(param_1[2],lVar5);
      if (iVar3 != 0) {
        return 1;
      }
    }
  }
LAB_1008bd420:
  FUN_100887ce0(0xb,0x8a,0x41,"x509_att.c",0x154);
  return 0;
}

