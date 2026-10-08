
void FUN_1007bfc60(long param_1)

{
  QObject *pQVar1;
  int *piVar2;
  int *local_40;
  QObject *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar1 = operator_new(0x18);
  QMetaObject::tr((char *)&local_30,(char *)&PTR_staticMetaObject_10222dc30,0x1e10b2b);
  FUN_1007b5750(pQVar1,0x11,param_1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007bfce0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1007bfce0:
  piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  local_40 = piVar2;
  local_38 = pQVar1;
  FUN_1007c57e0(param_1 + 0x38,&local_40);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_21 = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar2);
    }
  }
  return;
}

