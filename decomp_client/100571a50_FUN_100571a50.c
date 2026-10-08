
void FUN_100571a50(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  Data *pDVar5;
  long lVar6;
  long lVar7;
  CPortForwardEntry local_1a0 [88];
  int local_148;
  CPortForwarding local_e0 [168];
  Data *local_38 [2];
  
  QAbstractItemView::selectionModel();
  QItemSelectionModel::selectedIndexes();
  if (*(uint *)(local_38[0] + 0xc) != *(uint *)(local_38[0] + 8)) {
    CPortForwarding::CPortForwarding(local_e0,(CPortForwarding *)(*(long *)(param_1 + 0x58) + 0x20))
    ;
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    if (1 < *(uint *)local_38[0]) {
      FUN_100534020(local_38,*(uint *)(local_38[0] + 4));
    }
    FUN_10056f960(local_1a0,uVar2,
                  *(undefined8 *)(local_38[0] + (long)(int)*(uint *)(local_38[0] + 8) * 8 + 0x10));
    lVar3 = CPortForwarding::getTCP();
    lVar7 = *(long *)(lVar3 + 0x98);
    iVar1 = *(int *)(lVar7 + 8);
    if (iVar1 < *(int *)(lVar7 + 0xc)) {
      lVar6 = 0;
      do {
        if (*(int *)(*(long *)(lVar7 + 0x10 + (long)iVar1 * 8 + lVar6 * 8) + 0x58) == local_148) {
          if (-1 < (int)lVar6) {
            plVar4 = (long *)FUN_100577620(lVar3 + 0x98);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x88))(plVar4);
            }
            lVar7 = *(long *)(param_1 + 0x58);
            QAbstractItemModel::beginResetModel();
            CPortForwarding::operator=((CPortForwarding *)(lVar7 + 0x20),local_e0);
            QAbstractItemModel::endResetModel();
            CWidgetMapper::processValueChanged(*(QWidget **)(param_1 + 0x48));
            goto LAB_100571c33;
          }
          break;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar7 + 0xc) - iVar1);
    }
    lVar3 = CPortForwarding::getUDP();
    lVar7 = *(long *)(lVar3 + 0x98);
    iVar1 = *(int *)(lVar7 + 8);
    if (iVar1 < *(int *)(lVar7 + 0xc)) {
      lVar6 = 0;
      do {
        if (*(int *)(*(long *)(lVar7 + 0x10 + (long)iVar1 * 8 + lVar6 * 8) + 0x58) == local_148) {
          if (-1 < (int)lVar6) {
            plVar4 = (long *)FUN_100577620(lVar3 + 0x98);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x88))(plVar4);
            }
            lVar7 = *(long *)(param_1 + 0x58);
            QAbstractItemModel::beginResetModel();
            CPortForwarding::operator=((CPortForwarding *)(lVar7 + 0x20),local_e0);
            QAbstractItemModel::endResetModel();
            CWidgetMapper::processValueChanged(*(QWidget **)(param_1 + 0x48));
          }
          break;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar7 + 0xc) - iVar1);
    }
LAB_100571c33:
    CPortForwardEntry::~CPortForwardEntry(local_1a0);
    CPortForwarding::~CPortForwarding(local_e0);
  }
  if (*(int *)local_38[0] != -1) {
    if (*(int *)local_38[0] != 0) {
      LOCK();
      *(int *)local_38[0] = *(int *)local_38[0] + -1;
      UNLOCK();
      if (*(int *)local_38[0] != 0) {
        return;
      }
      local_e0[0] = (CPortForwarding)0x0;
    }
    iVar1 = *(int *)(local_38[0] + 0xc);
    if (iVar1 != *(int *)(local_38[0] + 8)) {
      lVar7 = (long)*(int *)(local_38[0] + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_38[0] + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar5 != (void *)0x0) {
          operator_delete(*(void **)pDVar5);
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_38[0]);
  }
  return;
}

