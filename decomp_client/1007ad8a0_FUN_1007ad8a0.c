
CBaseDialog * FUN_1007ad8a0(undefined8 param_1,QObject *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  CBaseDialog *unaff_RBX;
  QString local_80;
  QVariant local_78;
  QString local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  QApplication::topLevelWidgets();
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar4 = (long)*(int *)(local_58 + 8);
      unaff_RBX = (CBaseDialog *)(long)*(int *)(local_60 + 8);
      if ((local_60 + (long)unaff_RBX * 8 != local_58 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_58 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar4 * 8 + 0x10,local_60 + (long)unaff_RBX * 8 + 0x10,lVar5 * 8);
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
  if (*(int *)local_60 == -1) {
LAB_1007ad977:
    bVar1 = true;
    if (local_50 != local_48) {
      do {
        unaff_RBX = *(CBaseDialog **)local_50;
        uVar3 = QMetaObject::className();
        lVar4 = (**(code **)(*(long *)unaff_RBX + 8))(unaff_RBX,uVar3);
        if (lVar4 != 0) {
          QObject::property((char *)&local_78);
          QVariant::toString();
          FUN_100188480(&local_80,param_2);
          cVar2 = operator==(&local_68,&local_80);
          if (*(int *)local_80.field0_0x0 != -1) {
            if (*(int *)local_80.field0_0x0 != 0) {
              LOCK();
              *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
              local_31 = *(int *)local_80.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007ada2e;
            }
            QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
          }
LAB_1007ada2e:
          if (*(int *)local_68.field0_0x0 != -1) {
            if (*(int *)local_68.field0_0x0 != 0) {
              LOCK();
              *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
              local_31 = *(int *)local_68.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007ada5e;
            }
            QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
          }
LAB_1007ada5e:
          QVariant::~QVariant(&local_78);
          if (cVar2 != '\0') {
            QWidget::raise();
            QWidget::activateWindow();
            unaff_RBX = (CBaseDialog *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10222d000)
            ;
            bVar1 = false;
            goto LAB_1007adacf;
          }
        }
        local_50 = local_50 + 8;
        local_40 = 1;
      } while (local_50 != local_48);
      bVar1 = true;
    }
  }
  else {
    if (*(int *)local_60 == 0) {
LAB_1007ad968:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1007ad968;
    }
    if (local_40 != 0) goto LAB_1007ad977;
    bVar1 = true;
  }
LAB_1007adacf:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007adaf5;
    }
    QListData::dispose(local_58);
  }
LAB_1007adaf5:
  if (bVar1) {
    unaff_RBX = operator_new(0x138);
    CBaseDialog::CBaseDialog(unaff_RBX,param_1,1,0x100);
    *(undefined ***)unaff_RBX = &PTR_FUN_10222d040;
    *(undefined ***)(unaff_RBX + 0x10) = &PTR_FUN_10222d248;
    *(undefined ***)(unaff_RBX + 0x30) = &PTR_FUN_10222d298;
    *(undefined8 *)(unaff_RBX + 0x108) = 0;
    uVar3 = 0;
    if (param_2 != (QObject *)0x0) {
      uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    }
    *(undefined8 *)(unaff_RBX + 0x118) = uVar3;
    *(QObject **)(unaff_RBX + 0x120) = param_2;
    *(undefined8 *)(unaff_RBX + 0x130) = 0;
    *(undefined8 *)(unaff_RBX + 0x128) = 0;
    FUN_1007aae30(unaff_RBX);
    QWidget::show();
    QWidget::raise();
    QWidget::activateWindow();
  }
  return unaff_RBX;
}

