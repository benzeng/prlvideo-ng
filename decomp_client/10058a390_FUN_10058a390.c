
void FUN_10058a390(QSize *param_1,undefined8 param_2,int param_3,int param_4,QString *param_5,
                  int param_6)

{
  QSize QVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  QString local_c0;
  QString local_b8;
  QVariant local_b0;
  Data_conflict local_a0;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  int local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QIcon local_58 [15];
  undefined1 local_49;
  QUuid local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  CBaseDialog::CBaseDialog((CBaseDialog *)param_1,param_2,5,0);
  *param_1 = (QSize)&PTR_FUN_10221cf90;
  param_1[2] = (QSize)&PTR_FUN_10221d180;
  param_1[6] = (QSize)&PTR_FUN_10221d1d0;
  puVar2 = PTR_shared_null_1021e1288;
  param_1[0x21] = (QSize)PTR_shared_null_1021e1288;
  FUN_10058b530(param_1 + 0xc,param_1);
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
  QUuid::QUuid(local_48,param_5);
  cVar3 = QUuid::isNull();
  if (cVar3 == '\0') {
    QString::operator=(&local_60,param_5);
  }
  if (param_3 != -1) {
    QComboBox::setCurrentIndex(param_1[0xf].field0_0x0);
  }
  if (param_4 != -1) {
    QVar1 = param_1[0x1b];
    QString::number((int)&local_68,param_4);
    QLineEdit::setText((QString *)QVar1);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_49 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10058a4a3;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_10058a4a3:
  if ((*(int *)(param_5->field0_0x0 + 4) != 0) && (*(int *)(local_60.field0_0x0 + 4) == 0)) {
    QLineEdit::setText((QString *)param_1[0x19]);
  }
  if (param_6 != -1) {
    QVar1 = param_1[0x17];
    QString::number((int)&local_70,param_6);
    QLineEdit::setText((QString *)QVar1);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_49 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10058a526;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_10058a526:
  uVar7 = FUN_100152280();
  FUN_100154b10(&local_98,uVar7);
  local_90 = local_98;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 == 0) {
      QListData::detach((int)&local_90);
      lVar8 = (long)*(int *)(local_90 + 8);
      if ((local_98 + (long)*(int *)(local_98 + 8) * 8 != local_90 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_90 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_90 + 0xc))
         ) {
        _memcpy(local_90 + lVar8 * 8 + 0x10,local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      local_49 = *(int *)local_98 != 0;
      UNLOCK();
    }
  }
  local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
  local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
  local_78 = 1;
  if (*(int *)local_98 == -1) {
LAB_10058a62d:
    iVar6 = -1;
    if (local_88 != local_80) {
      do {
        lVar8 = *(long *)local_88;
        if (((lVar8 != 0) && (cVar3 = FUN_10018c770(lVar8), cVar3 == '\0')) &&
           (iVar4 = FUN_10018bce0(lVar8), iVar4 == 0)) {
          QVar1 = param_1[0x14];
          FUN_10018d830(&local_a0,lVar8);
          FUN_100188480(&local_b8,lVar8);
          QVariant::QVariant(&local_b0,&local_b8);
          uVar5 = QComboBox::count();
          QIcon::QIcon(local_58);
          QComboBox::insertItem
                    (QVar1.field0_0x0,(QIcon *)(ulong)uVar5,(QString *)local_58,
                     (QVariant *)&local_a0);
          QIcon::~QIcon(local_58);
          QVariant::~QVariant(&local_b0);
          if (*(int *)local_b8.field0_0x0 != -1) {
            if (*(int *)local_b8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
              local_49 = *(int *)local_b8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_10058a732;
            }
            QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
          }
LAB_10058a732:
          if (*(int *)local_a0.field15 != -1) {
            if (*(int *)local_a0.field15 != 0) {
              LOCK();
              *(int *)local_a0.field15 = *(int *)local_a0.field15 + -1;
              local_49 = *(int *)local_a0.field15 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_10058a768;
            }
            QArrayData::deallocate((QArrayData *)local_a0.field15,2,8);
          }
LAB_10058a768:
          FUN_100188480(&local_c0,lVar8);
          cVar3 = operator==(&local_60,&local_c0);
          if (*(int *)local_c0.field0_0x0 != -1) {
            if (*(int *)local_c0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
              local_49 = *(int *)local_c0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_10058a7bf;
            }
            QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
          }
LAB_10058a7bf:
          if (cVar3 != '\0') {
            iVar6 = QComboBox::count();
            iVar6 = iVar6 + -1;
          }
        }
        local_88 = local_88 + 8;
        local_78 = 1;
      } while (local_88 != local_80);
    }
  }
  else {
    if (*(int *)local_98 == 0) {
LAB_10058a611:
      QListData::dispose(local_98);
    }
    else {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_49 = *(int *)local_98 != 0;
      UNLOCK();
      if (!(bool)local_49) goto LAB_10058a611;
    }
    iVar6 = -1;
    if (local_78 != 0) goto LAB_10058a62d;
  }
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_49 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10058a830;
    }
    QListData::dispose(local_90);
  }
LAB_10058a830:
  iVar4 = QComboBox::count();
  if (iVar4 == 0) {
    QWidget::setEnabled(param_1[0x1f].field0_0x0);
  }
  else if ((iVar6 == -1) || (*(int *)(local_60.field0_0x0 + 4) == 0)) {
    QComboBox::setCurrentIndex(param_1[0x14].field0_0x0);
  }
  else {
    QComboBox::setCurrentIndex(param_1[0x14].field0_0x0);
    QAbstractButton::setChecked(param_1[0x1f].field0_0x0);
  }
  QWidget::setFixedSize(param_1);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_49 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10058a8e0;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10058a8e0:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

