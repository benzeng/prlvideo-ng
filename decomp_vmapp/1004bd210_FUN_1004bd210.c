
void FUN_1004bd210(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[2];
  if (*(int *)(lVar1 + 0x1028) != 0) {
    lVar3 = 0;
    lVar2 = lVar1;
    while( true ) {
      lVar2 = FUN_1004b9ef0(lVar2,*(undefined4 *)(*(long *)(lVar1 + 0x1020) + lVar3 * 4));
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0x18) != 0)) {
        FUN_1002afc80(*param_1,*(long *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 8),
                      *(undefined4 *)(lVar2 + 0xc),*(int *)(lVar2 + 0x60) - *(int *)(lVar2 + 0x58),
                      *(int *)(lVar2 + 100) - *(int *)(lVar2 + 0x5c));
      }
      lVar3 = lVar3 + 1;
      if (*(uint *)(lVar1 + 0x1028) <= (uint)lVar3) break;
      lVar2 = param_1[2];
    }
  }
  return;
}

