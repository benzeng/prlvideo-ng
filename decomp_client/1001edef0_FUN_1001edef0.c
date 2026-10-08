
void FUN_1001edef0(long param_1)

{
  QString *pQVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  CAbstractProgressOperation::setProgress((int)*(undefined8 *)(param_1 + 0x10));
  pQVar1 = *(QString **)(param_1 + 0x10);
  QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,0x1dda86d);
  CAbstractProgressOperation::setDescription(pQVar1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

