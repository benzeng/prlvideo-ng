
void FUN_10057c480(long param_1,undefined8 *param_2)

{
  QString *pQVar1;
  code *pcVar2;
  Data *pDVar3;
  char cVar4;
  uint uVar5;
  Data *pDVar6;
  long lVar7;
  QTreeWidgetItem *pQVar8;
  long lVar9;
  Data *local_b0;
  QVariant local_a8;
  QString local_98;
  long local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined4 local_78;
  QString local_70;
  Data *local_68;
  QString local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_31 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)(local_60.field0_0x0 + 4) == 0) {
    QTreeWidget::selectedItems();
    pDVar3 = local_68;
    uVar5 = *(uint *)(local_68 + 8);
    if (*(uint *)(local_68 + 0xc) != uVar5) {
      if (1 < *(uint *)local_68) {
        pDVar6 = (Data *)QListData::detach((int)&local_68);
        lVar7 = (long)(int)*(uint *)(local_68 + 8);
        if ((pDVar3 + (long)(int)uVar5 * 8 + 0x10 != local_68 + lVar7 * 8 + 0x10) &&
           (lVar9 = (int)*(uint *)(local_68 + 0xc) - lVar7,
           lVar9 != 0 && lVar7 <= (int)*(uint *)(local_68 + 0xc))) {
          _memcpy(local_68 + lVar7 * 8 + 0x10,pDVar3 + (long)(int)uVar5 * 8 + 0x10,lVar9 * 8);
        }
        if (*(int *)pDVar6 != -1) {
          if (*(int *)pDVar6 != 0) {
            LOCK();
            *(int *)pDVar6 = *(int *)pDVar6 + -1;
            local_31 = *(int *)pDVar6 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10057c54b;
          }
          QListData::dispose(pDVar6);
        }
      }
LAB_10057c54b:
      (**(code **)(**(long **)(local_68 + (long)(int)*(uint *)(local_68 + 8) * 8 + 0x10) + 0x18))
                (&local_58,*(long **)(local_68 + (long)(int)*(uint *)(local_68 + 8) * 8 + 0x10),0,0)
      ;
      QVariant::toString();
      QVariant::~QVariant(&local_58);
      QString::operator=(&local_60,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10057c5bc;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
    }
LAB_10057c5bc:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10057c5e2;
      }
      QListData::dispose(local_68);
    }
  }
LAB_10057c5e2:
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),0));
  QTreeWidget::clear();
  FUN_10055a620(&local_90,param_1 + 0x28);
  local_88 = (undefined8 *)(local_90 + 0x10 + (long)*(int *)(local_90 + 8) * 8);
  local_80 = (undefined8 *)(local_90 + 0x10 + (long)*(int *)(local_90 + 0xc) * 8);
  if (*(int *)(local_90 + 8) != *(int *)(local_90 + 0xc)) {
    do {
      local_78 = 1;
      pQVar1 = (QString *)*local_88;
      pQVar8 = operator_new(0x40);
      QTreeWidgetItem::QTreeWidgetItem(pQVar8,*(QTreeWidget **)(*(long *)(param_1 + 0x18) + 0x30),0)
      ;
      FUN_10071abd0(&local_98,pQVar1);
      pcVar2 = *(code **)(*(long *)pQVar8 + 0x20);
      QVariant::QVariant(&local_48,&local_98);
      (*pcVar2)(pQVar8,0,0,&local_48);
      QVariant::~QVariant(&local_48);
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_31 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10057c70d;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
LAB_10057c70d:
      cVar4 = operator==(pQVar1,pQVar1 + 1);
      if (cVar4 == '\0') {
        uVar5 = QTreeWidgetItem::flags();
        QTreeWidgetItem::setFlags(pQVar8,uVar5 | 2);
      }
      pcVar2 = *(code **)(*(long *)pQVar8 + 0x20);
      QVariant::QVariant(&local_a8,pQVar1);
      (*pcVar2)(pQVar8,0,0x100,&local_a8);
      QVariant::~QVariant(&local_a8);
      local_88 = local_88 + 1;
    } while (local_88 != local_80);
  }
  local_78 = 1;
  FUN_1000fe670(&local_90);
  QTreeWidget::findItems(&local_b0,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),&local_60,0,0);
  pDVar3 = local_b0;
  uVar5 = *(uint *)(local_b0 + 8);
  if (*(uint *)(local_b0 + 0xc) != uVar5) {
    pQVar8 = *(QTreeWidgetItem **)(*(long *)(param_1 + 0x18) + 0x30);
    if (1 < *(uint *)local_b0) {
      pDVar6 = (Data *)QListData::detach((int)&local_b0);
      lVar7 = (long)(int)*(uint *)(local_b0 + 8);
      if ((pDVar3 + (long)(int)uVar5 * 8 + 0x10 != local_b0 + lVar7 * 8 + 0x10) &&
         (lVar9 = (int)*(uint *)(local_b0 + 0xc) - lVar7,
         lVar9 != 0 && lVar7 <= (int)*(uint *)(local_b0 + 0xc))) {
        _memcpy(local_b0 + lVar7 * 8 + 0x10,pDVar3 + (long)(int)uVar5 * 8 + 0x10,lVar9 * 8);
      }
      if (*(int *)pDVar6 != -1) {
        if (*(int *)pDVar6 != 0) {
          LOCK();
          *(int *)pDVar6 = *(int *)pDVar6 + -1;
          local_31 = *(int *)pDVar6 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10057c832;
        }
        QListData::dispose(pDVar6);
      }
    }
LAB_10057c832:
    QTreeWidget::setCurrentItem(pQVar8);
  }
  QObject::blockSignals(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),0));
  FUN_10057cf30(param_1);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057c89d;
    }
    QListData::dispose(local_b0);
  }
LAB_10057c89d:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_60.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
  return;
}

