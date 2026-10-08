
undefined8 FUN_10022bb30(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  undefined8 uVar6;
  QStringList *pQVar7;
  long lVar8;
  Data_conflict local_188;
  undefined4 local_180;
  QArrayData *local_178;
  int *local_170 [4];
  QVariant local_150 [2];
  undefined1 local_138 [271];
  undefined1 local_29;
  
  CVmConfiguration::CVmConfiguration((CVmConfiguration *)(local_138 + 0x10));
  iVar3 = FUN_10022b6d0(param_1 + 0x30,(CVmConfiguration *)(local_138 + 0x10));
  uVar6 = 0x3bfa;
  if (iVar3 < 0) goto LAB_10022bdf1;
  cVar2 = FUN_100d80630(1);
  uVar6 = 0;
  if ((cVar2 == '\0') || (cVar2 = FUN_100112cc0(local_138 + 0x10), cVar2 == '\0'))
  goto LAB_10022bdf1;
  CAbstractTask::setWaitForSubTaskCompletion();
  iVar3 = CMessageManager::instance();
  pQVar7 = (QStringList *)0x0;
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (pQVar7 = (QStringList *)0x0, *(int *)(*(long *)(param_1 + 0x78) + 4) != 0)) {
    pQVar7 = *(QStringList **)(param_1 + 0x80);
  }
  local_138._8_8_ = PTR_shared_null_1021e15e8;
  local_138._0_8_ = PTR_shared_null_1021e15e8;
  local_178 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
  local_180 = 0x80000000;
  local_188.field7 = 0;
  FUN_100a1c600(local_170,param_1,&local_178,&local_188);
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)0x80000592,pQVar7,(QStringList *)(local_138 + 8),
             (CSlotInfo *)local_138,SUB81(local_170,0));
  QVariant::~QVariant(local_150);
  if (local_170[0] != (int *)0x0) {
    LOCK();
    *local_170[0] = *local_170[0] + -1;
    local_29 = *local_170[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_170[0] != (int *)0x0)) {
      operator_delete(local_170[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_188);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_29 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10022bcca;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10022bcca:
  uVar6 = local_138._0_8_;
  if (*(int *)local_138._0_8_ != -1) {
    if (*(int *)local_138._0_8_ != 0) {
      LOCK();
      *(int *)local_138._0_8_ = *(int *)local_138._0_8_ + -1;
      local_29 = *(int *)local_138._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10022bd61;
    }
    iVar3 = *(int *)(local_138._0_8_ + 0xc);
    if (iVar3 != *(int *)(local_138._0_8_ + 8)) {
      lVar8 = (long)*(int *)(local_138._0_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar4 = (Data *)(local_138._0_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_10022bd40:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_10022bd40;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)uVar6);
  }
LAB_10022bd61:
  uVar1 = local_138._8_8_;
  uVar6 = 0;
  if (*(int *)local_138._8_8_ != -1) {
    uVar6 = 0;
    if (*(int *)local_138._8_8_ != 0) {
      LOCK();
      *(int *)local_138._8_8_ = *(int *)local_138._8_8_ + -1;
      local_29 = *(int *)local_138._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10022bdf1;
    }
    iVar3 = *(int *)(local_138._8_8_ + 0xc);
    if (iVar3 != *(int *)(local_138._8_8_ + 8)) {
      lVar8 = (long)*(int *)(local_138._8_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar4 = (Data *)(local_138._8_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_10022bdd0:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_10022bdd0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_10022bdf1:
  CVmConfiguration::~CVmConfiguration((CVmConfiguration *)(local_138 + 0x10));
  return uVar6;
}

