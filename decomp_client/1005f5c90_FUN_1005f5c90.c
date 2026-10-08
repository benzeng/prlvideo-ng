
void FUN_1005f5c90(long param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  QArrayData *pQVar5;
  int *piVar6;
  int *piVar7;
  AnonymousUnion0 local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  int *local_50;
  int *local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  lVar3 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
  if (*(int *)(lVar3 + 0x50) == 4) {
    QMetaObject::tr((char *)&local_38,"",0x1e06184);
    QString::operator=(&local_30,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1005f5d7c;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
  else {
    QMetaObject::tr((char *)&local_40,"",0x1e0619f);
    QString::operator=(&local_30,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_21 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1005f5d7c;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_1005f5d7c:
  local_50 = (int *)PTR_shared_null_1021e15e8;
  FUN_1000341d0(&local_50,&local_30);
  QMetaObject::tr((char *)&local_58,"",0x1e061d2);
  FUN_1000341d0(&local_50,&local_58);
  local_48 = local_50;
  if (*local_50 != -1) {
    if (*local_50 == 0) {
      QListData::detach((int)&local_48);
      iVar1 = local_48[2];
      if (iVar1 != local_48[3]) {
        piVar6 = local_50 + (long)local_50[2] * 2 + 4;
        piVar7 = local_48 + (long)iVar1 * 2 + 4;
        lVar3 = (long)local_48[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)piVar6;
          *(int **)piVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_21 = *piVar2 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          piVar6 = piVar6 + 2;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *local_50 = *local_50 + 1;
      local_21 = *local_50 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005f5e6f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005f5e6f:
  FUN_100039a80(&local_50);
  CAbstractWizardPage::wizardCtrl();
  CWizardController::parentWidget();
  uVar4 = QWidget::window();
  QMetaObject::tr((char *)&local_68,"",0x1e061e0);
  local_70 = (QArrayData *)QString::fromAscii_helper("",0);
  pQVar5 = (QArrayData *)QString::fromAscii_helper(";;",2);
  QtPrivate::QStringList_join
            ((QStringList *)&local_78.field0,(QChar *)&local_48,
             (int)*(undefined8 *)(pQVar5 + 0x10) + (int)pQVar5);
  QFileDialog::getOpenFileName(&local_60,uVar4,&local_68,&local_70,&local_78,0,0);
  if (*(int *)local_78.field1 != -1) {
    if (*(int *)local_78.field1 != 0) {
      LOCK();
      *(int *)local_78.field1 = *(int *)local_78.field1 + -1;
      local_21 = *(int *)local_78.field1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005f5f42;
    }
    QArrayData::deallocate((QArrayData *)local_78.field1,2,8);
  }
LAB_1005f5f42:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_21 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005f5f6d;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1005f5f6d:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005f5f9d;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005f5f9d:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005f5fcd;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1005f5fcd:
  FUN_1005f5b70(param_1,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005f6009;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005f6009:
  FUN_100039a80(&local_48);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

