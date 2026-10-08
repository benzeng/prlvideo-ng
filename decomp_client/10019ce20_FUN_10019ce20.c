
void FUN_10019ce20(CTaskGenericId *param_1,QString *param_2,bool param_3)

{
  QVariant local_58;
  Data_conflict local_48;
  QVariant local_40;
  Data_conflict local_30;
  undefined1 local_21;
  
  CTaskGenericId::CTaskGenericId(param_1,0x2e);
  *(undefined **)param_1 = PTR_DAT_1021e17f0 + 0x10;
  local_30.field7 = QString::fromAscii_helper("url",3);
  QVariant::QVariant(&local_40,param_2);
  CTaskGenericId::insertParam((QString *)param_1,(QVariant *)&local_30);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_30.field15 != -1) {
    if (*(int *)local_30.field15 != 0) {
      LOCK();
      *(int *)local_30.field15 = *(int *)local_30.field15 + -1;
      local_21 = *(int *)local_30.field15 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10019ceb8;
    }
    QArrayData::deallocate((QArrayData *)local_30.field15,2,8);
  }
LAB_10019ceb8:
  local_48.field7 = QString::fromAscii_helper("needDetectCredentials",0x15);
  QVariant::QVariant(&local_58,param_3);
  CTaskGenericId::insertParam((QString *)param_1,(QVariant *)&local_48);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48.field15 != -1) {
    if (*(int *)local_48.field15 != 0) {
      LOCK();
      *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
      UNLOCK();
      if (*(int *)local_48.field15 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
  }
  return;
}

