
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042a5f0(long param_1)

{
  QStringList *pQVar1;
  bool bVar2;
  AnonymousUnion0 AVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  Data *pDVar8;
  Data *pDVar9;
  ulong uVar10;
  undefined1 uVar11;
  QArrayData *pQVar12;
  long lVar13;
  double dVar14;
  undefined1 auVar15 [16];
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  int *local_78 [4];
  QVariant local_58 [2];
  Data *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  cVar4 = CAbstractTask::isFinished();
  if (cVar4 == '\0') {
    iVar5 = CAbstractTask::state();
    if (iVar5 != 0) {
      return;
    }
    CAbstractTask::execute();
    return;
  }
  iVar5 = CAbstractTask::getResult();
  FUN_10042d570(param_1,2);
  if (iVar5 < 0) {
LAB_10042a983:
    iVar5 = *(int *)(param_1 + 0x148);
joined_r0x00010042a98c:
    if (iVar5 == 1) goto LAB_10042aa6c;
    *(undefined4 *)(param_1 + 0x148) = 1;
LAB_10042aa44:
    QAbstractButton::setChecked(SUB81(*(undefined8 *)(param_1 + 0x70),0));
    uVar11 = (undefined1)*(undefined8 *)(param_1 + 0x70);
  }
  else {
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(*(long *)(param_1 + 0x130) + 0x38);
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(*(long *)(param_1 + 0x130) + 0x30);
    iVar5 = CDiskImageInfo::getSnapshotCount();
    if (1 < iVar5) {
      if (*(int *)(param_1 + 0x148) != 1) {
        *(undefined4 *)(param_1 + 0x148) = 1;
        QAbstractButton::setChecked(SUB81(*(undefined8 *)(param_1 + 0x70),0));
        QWidget::setEnabled(SUB81(*(undefined8 *)(param_1 + 0x70),0));
        FUN_10042dd60(param_1);
        FUN_10042da70(param_1);
      }
      iVar5 = CMessageManager::instance();
      pQVar1 = *(QStringList **)(param_1 + 0x10);
      local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
      local_40 = (Data *)PTR_shared_null_1021e15e8;
      local_80 = (QArrayData *)QString::fromAscii_helper("1reject()",9);
      local_88 = 0x80000000;
      local_90.field7 = 0;
      FUN_100a1c600(local_78,pQVar1,&local_80,&local_90);
      CMessageManager::showMessageBox
                (iVar5,(QWidget *)0x80041001,pQVar1,(QStringList *)&local_38.field0,
                 (CSlotInfo *)&local_40,SUB81(local_78,0));
      QVariant::~QVariant(local_58);
      if (local_78[0] != (int *)0x0) {
        LOCK();
        *local_78[0] = *local_78[0] + -1;
        local_29 = *local_78[0] != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_78[0] != (int *)0x0)) {
          operator_delete(local_78[0]);
        }
      }
      QVariant::~QVariant((QVariant *)&local_90);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_29 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10042a7bd;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_10042a7bd:
      pDVar9 = local_40;
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_29 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10042a851;
        }
        iVar5 = *(int *)(local_40 + 0xc);
        if (iVar5 != *(int *)(local_40 + 8)) {
          lVar13 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar5 * -8;
          pDVar8 = local_40 + (long)iVar5 * 8 + 8;
          do {
            pQVar12 = *(QArrayData **)pDVar8;
            if (*(int *)pQVar12 == 0) {
LAB_10042a830:
              QArrayData::deallocate(pQVar12,2,8);
            }
            else if (*(int *)pQVar12 != -1) {
              LOCK();
              *(int *)pQVar12 = *(int *)pQVar12 + -1;
              local_29 = *(int *)pQVar12 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar12 = *(QArrayData **)pDVar8;
                goto LAB_10042a830;
              }
            }
            pDVar8 = pDVar8 + -8;
            lVar13 = lVar13 + 8;
          } while (lVar13 != 0);
        }
        QListData::dispose(pDVar9);
      }
