
long FUN_1008d6200(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_1008d21c0();
  if (lVar1 == 0) {
    FUN_100887ce0(0x23,0x72,0x41,"p12_add.c",0x92);
  }
  else {
    uVar2 = FUN_100821870(0x15);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
    lVar3 = FUN_1008afdf0(4);
    *(long *)(lVar1 + 0x20) = lVar3;
    if (lVar3 == 0) {
      uVar2 = 0x41;
      uVar4 = 0x97;
    }
    else {
      lVar3 = FUN_1008b1140(param_1,&DAT_100be6308,lVar1 + 0x20);
      if (lVar3 != 0) {
        return lVar1;
      }
      uVar2 = 100;
      uVar4 = 0x9c;
    }
    FUN_100887ce0(0x23,0x72,uVar2,"p12_add.c",uVar4);
    FUN_1008d21e0(lVar1);
  }
  return 0;
}

