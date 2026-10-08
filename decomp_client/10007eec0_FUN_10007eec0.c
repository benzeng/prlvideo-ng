
void FUN_10007eec0(CTaskGenericId *param_1,QString *param_2)

{
  QVariant local_40;
  Data_conflict local_30;
  undefined1 local_21;
  
  CTaskGenericId::CTaskGenericId(param_1,0x35);
  *(undefined ***)param_1 = &PTR_FUN_1022718b0;
  local_30.field7 = QString::fromAscii_helper("uuid",4);
  QVariant::QVariant(&local_40,param_2);
  CTaskGenericId::insertParam((QString *)param_1,(QVariant *)&local_30);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_30.field15 != -1) {
    if (*(int *)local_30.field15 != 0) {
      LOCK();
      *(int *)local_30.field15 = *(int *)local_30.field15 + -1;
      UNLOCK();
      if (*(int *)local_30.field15 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field15,2,8);
  }
  return;
}

