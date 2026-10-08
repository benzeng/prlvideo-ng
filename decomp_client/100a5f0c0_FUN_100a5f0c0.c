
QByteArray * FUN_100a5f0c0(QByteArray *param_1)

{
  long lVar1;
  QArrayData *local_30;
  undefined1 local_23;
  
  *(undefined **)param_1 = PTR_shared_null_1021e1288;
  lVar1 = _TISCopyCurrentKeyboardInputSource();
  if (lVar1 == 0) {
    return param_1;
  }
  FUN_100a61530(&local_30,lVar1);
  QByteArray::operator=(param_1,(QByteArray *)&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_23 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_23) goto LAB_100a5f12f;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100a5f12f:
  _CFRelease(lVar1);
  return param_1;
}

