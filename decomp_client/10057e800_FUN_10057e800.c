
void FUN_10057e800(long param_1)

{
  uint uVar1;
  QTreeWidgetItem *pQVar2;
  Data *pDVar3;
  Data *pDVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  Data *local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  QTreeWidget::selectedItems();
  pDVar3 = local_38;
  uVar1 = *(uint *)(local_38 + 8);
  if (*(uint *)(local_38 + 0xc) == uVar1) goto LAB_10057e936;
  if (1 < *(uint *)local_38) {
    pDVar4 = (Data *)QListData::detach((int)&local_38);
    lVar5 = (long)(int)*(uint *)(local_38 + 8);
    if ((pDVar3 + (long)(int)uVar1 * 8 + 0x10 != local_38 + lVar5 * 8 + 0x10) &&
       (lVar7 = (int)*(uint *)(local_38 + 0xc) - lVar5,
       lVar7 != 0 && lVar5 <= (int)*(uint *)(local_38 + 0xc))) {
      _memcpy(local_38 + lVar5 * 8 + 0x10,pDVar3 + (long)(int)uVar1 * 8 + 0x10,lVar7 * 8);
    }
    if (*(int *)pDVar4 != -1) {
      if (*(int *)pDVar4 != 0) {
        LOCK();
        *(int *)pDVar4 = *(int *)pDVar4 + -1;
        local_2b = *(int *)pDVar4 != 0;
        UNLOCK();
        if ((bool)local_2b) goto LAB_10057e895;
      }
      QListData::dispose(pDVar4);
    }
  }
LAB_10057e895:
  uVar6 = QTreeWidgetItem::flags();
  pDVar3 = local_38;
  if ((uVar6 & 2) == 0) goto LAB_10057e936;
  pQVar2 = *(QTreeWidgetItem **)(*(long *)(param_1 + 0x18) + 0x30);
  if (1 < *(uint *)local_38) {
    uVar1 = *(uint *)(local_38 + 8);
    pDVar4 = (Data *)QListData::detach((int)&local_38);
    lVar5 = (long)(int)*(uint *)(local_38 + 8);
    if ((pDVar3 + (long)(int)uVar1 * 8 + 0x10 != local_38 + lVar5 * 8 + 0x10) &&
       (lVar7 = (int)*(uint *)(local_38 + 0xc) - lVar5,
       lVar7 != 0 && lVar5 <= (int)*(uint *)(local_38 + 0xc))) {
      _memcpy(local_38 + lVar5 * 8 + 0x10,pDVar3 + (long)(int)uVar1 * 8 + 0x10,lVar7 * 8);
    }
    if (*(int *)pDVar4 != -1) {
      if (*(int *)pDVar4 != 0) {
        LOCK();
        *(int *)pDVar4 = *(int *)pDVar4 + -1;
        local_2a = *(int *)pDVar4 != 0;
        UNLOCK();
        if ((bool)local_2a) goto LAB_10057e91f;
      }
      QListData::dispose(pDVar4);
    }
  }
LAB_10057e91f:
  QTreeWidget::editItem
            (pQVar2,(int)*(undefined8 *)(local_38 + (long)(int)*(uint *)(local_38 + 8) * 8 + 0x10));
LAB_10057e936:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QListData::dispose(local_38);
  }
  return;
}

