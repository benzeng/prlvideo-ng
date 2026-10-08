
QObject * FUN_100318bf0(long param_1,undefined4 param_2)

{
  QObject *pQVar1;
  int *piVar2;
  int *local_48;
  QObject *local_40;
  Connection local_38 [8];
  undefined4 local_30;
  undefined1 local_29;
  
  local_30 = param_2;
  pQVar1 = (QObject *)FUN_1003192a0();
  if (pQVar1 == (QObject *)0x0) {
    pQVar1 = operator_new(0xe0);
    FUN_100323a50(pQVar1,param_1,param_2);
    QObject::connect(local_38,pQVar1,
                     "2viewModeChanged(GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)",param_1,
                     "1onVmDisplayViewModeChanged(GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)",0
                    );
    QMetaObject::Connection::~Connection(local_38);
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    local_48 = piVar2;
    local_40 = pQVar1;
    FUN_100321c20(param_1 + 0x48,&local_30,&local_48);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_29 = *piVar2 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar2);
      }
    }
    FUN_1003261e0(pQVar1);
  }
  return pQVar1;
}

