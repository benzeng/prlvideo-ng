
undefined4 FUN_1008176b0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar3 = FUN_10087ece0();
  lVar4 = FUN_10087d330(uVar3);
  if (lVar4 == 0) {
    FUN_100887ce0(0x14,200,7,"ssl_rsa.c",0x5c);
    return 0;
  }
  lVar5 = FUN_10087db60(lVar4,0x6c,3,param_2);
  if (lVar5 < 1) {
    uVar3 = 2;
    uVar6 = 0x61;
  }
  else {
    if (param_3 == 1) {
      lVar5 = FUN_1008b5560(lVar4,0,*(undefined8 *)(*(long *)(param_1 + 0x170) + 0xa8),
                            *(undefined8 *)(*(long *)(param_1 + 0x170) + 0xb0));
      uVar3 = 9;
    }
    else {
      if (param_3 != 2) {
        uVar3 = 0x7c;
        uVar6 = 0x6c;
        goto LAB_1008177dc;
      }
      lVar5 = FUN_1008bee50(lVar4,0);
      uVar3 = 0xd;
    }
    if (lVar5 != 0) {
      iVar1 = FUN_100812370((undefined8 *)(param_1 + 0x100));
      if (iVar1 == 0) {
        FUN_100887ce0(0x14,0xc6,0x41,"ssl_rsa.c",0x4c);
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_100817560(*(undefined8 *)(param_1 + 0x100),lVar5);
      }
      FUN_1008a17f0(lVar5);
      goto LAB_100817810;
    }
    uVar6 = 0x71;
  }
LAB_1008177dc:
  FUN_100887ce0(0x14,200,uVar3,"ssl_rsa.c",uVar6);
  uVar2 = 0;
LAB_100817810:
  FUN_10087d4e0(lVar4);
  return uVar2;
}

