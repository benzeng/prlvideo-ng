
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10027a300(long param_1)

{
  long lVar1;
  undefined *puVar2;
  AnonymousUnion0 AVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  QString *pQVar7;
  QStringList *pQVar8;
  Data *pDVar9;
  Data *pDVar10;
  QArrayData *pQVar11;
  undefined1 auVar12 [16];
  Data_conflict local_a8;
  undefined4 local_a0;
  QArrayData *local_98;
  int *local_90 [4];
  QVariant local_70 [2];
  QArrayData *local_58;
  Data *local_50;
  AnonymousUnion0 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar5 = FUN_100db9d70(param_1 + 0x28);
  lVar6 = FileDownloadInfo::downloadedByFar();
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,
                  "Calculating free disk space in [%s]. Available: %lld, Total expected: %lld, Downloaded by far: %lld"
                  ,local_40 + *(long *)(local_40 + 0x10),uVar5,*(undefined8 *)(param_1 + 0x38),lVar6
                 );
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10027a3da;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_10027a3da:
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 <= lVar6) {
    return 0;
  }
  if ((ulong)(lVar1 - lVar6) <= uVar5) {
    return 0;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  puVar2 = PTR_shared_null_1021e15e8;
  local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1000341d0(&local_48,param_1 + 0x28);
  local_50 = (Data *)puVar2;
  lVar6 = *(long *)(param_1 + 0x38) - (lVar6 + uVar5);
  auVar12._8_4_ = (int)((ulong)lVar6 >> 0x20);
  auVar12._0_8_ = lVar6;
  auVar12._12_4_ = _UNK_100e11114;
  FUN_100def650(&local_58,
                (long)((((double)CONCAT44(_DAT_100e11110,(int)lVar6) - _DAT_100e11120) +
                       (auVar12._8_8_ - _UNK_100e11128)) * _DAT_100e171e0),1);
  FUN_1000341d0(&local_50,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10027a492;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10027a492:
  local_98 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onFreeDiskSpaceAnswered(PRL_RESULT, Messaging::ButtonID)",0x39);
  local_a0 = 0x80000000;
  local_a8.field7 = 0;
  FUN_100a1c600(local_90,param_1,&local_98,&local_a8);
  QVariant::~QVariant((QVariant *)&local_a8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10027a51e;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10027a51e:
  iVar4 = CMessageManager::instance();
  pQVar7 = (QString *)CSearchParentHelper::instance();
  pQVar8 = (QStringList *)
           CSearchParentHelper::getParentForMessage
                     (pQVar7,(bool)((char)param_1 + 'h'),(QWidget *)0x0);
  CMessageManager::showMessageBox
            (iVar4,(QWidget *)0x3be5,pQVar8,(QStringList *)&local_48.field0,(CSlotInfo *)&local_50,
             SUB81(local_90,0));
  QVariant::~QVariant(local_70);
  if (local_90[0] != (int *)0x0) {
    LOCK();
    *local_90[0] = *local_90[0] + -1;
    local_31 = *local_90[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_90[0] != (int *)0x0)) {
      operator_delete(local_90[0]);
    }
  }
  pDVar10 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10027a621;
    }
    iVar4 = *(int *)(local_50 + 0xc);
    if (iVar4 != *(int *)(local_50 + 8)) {
      lVar6 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar4 * -8;
      pDVar9 = local_50 + (long)iVar4 * 8 + 8;
      do {
        pQVar11 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar11 == 0) {
LAB_10027a600:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar9;
            goto LAB_10027a600;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar10);
  }
LAB_10027a621:
  AVar3 = local_48;
  if (*(int *)local_48.field1 != -1) {
    if (*(int *)local_48.field1 != 0) {
      LOCK();
      *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
      UNLOCK();
      if (*(int *)local_48.field1 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    iVar4 = *(int *)(local_48.field1 + 0xc);
    if (iVar4 != *(int *)(local_48.field1 + 8)) {
      lVar6 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar4 * -8;
      pDVar10 = (Data *)(local_48.field1 + (long)iVar4 * 8 + 8);
      do {
        pQVar11 = *(QArrayData **)pDVar10;
        if (*(int *)pQVar11 == 0) {
LAB_10027a690:
          QArrayData::deallocate(pQVar11,2,8);
        }
        else if (*(int *)pQVar11 != -1) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar11 = *(QArrayData **)pDVar10;
            goto LAB_10027a690;
          }
        }
        pDVar10 = pDVar10 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar3.field1);
  }
  return 0;
}

