
undefined1
FUN_1006a83c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             long param_5)

{
  int iVar1;
  Data *pDVar2;
  undefined1 uVar3;
  Data *pDVar4;
  long lVar5;
  Data *local_38;
  undefined4 local_30;
  undefined1 local_2a;
  
  local_30 = param_4;
  if (param_5 == 0) {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != context","ActionManager/ActionUpdater/CActionUpdater.cpp",0xf3,
                  "scheduleUpdate");
  }
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100071ff0(&local_38,&local_30);
  uVar3 = FUN_1006a80b0(param_1,param_2,param_3,&local_38,param_5);
  pDVar2 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar3;
      }
      local_2a = 0;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar5 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_38 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar4 != (void *)0x0) {
          operator_delete(*(void **)pDVar4);
        }
        pDVar4 = pDVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar2);
  }
  return uVar3;
}

