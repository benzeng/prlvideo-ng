
void FUN_100ade4a0(long param_1)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) != *(int *)(lVar1 + 0xc)) {
    piVar2 = (int *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8);
    do {
      if (*piVar2 == 1) {
        *(undefined1 *)(*(long *)(param_1 + 8) + 0xaa6) = 0;
      }
      else if (*piVar2 == 0) {
        FUN_100ad62b0(*(undefined8 *)(param_1 + 8));
        lVar1 = *(long *)(param_1 + 0x10);
      }
      piVar2 = piVar2 + 2;
    } while (piVar2 != (int *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 0xc) * 8));
  }
  FUN_100223940(param_1 + 0x10);
  return;
}

