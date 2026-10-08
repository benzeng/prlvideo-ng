
void FUN_1005f8d20(QString *param_1,int param_2)

{
  QArrayData *pQVar1;
  int iVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  QArrayData *pQVar4;
  long lVar5;
  QString *pQVar6;
  undefined4 uVar7;
  bool bVar8;
  QArrayData *local_78;
  QString local_70;
  undefined4 local_68;
  QString local_60;
  undefined4 local_58;
  QString local_50;
  undefined4 local_48;
  QString local_40;
  undefined1 local_31;
  
  if (param_2 == 0) {
    pQVar3 = param_1[8].field0_0x0;
    QString::fromUtf8_helper((char *)&local_40,0x1e41978);
    QString::operator=((QString *)(pQVar3 + 0x28),&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f8d99;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1005f8d99:
    pQVar3 = param_1[8].field0_0x0;
    *(undefined4 *)(pQVar3 + 0x24) = 0;
    if (*(long **)(pQVar3 + 0x38) != (long *)0x0) {
      (**(code **)(**(long **)(pQVar3 + 0x38) + 0x20))();
      pQVar3 = param_1[8].field0_0x0;
    }
    *(undefined8 *)(pQVar3 + 0x38) = 0;
    lVar5 = FUN_1005ec990(*(long *)(pQVar3 + 0x10) + 0x38);
    if (*(int *)(lVar5 + 0x50) == 4) {
      *(undefined4 *)(param_1[8].field0_0x0 + 0x20) = 0;
      pQVar6 = param_1 + 7;
      lVar5 = FUN_1005ec990(pQVar6);
      pQVar4 = (QArrayData *)QString::fromAscii_helper("",0);
      if (1 < *(int *)pQVar4 + 1U) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
      }
      local_48 = 2;
      local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
      QString::operator=((QString *)(lVar5 + 0x150),&local_50);
      *(undefined4 *)(lVar5 + 0x158) = local_48;
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005f8e68;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_1005f8e68:
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005f8e95;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
LAB_1005f8e95:
      lVar5 = FUN_1005ec990(pQVar6);
      *(undefined4 *)(lVar5 + 0x14c) = 0;
      lVar5 = FUN_1005ec990(pQVar6);
      *(undefined1 *)(lVar5 + 0x148) = 0;
    }
    else {
      pQVar6 = param_1 + 7;
      lVar5 = FUN_1005ec990(pQVar6);
      uVar7 = 2;
      if (*(int *)(lVar5 + 0x158) != 0) {
        lVar5 = FUN_1005ec990(pQVar6);
        uVar7 = *(undefined4 *)(lVar5 + 0x158);
      }
      lVar5 = FUN_1005ec990(pQVar6);
      pQVar4 = (QArrayData *)QString::fromAscii_helper("",0);
      if (1 < *(int *)pQVar4 + 1U) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
      }
      local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
      local_58 = uVar7;
      QString::operator=((QString *)(lVar5 + 0x150),&local_60);
      *(undefined4 *)(lVar5 + 0x158) = local_58;
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005f8f65;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_1005f8f65:
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005f8f92;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
    }
  }
LAB_1005f8f92:
  pQVar6 = param_1 + 7;
  FUN_1005f3000(param_1[8].field0_0x0);
  lVar5 = FUN_1005ec990(pQVar6);
  pQVar4 = *(QArrayData **)(lVar5 + 0x150);
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_31 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  if (*(int *)(lVar5 + 0x158) == 2) {
    lVar5 = FUN_1005ec990(pQVar6);
    pQVar1 = *(QArrayData **)(lVar5 + 0x150);
    iVar2 = *(int *)pQVar1;
    if (1 < iVar2 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      iVar2 = *(int *)pQVar1;
    }
    bVar8 = *(int *)(pQVar1 + 4) != 0;
    if (iVar2 != -1) {
      if (iVar2 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f9059;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
  }
  else {
    bVar8 = false;
  }
LAB_1005f9059:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005f9084;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1005f9084:
  if (bVar8) {
    pQVar3 = param_1[8].field0_0x0;
    lVar5 = FUN_1005ec990(pQVar6);
    local_70.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar5 + 0x150);
    if (1 < *(int *)local_70.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
    }
    local_68 = *(undefined4 *)(lVar5 + 0x158);
    QString::operator=((QString *)(pQVar3 + 0x28),&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005f90fa;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
  }
LAB_1005f90fa:
  lVar5 = FUN_1005ec990(pQVar6);
  if (*(int *)(lVar5 + 0x14c) == 0) {
    lVar5 = FUN_1005ec990(pQVar6);
    pQVar3 = param_1[8].field0_0x0;
    uVar7 = 2;
    if (*(int *)(*(long *)(pQVar3 + 0x18) + 0xc) != *(int *)(*(long *)(pQVar3 + 0x18) + 8)) {
      uVar7 = 1;
    }
    *(undefined4 *)(lVar5 + 0x14c) = uVar7;
  }
  else {
    pQVar3 = param_1[8].field0_0x0;
  }
  lVar5 = FUN_1005ec990(*(long *)(pQVar3 + 0x10) + 0x38);
  if (*(int *)(lVar5 + 0x50) == 4) {
    QMetaObject::tr((char *)&local_78,(char *)&PTR_PTR_10221fef0,0x1e05f3f);
  }
  else {
    local_78 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  CAbstractWizardPage::setTitle(param_1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_78,2,8);
  }
  return;
}

