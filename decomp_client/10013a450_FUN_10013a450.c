
void FUN_10013a450(QObject *param_1,long param_2,long param_3,char param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  QObject *pQVar7;
  Connection local_188 [8];
  CHwHddPartition local_180 [232];
  Data *local_98;
  Data *local_90;
  Data *local_88;
  undefined4 local_80;
  QArrayData *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  undefined *local_50;
  QString local_48;
  undefined *local_40;
  undefined1 local_31;
  
  QObject::disconnect(param_1,(char *)0x0,param_1,"1onItemChanged(QTreeWidgetItem*,int)");
  if (param_4 == '\0') {
    pQVar7 = param_1 + 0x38;
    if (*(long *)(*(long *)(param_1 + 0x30) + 0x10) != 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
      lVar5 = 0;
      do {
        while (lVar6 = lVar1, cVar2 = operator<((QString *)(lVar6 + 0x18),(QString *)pQVar7),
              cVar2 != '\0') {
          lVar1 = *(long *)(lVar6 + 0x10);
          if (*(long *)(lVar6 + 0x10) == 0) {
            lVar6 = lVar5;
            if (lVar5 == 0) goto LAB_10013a566;
            goto LAB_10013a506;
          }
        }
        lVar1 = *(long *)(lVar6 + 8);
        lVar5 = lVar6;
      } while (*(long *)(lVar6 + 8) != 0);
LAB_10013a506:
      cVar2 = operator<((QString *)pQVar7,(QString *)(lVar6 + 0x18));
      if (cVar2 == '\0') {
        local_40 = PTR_shared_null_1021e15e8;
        uVar4 = QTreeWidget::invisibleRootItem();
        FUN_10013aa50(param_1,&local_40,uVar4);
        FUN_10013c540(param_1 + 0x30,pQVar7,&local_40);
        FUN_100039a80(&local_40);
      }
    }
  }
LAB_10013a566:
  pQVar7 = param_1 + 0x38;
  QTreeWidget::clear();
  *(undefined8 *)(param_1 + 0x40) = 0;
  CHwHardDisk::getDeviceId();
  QString::operator=((QString *)pQVar7,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10013a5c0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10013a5c0:
  if (param_3 == 0) {
    (**(code **)(*(long *)param_1 + 0x218))(param_1);
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
    lVar5 = 0;
    if (*(long *)(*(long *)(param_1 + 0x30) + 0x10) != 0) {
      do {
        while (lVar6 = lVar1, cVar2 = operator<((QString *)(lVar6 + 0x18),(QString *)pQVar7),
              cVar2 != '\0') {
          lVar1 = *(long *)(lVar6 + 0x10);
          if (*(long *)(lVar6 + 0x10) == 0) {
            lVar6 = lVar5;
            if (lVar5 == 0) goto LAB_10013a647;
            goto LAB_10013a626;
          }
        }
        lVar1 = *(long *)(lVar6 + 8);
        lVar5 = lVar6;
      } while (*(long *)(lVar6 + 8) != 0);
LAB_10013a626:
      cVar2 = operator<((QString *)pQVar7,(QString *)(lVar6 + 0x18));
      if ((cVar2 == '\0') && (param_4 == '\0')) goto LAB_10013a79e;
    }
LAB_10013a647:
    local_50 = PTR_shared_null_1021e15e8;
    local_70 = *(Data **)(param_3 + 0xf0);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 == 0) {
        QListData::detach((int)&local_70);
        lVar5 = (long)*(int *)(local_70 + 8);
        lVar1 = *(long *)(param_3 + 0xf0);
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_70 + lVar5 * 8) &&
           (lVar6 = *(int *)(local_70 + 0xc) - lVar5,
           lVar6 != 0 && lVar5 <= *(int *)(local_70 + 0xc))) {
          _memcpy(local_70 + lVar5 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8)
                  ,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + 1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
      }
    }
    local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
    local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
    if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
      do {
        local_58 = 1;
        CVmHddPartition::getSystemName();
        FUN_1000341d0(&local_50,&local_78);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10013a746;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_10013a746:
        local_68 = local_68 + 8;
      } while (local_68 != local_60);
    }
    local_58 = 1;
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10013a785;
      }
      QListData::dispose(local_70);
    }
LAB_10013a785:
    FUN_10013c540(param_1 + 0x30,pQVar7,&local_50);
    FUN_100039a80(&local_50);
  }
LAB_10013a79e:
  local_98 = *(Data **)(param_2 + 0x98);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 == 0) {
      QListData::detach((int)&local_98);
      lVar5 = (long)*(int *)(local_98 + 8);
      lVar1 = *(long *)(param_2 + 0x98);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_98 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_98 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_98 + 0xc))
         ) {
        _memcpy(local_98 + lVar5 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
    }
  }
  local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
  local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
  if (*(int *)(local_98 + 8) != *(int *)(local_98 + 0xc)) {
    do {
      local_80 = 1;
      CHwHddPartition::CHwHddPartition(local_180,*(CHwHddPartition **)local_90);
      uVar4 = QTreeWidget::invisibleRootItem();
      FUN_10013ac30(param_1,local_180,uVar4);
      CHwHddPartition::~CHwHddPartition(local_180);
      local_90 = local_90 + 8;
    } while (local_90 != local_88);
  }
  local_80 = 1;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10013a8c4;
    }
    QListData::dispose(local_98);
  }
LAB_10013a8c4:
  iVar3 = QTreeWidget::topLevelItemCount();
  if (iVar3 == 1) {
    (**(code **)(*(long *)param_1 + 0x218))(param_1);
  }
  uVar4 = QTreeView::header();
  QHeaderView::setSectionsMovable(SUB81(uVar4,0));
  QHeaderView::resizeSections(uVar4,3);
  QObject::connect(local_188,param_1,"2itemChanged(QTreeWidgetItem*, int)",param_1,
                   "1onItemChanged(QTreeWidgetItem*,int)",0);
  QMetaObject::Connection::~Connection(local_188);
  return;
}

