
void FUN_1007fa500(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x80);
  plVar2 = *(long **)(lVar1 + 0x1c0);
  if (plVar2 != (long *)0x0) {
    if (*plVar2 != 0) {
      FUN_10088ae30();
      lVar1 = *(long *)(param_1 + 0x80);
      plVar2 = *(long **)(lVar1 + 0x1c0);
    }
    if (plVar2[1] != 0) {
      FUN_10088ae30();
      lVar1 = *(long *)(param_1 + 0x80);
      plVar2 = *(long **)(lVar1 + 0x1c0);
    }
    if (plVar2[2] != 0) {
      FUN_10088ae30();
      lVar1 = *(long *)(param_1 + 0x80);
      plVar2 = *(long **)(lVar1 + 0x1c0);
    }
    if (plVar2[3] != 0) {
      FUN_10088ae30();
      lVar1 = *(long *)(param_1 + 0x80);
      plVar2 = *(long **)(lVar1 + 0x1c0);
    }
    if (plVar2[4] != 0) {
      FUN_10088ae30();
      lVar1 = *(long *)(param_1 + 0x80);
      plVar2 = *(long **)(lVar1 + 0x1c0);
    }
    if (plVar2[5] != 0) {
      FUN_10088ae30();
      lVar1 = *(long *)(param_1 + 0x80);
    }
    FUN_10081e1a0(*(undefined8 *)(lVar1 + 0x1c0));
    *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x1c0) = 0;
  }
  return;
}

