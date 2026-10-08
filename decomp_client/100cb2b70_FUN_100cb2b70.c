
long FUN_100cb2b70(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_100cad740();
  if (lVar2 == 0) {
    FUN_100c62ee0(0x23,0x73,0x41,"p12_add.c",0xbb);
  }
  else {
    iVar1 = FUN_100cadf20(lVar2,0x1a);
    if (iVar1 == 0) {
      uVar3 = 0x78;
      uVar5 = 0xc0;
    }
    else {
      uVar3 = FUN_100bf70a0(param_1);
      lVar4 = FUN_100c6bd50(uVar3);
      if (lVar4 == 0) {
        lVar4 = FUN_100c8ca30(param_1,param_6,param_4,param_5);
      }
      else {
        lVar4 = FUN_100c8d130(lVar4,param_6,param_4,param_5);
      }
      if (lVar4 == 0) {
        uVar3 = 0x41;
        uVar5 = 0xcc;
      }
      else {
        FUN_100c7ae40(*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 8) + 8));
        *(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 8) + 8) = lVar4;
        FUN_100c8b2f0(*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 8) + 0x10));
        lVar4 = FUN_100cb3530(lVar4,&DAT_102256918,param_2,param_3,param_7,1);
        *(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 8) + 0x10) = lVar4;
        if (lVar4 != 0) {
          return lVar2;
        }
        uVar3 = 0x67;
        uVar5 = 0xd5;
      }
    }
    FUN_100c62ee0(0x23,0x73,uVar3,"p12_add.c",uVar5);
    FUN_100cad760(lVar2);
  }
  return 0;
}

