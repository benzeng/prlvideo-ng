
void FUN_10058ad60(QStringList *param_1)

{
  QStringList QVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  uint uVar9;
  long lVar10;
  AnonymousUnion0 AVar11;
  int *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  Data_conflict local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined1 local_80 [16];
  QArrayData *local_70;
  QVariant local_68;
  QString local_58;
  QHostAddress local_50 [8];
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QLineEdit::text();
  iVar4 = QString::toInt((bool *)&local_40,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058adcc;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10058adcc:
  uVar9 = 0x80000007;
  AVar11.field1 = (Data *)0x0;
  if (0xfffe < iVar4 - 1U) {
    AVar11 = (AnonymousUnion0)param_1[0x1b].field0_0x0.field1;
    uVar9 = 0x80015201;
  }
  QLineEdit::text();
  QHostAddress::QHostAddress(local_50,&local_48);
  if (uVar9 == 0x80000007) {
    cVar3 = QAbstractButton::isChecked();
    uVar9 = 0x80000007;
    if ((cVar3 != '\0') &&
       (((iVar5 = QHostAddress::protocol(), iVar5 == 1 &&
         (((cVar3 = QHostAddress::isNull(), cVar3 != '\0' ||
           (cVar3 = QHostAddress::operator==(local_50,3), cVar3 != '\0')) ||
          (cVar3 = QHostAddress::operator==(local_50,5), cVar3 != '\0')))) ||
        ((iVar5 = QHostAddress::protocol(), iVar5 != 1 &&
         (((cVar3 = QHostAddress::isNull(), cVar3 != '\0' ||
           (cVar3 = QHostAddress::operator==(local_50,2), cVar3 != '\0')) ||
          ((cVar3 = QHostAddress::operator==(local_50,4), cVar3 != '\0' ||
           (cVar3 = QHostAddress::operator==(local_50,1), cVar3 != '\0')))))))))) {
      AVar11 = (AnonymousUnion0)param_1[0x19].field0_0x0.field1;
      uVar9 = 0x80015203;
    }
  }
  cVar3 = QAbstractButton::isChecked();
  if (cVar3 != '\0') {
    QVar1.field0_0x0 = param_1[0x14].field0_0x0;
    QComboBox::currentIndex();
    QComboBox::itemData((int)local_80 + 0x18,QVar1.field0_0x0._0_4_);
    QVariant::toString();
    QString::operator=(&local_48,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10058af53;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_10058af53:
    QVariant::~QVariant((QVariant *)(local_80 + 0x18));
  }
  QLineEdit::text();
  iVar5 = QString::toInt((bool *)(local_80 + 0x10),0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058afaf;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10058afaf:
  if (uVar9 == 0x80000007) {
    if (iVar5 - 1U < 0xffff) {
      uVar6 = QComboBox::currentIndex();
      *(undefined4 *)&param_1[0x20].field0_0x0 = uVar6;
      *(int *)((long)&param_1[0x20].field0_0x0 + 4) = iVar4;
      QString::operator=((QString *)(param_1 + 0x21),&local_48);
      *(int *)&param_1[0x22].field0_0x0 = iVar5;
      QDialog::accept();
      goto LAB_10058b1fb;
    }
    AVar11 = (AnonymousUnion0)param_1[0x17].field0_0x0.field1;
    uVar9 = 0x80015202;
  }
  iVar4 = CMessageManager::instance();
  local_80._8_8_ = PTR_shared_null_1021e15e8;
  local_80._0_8_ = PTR_shared_null_1021e15e8;
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0x80000000;
  local_98.field7 = 0;
  local_88 = 1;
  CMessageManager::showMessageBox
            (iVar4,(QWidget *)(ulong)uVar9,param_1,(QStringList *)(local_80 + 8),
             (CSlotInfo *)local_80,SUB81(&local_b8,0));
  QVariant::~QVariant((QVariant *)&local_98);
  if (local_b8 != (int *)0x0) {
    LOCK();
    *local_b8 = *local_b8 + -1;
    local_31 = *local_b8 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_b8 != (int *)0x0)) {
      operator_delete(local_b8);
    }
  }
  uVar2 = local_80._0_8_;
  if (*(int *)local_80._0_8_ != -1) {
    if (*(int *)local_80._0_8_ != 0) {
      LOCK();
      *(int *)local_80._0_8_ = *(int *)local_80._0_8_ + -1;
      local_31 = *(int *)local_80._0_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058b151;
    }
    iVar4 = *(int *)(local_80._0_8_ + 0xc);
    if (iVar4 != *(int *)(local_80._0_8_ + 8)) {
      lVar10 = (long)*(int *)(local_80._0_8_ + 8) * 8 + (long)iVar4 * -8;
      pDVar7 = (Data *)(local_80._0_8_ + (long)iVar4 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_10058b130:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_10058b130;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)uVar2);
  }
LAB_10058b151:
  uVar2 = local_80._8_8_;
  if (*(int *)local_80._8_8_ != -1) {
    if (*(int *)local_80._8_8_ != 0) {
      LOCK();
      *(int *)local_80._8_8_ = *(int *)local_80._8_8_ + -1;
      local_31 = *(int *)local_80._8_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058b1e1;
    }
    iVar4 = *(int *)(local_80._8_8_ + 0xc);
    if (iVar4 != *(int *)(local_80._8_8_ + 8)) {
      lVar10 = (long)*(int *)(local_80._8_8_ + 8) * 8 + (long)iVar4 * -8;
      pDVar7 = (Data *)(local_80._8_8_ + (long)iVar4 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_10058b1c0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_10058b1c0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)uVar2);
  }
LAB_10058b1e1:
  if (AVar11.field1 != (Data *)0x0) {
    QWidget::setFocus(AVar11.field1,7);
    QLineEdit::selectAll();
  }
LAB_10058b1fb:
  QHostAddress::~QHostAddress(local_50);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return;
}

