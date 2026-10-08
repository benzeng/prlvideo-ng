
void FUN_1006f1960(QObject *param_1,undefined4 param_2,QString *param_3,QString *param_4,
                  QString *param_5,QString *param_6)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *pQVar3;
  QArrayData *local_98;
  undefined8 local_90;
  QString local_88;
  QString local_80;
  QTypedArrayData<unsigned_short> *local_78;
  QArrayData *local_70;
  QTypedArrayData<unsigned_short> *local_68;
  QArrayData *local_60;
  QString local_58;
  undefined4 local_4c;
  void *local_48;
  undefined4 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (1 < DAT_10230ffd0) {
    local_68 = param_3->field0_0x0;
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_68 != 0);
    }
    QString::toLocal8Bit();
    pQVar3 = local_60 + *(long *)(local_60 + 0x10);
    local_78 = param_5->field0_0x0;
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_78 != 0);
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",2,
                  "Purchase completed. Status: %d. OrderID: %s. DownloadUrl: %s",param_2,pQVar3,
                  local_70 + *(long *)(local_70 + 0x10));
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_70 != 0);
        if (*(int *)local_70 != 0) goto LAB_1006f1a68;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_1006f1a68:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_78 != 0);
        if (*(int *)local_78 != 0) goto LAB_1006f1a98;
      }
      QArrayData::deallocate((QArrayData *)local_78,2,8);
    }
LAB_1006f1a98:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_60 != 0);
        if (*(int *)local_60 != 0) goto LAB_1006f1ac8;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_1006f1ac8:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_68 != 0);
        if (*(int *)local_68 != 0) goto LAB_1006f1af8;
      }
      QArrayData::deallocate((QArrayData *)local_68,2,8);
    }
  }
LAB_1006f1af8:
  iVar1 = QDateTime::currentMSecsSinceEpoch();
  QString::number((longlong)&local_80,iVar1);
  QString::operator=((QString *)(param_1 + 0x128),&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_80.field0_0x0 != 0);
      if (*(int *)local_80.field0_0x0 != 0) goto LAB_1006f1b57;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1006f1b57:
  QString::operator=((QString *)(param_1 + 0x138),param_6);
  local_90 = QDate::currentDate();
  QDate::toString(&local_88,&local_90,3);
  QString::operator=((QString *)(param_1 + 0x130),&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_88.field0_0x0 != 0);
      if (*(int *)local_88.field0_0x0 != 0) goto LAB_1006f1bd9;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1006f1bd9:
  QString::operator=((QString *)(param_1 + 0x140),param_5);
  QString::operator=((QString *)(param_1 + 0x148),param_3);
  QString::fromUtf8_helper((char *)&local_58,0x1ddf8a8);
  QString::operator=((QString *)(param_1 + 0xd0),&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_58.field0_0x0 != 0);
      if (*(int *)local_58.field0_0x0 != 0) goto LAB_1006f1c50;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1006f1c50:
  QString::operator=((QString *)(param_1 + 0x118),param_4);
  if (*(int *)(*(long *)(param_1 + 0x108) + 4) == 0) {
    QString::operator=((QString *)(param_1 + 0x108),param_5);
  }
  local_98 = (QArrayData *)QString::fromAscii_helper("store",5);
  uVar2 = FUN_10073fe80(&local_98);
  FUN_1007420e0(uVar2,param_1 + 0xd0);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_98 != 0);
      if (*(int *)local_98 != 0) goto LAB_1006f1ceb;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1006f1ceb:
  if (*(int *)(param_1 + 0x150) != 4) {
    *(undefined4 *)(param_1 + 0x150) = 4;
    local_4c = 4;
    local_48 = (void *)0x0;
    local_40 = &local_4c;
    QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f5920,0,&local_48);
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

