
int FUN_100d49b90(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int *local_38;
  undefined8 local_30;
  int *local_28;
  undefined1 local_19;
  
  local_38 = (int *)PTR_shared_null_1021e15e8;
  iVar2 = FUN_100d49cd0(param_1,&local_38);
  piVar4 = local_38;
  if (iVar2 < 0) {
    _PrlDbg_PrlResultToString(iVar2,&local_30);
    FUN_100df99c0("","PrlSdkUtils",0,"Error to get hard disk list with code 0x%x: \'%s\'",iVar2,
                  local_30);
  }
  else {
    if ((int *)*param_2 != local_38) {
      local_28 = local_38;
      if (*local_38 != -1) {
        if (*local_38 == 0) {
          QListData::detach((int)&local_28);
          iVar2 = local_28[2];
          if (iVar2 != local_28[3]) {
            piVar4 = piVar4 + (long)piVar4[2] * 2 + 4;
            piVar5 = local_28 + (long)iVar2 * 2 + 4;
            lVar3 = (long)local_28[3] * 8 + (long)iVar2 * -8;
            do {
              piVar1 = *(int **)piVar4;
              *(int **)piVar5 = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                local_19 = *piVar1 != 0;
                UNLOCK();
              }
              piVar5 = piVar5 + 2;
              piVar4 = piVar4 + 2;
              lVar3 = lVar3 + -8;
            } while (lVar3 != 0);
          }
        }
        else {
          LOCK();
          *local_38 = *local_38 + 1;
          local_19 = *local_38 != 0;
          UNLOCK();
        }
      }
      piVar4 = (int *)*param_2;
      *param_2 = local_28;
      local_28 = piVar4;
      FUN_100039a80(&local_28);
    }
    iVar2 = 0;
  }
  FUN_100039a80(&local_38);
  return iVar2;
}

