
void FUN_100807800(long param_1)

{
  long lVar1;
  long lVar2;
  
  while (lVar1 = FUN_1008dfda0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x248)), lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    if (*(long *)(lVar2 + 0x10) != 0) {
      FUN_10081e1a0(*(long *)(lVar2 + 0x10));
      lVar2 = *(long *)(lVar1 + 8);
    }
    FUN_10081e1a0(lVar2);
    FUN_1008dfc80(lVar1);
  }
  while (lVar1 = FUN_1008dfda0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 600)), lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    if (*(long *)(lVar2 + 0x10) != 0) {
      FUN_10081e1a0(*(long *)(lVar2 + 0x10));
      lVar2 = *(long *)(lVar1 + 8);
    }
    FUN_10081e1a0(lVar2);
    FUN_1008dfc80(lVar1);
  }
  while (lVar1 = FUN_1008dfda0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x260)), lVar1 != 0) {
    FUN_10080a290(*(undefined8 *)(lVar1 + 8));
    FUN_1008dfc80(lVar1);
  }
  while (lVar1 = FUN_1008dfda0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x268)), lVar1 != 0) {
    FUN_10080a290(*(undefined8 *)(lVar1 + 8));
    FUN_1008dfc80(lVar1);
  }
  while (lVar1 = FUN_1008dfda0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x278)), lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    if (*(long *)(lVar2 + 0x10) != 0) {
      FUN_10081e1a0(*(long *)(lVar2 + 0x10));
      lVar2 = *(long *)(lVar1 + 8);
    }
    FUN_10081e1a0(lVar2);
    FUN_1008dfc80(lVar1);
  }
  return;
}

