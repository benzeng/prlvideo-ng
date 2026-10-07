
void FUN_10080c020(long param_1)

{
  long lVar1;
  long lVar2;
  
  while( true ) {
    lVar2 = FUN_1008dfda0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x268));
    if (lVar2 == 0) break;
    lVar1 = *(long *)(lVar2 + 8);
    if (*(int *)(lVar1 + 0x28) != 0) {
      FUN_10088bc70(*(undefined8 *)(lVar1 + 0x30));
      FUN_10088ae30(*(undefined8 *)(lVar1 + 0x38));
    }
    if (*(long *)(lVar1 + 0x58) != 0) {
      FUN_10081e1a0();
    }
    if (*(long *)(lVar1 + 0x60) != 0) {
      FUN_10081e1a0();
    }
    FUN_10081e1a0(lVar1);
    FUN_1008dfc80(lVar2);
  }
  return;
}

