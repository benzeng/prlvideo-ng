
void FUN_100be1790(long param_1)

{
  long lVar1;
  long lVar2;
  
  while( true ) {
    lVar2 = FUN_100cbc5e0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x268));
    if (lVar2 == 0) break;
    lVar1 = *(long *)(lVar2 + 8);
    if (*(int *)(lVar1 + 0x28) != 0) {
      FUN_100c66e70(*(undefined8 *)(lVar1 + 0x30));
      FUN_100c66030(*(undefined8 *)(lVar1 + 0x38));
    }
    if (*(long *)(lVar1 + 0x58) != 0) {
      FUN_100bf3910();
    }
    if (*(long *)(lVar1 + 0x60) != 0) {
      FUN_100bf3910();
    }
    FUN_100bf3910(lVar1);
    FUN_100cbc4c0(lVar2);
  }
  return;
}

