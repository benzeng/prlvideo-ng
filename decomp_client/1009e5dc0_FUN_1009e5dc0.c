
QString * FUN_1009e5dc0(QString *param_1)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QString local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  pQVar1 = (QTypedArrayData<unsigned_short> *)
           QString::fromAscii_helper
                     ("<ParallelsHostInfo>\t<OsVersion>\t\t<StringPresentation>%1</StringPresentation>\t</OsVersion></ParallelsHostInfo>"
                      ,0x6d);
  param_1->field0_0x0 = pQVar1;
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  QString::arg(&local_30,param_1,&local_28,0,0x20);
  QString::operator=(param_1,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009e5e41;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1009e5e41:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

