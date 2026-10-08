
void FUN_100749d80(long param_1,QUrl *param_2)

{
  QString *this;
  int iVar1;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QUrlQuery local_30 [8];
  QString local_28;
  undefined1 local_19;
  
  QUrlQuery::QUrlQuery(local_30,param_2);
  local_40 = (QArrayData *)QString::fromAscii_helper("scope",5);
  QUrlQuery::queryItemValue(&local_38,local_30,&local_40,0);
  iVar1 = QString::compare_helper
                    (local_38 + *(long *)(local_38 + 0x10),*(undefined4 *)(local_38 + 4),
                     "confirmation",0xffffffff,1);
  *(bool *)(param_1 + 0x38) = iVar1 == 0;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100749e1b;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100749e1b:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100749e4b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100749e4b:
  this = (QString *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (this->field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288) {
      local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      QString::operator=(this,&local_28);
      if (*(int *)local_28.field0_0x0 != -1) {
        if (*(int *)local_28.field0_0x0 != 0) {
          LOCK();
          *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
          local_19 = *(int *)local_28.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100749f5a;
        }
        QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
      }
    }
    goto LAB_100749f5a;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper("transaction",0xb);
  QUrlQuery::queryItemValue(&local_48,local_30,&local_50,0);
  QString::operator=(this,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_19 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100749ebe;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100749ebe:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100749eee;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100749eee:
  FUN_100858da0(*(undefined8 *)(param_1 + 0x10));
  QTimer::start((int)*(undefined8 *)(param_1 + 0x50));
LAB_100749f5a:
  QUrlQuery::~QUrlQuery(local_30);
  return;
}

