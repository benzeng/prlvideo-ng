
void FUN_1007be4f0(QAction *param_1,undefined8 param_2,QAction *param_3,QAction *param_4)

{
  Data *pDVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  Data *pDVar8;
  QAction *pQVar9;
  Data *local_48;
  Connection local_40 [15];
  undefined1 local_31;
  
  if (param_3 == (QAction *)0x0) {
    param_3 = param_1;
  }
  cVar3 = QAction::isSeparator();
  if (cVar3 != '\0') {
    QMenu::addSeparator();
    return;
  }
  iVar4 = FUN_1007b57b0(param_2);
  if (iVar4 != 1) {
    QObject::connect(local_40,param_2,"2triggered()",param_1,"1onActionTriggered()",0);
    QMetaObject::Connection::~Connection(local_40);
  }
  if (param_4 == (QAction *)0x0) {
    QWidget::addAction(param_3);
  }
  else {
    cVar3 = QAction::isSeparator();
    if (cVar3 == '\0') {
      QWidget::insertAction(param_3,param_4);
    }
    else {
      QWidget::actions();
      iVar4 = *(int *)(local_48 + 0xc);
      iVar2 = *(int *)(local_48 + 8);
      lVar5 = (long)iVar2;
      iVar7 = -1;
      if (iVar2 < iVar4) {
        pDVar8 = local_48 + lVar5 * 8 + 8;
        lVar6 = (long)iVar4 * 8 + lVar5 * -8;
        do {
          if (lVar6 == 0) goto LAB_1007be5e1;
          lVar6 = lVar6 + -8;
          pDVar1 = pDVar8 + 8;
          pDVar8 = pDVar8 + 8;
        } while (*(QAction **)pDVar1 != param_4);
        iVar7 = (int)((ulong)((long)pDVar8 - (long)(local_48 + lVar5 * 8 + 0x10)) >> 3);
      }
LAB_1007be5e1:
      pQVar9 = (QAction *)0x0;
      if (iVar7 != (iVar4 + -1) - iVar2) {
        pQVar9 = *(QAction **)(local_48 + (lVar5 + (iVar7 + 1)) * 8 + 0x10);
      }
      QWidget::removeAction(param_3);
      if (pQVar9 == (QAction *)0x0) {
        QWidget::addAction(param_3);
        QWidget::addAction(param_3);
      }
      else {
        QWidget::insertAction(param_3,pQVar9);
        QWidget::insertAction(param_3,pQVar9);
      }
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          UNLOCK();
          if (*(int *)local_48 != 0) {
            return;
          }
          local_31 = 0;
        }
        QListData::dispose(local_48);
      }
    }
  }
  return;
}

