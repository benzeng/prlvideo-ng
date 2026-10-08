
void FUN_1002959b0(long *param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  int *local_40;
  QObject *local_38;
  undefined1 local_29;
  
  if (-1 < param_2) {
    QObject::sender();
    local_38 = (QObject *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
    piVar2 = (int *)0x0;
    if (local_38 != (QObject *)0x0) {
      piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_38);
    }
    local_40 = piVar2;
    FUN_100295aa0(param_1 + 5,&local_40);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_29 = *piVar2 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar2);
      }
    }
    lVar1 = param_1[5];
    if (*(int *)(lVar1 + 0xc) == *(int *)(lVar1 + 8)) {
      (**(code **)(*param_1 + 0xb0))(param_1,0);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100295a6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1);
  return;
}

