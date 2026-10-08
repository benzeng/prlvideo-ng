
void FUN_100299ec0(CTaskGenericId *param_1,int param_2,long param_3)

{
  QVariant local_60;
  QString local_50;
  QVariant local_48;
  QVariant local_38;
  undefined1 local_21;
  
  CTaskGenericId::CTaskGenericId(param_1,0x6d);
  *(undefined ***)param_1 = &PTR_FUN_1022727c0;
  QVariant::QVariant(&local_38,param_2);
  CTaskGenericId::addParam((QVariant *)param_1);
  QVariant::~QVariant(&local_38);
  if (param_3 == 0) {
    local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  }
  else {
    QObject::property((char *)&local_60);
    QVariant::toString();
  }
  QVariant::QVariant(&local_48,&local_50);
  CTaskGenericId::addParam((QVariant *)param_1);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100299fa0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100299fa0:
  if (param_3 != 0) {
    QVariant::~QVariant(&local_60);
  }
  return;
}

