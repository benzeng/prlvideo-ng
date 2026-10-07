
void FUN_100279910(long param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  CVmGenericNetworkAdapter *pCVar4;
  CVmGenericNetworkAdapter local_1c0 [408];
  
  QMutex::lock();
  if (*(char *)(param_1 + 0x168) != '\0') {
    *(undefined4 *)(param_1 + 0x204) = param_2;
    QMutex::lock();
    plVar2 = *(long **)(param_1 + 0x80);
    if (plVar2 != (long *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    QMutex::unlock();
    pCVar4 = (CVmGenericNetworkAdapter *)0x0;
    if (plVar2 != (long *)0x0) {
      pCVar4 = (CVmGenericNetworkAdapter *)0x0;
      if (plVar2[2] != 0) {
        pCVar4 = (CVmGenericNetworkAdapter *)
                 ___dynamic_cast(plVar2[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2240,0);
      }
    }
    CVmGenericNetworkAdapter::CVmGenericNetworkAdapter(local_1c0,pCVar4);
    FUN_1002792b0(param_1,local_1c0);
    CVmGenericNetworkAdapter::~CVmGenericNetworkAdapter(local_1c0);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  QMutex::unlock();
  return;
}

