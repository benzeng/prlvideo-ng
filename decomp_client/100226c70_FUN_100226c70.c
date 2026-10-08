
void FUN_100226c70(CTaskGenericId *param_1,QString *param_2,QString *param_3,long *param_4)

{
  long lVar1;
  QString local_88;
  QVariant local_80;
  QArrayData *local_70;
  QString local_68;
  QVariant local_60;
  QVariant local_50;
  QVariant local_40;
  undefined1 local_29;
  
  CTaskGenericId::CTaskGenericId(param_1,0x93);
  *(undefined ***)param_1 = &PTR_FUN_1022719b0;
  QVariant::QVariant(&local_40,param_2);
  CTaskGenericId::addParam((QVariant *)param_1);
  QVariant::~QVariant(&local_40);
  QVariant::QVariant(&local_50,param_3);
  CTaskGenericId::addParam((QVariant *)param_1);
  QVariant::~QVariant(&local_50);
  local_70 = (QArrayData *)QString::fromAscii_helper("%1",2);
  lVar1 = 0;
  if ((*param_4 != 0) && (lVar1 = 0, *(int *)(*param_4 + 4) != 0)) {
    lVar1 = param_4[1];
  }
  QString::arg(&local_68,&local_70,lVar1,0,10,0x20);
  QVariant::QVariant(&local_60,&local_68);
  CTaskGenericId::addParam((QVariant *)param_1);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100226d79;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100226d79:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100226da9;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100226da9:
  FUN_100226f20(&local_88,param_4);
  QVariant::QVariant(&local_80,&local_88);
  CTaskGenericId::addParam((QVariant *)param_1);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_88.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
  return;
}

