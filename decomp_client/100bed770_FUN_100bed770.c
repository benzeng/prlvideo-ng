
undefined4 FUN_100bed770(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar3 = FUN_100c59ee0();
  lVar4 = FUN_100c58530(uVar3);
  if (lVar4 == 0) {
    FUN_100c62ee0(0x14,0xad,7,"ssl_rsa.c",0x1c1);
    return 0;
  }
  lVar5 = FUN_100c58d60(lVar4,0x6c,3,param_2);
  if (lVar5 < 1) {
    uVar3 = 2;
    uVar6 = 0x1c6;
  }
  else {
    if (param_3 == 1) {
      lVar5 = FUN_100c90ae0(lVar4,0,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0))
      ;
      uVar3 = 9;
    }
    else {
      if (param_3 != 2) {
        uVar3 = 0x7c;
        uVar6 = 0x1d1;
        goto LAB_100bed895;
      }
      lVar5 = FUN_100c9a3d0(lVar4,0);
      uVar3 = 0xd;
    }
    if (lVar5 != 0) {
      iVar1 = FUN_100be7ae0((undefined8 *)(param_1 + 0x130));
      if (iVar1 == 0) {
        FUN_100c62ee0(0x14,0xab,0x41,"ssl_rsa.c",0x174);
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_100beccd0(*(undefined8 *)(param_1 + 0x130),lVar5);
      }
      FUN_100c7cd70(lVar5);
      goto LAB_100bed8c9;
    }
    uVar6 = 0x1d6;
  }
LAB_100bed895:
  FUN_100c62ee0(0x14,0xad,uVar3,"ssl_rsa.c",uVar6);
  uVar2 = 0;
LAB_100bed8c9:
  FUN_100c586e0(lVar4);
  return uVar2;
}

