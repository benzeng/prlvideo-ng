
void FUN_10005fb90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  QObject *pQVar2;
  int *local_30;
  QObject *local_28;
  undefined1 local_19;
  
  uVar1 = FUN_100152280();
  pQVar2 = (QObject *)FUN_100152a20(uVar1,param_2);
  if (pQVar2 == (QObject *)0x0) {
    FUN_100df99c0("[CONTEXT_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != server","Application/CAppContextLogic.mm",0xe5,"onBeforeServerRemoved");
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    local_30 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    local_28 = pQVar2;
    FUN_10080aa20(uVar1,&local_30);
    if (local_30 != (int *)0x0) {
      LOCK();
      *local_30 = *local_30 + -1;
      local_19 = *local_30 != 0;
      UNLOCK();
      if ((!(bool)local_19) && (local_30 != (int *)0x0)) {
        operator_delete(local_30);
      }
    }
  }
  return;
}

