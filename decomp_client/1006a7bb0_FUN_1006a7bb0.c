
undefined8 FUN_1006a7bb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  Data *pDVar2;
  Data *pDVar3;
  long lVar4;
  Data *local_38;
  undefined4 local_30;
  undefined1 local_2a;
  
  local_30 = param_3;
  if (param_4 == 0) {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != context","ActionManager/ActionUpdater/CActionUpdater.cpp",199,
                  "scheduleUpdate");
  }
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100071ff0(&local_38,&local_30);
  FUN_1006a68e0(param_1,param_2,&local_38,param_4);
  pDVar2 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_2a = 0;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar4 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = local_38 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar3 != (void *)0x0) {
          operator_delete(*(void **)pDVar3);
        }
        pDVar3 = pDVar3 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar2);
  }
  return param_1;
}

