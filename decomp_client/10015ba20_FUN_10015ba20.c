
void FUN_10015ba20(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  QObject *pQVar3;
  int *local_30;
  QObject *local_28;
  undefined1 local_19;
  
  if (-1 < param_2) {
    lVar1 = *(long *)(param_1 + 200);
    if (param_2 < *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8)) {
      plVar2 = *(long **)(lVar1 + 0x10 + ((long)*(int *)(lVar1 + 8) + (long)param_2) * 8);
      lVar1 = *plVar2;
      if ((lVar1 == 0) || (*(int *)(lVar1 + 4) == 0)) {
        pQVar3 = (QObject *)0x0;
        local_30 = (int *)0x0;
      }
      else {
        pQVar3 = (QObject *)plVar2[1];
        local_30 = (int *)0x0;
        if (pQVar3 != (QObject *)0x0) {
          local_30 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
        }
      }
      local_28 = pQVar3;
      FUN_10015b540(param_1,&local_30);
      if (local_30 != (int *)0x0) {
        LOCK();
        *local_30 = *local_30 + -1;
        local_19 = *local_30 != 0;
        UNLOCK();
        if ((!(bool)local_19) && (local_30 != (int *)0x0)) {
          operator_delete(local_30);
        }
      }
      return;
    }
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: VM index is out of the range.");
  return;
}

