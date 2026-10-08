
void FUN_100624950(long param_1,QAction *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  QVariant local_70;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (QAction *)0x0) {
    return;
  }
  QWidget::actions();
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar4 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_58 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar4 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
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
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
LAB_100624a2b:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100624a2b;
    }
    if (local_40 == 0) goto LAB_100624ab6;
  }
  if (local_50 != local_48) {
    do {
      uVar1 = *(undefined8 *)local_50;
      QAction::data();
      iVar2 = QVariant::toInt((bool *)&local_70);
      iVar3 = QComboBox::currentIndex();
      QVariant::~QVariant(&local_70);
      if (iVar2 == iVar3) {
        QAction::setChecked(SUB81(uVar1,0));
        QMenu::setActiveAction(param_2);
        break;
      }
      local_50 = local_50 + 8;
      local_40 = 1;
    } while (local_50 != local_48);
  }
LAB_100624ab6:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return;
}

