
void FUN_1006e54d0(undefined8 param_1,QMenu *param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,undefined4 param_6)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  Data *pDVar4;
  long lVar5;
  QVariant local_68;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  if (param_5 != '\0') {
    WidgetUtils::clearMenuRecursively(param_2,true);
  }
  FUN_1000722f0(&local_58,param_3);
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      iVar1 = **(int **)local_50;
      if (iVar1 == 0x10) {
        QMenu::addSeparator();
      }
      else {
        uVar3 = FUN_1006915d0();
        lVar5 = FUN_100691620(uVar3,iVar1,param_4);
        if (lVar5 != 0) {
          QObject::property((char *)&local_68);
          cVar2 = QVariant::toBool();
          QVariant::~QVariant(&local_68);
          if (cVar2 == '\0') {
            QWidget::addAction((QAction *)param_2);
          }
          else {
            FUN_1006e1670(param_1,lVar5,param_2,param_4,param_6);
            QMenu::addMenu(param_2);
          }
        }
      }
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
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
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar5 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_58 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar4 != (void *)0x0) {
          operator_delete(*(void **)pDVar4);
        }
        pDVar4 = pDVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_58);
  }
  return;
}

