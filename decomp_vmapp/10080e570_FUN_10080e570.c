
undefined8 FUN_10080e570(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (((*(long *)(param_1 + 0x18) == 0) || (iVar2 = FUN_10087d690(), iVar2 != 0x505)) ||
     (iVar2 = FUN_10087db60(*(undefined8 *)(param_1 + 0x18),0x69,0,0), iVar2 != param_2)) {
    uVar3 = FUN_10087f260();
    lVar4 = FUN_10087d330(uVar3);
    if (lVar4 == 0) {
      FUN_100887ce0(0x14,0xc2,7,"ssl_lib.c",0x2d6);
      return 0;
    }
    FUN_10087da80(lVar4,0x68,0,param_2);
    lVar5 = *(long *)(param_1 + 0x18);
    lVar6 = lVar5;
    if ((*(long *)(param_1 + 0x20) != 0) && (lVar5 == *(long *)(param_1 + 0x20))) {
      lVar6 = *(long *)(lVar5 + 0x38);
      *(long *)(param_1 + 0x18) = lVar6;
      *(undefined8 *)(lVar5 + 0x38) = 0;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    if ((lVar1 != 0) && (lVar1 != lVar4)) {
      FUN_10087e280(lVar1);
      lVar6 = *(long *)(param_1 + 0x18);
    }
    if (((lVar6 != 0) && (lVar6 != lVar5)) && (*(long *)(param_1 + 0x10) != lVar6)) {
      FUN_10087e280();
    }
    *(long *)(param_1 + 0x10) = lVar4;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x18);
    lVar4 = lVar5;
    if ((*(long *)(param_1 + 0x20) != 0) && (lVar5 == *(long *)(param_1 + 0x20))) {
      lVar4 = *(long *)(lVar5 + 0x38);
      *(long *)(param_1 + 0x18) = lVar4;
      *(undefined8 *)(lVar5 + 0x38) = 0;
    }
    lVar6 = *(long *)(param_1 + 0x10);
    if ((lVar6 != 0) && (lVar6 != lVar5)) {
      FUN_10087e280(lVar6);
      lVar4 = *(long *)(param_1 + 0x18);
    }
    if (((lVar4 != 0) && (lVar4 != lVar5)) && (*(long *)(param_1 + 0x10) != lVar4)) {
      FUN_10087e280();
    }
    *(long *)(param_1 + 0x10) = lVar5;
  }
  *(long *)(param_1 + 0x18) = lVar5;
  return 1;
}

