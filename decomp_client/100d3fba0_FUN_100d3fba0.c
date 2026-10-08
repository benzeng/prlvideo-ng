
QString * FUN_100d3fba0(QString *param_1)

{
  QArrayData *local_40;
  QLocale local_38 [8];
  QArrayData *local_30;
  long local_28;
  undefined1 local_19;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QLocale::system();
  QLocale::name();
  local_40 = (QArrayData *)QString::fromAscii_helper("_",1);
  QString::split(&local_28,&local_30,&local_40,0,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d3fc2c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d3fc2c:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d3fc5c;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100d3fc5c:
  QLocale::~QLocale(local_38);
  if (1 < *(int *)(local_28 + 0xc) - *(int *)(local_28 + 8)) {
    QString::operator=(param_1,(QString *)(local_28 + 0x18 + (long)*(int *)(local_28 + 8) * 8));
  }
  FUN_100039a80(&local_28);
  return param_1;
}

