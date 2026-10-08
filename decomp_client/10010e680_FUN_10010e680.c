
undefined1 FUN_10010e680(QString *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  QArrayData *local_30;
  QFileInfo local_28 [15];
  undefined1 local_19;
  
  QFileInfo::QFileInfo(local_28,param_1);
  QFileInfo::suffix();
  uVar1 = QtPrivate::QStringList_contains(param_2,&local_30,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10010e6ec;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10010e6ec:
  QFileInfo::~QFileInfo(local_28);
  return uVar1;
}

