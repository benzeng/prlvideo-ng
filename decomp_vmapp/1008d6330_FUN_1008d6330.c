
long FUN_1008d6330(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_1008d21c0();
  if (lVar2 == 0) {
    FUN_100887ce0(0x23,0x73,0x41,"p12_add.c",0xbb);
  }
  else {
    iVar1 = FUN_1008d29a0(lVar2,0x1a);
    if (iVar1 == 0) {
      uVar3 = 0x78;
      uVar5 = 0xc0;
    }
    else {
      uVar3 = FUN_100821930(param_1);
      lVar4 = FUN_100890b50(uVar3);
      if (lVar4 == 0) {
        lVar4 = FUN_1008b14b0(param_1,param_6,param_4,param_5);
      }
      else {
        lVar4 = FUN_1008b1bb0(lVar4,param_6,param_4,param_5);
      }
      if (lVar4 == 0) {
        uVar3 = 0x41;
        uVar5 = 0xcc;
      }
      else {
        FUN_10089f8c0(*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 8) + 8));
        *(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 8) + 8) = lVar4;
        FUN_1008afd70(*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 8) + 0x10));
        lVar4 = FUN_1008d6cf0(lVar4,&DAT_100be6308,param_2,param_3,param_7,1);
        *(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 8) + 0x10) = lVar4;
        if (lVar4 != 0) {
          return lVar2;
        }
        uVar3 = 0x67;
        uVar5 = 0xd5;
      }
    }
    FUN_100887ce0(0x23,0x73,uVar3,"p12_add.c",uVar5);
    FUN_1008d21e0(lVar2);
  }
  return 0;
}

