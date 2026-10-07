
undefined8 FUN_100811450(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    uVar1 = FUN_1008803e0();
    lVar2 = FUN_10087d330(uVar1);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x20) = lVar2;
  }
  else if (lVar2 == *(long *)(param_1 + 0x18)) {
    uVar1 = FUN_10087e0a0(lVar2);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  uVar1 = 0;
  FUN_10087db60(lVar2,1,0,0);
  lVar3 = FUN_10087da80(lVar2,0x75,1,0);
  if (lVar3 == 0) {
    FUN_100887ce0(0x14,0xb8,7,"ssl_lib.c",0xb2f);
  }
  else {
    uVar1 = 1;
    if (param_2 == 0) {
      if (*(long *)(param_1 + 0x18) != lVar2) {
        return 1;
      }
      uVar4 = FUN_10087e0a0(lVar2);
    }
    else {
      if (*(long *)(param_1 + 0x18) == lVar2) {
        return 1;
      }
      uVar4 = FUN_10087dfb0(lVar2);
    }
    *(undefined8 *)(param_1 + 0x18) = uVar4;
  }
  return uVar1;
}

