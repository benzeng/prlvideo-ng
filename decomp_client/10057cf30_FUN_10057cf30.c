
void FUN_10057cf30(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  Data *pDVar3;
  Data *pDVar4;
  long lVar5;
  long lVar6;
  Data *local_38;
  undefined1 local_2a;
  undefined1 local_29;
  
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x58),0));
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50),0));
  QTreeWidget::selectedItems();
  if (*(uint *)(local_38 + 0xc) == *(uint *)(local_38 + 8)) goto LAB_10057d02b;
  QWidget::setDisabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x58),0));
  pDVar3 = local_38;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50);
  if (1 < *(uint *)local_38) {
    uVar1 = *(uint *)(local_38 + 8);
    pDVar4 = (Data *)QListData::detach((int)&local_38);
    lVar5 = (long)(int)*(uint *)(local_38 + 8);
    if ((pDVar3 + (long)(int)uVar1 * 8 + 0x10 != local_38 + lVar5 * 8 + 0x10) &&
       (lVar6 = (int)*(uint *)(local_38 + 0xc) - lVar5,
       lVar6 != 0 && lVar5 <= (int)*(uint *)(local_38 + 0xc))) {
      _memcpy(local_38 + lVar5 * 8 + 0x10,pDVar3 + (long)(int)uVar1 * 8 + 0x10,lVar6 * 8);
    }
    if (*(int *)pDVar4 != -1) {
      if (*(int *)pDVar4 != 0) {
        LOCK();
        *(int *)pDVar4 = *(int *)pDVar4 + -1;
        local_2a = *(int *)pDVar4 != 0;
        UNLOCK();
        if ((bool)local_2a) goto LAB_10057d006;
      }
      QListData::dispose(pDVar4);
    }
  }
LAB_10057d006:
  QTreeWidgetItem::flags();
  QWidget::setEnabled(SUB81(uVar2,0));
LAB_10057d02b:
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

