
QString * FUN_100dc5380(QString *param_1)

{
  QArrayData *pQVar1;
  QString local_48;
  QArrayData *local_40;
  undefined *local_38;
  undefined1 local_29;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_38 = PTR_shared_null_1021e15e8;
  pQVar1 = (QArrayData *)
           QString::fromAscii_helper
                     ("/System/Library/Frameworks/CoreServices.framework/Frameworks/LaunchServices.framework/Support/lsregister -dump"
                      ,0x6e);
  local_40 = pQVar1;
  FUN_1000341d0(&local_38,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100dc53fa;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100dc53fa:
  FUN_100dc0360(&local_48,&local_38);
  QString::operator=(param_1,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100dc5446;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100dc5446:
  FUN_100039a80(&local_38);
  return param_1;
}

