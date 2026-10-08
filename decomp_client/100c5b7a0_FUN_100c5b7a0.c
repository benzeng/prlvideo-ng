
int FUN_100c5b7a0(long param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int local_34;
  
  local_34 = 0;
  if (((param_2 != (void *)0x0) &&
      (piVar1 = *(int **)(param_1 + 0x30), local_34 = 0, piVar1 != (int *)0x0)) &&
     (*(long *)(param_1 + 0x38) != 0)) {
    FUN_100c58810(param_1,0xf);
    iVar2 = piVar1[4];
    local_34 = 0;
    while( true ) {
      if (iVar2 != 0) {
        if (param_3 < iVar2) {
          iVar2 = param_3;
        }
        _memcpy(param_2,(void *)((long)piVar1[5] + *(long *)(piVar1 + 2)),(long)iVar2);
        piVar1[5] = piVar1[5] + iVar2;
        piVar1[4] = piVar1[4] - iVar2;
        local_34 = local_34 + iVar2;
        param_3 = param_3 - iVar2;
        if (param_3 == 0) {
          return local_34;
        }
        param_2 = (void *)((long)param_2 + (long)iVar2);
      }
      if (*piVar1 < param_3) {
        iVar2 = FUN_100c588a0(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
        while (0 < iVar2) {
          local_34 = local_34 + iVar2;
          param_3 = param_3 - iVar2;
          if (param_3 == 0) {
            return local_34;
          }
          param_2 = (void *)((long)param_2 + (long)iVar2);
          iVar2 = FUN_100c588a0(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
        }
        FUN_100c59780(param_1);
        if (-1 < iVar2) {
          return local_34;
        }
        if (0 < local_34) {
          return local_34;
        }
        return iVar2;
      }
      iVar2 = FUN_100c588a0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(piVar1 + 2));
      if (iVar2 < 1) break;
      piVar1[5] = 0;
      piVar1[4] = iVar2;
    }
    FUN_100c59780(param_1);
    if ((iVar2 < 0) && (local_34 < 1)) {
      local_34 = iVar2;
    }
  }
  return local_34;
}

