
undefined8 FUN_100be3bc0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (iVar3 = FUN_100c58890(), iVar3 != 0x505)) ||
     (iVar3 = FUN_100c58d60(*(undefined8 *)(param_1 + 0x10),0x69,0,0), iVar3 != param_2)) {
    uVar4 = FUN_100c5a460();
    lVar5 = FUN_100c58530(uVar4);
    if (lVar5 == 0) {
      FUN_100c62ee0(0x14,0xc4,7,"ssl_lib.c",0x2c0);
      return 0;
    }
    FUN_100c58c80(lVar5,0x68,0,param_2);
    lVar1 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x20);
    if ((lVar2 != 0) && (*(long *)(param_1 + 0x18) == lVar2)) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar2 + 0x38);
      *(undefined8 *)(lVar2 + 0x38) = 0;
    }
    lVar2 = *(long *)(param_1 + 0x18);
    if (((lVar2 != 0) && (lVar2 != lVar5)) && (lVar1 != lVar2)) {
      FUN_100c59480();
    }
    *(long *)(param_1 + 0x10) = lVar1;
    *(long *)(param_1 + 0x18) = lVar5;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x20);
    if ((lVar1 != 0) && (*(long *)(param_1 + 0x18) == lVar1)) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x38);
      *(undefined8 *)(lVar1 + 0x38) = 0;
    }
    if ((*(long *)(param_1 + 0x18) != 0) && (*(long *)(param_1 + 0x18) != lVar5)) {
      FUN_100c59480();
    }
    *(long *)(param_1 + 0x10) = lVar5;
    *(long *)(param_1 + 0x18) = lVar5;
  }
  return 1;
}

