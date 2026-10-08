
void FUN_10029e920(QHttpPart *param_1,undefined8 param_2)

{
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QVariant local_40;
  QHttpPart local_30 [15];
  undefined1 local_21;
  
  QHttpPart::QHttpPart(local_30);
  local_50 = (QArrayData *)QString::fromAscii_helper("form-data; name=\"%1\"",0x14);
  QString::arg(&local_48,&local_50,param_2,0,0x20);
  QVariant::QVariant(&local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029e9a9;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10029e9a9:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029e9d9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10029e9d9:
  QHttpPart::setHeader(local_30,6,&local_40);
  QString::toUtf8();
  QHttpPart::setBody((QByteArray *)local_30);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029ea34;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10029ea34:
  QHttpMultiPart::append(param_1);
  QVariant::~QVariant(&local_40);
  QHttpPart::~QHttpPart(local_30);
  return;
}

