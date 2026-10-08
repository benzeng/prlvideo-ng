
long FUN_100cb2a40(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_100cad740();
  if (lVar1 == 0) {
    FUN_100c62ee0(0x23,0x72,0x41,"p12_add.c",0x92);
  }
  else {
    uVar2 = FUN_100bf6fe0(0x15);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
    lVar3 = FUN_100c8b370(4);
    *(long *)(lVar1 + 0x20) = lVar3;
    if (lVar3 == 0) {
      uVar2 = 0x41;
      uVar4 = 0x97;
    }
    else {
      lVar3 = FUN_100c8c6c0(param_1,&DAT_102256918,lVar1 + 0x20);
      if (lVar3 != 0) {
        return lVar1;
      }
      uVar2 = 100;
      uVar4 = 0x9c;
    }
    FUN_100c62ee0(0x23,0x72,uVar2,"p12_add.c",uVar4);
    FUN_100cad760(lVar1);
  }
  return 0;
}

