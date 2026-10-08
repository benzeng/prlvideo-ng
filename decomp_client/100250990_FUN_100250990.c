
undefined8 FUN_100250990(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  bool bVar8;
  undefined1 local_b0 [40];
  int *local_88 [4];
  QVariant local_68 [2];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  if (lVar4 == 0) {
    if (DAT_10230ffd0 < 2) {
      return 0x80000009;
    }
    FUN_100df99c0("","prl_client_app",2,
                  "Failed to query current license key registration status. Failed to get local server instance"
                 );
    return 0x80000009;
  }
  uVar3 = FUN_10016f500(lVar4);
  cVar1 = FUN_10061c2b0(uVar3,0x20b0);
  if (cVar1 != '\0') {
    return 0;
  }
  cVar1 = FUN_10061c680(uVar3);
  bVar8 = cVar1 == '\0';
  if (bVar8) {
    local_48 = (QArrayData *)QString::fromAscii_helper("Registered",10);
  }
  else {
    local_48 = (QArrayData *)QString::fromAscii_helper("Not Registered",0xe);
  }
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Current license key registration status [%s]",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100250ac0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100250ac0:
  if ((!bVar8) && (*(int *)local_48 != -1)) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100250af4;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100250af4:
  if ((bVar8) && (*(int *)local_48 != -1)) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100250b29;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100250b29:
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x61) != '\0') {
    FUN_100df99c0("","prl_client_app",0,"Unregistered version! Background updates download denied!")
    ;
    return 0x80000009;
  }
  if (DAT_102310958 == (void *)0x0) {
    pvVar5 = operator_new(0x18);
    FUN_100612710(pvVar5);
    DAT_102271170 = 1;
    DAT_102310958 = pvVar5;
  }
  pvVar5 = DAT_102310958;
  FUN_10015a2b0(&local_50,lVar4);
  cVar1 = FUN_100612830(pvVar5,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100250be0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100250be0:
  if (cVar1 != '\0') {
    return 0x80000009;
  }
  if (((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) &&
     (*(long *)(param_1 + 0x78) != 0)) {
    QWidget::hide();
  }
  local_b0._32_8_ = QString::fromAscii_helper("onUnregisteredCopyQuestionClosed",0x20);
  local_b0._24_4_ = 0x80000000;
  local_b0._16_8_ = (QMetaObject *)0x0;
  FUN_100a1c6b0(local_88,local_b0 + 0x20,param_1,local_b0 + 0x10);
  QVariant::~QVariant((QVariant *)(local_b0 + 0x10));
  if (*(int *)local_b0._32_8_ != -1) {
    if (*(int *)local_b0._32_8_ != 0) {
      LOCK();
      *(int *)local_b0._32_8_ = *(int *)local_b0._32_8_ + -1;
      local_31 = *(int *)local_b0._32_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100250c95;
    }
    QArrayData::deallocate((QArrayData *)local_b0._32_8_,2,8);
  }
LAB_100250c95:
  iVar2 = CMessageManager::instance();
  local_b0._8_8_ = PTR_shared_null_1021e15e8;
  local_b0._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x80015252,(QStringList *)0x0,(QStringList *)(local_b0 + 8),
             (CSlotInfo *)local_b0,SUB81(local_88,0));
  uVar3 = local_b0._0_8_;
  if (*(int *)local_b0._0_8_ != -1) {
    if (*(int *)local_b0._0_8_ != 0) {
      LOCK();
      *(int *)local_b0._0_8_ = *(int *)local_b0._0_8_ + -1;
      local_31 = *(int *)local_b0._0_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100250d61;
    }
    iVar2 = *(int *)(local_b0._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_b0._0_8_ + 8)) {
      lVar4 = (long)*(int *)(local_b0._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar6 = (Data *)(local_b0._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100250d40:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100250d40;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose((Data *)uVar3);
  }
LAB_100250d61:
  uVar3 = local_b0._8_8_;
  if (*(int *)local_b0._8_8_ != -1) {
    if (*(int *)local_b0._8_8_ != 0) {
      LOCK();
      *(int *)local_b0._8_8_ = *(int *)local_b0._8_8_ + -1;
      local_31 = *(int *)local_b0._8_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100250deb;
    }
    iVar2 = *(int *)(local_b0._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_b0._8_8_ + 8)) {
      lVar4 = (long)*(int *)(local_b0._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar6 = (Data *)(local_b0._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100250dca:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100250dca;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose((Data *)uVar3);
  }
LAB_100250deb:
  CAbstractTask::setWaitForSubTaskCompletion();
  QVariant::~QVariant(local_68);
  if (local_88[0] != (int *)0x0) {
    LOCK();
    *local_88[0] = *local_88[0] + -1;
    local_31 = *local_88[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_88[0] != (int *)0x0)) {
      operator_delete(local_88[0]);
    }
  }
  return 0;
}

