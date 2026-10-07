
undefined8 FUN_10080e390(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_10087f260();
  lVar3 = FUN_10087d330(uVar2);
  if (lVar3 == 0) {
    FUN_100887ce0(0x14,0xc0,7,"ssl_lib.c",0x2ac);
    uVar2 = 0;
  }
  else {
    FUN_10087da80(lVar3,0x68,0,param_2);
    lVar1 = *(long *)(param_1 + 0x20);
    if ((lVar1 != 0) && (*(long *)(param_1 + 0x18) == lVar1)) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x38);
      *(undefined8 *)(lVar1 + 0x38) = 0;
    }
    if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x10) != lVar3)) {
      FUN_10087e280();
    }
    lVar1 = *(long *)(param_1 + 0x18);
    if (((lVar1 != 0) && (lVar1 != lVar3)) && (*(long *)(param_1 + 0x10) != lVar1)) {
      FUN_10087e280();
    }
    *(long *)(param_1 + 0x10) = lVar3;
    *(long *)(param_1 + 0x18) = lVar3;
    uVar2 = 1;
  }
  return uVar2;
}

