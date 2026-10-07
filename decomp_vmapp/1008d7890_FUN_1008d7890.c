
long * FUN_1008d7890(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                    undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar1 = (long *)FUN_1008a04f0();
  if (plVar1 == (long *)0x0) {
    uVar3 = 0x41;
    uVar4 = 0x49;
  }
  else {
    if (param_1 == -1) {
      lVar2 = FUN_1008b1bb0(param_2,param_7,param_5,param_6);
    }
    else {
      lVar2 = FUN_1008b14b0(param_1,param_7,param_5,param_6);
    }
    if (lVar2 == 0) {
      uVar3 = 0xd;
      uVar4 = 0x52;
    }
    else {
      FUN_10089f8c0(*plVar1);
      *plVar1 = lVar2;
      FUN_1008afd70(plVar1[1]);
      lVar2 = FUN_1008d6cf0(lVar2,&DAT_100be2ec8,param_3,param_4,param_8,1);
      plVar1[1] = lVar2;
      if (lVar2 != 0) {
        return plVar1;
      }
      uVar3 = 0x67;
      uVar4 = 0x5c;
    }
  }
  FUN_100887ce0(0x23,0x7d,uVar3,"p12_p8e.c",uVar4);
  FUN_1008a0510(plVar1);
  return (long *)0x0;
}

