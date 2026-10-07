
void FUN_100729fd0(long *param_1)

{
  long *plVar1;
  
  if (param_1 != (long *)0x0) {
    if (*(int *)((long)param_1 + 0x2c) != 0) {
      FUN_10081e1a0(param_1[4]);
    }
    plVar1 = (long *)*param_1;
    while (plVar1 != (long *)0x0) {
      if (*plVar1 != 0) {
        FUN_10072d9d0(plVar1);
      }
      if (plVar1[3] != 0) {
        FUN_10072d9d0(plVar1 + 3);
      }
      if (plVar1[6] != 0) {
        FUN_10072d9d0(plVar1 + 6);
      }
      if (plVar1[9] != 0) {
        FUN_10072d9d0(plVar1 + 9);
      }
      if (plVar1[0xc] != 0) {
        FUN_10072d9d0(plVar1 + 0xc);
      }
      if (plVar1[0xf] != 0) {
        FUN_10072d9d0(plVar1 + 0xf);
      }
      if (plVar1[0x12] != 0) {
        FUN_10072d9d0(plVar1 + 0x12);
      }
      if (plVar1[0x15] != 0) {
        FUN_10072d9d0(plVar1 + 0x15);
      }
      if (plVar1[0x18] != 0) {
        FUN_10072d9d0(plVar1 + 0x18);
      }
      if (plVar1[0x1b] != 0) {
        FUN_10072d9d0(plVar1 + 0x1b);
      }
      if (plVar1[0x1e] != 0) {
        FUN_10072d9d0(plVar1 + 0x1e);
      }
      if (plVar1[0x21] != 0) {
        FUN_10072d9d0(plVar1 + 0x21);
      }
      if (plVar1[0x24] != 0) {
        FUN_10072d9d0(plVar1 + 0x24);
      }
      if (plVar1[0x27] != 0) {
        FUN_10072d9d0(plVar1 + 0x27);
      }
      if (plVar1[0x2a] != 0) {
        FUN_10072d9d0(plVar1 + 0x2a);
      }
      if (plVar1[0x2d] != 0) {
        FUN_10072d9d0(plVar1 + 0x2d);
      }
      param_1[1] = *(long *)(*param_1 + 0x188);
      FUN_10081e1a0();
      plVar1 = (long *)param_1[1];
      *param_1 = (long)plVar1;
    }
    FUN_10081e1a0(param_1);
    return;
  }
  return;
}

