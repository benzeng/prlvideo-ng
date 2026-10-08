
void FUN_100256080(long *param_1)

{
  undefined *puVar1;
  AnonymousUnion0 AVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  Data *pDVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  Data_conflict local_a0;
  undefined4 local_98;
  QArrayData *local_90;
  int *local_88 [4];
  QVariant local_68 [2];
  QArrayData *local_50;
  Data *local_48;
  QArrayData *local_40;
  AnonymousUnion0 local_38 [2];
  
  uVar5 = FUN_1006915d0();
  lVar6 = FUN_100691620(uVar5,0x86,*(undefined8 *)PTR_self_1021e1388);
  if ((lVar6 == 0) || (cVar3 = QAction::isVisible(), cVar3 == '\0')) {
    CTaskCheckForProductUpdate::processNoUpdatesFound();
    return;
  }
  cVar3 = CTaskCheckForProductUpdate::isCheckInBackground();
  if ((cVar3 != '\0') || ((*(byte *)(param_1 + 6) & 4) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001002563d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x3bb2);
    return;
  }
  iVar4 = CMessageManager::instance();
  puVar1 = PTR_shared_null_1021e15e8;
  local_38[0].field1 = (Data *)PTR_shared_null_1021e15e8;
  QString::number((int)&local_40,0xc);
  FUN_1000341d0(local_38,&local_40);
  local_48 = (Data *)puVar1;
  QString::number((int)&local_50,0xc);
  FUN_1000341d0(&local_48,&local_50);
  local_90 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
  local_98 = 0x80000000;
  local_a0.field7 = 0;
  FUN_100a1c600(local_88,param_1,&local_90,&local_a0);
  CMessageManager::showMessageBox
            (iVar4,(QWidget *)0x3c5c,(QStringList *)0x0,(QStringList *)&local_38[0].field0,
             (CSlotInfo *)&local_48,SUB81(local_88,0));
  QVariant::~QVariant(local_68);
  if (local_88[0] != (int *)0x0) {
    LOCK();
    *local_88[0] = *local_88[0] + -1;
    local_38[1]._7_1_ = *local_88[0] != 0;
    UNLOCK();
    if ((!(bool)local_38[1]._7_1_) && (local_88[0] != (int *)0x0)) {
      operator_delete(local_88[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_a0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_38[1]._7_1_ = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_100256214;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100256214:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_38[1]._7_1_ = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_100256244;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100256244:
  pDVar8 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_38[1]._7_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_1002562d0;
    }
    iVar4 = *(int *)(local_48 + 0xc);
    if (iVar4 != *(int *)(local_48 + 8)) {
      lVar6 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar4 * -8;
      pDVar7 = local_48 + (long)iVar4 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1002562af:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_38[1]._7_1_ = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1002562af;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_1002562d0:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_38[1]._7_1_ = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_38[1]._7_1_) goto LAB_100256300;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100256300:
  AVar2 = local_38[0];
  if (*(int *)local_38[0].field1 != -1) {
    if (*(int *)local_38[0].field1 != 0) {
      LOCK();
      *(int *)local_38[0].field1 = *(int *)local_38[0].field1 + -1;
      UNLOCK();
      if (*(int *)local_38[0].field1 != 0) {
        return;
      }
      local_38[1]._7_1_ = 0;
    }
    iVar4 = *(int *)(local_38[0].field1 + 0xc);
    if (iVar4 != *(int *)(local_38[0].field1 + 8)) {
      lVar6 = (long)*(int *)(local_38[0].field1 + 8) * 8 + (long)iVar4 * -8;
      pDVar8 = (Data *)(local_38[0].field1 + (long)iVar4 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100256370:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_38[1]._7_1_ = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_38[1]._7_1_) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100256370;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
  return;
}

