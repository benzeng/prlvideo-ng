
void FUN_1008cddd0(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_100884dd0(param_1[3]);
    FUN_100885590(param_1[4],FUN_1008cde90);
    if (0 < *(int *)(param_1 + 1)) {
      plVar1 = (long *)*param_1;
      iVar2 = 0;
      do {
        if (*plVar1 != 0) {
          FUN_1008a17f0();
        }
        if (plVar1[1] != 0) {
          FUN_100885590(plVar1[1],FUN_1008cda80);
        }
        if (plVar1[2] != 0) {
          FUN_1008cda80();
        }
        iVar2 = iVar2 + 1;
        plVar1 = plVar1 + 4;
      } while (iVar2 < *(int *)(param_1 + 1));
    }
    if (param_1[2] != 0) {
      FUN_100885590(param_1[2],FUN_1008cdb20);
    }
    FUN_10081e1a0(*param_1);
    FUN_10081e1a0(param_1);
    return;
  }
  return;
}

