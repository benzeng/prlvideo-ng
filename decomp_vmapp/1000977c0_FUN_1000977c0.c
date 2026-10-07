
bool FUN_1000977c0(long param_1,QString *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  QString local_40;
  undefined1 local_32;
  
  if (param_1 == 0) {
    return false;
  }
  plVar4 = (long *)___dynamic_cast(param_1,&PTR_vtable_100baea70,&PTR_vtable_100bef130,
                                   0xfffffffffffffffe);
  if (plVar4 == (long *)0x0) {
    return false;
  }
  QMutex::lock();
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 == (long *)0x0) {
    QMutex::unlock();
  }
  else {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
    QMutex::unlock();
    if (plVar1[2] != 0) {
      ___dynamic_cast(plVar1[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba21d0,0);
    }
  }
  CVmDevice::getSystemName();
  cVar3 = operator==(&local_40,param_2);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_32 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_1000978b8;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1000978b8:
  if (cVar3 != '\0') {
    pQVar5 = (QTypedArrayData<unsigned_short> *)(**(code **)(*plVar4 + 0x10))(plVar4);
    param_2[1].field0_0x0 = pQVar5;
  }
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar4 = plVar1 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  return cVar3 != '\0';
}

