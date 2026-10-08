
undefined1 FUN_1003a2630(QObject *param_1,QEvent *param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  QEvent *pQVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  QArrayData *local_48;
  Data *local_40;
  bool local_31;
  
  uVar1 = *(ushort *)(param_3 + 0x10);
  if (*(QEvent **)(param_1 + 0x10) == param_2) {
    if (uVar1 < 0x4b) {
      if (uVar1 < 0x11) {
        if (uVar1 == 6) {
          iVar6 = QKeyEvent::modifiers();
          if (iVar6 == 0) {
            if (*(int *)(param_3 + 0x28) == 0x1000000) {
              QWidget::close();
              goto LAB_1003a27aa;
            }
            if (1 < *(int *)(param_3 + 0x28) + 0xfefffffcU) goto LAB_1003a27aa;
          }
          else {
            uVar10 = QKeyEvent::modifiers();
            if (((uVar10 & 0x20000000) == 0) || (*(int *)(param_3 + 0x28) != 0x1000005))
            goto LAB_1003a27aa;
          }
          FUN_1003b0ad0(param_1 + 0x20);
          iVar6 = CMappingModel::getSubmitPolicy();
          if (iVar6 == 0) goto LAB_1003a27aa;
          local_48 = (QArrayData *)PTR_shared_null_1021e1288;
          local_40 = (Data *)PTR_shared_null_1021e15e8;
          qt_qFindChildren_helper
                    (*(undefined8 *)(param_1 + 0x10),&local_48,PTR_staticMetaObject_1021e12c0,
                     &local_40,1);
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if (local_31) goto LAB_1003a285d;
            }
            QArrayData::deallocate(local_48,2,8);
          }
LAB_1003a285d:
          uVar10 = (ulong)*(uint *)(local_40 + 8);
          lVar9 = 0;
          if ((int)*(uint *)(local_40 + 8) < *(int *)(local_40 + 0xc)) {
            do {
              lVar3 = *(long *)(local_40 + ((int)uVar10 + lVar9) * 8 + 0x10);
              cVar5 = QPushButton::isDefault();
              if ((cVar5 != '\0') &&
                 (uVar2 = *(uint *)(*(long *)(lVar3 + 0x28) + 8), (uVar2 & 0x8000) != 0)) {
                if ((uVar2 & 1) == 0) {
                  QAbstractButton::click();
                  if (*(int *)local_40 == -1) {
                    return 1;
                  }
                  if (*(int *)local_40 == 0) goto LAB_1003a2938;
                  LOCK();
                  *(int *)local_40 = *(int *)local_40 + -1;
                  iVar6 = *(int *)local_40;
                  UNLOCK();
                }
                else {
                  if (*(int *)local_40 == -1) {
                    return 1;
                  }
                  if (*(int *)local_40 == 0) goto LAB_1003a2938;
                  LOCK();
                  *(int *)local_40 = *(int *)local_40 + -1;
                  iVar6 = *(int *)local_40;
                  UNLOCK();
                }
                local_31 = iVar6 != 0;
                if (local_31) {
                  return 1;
                }
LAB_1003a2938:
                QListData::dispose(local_40);
                return 1;
              }
              lVar9 = lVar9 + 1;
              uVar10 = (ulong)*(int *)(local_40 + 8);
            } while (lVar9 < (long)((long)*(int *)(local_40 + 0xc) - uVar10));
          }
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if (local_31) goto LAB_1003a27aa;
            }
            QListData::dispose(local_40);
          }
          goto LAB_1003a27aa;
        }
        if (uVar1 != 0xe) goto LAB_1003a27aa;
      }
      else if (uVar1 != 0x11) {
        if ((uVar1 == 0x13) &&
           ((*(byte *)(*(long *)(*(QEvent **)(param_1 + 0x10) + 0x28) + 10) & 1) == 0)) {
          QWidget::hide();
          *(byte *)(param_3 + 0x12) = *(byte *)(param_3 + 0x12) & 0xfb;
          QStackedWidget::currentWidget();
          plVar11 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x1e0))(plVar11);
          }
          FUN_10039f0a0();
          QTimer::singleShot(0,param_1,"1processClose()");
          return 1;
        }
        goto LAB_1003a27aa;
      }
      FUN_1003a2540(param_1);
      goto LAB_1003a27aa;
    }
    if (uVar1 != 0x4b) goto LAB_1003a27aa;
    QStackedWidget::currentWidget();
    plVar11 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
    uVar7 = 0;
    if (plVar11 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar11 + 0x1a8))(plVar11,0);
    }
  }
  else {
    if ((((uVar1 != 0x11) || (pQVar8 = (QEvent *)FUN_10039faa0(param_1,6), pQVar8 != param_2)) ||
        (lVar9 = FUN_10039faa0(param_1,6), lVar9 == 0)) ||
       (iVar6 = FUN_1003a0140(),
       iVar6 == (*(int *)(*(long *)(lVar9 + 0x28) + 0x20) + 1) -
                *(int *)(*(long *)(lVar9 + 0x28) + 0x18))) goto LAB_1003a27aa;
    uVar7 = 0;
  }
  FUN_1003a2a50(param_1,uVar7);
LAB_1003a27aa:
  uVar4 = QObject::eventFilter(param_1,param_2);
  return uVar4;
}

