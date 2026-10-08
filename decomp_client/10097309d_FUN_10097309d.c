
int FUN_10097309d(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  int local_14;
  
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar1[1] != 0) {
    lVar2 = FUN_100970881(param_1,plVar1[1]);
    plVar1[1] = lVar2;
    if (plVar1[1] != 0) {
      if (param_2 != 0) {
        FUN_100964522(param_1,0x1a,*(undefined8 *)(*plVar1 + 0x10),*(undefined8 *)(plVar1[1] + 0x10)
                      ,0);
      }
      return -1;
    }
  }
  local_14 = 0;
  while( true ) {
    if ((int)plVar1[2] <= local_14) {
      return 0;
    }
    if (*(long *)(plVar1[6] + (long)local_14 * 8) != 0) break;
    local_14 = local_14 + 1;
  }
  if (param_2 != 0) {
    FUN_100964522(param_1,0x1b,*(undefined8 *)(*(long *)(plVar1[6] + (long)local_14 * 8) + 0x10),
                  *(undefined8 *)(*plVar1 + 0x10),0);
  }
  return -1 - local_14;
}

