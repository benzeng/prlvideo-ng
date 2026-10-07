
undefined4 FUN_100817b20(long param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_10087ece0();
  lVar3 = FUN_10087d330(uVar2);
  if (lVar3 == 0) {
    FUN_100887ce0(0x14,0xce,7,"ssl_rsa.c",0xec);
    return 0;
  }
  lVar4 = FUN_10087db60(lVar3,0x6c,3,param_2);
  if (lVar4 < 1) {
    uVar2 = 2;
    uVar5 = 0xf1;
  }
  else {
    if (param_3 == 1) {
      lVar4 = FUN_1008b4900(lVar3,0,*(undefined8 *)(*(long *)(param_1 + 0x170) + 0xa8),
                            *(undefined8 *)(*(long *)(param_1 + 0x170) + 0xb0));
      uVar2 = 9;
    }
    else {
      if (param_3 != 2) {
        uVar2 = 0x7c;
        uVar5 = 0xfe;
        goto LAB_100817c41;
      }
      lVar4 = FUN_1008bf0e0(lVar3,0);
      uVar2 = 0xd;
    }
    if (lVar4 != 0) {
      uVar1 = FUN_1008178e0(param_1,lVar4);
      FUN_10086c430(lVar4);
      goto LAB_100817c48;
    }
    uVar5 = 0x102;
  }
LAB_100817c41:
  FUN_100887ce0(0x14,0xce,uVar2,"ssl_rsa.c",uVar5);
  uVar1 = 0;
LAB_100817c48:
  FUN_10087d4e0(lVar3);
  return uVar1;
}

