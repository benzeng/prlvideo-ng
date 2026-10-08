
void FUN_100135cc0(QObject *param_1,QAction *param_2,long *param_3,char param_4)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  QAction *this;
  long lVar4;
  long lVar5;
  QVariant local_88;
  QVariant local_78;
  QString local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_60 = (Data *)*param_3;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      lVar4 = (long)*(int *)(local_60 + 8);
      lVar2 = *param_3;
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_60 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_60 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar4 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      uVar1 = *(uint *)local_58;
      EnumUtils::OsVerToString((uint)&local_68);
      puVar3 = PTR_s__10226d698;
      if (param_4 != '\0') {
        if (PTR_s__10226d698 != (undefined *)0x0) {
          _strlen(PTR_s__10226d698);
        }
        QString::fromUtf8_helper((char *)&local_40,(int)puVar3);
        QString::append(&local_68);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100135e20;
          }
          QArrayData::deallocate(local_40,2,8);
        }
      }
LAB_100135e20:
      this = operator_new(0x10);
      QAction::QAction(this,&local_68,param_1);
      QAction::setCheckable(SUB81(this,0));
      QVariant::QVariant(&local_78,uVar1);
      QAction::setData((QVariant *)this);
      QVariant::~QVariant(&local_78);
      puVar3 = PTR_s_autoDetectAction_10226d6a0;
      QVariant::QVariant(&local_88,false);
      QObject::setProperty((char *)this,(QVariant *)puVar3);
      QVariant::~QVariant(&local_88);
      QWidget::addAction(param_2);
      QActionGroup::addAction(*(QAction **)(param_1 + 0x38));
      if (param_1 == (QObject *)param_2 && uVar1 == 0x910) {
        QMenu::addSeparator();
      }
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100135efe;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_100135efe:
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
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

