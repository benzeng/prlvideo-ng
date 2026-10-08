
void FUN_1004b7210(long param_1,long param_2)

{
  int iVar1;
  QVariant *pQVar2;
  undefined *puVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  char *pcVar6;
  QWidget *pQVar7;
  long lVar8;
  QArrayData *pQVar9;
  Data *pDVar10;
  QString local_e0;
  QVariant local_d8;
  QString local_c8;
  QVariant local_c0;
  QString local_b0;
  QVariant local_a8;
  QVariant local_98;
  QArrayData *local_88;
  AnonymousUnion0 local_80;
  QVariant local_78;
  QArrayData *local_68;
  AnonymousUnion0 local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  if (param_2 == 0) {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x38);
  if (*(long *)(lVar8 + 0x28) != param_2) {
    return;
  }
  pcVar6 = operator_new(0x98);
  FUN_10013f9c0(pcVar6,*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(lVar8 + 0x20),0);
  *(char **)(param_1 + 0x40) = pcVar6;
  puVar3 = PTR_s_Critical_1021f1e10;
  QVariant::QVariant(&local_48,true);
  QObject::setProperty(pcVar6,(QVariant *)puVar3);
  QVariant::~QVariant(&local_48);
  puVar4 = PTR_s_VmConfig_1021f1e00;
  puVar3 = PTR_shared_null_1021e15e8;
  pcVar6 = *(char **)(param_1 + 0x40);
  pQVar2 = *(QVariant **)PTR_StoragesProp_1021e1560;
  local_60.field1 = (Data *)PTR_shared_null_1021e15e8;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    _strlen(PTR_s_VmConfig_1021f1e00);
  }
  QString::fromUtf8_helper((char *)&local_68,(int)puVar4);
  FUN_1000341d0(&local_60,&local_68);
  QVariant::QVariant(&local_58,(QStringList *)&local_60.field0);
  QObject::setProperty(pcVar6,pQVar2);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b7339;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004b7339:
  AVar5 = local_60;
  local_80 = (AnonymousUnion0)puVar3;
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b73e8;
    }
    iVar1 = *(int *)(local_60.field1 + 0xc);
    if (iVar1 != *(int *)(local_60.field1 + 8)) {
      lVar8 = (long)*(int *)(local_60.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar10 = (Data *)(local_60.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar10;
        if (*(int *)pQVar9 == 0) {
LAB_1004b73c0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar10;
            goto LAB_1004b73c0;
          }
        }
        pDVar10 = pDVar10 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
    local_80 = (AnonymousUnion0)PTR_shared_null_1021e15e8;
  }
LAB_1004b73e8:
  pcVar6 = *(char **)(param_1 + 0x40);
  QString::fromUtf8_helper((char *)&local_88,0x1ddcb17);
  FUN_1000341d0(&local_80,&local_88);
  QVariant::QVariant(&local_78,(QStringList *)&local_80.field0);
  QObject::setProperty(pcVar6,(QVariant *)puVar4);
  QVariant::~QVariant(&local_78);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b7467;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004b7467:
  AVar5 = local_80;
  if (*(int *)local_80.field1 != -1) {
    if (*(int *)local_80.field1 != 0) {
      LOCK();
      *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
      local_31 = *(int *)local_80.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b74f1;
    }
    iVar1 = *(int *)(local_80.field1 + 0xc);
    if (iVar1 != *(int *)(local_80.field1 + 8)) {
      lVar8 = (long)*(int *)(local_80.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar10 = (Data *)(local_80.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar10;
        if (*(int *)pQVar9 == 0) {
LAB_1004b74d0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar10;
            goto LAB_1004b74d0;
          }
        }
        pDVar10 = pDVar10 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_1004b74f1:
  pcVar6 = *(char **)(param_1 + 0x40);
  pQVar2 = *(QVariant **)PTR_PreprocessValueProp_1021e1570;
  QVariant::QVariant(&local_98,true);
  QObject::setProperty(pcVar6,pQVar2);
  QVariant::~QVariant(&local_98);
  pcVar6 = *(char **)(param_1 + 0x40);
  pQVar2 = *(QVariant **)PTR_GetterProp_1021e1548;
  QString::fromUtf8_helper((char *)&local_b0,0x1df9324);
  QVariant::QVariant(&local_a8,&local_b0);
  QObject::setProperty(pcVar6,pQVar2);
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b75b9;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1004b75b9:
  pcVar6 = *(char **)(param_1 + 0x40);
  pQVar2 = *(QVariant **)PTR_SetterProp_1021e1558;
  QString::fromUtf8_helper((char *)&local_c8,0x1df933e);
  QVariant::QVariant(&local_c0,&local_c8);
  QObject::setProperty(pcVar6,pQVar2);
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_31 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b7645;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_1004b7645:
  pcVar6 = *(char **)(param_1 + 0x40);
  pQVar2 = *(QVariant **)PTR_IniterProp_1021e1550;
  QString::fromUtf8_helper((char *)&local_e0,0x1df9358);
  QVariant::QVariant(&local_d8,&local_e0);
  QObject::setProperty(pcVar6,pQVar2);
  QVariant::~QVariant(&local_d8);
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_31 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004b76d1;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_1004b76d1:
  pQVar7 = (QWidget *)FUN_10044e620(param_1);
  CWidgetMapper::addMapping(pQVar7);
  return;
}

