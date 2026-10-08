
void FUN_100ca9350(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_100c5ffd0(param_1[3]);
    FUN_100c60790(param_1[4],FUN_100ca9410);
    if (0 < *(int *)(param_1 + 1)) {
      plVar1 = (long *)*param_1;
      iVar2 = 0;
      do {
        if (*plVar1 != 0) {
          FUN_100c7cd70();
        }
        if (plVar1[1] != 0) {
          FUN_100c60790(plVar1[1],FUN_100ca9000);
        }
        if (plVar1[2] != 0) {
          FUN_100ca9000();
        }
        iVar2 = iVar2 + 1;
        plVar1 = plVar1 + 4;
      } while (iVar2 < *(int *)(param_1 + 1));
    }
    if (param_1[2] != 0) {
      FUN_100c60790(param_1[2],FUN_100ca90a0);
    }
    FUN_100bf3910(*param_1);
    FUN_100bf3910(param_1);
    return;
  }
  return;
}

