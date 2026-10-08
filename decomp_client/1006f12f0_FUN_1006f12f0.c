
void FUN_1006f12f0(QObject *param_1,QUrl *param_2)

{
  QObject *this;
  long lVar1;
  int iVar2;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QUrlQuery local_58 [12];
  undefined4 local_4c;
  QString local_48;
  undefined1 local_39;
  void *local_38;
  undefined4 *local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  QUrlQuery::QUrlQuery(local_58,param_2);
  local_68 = (QArrayData *)QString::fromAscii_helper("scope",5);
  QUrlQuery::queryItemValue(&local_60,local_58,&local_68,0);
  iVar2 = QString::compare_helper
                    (local_60 + *(long *)(local_60 + 0x10),*(undefined4 *)(local_60 + 4),
                     "confirmation",0xffffffff,1);
  param_1[0x70] = (QObject)(iVar2 == 0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_39 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_1006f139b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006f139b:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_39 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_1006f13cb;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006f13cb:
  this = param_1 + 0x78;
  if (param_1[0x70] == (QObject)0x0) {
    if (*(QTypedArrayData<unsigned_short> **)this !=
        (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288) {
      local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      QString::operator=((QString *)this,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_39 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_39) goto LAB_1006f1515;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
    }
    goto LAB_1006f1515;
  }
  local_78 = (QArrayData *)QString::fromAscii_helper("transaction",0xb);
  QUrlQuery::queryItemValue(&local_70,local_58,&local_78,0);
  QString::operator=((QString *)this,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_39 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_1006f143e;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1006f143e:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_39 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_1006f146e;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1006f146e:
  if (*(int *)(param_1 + 0x150) != 3) {
    *(undefined4 *)(param_1 + 0x150) = 3;
    local_4c = 3;
    local_38 = (void *)0x0;
    local_30 = &local_4c;
    QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f5920,0,&local_38);
  }
  QTimer::start((int)*(undefined8 *)(param_1 + 0x160));
LAB_1006f1515:
  QUrlQuery::~QUrlQuery(local_58);
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

