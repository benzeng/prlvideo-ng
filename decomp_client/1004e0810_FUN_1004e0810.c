
void FUN_1004e0810(QWidget *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  QMenu *this;
  undefined8 *puVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  Data *pDVar8;
  uint in_stack_fffffffffffffebc;
  undefined8 local_120;
  Connection local_118 [8];
  Data *local_110;
  Data *local_108;
  Data *local_100;
  undefined4 local_f8;
  Connection local_f0 [8];
  int *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  Data_conflict local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  int *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  Data_conflict local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_68 [24];
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  lVar3 = FUN_1004dddc0();
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1004e01f0(&local_50,param_1);
  pDVar8 = (Data *)PTR_shared_null_1021e15e8;
  if (local_50 != (Data *)PTR_shared_null_1021e15e8) {
    FUN_1003bd730(&local_40,&local_50);
    pDVar8 = local_40;
    puVar1 = PTR_shared_null_1021e15e8;
    local_40 = (Data *)PTR_shared_null_1021e15e8;
    local_48 = pDVar8;
    if (*(int *)PTR_shared_null_1021e15e8 != -1) {
      if (*(int *)PTR_shared_null_1021e15e8 != 0) {
        LOCK();
        *(int *)PTR_shared_null_1021e15e8 = *(int *)PTR_shared_null_1021e15e8 + -1;
        local_31 = *(int *)puVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004e08f2;
      }
      iVar2 = *(int *)(puVar1 + 0xc);
      if (iVar2 != *(int *)(puVar1 + 8)) {
        lVar3 = (long)*(int *)(puVar1 + 8) * 8 + (long)iVar2 * -8;
        puVar5 = (undefined8 *)(puVar1 + (long)iVar2 * 8 + 8);
        do {
          if ((void *)*puVar5 != (void *)0x0) {
            operator_delete((void *)*puVar5);
          }
          puVar5 = puVar5 + -1;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose((Data *)puVar1);
    }
  }
LAB_1004e08f2:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004e09a2;
    }
    iVar2 = *(int *)(local_50 + 0xc);
    if (iVar2 != *(int *)(local_50 + 8)) {
      lVar3 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar2 * -8;
      pDVar6 = local_50 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar6 != (void *)0x0) {
          operator_delete(*(void **)pDVar6);
        }
        pDVar6 = pDVar6 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_50);
  }
