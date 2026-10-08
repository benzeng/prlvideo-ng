
undefined8 FUN_1007b3bc0(long param_1,QString *param_2,bool param_3,long *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  AnonymousUnion0 AVar3;
  uint uVar4;
  int iVar5;
  QArrayData *pQVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  QStringList *pQVar10;
  Data *pDVar11;
  Data *pDVar12;
  long lVar13;
  AnonymousUnion0 local_118;
  undefined1 local_110 [40];
  int *local_e8 [4];
  QVariant local_c8 [2];
  QVariant local_b0;
  QArrayData *local_a0;
  QArrayData *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  undefined4 local_78;
  AnonymousUnion0 local_70;
  Data *local_68;
  QVariant local_60;
  QVariant local_50;
  undefined *local_40;
  undefined1 local_31;
  
  puVar2 = PTR_shared_null_1021e15e8;
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    pcVar8 = "Invalid snapshotID";
LAB_1007b3cfa:
    FUN_100df99c0("","prl_client_app",0,pcVar8);
    return 0;
  }
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    pcVar8 = "(!)Error: can\'t get VM instance.";
    goto LAB_1007b3cfa;
  }
  local_40 = PTR_shared_null_1021e15e8;
  QVariant::QVariant(&local_50,param_2);
  FUN_10012ae80(&local_40,&local_50);
  QVariant::~QVariant(&local_50);
  QVariant::QVariant(&local_60,param_3);
  FUN_10012ae80(&local_40,&local_60);
  QVariant::~QVariant(&local_60);
  local_68 = (Data *)puVar2;
  local_70.field1 = (Data *)puVar2;
  local_90 = (Data *)*param_4;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 == 0) {
      QListData::detach((int)&local_90);
      lVar7 = (long)*(int *)(local_90 + 8);
      lVar13 = *param_4;
      if (((Data *)(lVar13 + (long)*(int *)(lVar13 + 8) * 8) != local_90 + lVar7 * 8) &&
         (lVar9 = *(int *)(local_90 + 0xc) - lVar7, lVar9 != 0 && lVar7 <= *(int *)(local_90 + 0xc))
         ) {
        _memcpy(local_90 + lVar7 * 8 + 0x10,(void *)(lVar13 + 0x10 + (long)*(int *)(lVar13 + 8) * 8)
                ,lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
    }
  }
  local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
  local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
  if (*(int *)(local_90 + 8) != *(int *)(local_90 + 0xc)) {
    do {
      local_78 = 1;
      uVar1 = *(undefined8 *)local_88;
      FUN_10018d830(&local_98,uVar1);
      FUN_1000341d0(&local_68,&local_98);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007b3dbf;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1007b3dbf:
      FUN_100188480(&local_a0,uVar1);
      FUN_1000341d0(&local_70,&local_a0);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007b3e0c;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_1007b3e0c:
      local_88 = local_88 + 8;
    } while (local_88 != local_80);
  }
  puVar2 = PTR_shared_null_1021e15e8;
  local_78 = 1;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b3e5c;
    }
    QListData::dispose(local_90);
  }
LAB_1007b3e5c:
  QVariant::QVariant(&local_b0,(QStringList *)&local_70.field0);
  FUN_10012ae80(&local_40,&local_b0);
  QVariant::~QVariant(&local_b0);
  local_110._32_8_ =
       QString::fromAscii_helper
                 ("1onDeleteSnapshotAnswered(PRL_RESULT, Messaging::ButtonID, const QVariant&)",0x4b
                 );
  QVariant::QVariant((QVariant *)(local_110 + 0x10),(QList *)&local_40);
  FUN_100a1c600(local_e8,param_1,local_110 + 0x20,local_110 + 0x10);
  QVariant::~QVariant((QVariant *)(local_110 + 0x10));
  if (*(int *)local_110._32_8_ != -1) {
    if (*(int *)local_110._32_8_ != 0) {
      LOCK();
      *(int *)local_110._32_8_ = *(int *)local_110._32_8_ + -1;
      local_31 = *(int *)local_110._32_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b3f0f;
    }
    QArrayData::deallocate((QArrayData *)local_110._32_8_,2,8);
  }
