
undefined8
FUN_100bf18f0(long param_1,long param_2,long param_3,long param_4,long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x2d0) == 0) {
      uVar2 = FUN_100c26a40(param_2);
      *(undefined8 *)(param_1 + 0x2d0) = uVar2;
    }
    else {
      lVar1 = FUN_100c26b50();
      if (lVar1 == 0) {
        FUN_100c266b0(*(undefined8 *)(param_1 + 0x2d0));
        *(undefined8 *)(param_1 + 0x2d0) = 0;
      }
    }
  }
  if (param_3 != 0) {
    if (*(long *)(param_1 + 0x2d8) == 0) {
      uVar2 = FUN_100c26a40(param_3);
      *(undefined8 *)(param_1 + 0x2d8) = uVar2;
    }
    else {
      lVar1 = FUN_100c26b50(*(long *)(param_1 + 0x2d8),param_3);
      if (lVar1 == 0) {
        FUN_100c266b0(*(undefined8 *)(param_1 + 0x2d8));
        *(undefined8 *)(param_1 + 0x2d8) = 0;
      }
    }
  }
  if (param_4 != 0) {
    if (*(long *)(param_1 + 0x2e0) == 0) {
      uVar2 = FUN_100c26a40(param_4);
      *(undefined8 *)(param_1 + 0x2e0) = uVar2;
    }
    else {
      lVar1 = FUN_100c26b50(*(long *)(param_1 + 0x2e0),param_4);
      if (lVar1 == 0) {
        FUN_100c266b0(*(undefined8 *)(param_1 + 0x2e0));
        *(undefined8 *)(param_1 + 0x2e0) = 0;
      }
    }
  }
  if (param_5 != 0) {
    if (*(long *)(param_1 + 0x308) == 0) {
      uVar2 = FUN_100c26a40(param_5);
      *(undefined8 *)(param_1 + 0x308) = uVar2;
    }
    else {
      lVar1 = FUN_100c26b50(*(long *)(param_1 + 0x308),param_5);
      if (lVar1 == 0) {
        FUN_100c266b0(*(undefined8 *)(param_1 + 0x308));
        *(undefined8 *)(param_1 + 0x308) = 0;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x310) = param_6;
  if (((*(long *)(param_1 + 0x2d0) == 0) || (*(long *)(param_1 + 0x2d8) == 0)) ||
     (*(long *)(param_1 + 0x2e0) == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xffffffff;
    if (*(long *)(param_1 + 0x308) != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

