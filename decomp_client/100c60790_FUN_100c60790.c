
void FUN_100c60790(int *param_1,code *param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    lVar2 = 0;
    if (0 < iVar1) {
      do {
        if (*(long *)(*(long *)(param_1 + 2) + lVar2 * 8) != 0) {
          (*param_2)();
          iVar1 = *param_1;
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
    if (*(long *)(param_1 + 2) != 0) {
      FUN_100bf3910();
    }
    FUN_100bf3910(param_1);
    return;
  }
  return;
}

