
undefined8
FUN_1008d8e30(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
             undefined4 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = 0;
  if ((param_2 == 0) || (lVar1 = FUN_10087d050(param_2), lVar1 != 0)) {
    lVar2 = 0;
    if ((param_3 == 0) || (lVar2 = FUN_10087d050(param_3), lVar2 != 0)) {
      lVar3 = 0;
      if ((param_4 == 0) || (lVar3 = FUN_10087d050(param_4), lVar3 != 0)) {
        lVar4 = 0;
        if ((param_5 == 0) || (lVar4 = FUN_10087d050(param_5), lVar4 != 0)) {
          uVar5 = FUN_1008d8c10(param_1,lVar1,lVar2,lVar3,lVar4,1,param_6,param_7);
          return uVar5;
        }
        FUN_100887ce0(0x28,0x6e,0x41,"ui_lib.c",0x14c);
      }
      else {
        FUN_100887ce0(0x28,0x6e,0x41,"ui_lib.c",0x144);
        lVar3 = 0;
      }
    }
    else {
      FUN_100887ce0(0x28,0x6e,0x41,"ui_lib.c",0x13c);
      lVar2 = 0;
      lVar3 = 0;
    }
    if (lVar1 != 0) {
      FUN_10081e1a0(lVar1);
    }
    if (lVar2 != 0) {
      FUN_10081e1a0(lVar2);
    }
    if (lVar3 != 0) {
      FUN_10081e1a0(lVar3);
    }
  }
  else {
    FUN_100887ce0(0x28,0x6e,0x41,"ui_lib.c",0x134);
  }
  return 0xffffffff;
}

