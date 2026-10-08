
void FUN_10057e020(char *param_1)

{
  uint uVar1;
  QPoint *pQVar2;
  Data *pDVar3;
  bool bVar4;
  QMenu *this;
  Data *pDVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_70;
  int local_6c;
  undefined8 local_68;
  Data *local_60;
  QKeySequence local_58 [8];
  QArrayData *local_50;
  QKeySequence local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  this = operator_new(0x30);
  QMenu::QMenu(this,*(QWidget **)(param_1 + 0x10));
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1e02686);
  QKeySequence::QKeySequence(local_48,0,0,0,0);
  QMenu::addAction((QString *)this,(QObject *)&local_40,param_1,
                   (QKeySequence *)"1onDuplicateProfile()");
  QKeySequence::~QKeySequence(local_48);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057e0d2;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10057e0d2:
  QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,0x1e026ae);
  QKeySequence::QKeySequence(local_58,0,0,0,0);
  bVar4 = (bool)QMenu::addAction((QString *)this,(QObject *)&local_50,param_1,
                                 (QKeySequence *)"1onRenameProfile()");
  QKeySequence::~QKeySequence(local_58);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057e159;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10057e159:
  QTreeWidget::selectedItems();
  pDVar3 = local_60;
  uVar1 = *(uint *)(local_60 + 8);
  if (*(uint *)(local_60 + 0xc) == uVar1) goto LAB_10057e257;
  if (1 < *(uint *)local_60) {
    pDVar5 = (Data *)QListData::detach((int)&local_60);
    lVar8 = (long)(int)*(uint *)(local_60 + 8);
    if ((pDVar3 + (long)(int)uVar1 * 8 + 0x10 != local_60 + lVar8 * 8 + 0x10) &&
       (lVar7 = (int)*(uint *)(local_60 + 0xc) - lVar8,
       lVar7 != 0 && lVar8 <= (int)*(uint *)(local_60 + 0xc))) {
      _memcpy(local_60 + lVar8 * 8 + 0x10,pDVar3 + (long)(int)uVar1 * 8 + 0x10,lVar7 * 8);
    }
    if (*(int *)pDVar5 != -1) {
      if (*(int *)pDVar5 != 0) {
        LOCK();
        *(int *)pDVar5 = *(int *)pDVar5 + -1;
        local_31 = *(int *)pDVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10057e1de;
      }
      QListData::dispose(pDVar5);
    }
  }
LAB_10057e1de:
  QTreeWidgetItem::flags();
  QAction::setEnabled(bVar4);
  pQVar2 = *(QPoint **)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x58) + 8) + 0x10);
  local_68 = QWidget::pos();
  uVar6 = QWidget::mapToGlobal(pQVar2);
  lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x58) + 0x28);
  local_6c = ((int)((ulong)uVar6 >> 0x20) + *(int *)(lVar8 + 0x20)) - *(int *)(lVar8 + 0x18);
  local_70 = (undefined4)uVar6;
  QMenu::popup((QPoint *)this,(QAction *)&local_70);
LAB_10057e257:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_60);
  }
  return;
}

