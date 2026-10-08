
void FUN_1003743e0(undefined8 param_1)

{
  QObject *pQVar1;
  int *piVar2;
  int *local_38;
  QObject *local_30;
  undefined1 local_21;
  
  pQVar1 = (QObject *)FUN_1003704b0();
  if (pQVar1 != (QObject *)0x0) {
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    if (piVar2 != (int *)0x0) {
      if ((pQVar1 != (QObject *)0x0) && (piVar2[1] != 0)) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        local_21 = *piVar2 != 0;
        UNLOCK();
        local_38 = piVar2;
        local_30 = pQVar1;
        FUN_100373d30(param_1,&local_38,0);
        if (local_38 != (int *)0x0) {
          LOCK();
          *local_38 = *local_38 + -1;
          local_21 = *local_38 != 0;
          UNLOCK();
          if ((!(bool)local_21) && (local_38 != (int *)0x0)) {
            operator_delete(local_38);
          }
        }
      }
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_21 = *piVar2 != 0;
      UNLOCK();
      if (!(bool)local_21) {
        operator_delete(piVar2);
      }
    }
  }
  return;
}