LAB_10042a851:
      AVar3 = local_38;
      if (*(int *)local_38.field1 != -1) {
        if (*(int *)local_38.field1 != 0) {
          LOCK();
          *(int *)local_38.field1 = *(int *)local_38.field1 + -1;
          local_29 = *(int *)local_38.field1 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10042aa6c;
        }
        iVar5 = *(int *)(local_38.field1 + 0xc);
        if (iVar5 != *(int *)(local_38.field1 + 8)) {
          lVar13 = (long)*(int *)(local_38.field1 + 8) * 8 + (long)iVar5 * -8;
          pDVar9 = (Data *)(local_38.field1 + (long)iVar5 * 8 + 8);
          do {
            pQVar12 = *(QArrayData **)pDVar9;
            if (*(int *)pQVar12 == 0) {
LAB_10042a8c0:
              QArrayData::deallocate(pQVar12,2,8);
            }
            else if (*(int *)pQVar12 != -1) {
              LOCK();
              *(int *)pQVar12 = *(int *)pQVar12 + -1;
              local_29 = *(int *)pQVar12 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar12 = *(QArrayData **)pDVar9;
                goto LAB_10042a8c0;
              }
            }
            pDVar9 = pDVar9 + -8;
            lVar13 = lVar13 + 8;
          } while (lVar13 != 0);
        }
        QListData::dispose((Data *)AVar3.field1);
      }
      goto LAB_10042aa6c;
    }
    cVar4 = CDiskImageInfo::isResizeSupported();
    if (cVar4 == '\0') goto LAB_10042a983;
    if ((*(long *)(param_1 + 0x140) == 0) ||
       (cVar4 = CDiskImageInfo::isResizeSupported(), cVar4 == '\0')) {
      dVar14 = DAT_100e1e238 * DAT_102273e58;
      uVar10 = (long)dVar14;
      if (DAT_100e1e240 <= dVar14) {
        uVar10 = (long)(dVar14 - DAT_100e1e240) ^ 0x8000000000000000;
      }
      auVar15._8_4_ = (int)(uVar10 >> 0x20);
      auVar15._0_8_ = uVar10;
      auVar15._12_4_ = _UNK_100e11114;
      bVar2 = (((double)CONCAT44(_DAT_100e11110,(int)uVar10) - _DAT_100e11120) +
              (auVar15._8_8_ - _UNK_100e11128)) * DAT_100e14d10 < DAT_102273e58;
      lVar13 = CDiskImageInfo::getMinSize();
      iVar5 = *(int *)(param_1 + 0x148);
      if ((uVar10 - lVar13) + (ulong)bVar2 < DAT_102273e68) goto joined_r0x00010042a98c;
      if (iVar5 == 2) goto LAB_10042aa6c;
      *(undefined4 *)(param_1 + 0x148) = 2;
      goto LAB_10042aa44;
    }
    if (*(int *)(param_1 + 0x148) == 3) goto LAB_10042aa6c;
    *(undefined4 *)(param_1 + 0x148) = 3;
    QAbstractButton::setChecked(SUB81(*(undefined8 *)(param_1 + 0x70),0));
    uVar11 = (undefined1)*(undefined8 *)(param_1 + 0x70);
  }
  QWidget::setEnabled((bool)uVar11);
  FUN_10042dd60(param_1);
  FUN_10042da70(param_1);
LAB_10042aa6c:
  cVar4 = QAbstractButton::isChecked();
  plVar7 = (long *)(param_1 + 0x138);
  if (cVar4 != '\0') {
    plVar7 = (long *)(param_1 + 0x140);
  }
  lVar13 = *plVar7;
  dVar14 = DAT_102273e60;
  if (lVar13 != 0) {
    lVar6 = CDiskImageInfo::getMinSize();
    dVar14 = (double)lVar6 * DAT_100e14d10;
  }
  FUN_10042de40(dVar14,param_1,lVar13 != 0);
  return;
}

