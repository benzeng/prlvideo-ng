
void FUN_10028a1c0(long param_1,int param_2)

{
  int iVar1;
  QString *pQVar2;
  bool bVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QObject::sender();
  QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12a0);
  if (param_2 == -0x7ffa9aff) {
    pQVar2 = (QString *)0x0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pQVar2 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      pQVar2 = *(QString **)(param_1 + 0x48);
    }
    QMetaObject::tr((char *)&local_30,(char *)&PTR_staticMetaObject_102206370,0x1de22b7);
    CPasswordDialog::setErrorText(pQVar2);
    if (*(int *)local_30 == -1) {
      return;
    }
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
  }
  else {
    if (param_2 < 0) {
      bVar3 = false;
    }
    else {
      CSdkRequest::getResultAsString((int)&local_38);
      iVar1 = QString::toInt((bool *)&local_38,0);
      bVar3 = iVar1 != 0;
    }
    FUN_10081c6b0(param_1,bVar3);
    if (param_2 < 0) {
      return;
    }
    if (*(int *)local_38 == -1) {
      return;
    }
    local_30 = local_38;
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
  }
  QArrayData::deallocate(local_30,2,8);
  return;
}

