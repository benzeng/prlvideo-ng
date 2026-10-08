
void FUN_100545980(QStringList *param_1)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  Data *pDVar5;
  bool bVar6;
  QArrayData *pQVar7;
  long lVar8;
  int *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  Data_conflict local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60 [24];
  QString local_48 [2];
  undefined1 local_31;
  
  MessageUtils::restoreHiddenMessages();
  QSettings::QSettings((QSettings *)local_48,(QObject *)0x0);
  local_60._16_8_ = QString::fromAscii_helper("PresentationMode",0x10);
  QSettings::remove(local_48);
  if (*(int *)local_60._16_8_ != -1) {
    if (*(int *)local_60._16_8_ != 0) {
      LOCK();
      *(int *)local_60._16_8_ = *(int *)local_60._16_8_ + -1;
      local_31 = *(int *)local_60._16_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005459f6;
    }
    QArrayData::deallocate((QArrayData *)local_60._16_8_,2,8);
  }
LAB_1005459f6:
  QSettings::~QSettings((QSettings *)local_48);
  QMutex::lock();
  lVar1 = DAT_1023108a8;
  if (DAT_1023108a8 == 0) {
    QMutex::unlock();
  }
  else {
    DAT_1023108b0 = DAT_1023108b0 + 1;
    QMutex::unlock();
    FUN_100101200(lVar1 + 0x38);
  }
  cVar3 = FUN_1005a5f40(param_1[6].field0_0x0.field1);
  bVar6 = SUB81(*(undefined8 *)((long)param_1[9].field0_0x0.field1 + 0x70),0);
  if (cVar3 == '\0') {
    FUN_1005455f0();
    QWidget::setEnabled(bVar6);
  }
  else {
    QWidget::setDisabled(bVar6);
  }
  iVar4 = CMessageManager::instance();
  local_60._8_8_ = PTR_shared_null_1021e15e8;
  local_60._0_8_ = PTR_shared_null_1021e15e8;
  local_98 = (int *)0x0;
  uStack_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0x80000000;
  local_78.field7 = 0;
  local_68 = 1;
  CMessageManager::showMessageBox
            (iVar4,(QWidget *)0x3b36,param_1,(QStringList *)(local_60 + 8),(CSlotInfo *)local_60,
             SUB81(&local_98,0));
  QVariant::~QVariant((QVariant *)&local_78);
  if (local_98 != (int *)0x0) {
    LOCK();
    *local_98 = *local_98 + -1;
    local_31 = *local_98 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_98 != (int *)0x0)) {
      operator_delete(local_98);
    }
  }
  uVar2 = local_60._0_8_;
  if (*(int *)local_60._0_8_ != -1) {
    if (*(int *)local_60._0_8_ != 0) {
      LOCK();
      *(int *)local_60._0_8_ = *(int *)local_60._0_8_ + -1;
      local_31 = *(int *)local_60._0_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100545ba1;
    }
    iVar4 = *(int *)(local_60._0_8_ + 0xc);
    if (iVar4 != *(int *)(local_60._0_8_ + 8)) {
      lVar8 = (long)*(int *)(local_60._0_8_ + 8) * 8 + (long)iVar4 * -8;
      pDVar5 = (Data *)(local_60._0_8_ + (long)iVar4 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_100545b80:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_100545b80;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)uVar2);
  }
LAB_100545ba1:
  uVar2 = local_60._8_8_;
  if (*(int *)local_60._8_8_ != -1) {
    if (*(int *)local_60._8_8_ != 0) {
      LOCK();
      *(int *)local_60._8_8_ = *(int *)local_60._8_8_ + -1;
      local_31 = *(int *)local_60._8_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100545c31;
    }
    iVar4 = *(int *)(local_60._8_8_ + 0xc);
    if (iVar4 != *(int *)(local_60._8_8_ + 8)) {
      lVar8 = (long)*(int *)(local_60._8_8_ + 8) * 8 + (long)iVar4 * -8;
      pDVar5 = (Data *)(local_60._8_8_ + (long)iVar4 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_100545c10:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_100545c10;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)uVar2);
  }
LAB_100545c31:
  if (lVar1 != 0) {
    FUN_100055290(&DAT_102310898);
  }
  return;
}