LAB_1004e09a2:
  if (*(int *)(pDVar8 + 0xc) != *(int *)(pDVar8 + 8)) {
    this = operator_new(0x30);
    QMenu::QMenu(this,param_1);
    QWidget::setAttribute(this,0x37,1);
    FontUtils::setMacContextMenuFont((QWidget *)this,false);
    QObject::connect(local_f0,this,"2aboutToHide()",param_1,"1onAddDeviceMenuHidden()",0);
    QMetaObject::Connection::~Connection(local_f0);
    FUN_1003bd730(&local_110,&local_48);
    local_108 = local_110 + (long)*(int *)(local_110 + 8) * 8 + 0x10;
    local_100 = local_110 + (long)*(int *)(local_110 + 0xc) * 8 + 0x10;
    if (*(int *)(local_110 + 8) != *(int *)(local_110 + 0xc)) {
      do {
        local_f8 = 1;
        lVar3 = FUN_1004e0550(**(undefined4 **)local_108,param_1);
        if (lVar3 != 0) {
          QWidget::addAction((QAction *)this);
          QObject::connect(local_118,lVar3,"2triggered()",param_1,"1onAddHardwareFromContextMenu()",
                           0);
          QMetaObject::Connection::~Connection(local_118);
        }
        local_108 = local_108 + 8;
      } while (local_108 != local_100);
    }
    local_f8 = 1;
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004e0cc6;
      }
      iVar2 = *(int *)(local_110 + 0xc);
      if (iVar2 != *(int *)(local_110 + 8)) {
        lVar3 = (long)*(int *)(local_110 + 8) * 8 + (long)iVar2 * -8;
        pDVar6 = local_110 + (long)iVar2 * 8 + 8;
        do {
          if (*(void **)pDVar6 != (void *)0x0) {
            operator_delete(*(void **)pDVar6);
          }
          pDVar6 = pDVar6 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose(local_110);
    }
LAB_1004e0cc6:
    local_120 = QWidget::mapToGlobal(*(QPoint **)(*(long *)(param_1 + 0x48) + 0x38));
    QMenu::popup((QPoint *)this,(QAction *)&local_120);
    goto LAB_1004e0e84;
  }
  iVar2 = CMessageManager::instance();
  uVar4 = FUN_1004dddc0(param_1);
  FUN_100188480(local_68 + 0x10,uVar4);
  local_68._8_8_ = PTR_shared_null_1021e15e8;
  local_68._0_8_ = PTR_shared_null_1021e15e8;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0x80000000;
  local_88.field7 = 0;
  local_78 = 1;
  local_e8 = (int *)0x0;
  uStack_e0 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c0 = 0x80000000;
  local_c8.field7 = 0;
  local_b8 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QString *)0x80010000,(QStringList *)(local_68 + 0x10),
             (QStringList *)(local_68 + 8),(CSlotInfo *)local_68,SUB81(&local_a8,0),
             (QWidget *)((ulong)in_stack_fffffffffffffebc << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_c8);
  if (local_e8 != (int *)0x0) {
    LOCK();
    *local_e8 = *local_e8 + -1;
    local_31 = *local_e8 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_e8 != (int *)0x0)) {
      operator_delete(local_e8);
    }
  }
  QVariant::~QVariant((QVariant *)&local_88);
  if (local_a8 != (int *)0x0) {
    LOCK();
    *local_a8 = *local_a8 + -1;
    local_31 = *local_a8 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_a8 != (int *)0x0)) {
      operator_delete(local_a8);
    }
  }
  uVar4 = local_68._0_8_;
  if (*(int *)local_68._0_8_ != -1) {
    if (*(int *)local_68._0_8_ != 0) {
      LOCK();
      *(int *)local_68._0_8_ = *(int *)local_68._0_8_ + -1;
      local_31 = *(int *)local_68._0_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004e0db4;
    }
    iVar2 = *(int *)(local_68._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_68._0_8_ + 8)) {
      lVar3 = (long)*(int *)(local_68._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar6 = (Data *)(local_68._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004e0d90:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004e0d90;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose((Data *)uVar4);
  }
LAB_1004e0db4:
  uVar4 = local_68._8_8_;
  if (*(int *)local_68._8_8_ != -1) {
    if (*(int *)local_68._8_8_ != 0) {
      LOCK();
      *(int *)local_68._8_8_ = *(int *)local_68._8_8_ + -1;
      local_31 = *(int *)local_68._8_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004e0e54;
    }
    iVar2 = *(int *)(local_68._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_68._8_8_ + 8)) {
      lVar3 = (long)*(int *)(local_68._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar6 = (Data *)(local_68._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1004e0e30:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1004e0e30;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose((Data *)uVar4);
  }
LAB_1004e0e54:
  if (*(int *)local_68._16_8_ != -1) {
    if (*(int *)local_68._16_8_ != 0) {
      LOCK();
      *(int *)local_68._16_8_ = *(int *)local_68._16_8_ + -1;
      local_31 = *(int *)local_68._16_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004e0e84;
    }
    QArrayData::deallocate((QArrayData *)local_68._16_8_,2,8);
  }
LAB_1004e0e84:
  if (*(int *)pDVar8 != -1) {
    if (*(int *)pDVar8 != 0) {
      LOCK();
      *(int *)pDVar8 = *(int *)pDVar8 + -1;
      local_31 = *(int *)pDVar8 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    iVar2 = *(int *)(pDVar8 + 0xc);
    if (iVar2 != *(int *)(pDVar8 + 8)) {
      lVar3 = (long)*(int *)(pDVar8 + 8) * 8 + (long)iVar2 * -8;
      pDVar6 = pDVar8 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar6 != (void *)0x0) {
          operator_delete(*(void **)pDVar6);
        }
        pDVar6 = pDVar6 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar8);
  }
  return;
}

