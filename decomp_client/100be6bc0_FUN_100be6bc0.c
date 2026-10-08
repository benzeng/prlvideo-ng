
undefined8 FUN_100be6bc0(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    uVar1 = FUN_100c5b5e0();
    lVar2 = FUN_100c58530(uVar1);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0x20) = lVar2;
  }
  else if (lVar2 == *(long *)(param_1 + 0x18)) {
    uVar1 = FUN_100c592a0(lVar2);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  uVar1 = 0;
  FUN_100c58d60(lVar2,1,0,0);
  lVar3 = FUN_100c58c80(lVar2,0x75,1,0);
  if (lVar3 == 0) {
    FUN_100c62ee0(0x14,0xb8,7,"ssl_lib.c",0xb2f);
  }
  else {
    uVar1 = 1;
    if (param_2 == 0) {
      if (*(long *)(param_1 + 0x18) != lVar2) {
        return 1;
      }
      uVar4 = FUN_100c592a0(lVar2);
    }
    else {
      if (*(long *)(param_1 + 0x18) == lVar2) {
        return 1;
      }
      uVar4 = FUN_100c591b0(lVar2);
    }
    *(undefined8 *)(param_1 + 0x18) = uVar4;
  }
  return uVar1;
}

