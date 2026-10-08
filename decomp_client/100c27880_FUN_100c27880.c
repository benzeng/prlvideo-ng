
void FUN_100c27880(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  lVar1 = 0;
  if (plVar2 != (long *)0x0) {
    do {
      if (*plVar2 != 0) {
        FUN_100c26d40(plVar2);
      }
      if (plVar2[3] != 0) {
        FUN_100c26d40(plVar2 + 3);
      }
      if (plVar2[6] != 0) {
        FUN_100c26d40(plVar2 + 6);
      }
      if (plVar2[9] != 0) {
        FUN_100c26d40(plVar2 + 9);
      }
      if (plVar2[0xc] != 0) {
        FUN_100c26d40(plVar2 + 0xc);
      }
      if (plVar2[0xf] != 0) {
        FUN_100c26d40(plVar2 + 0xf);
      }
      if (plVar2[0x12] != 0) {
        FUN_100c26d40(plVar2 + 0x12);
      }
      if (plVar2[0x15] != 0) {
        FUN_100c26d40(plVar2 + 0x15);
      }
      if (plVar2[0x18] != 0) {
        FUN_100c26d40(plVar2 + 0x18);
      }
      if (plVar2[0x1b] != 0) {
        FUN_100c26d40(plVar2 + 0x1b);
      }
      if (plVar2[0x1e] != 0) {
        FUN_100c26d40(plVar2 + 0x1e);
      }
      if (plVar2[0x21] != 0) {
        FUN_100c26d40(plVar2 + 0x21);
      }
      if (plVar2[0x24] != 0) {
        FUN_100c26d40(plVar2 + 0x24);
      }
      if (plVar2[0x27] != 0) {
        FUN_100c26d40(plVar2 + 0x27);
      }
      if (plVar2[0x2a] != 0) {
        FUN_100c26d40(plVar2 + 0x2a);
      }
      if (plVar2[0x2d] != 0) {
        FUN_100c26d40(plVar2 + 0x2d);
      }
      plVar2 = (long *)plVar2[0x31];
    } while (plVar2 != (long *)0x0);
    lVar1 = *param_1;
  }
  param_1[1] = lVar1;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}

