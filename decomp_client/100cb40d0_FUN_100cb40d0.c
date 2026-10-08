
long * FUN_100cb40d0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                    undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar1 = (long *)FUN_100c7ba70();
  if (plVar1 == (long *)0x0) {
    uVar3 = 0x41;
    uVar4 = 0x49;
  }
  else {
    if (param_1 == -1) {
      lVar2 = FUN_100c8d130(param_2,param_7,param_5,param_6);
    }
    else {
      lVar2 = FUN_100c8ca30(param_1,param_7,param_5,param_6);
    }
    if (lVar2 == 0) {
      uVar3 = 0xd;
      uVar4 = 0x52;
    }
    else {
      FUN_100c7ae40(*plVar1);
      *plVar1 = lVar2;
      FUN_100c8b2f0(plVar1[1]);
      lVar2 = FUN_100cb3530(lVar2,&DAT_1022534d8,param_3,param_4,param_8,1);
      plVar1[1] = lVar2;
      if (lVar2 != 0) {
        return plVar1;
      }
      uVar3 = 0x67;
      uVar4 = 0x5c;
    }
  }
  FUN_100c62ee0(0x23,0x7d,uVar3,"p12_p8e.c",uVar4);
  FUN_100c7ba90(plVar1);
  return (long *)0x0;
}