LAB_1007b3f0f:
  uVar4 = 0x36e0;
  if (*(int *)(local_68 + 0xc) == *(int *)(local_68 + 8)) {
    uVar4 = param_3 | 0x3b56;
  }
  iVar5 = CMessageManager::instance();
  pQVar10 = (QStringList *)0x0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (pQVar10 = (QStringList *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
    pQVar10 = *(QStringList **)(param_1 + 0x30);
  }
  local_110._8_8_ = puVar2;
  local_110._0_8_ = puVar2;
  pQVar6 = (QArrayData *)QString::fromAscii_helper("<br>",4);
  QtPrivate::QStringList_join
            ((QStringList *)&local_118.field0,(QChar *)&local_68,
             (int)*(undefined8 *)(pQVar6 + 0x10) + (int)pQVar6);
  FUN_1000341d0(local_110,&local_118);
  CMessageManager::showMessageBox
            (iVar5,(QWidget *)(ulong)uVar4,pQVar10,(QStringList *)(local_110 + 8),
             (CSlotInfo *)local_110,SUB81(local_e8,0));
  if (*(int *)local_118.field1 != -1) {
    if (*(int *)local_118.field1 != 0) {
      LOCK();
      *(int *)local_118.field1 = *(int *)local_118.field1 + -1;
      local_31 = *(int *)local_118.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b3ffe;
    }
    QArrayData::deallocate((QArrayData *)local_118.field1,2,8);
  }
LAB_1007b3ffe:
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b402d;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_1007b402d:
  uVar1 = local_110._0_8_;
  if (*(int *)local_110._0_8_ != -1) {
    if (*(int *)local_110._0_8_ != 0) {
      LOCK();
      *(int *)local_110._0_8_ = *(int *)local_110._0_8_ + -1;
      local_31 = *(int *)local_110._0_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b40c0;
    }
    iVar5 = *(int *)(local_110._0_8_ + 0xc);
    if (iVar5 != *(int *)(local_110._0_8_ + 8)) {
      lVar13 = (long)*(int *)(local_110._0_8_ + 8) * 8 + (long)iVar5 * -8;
      pDVar11 = (Data *)(local_110._0_8_ + (long)iVar5 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar11;
        if (*(int *)pQVar6 == 0) {
LAB_1007b409f:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar6 = *(QArrayData **)pDVar11;
            goto LAB_1007b409f;
          }
        }
        pDVar11 = pDVar11 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1007b40c0:
  uVar1 = local_110._8_8_;
  if (*(int *)local_110._8_8_ != -1) {
    if (*(int *)local_110._8_8_ != 0) {
      LOCK();
      *(int *)local_110._8_8_ = *(int *)local_110._8_8_ + -1;
      local_31 = *(int *)local_110._8_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b4150;
    }
    iVar5 = *(int *)(local_110._8_8_ + 0xc);
    if (iVar5 != *(int *)(local_110._8_8_ + 8)) {
      lVar13 = (long)*(int *)(local_110._8_8_ + 8) * 8 + (long)iVar5 * -8;
      pDVar11 = (Data *)(local_110._8_8_ + (long)iVar5 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar11;
        if (*(int *)pQVar6 == 0) {
LAB_1007b412f:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar6 = *(QArrayData **)pDVar11;
            goto LAB_1007b412f;
          }
        }
        pDVar11 = pDVar11 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1007b4150:
  QVariant::~QVariant(local_c8);
  if (local_e8[0] != (int *)0x0) {
    LOCK();
    *local_e8[0] = *local_e8[0] + -1;
    local_31 = *local_e8[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_e8[0] != (int *)0x0)) {
      operator_delete(local_e8[0]);
    }
  }
  AVar3 = local_70;
  if (*(int *)local_70.field1 != -1) {
    if (*(int *)local_70.field1 != 0) {
      LOCK();
      *(int *)local_70.field1 = *(int *)local_70.field1 + -1;
      local_31 = *(int *)local_70.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b4210;
    }
    iVar5 = *(int *)(local_70.field1 + 0xc);
    if (iVar5 != *(int *)(local_70.field1 + 8)) {
      lVar13 = (long)*(int *)(local_70.field1 + 8) * 8 + (long)iVar5 * -8;
      pDVar11 = (Data *)(local_70.field1 + (long)iVar5 * 8 + 8);
      do {
        pQVar6 = *(QArrayData **)pDVar11;
        if (*(int *)pQVar6 == 0) {
LAB_1007b41ef:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar6 = *(QArrayData **)pDVar11;
            goto LAB_1007b41ef;
          }
        }
        pDVar11 = pDVar11 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose((Data *)AVar3.field1);
  }
LAB_1007b4210:
  pDVar11 = local_68;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b42a1;
    }
    iVar5 = *(int *)(local_68 + 0xc);
    if (iVar5 != *(int *)(local_68 + 8)) {
      lVar13 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar5 * -8;
      pDVar12 = local_68 + (long)iVar5 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar6 == 0) {
LAB_1007b4280:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar6 = *(QArrayData **)pDVar12;
            goto LAB_1007b4280;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose(pDVar11);
  }
LAB_1007b42a1:
  FUN_100035ea0(&local_40);
  return 0;
}

