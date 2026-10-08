
undefined4 FUN_100bedcb0(long param_1,undefined8 param_2,int param_3)

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
    FUN_100c62ee0(0x14,0xb0,7,"ssl_rsa.c",0x266);
    return 0;
  }
  lVar5 = FUN_100c58d60(lVar4,0x6c,3,param_2);
  if (lVar5 < 1) {
    uVar3 = 2;
    uVar6 = 0x26b;
  }
  else {
    if (param_3 == 2) {
      lVar5 = FUN_100c9ad40(lVar4,0);
      uVar3 = 0xd;
    }
    else {
      if (param_3 != 1) {
        uVar3 = 0x7c;
        uVar6 = 0x277;
        goto LAB_100beddd8;
      }
      lVar5 = FUN_100c91810(lVar4,0,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0))
      ;
      uVar3 = 9;
    }
    if (lVar5 != 0) {
      iVar1 = FUN_100be7ae0((undefined8 *)(param_1 + 0x130));
      if (iVar1 == 0) {
        FUN_100c62ee0(0x14,0xae,0x41,"ssl_rsa.c",599);
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_100bed140(*(undefined8 *)(param_1 + 0x130),lVar5);
      }
      FUN_100c6d8c0(lVar5);
      goto LAB_100bede0c;
    }
    uVar6 = 0x27b;
  }
LAB_100beddd8:
  FUN_100c62ee0(0x14,0xb0,uVar3,"ssl_rsa.c",uVar6);
  uVar2 = 0;
LAB_100bede0c:
  FUN_100c586e0(lVar4);
  return uVar2;
}

