
int FUN_10058f640(long param_1,QWidget *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  QArrayData *local_78;
  QArrayData *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  if (param_2 == (QWidget *)0x0) {
    return -1;
  }
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(param_2,&local_48,PTR_staticMetaObject_1021e1540,&local_40,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058f6c8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10058f6c8:
  local_68 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_68);
      lVar4 = (long)*(int *)(local_68 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_68 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_68 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_68 + 0xc))
         ) {
        _memcpy(local_68 + lVar4 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      uVar1 = *(undefined8 *)local_60;
      QObject::objectName();
      local_78 = (QArrayData *)QString::fromAscii_helper("m_widgetSpacer",0xe);
      cVar2 = QString::startsWith(&local_70,&local_78,1);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10058f7d2;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_10058f7d2:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10058f802;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_10058f802:
      if (cVar2 != '\0') {
        QWidget::setAutoFillBackground(SUB81(uVar1,0));
      }
      local_60 = local_60 + 8;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058f85c;
    }
    QListData::dispose(local_68);
  }
LAB_10058f85c:
  iVar3 = QStackedWidget::indexOf(*(QWidget **)(param_1 + 0xb0));
  if (iVar3 == -1) {
    iVar3 = QStackedWidget::addWidget(*(QWidget **)(param_1 + 0xb0));
    FUN_100590c80(param_1,param_2);
    WidgetUtils::Adjuster::adjustAllLayouts(param_2);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return iVar3;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return iVar3;
}

