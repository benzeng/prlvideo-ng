
QMenu * FUN_1006e3320(undefined8 param_1,undefined8 param_2,QWidget *param_3,char param_4)

{
  int iVar1;
  Data *pDVar2;
  char cVar3;
  QMenu *this;
  undefined8 uVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  long lVar8;
  long lVar9;
  Data *pDVar10;
  bool bVar11;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  int local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  this = operator_new(0x30);
  QMenu::title();
  if (*(int *)(local_48 + 4) == 0) {
    QMenu::menuAction();
    QAction::text();
  }
  else {
    QMenu::title();
  }
  QMenu::QMenu(this,&local_40,param_3);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e33e0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1006e33e0:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e3410;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006e3410:
  QObject::objectName();
  QObject::setObjectName((QString *)this);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e345a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006e345a:
  QWidget::actions();
  local_70 = local_78;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
      QListData::detach((int)&local_70);
      lVar8 = (long)*(int *)(local_70 + 8);
      if ((local_78 + (long)*(int *)(local_78 + 8) * 8 != local_70 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_70 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_70 + 0xc))
         ) {
        _memcpy(local_70 + lVar8 * 8 + 0x10,local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  local_58 = 1;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
LAB_1006e350e:
      QListData::dispose(local_78);
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1006e350e;
    }
    if (local_58 == 0) goto LAB_1006e37ed;
  }
  if (local_68 != local_60) {
    do {
      uVar4 = *(undefined8 *)local_68;
      cVar3 = QAction::isSeparator();
      if (cVar3 == '\0') {
        lVar8 = QAction::menu();
        if (lVar8 == 0) {
          local_80 = (Data *)PTR_shared_null_1021e15e8;
          pQVar5 = (QArrayData *)QString::fromAscii_helper("visible",7);
          local_88 = pQVar5;
          FUN_1000341d0(&local_80,&local_88);
          pQVar6 = (QArrayData *)QString::fromAscii_helper("enabled",7);
          local_90 = pQVar6;
          FUN_1000341d0(&local_80,&local_90);
          pQVar7 = (QArrayData *)QString::fromAscii_helper("shortcut",8);
          local_98 = pQVar7;
          FUN_1000341d0(&local_80,&local_98);
          lVar8 = FUN_10068e430(uVar4,this,1,&local_80);
          if (*(int *)pQVar7 != -1) {
            if (*(int *)pQVar7 != 0) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + -1;
              local_31 = *(int *)pQVar7 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006e3670;
            }
            QArrayData::deallocate(pQVar7,2,8);
          }
LAB_1006e3670:
          if (*(int *)pQVar6 != -1) {
            if (*(int *)pQVar6 != 0) {
              LOCK();
              *(int *)pQVar6 = *(int *)pQVar6 + -1;
              local_31 = *(int *)pQVar6 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006e369f;
            }
            QArrayData::deallocate(pQVar6,2,8);
          }
LAB_1006e369f:
          if (*(int *)pQVar5 != -1) {
            if (*(int *)pQVar5 != 0) {
              LOCK();
              *(int *)pQVar5 = *(int *)pQVar5 + -1;
              local_31 = *(int *)pQVar5 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006e36d1;
            }
            QArrayData::deallocate(pQVar5,2,8);
          }
LAB_1006e36d1:
          pDVar2 = local_80;
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006e377f;
            }
            iVar1 = *(int *)(local_80 + 0xc);
            if (iVar1 != *(int *)(local_80 + 8)) {
              lVar9 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar1 * -8;
              pDVar10 = local_80 + (long)iVar1 * 8 + 8;
              do {
                pQVar5 = *(QArrayData **)pDVar10;
                if (*(int *)pQVar5 == 0) {
LAB_1006e3750:
                  QArrayData::deallocate(pQVar5,2,8);
                }
                else if (*(int *)pQVar5 != -1) {
                  LOCK();
                  *(int *)pQVar5 = *(int *)pQVar5 + -1;
                  local_31 = *(int *)pQVar5 != 0;
                  UNLOCK();
                  if (!(bool)local_31) {
                    pQVar5 = *(QArrayData **)pDVar10;
                    goto LAB_1006e3750;
                  }
                }
                pDVar10 = pDVar10 + -8;
                lVar9 = lVar9 + 8;
              } while (lVar9 != 0);
            }
            QListData::dispose(pDVar2);
          }
LAB_1006e377f:
          if ((lVar8 != 0) && (QWidget::addAction((QAction *)this), param_4 != '\0')) {
            bVar11 = SUB81(lVar8,0);
            QAction::setEnabled(bVar11);
            QAction::isCheckable();
            QAction::setCheckable(bVar11);
            QAction::isChecked();
            QAction::setChecked(bVar11);
          }
        }
        else {
          uVar4 = QAction::menu();
          lVar8 = FUN_1006e3320(param_1,uVar4,param_3,param_4);
          if (lVar8 != 0) {
            QMenu::addMenu(this);
          }
        }
      }
      else {
        QMenu::addSeparator();
      }
      local_68 = local_68 + 8;
      local_58 = 1;
    } while (local_68 != local_60);
  }
LAB_1006e37ed:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return this;
      }
      local_31 = 0;
    }
    QListData::dispose(local_70);
  }
  return this;
}

