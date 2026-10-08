
void FUN_100568bf0(long param_1)

{
  long *plVar1;
  char *pcVar2;
  QVariant *pQVar3;
  undefined *puVar4;
  undefined *puVar5;
  AnonymousUnion0 AVar6;
  undefined1 uVar7;
  size_t sVar8;
  QArrayData *pQVar9;
  Data *pDVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  QString local_b8;
  QVariant local_b0;
  QString local_a0;
  QVariant local_98;
  QArrayData *local_88;
  AnonymousUnion0 local_80;
  QVariant local_78;
  QArrayData *local_68;
  AnonymousUnion0 local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  FUN_10056ceb0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x38);
  (**(code **)(*plVar1 + 0x1c0))(plVar1,param_1 + 0x20);
  uVar12 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)
     ) {
    uVar12 = *(undefined8 *)(param_1 + 0x50);
  }
  uVar7 = FUN_1005a5f40(uVar12);
  QAbstractItemModel::beginResetModel();
  *(undefined1 *)(param_1 + 0x38) = uVar7;
  QAbstractItemModel::endResetModel();
  FUN_1005692d0(param_1);
  FUN_1005693f0(param_1);
  pcVar2 = *(char **)(param_1 + 0x10);
  pQVar3 = *(QVariant **)PTR_PreprocessValueProp_1021e1570;
  QVariant::QVariant(&local_48,true);
  QObject::setProperty(pcVar2,pQVar3);
  QVariant::~QVariant(&local_48);
  puVar4 = PTR_s_SendKeyToVmListStorage_102274498;
  pcVar2 = *(char **)(param_1 + 0x10);
  pQVar3 = *(QVariant **)PTR_StoragesProp_1021e1560;
  local_60.field1 = (Data *)PTR_shared_null_1021e15e8;
  iVar11 = -1;
  if (PTR_s_SendKeyToVmListStorage_102274498 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_SendKeyToVmListStorage_102274498);
    iVar11 = (int)sVar8;
  }
  pQVar9 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar11);
  local_68 = pQVar9;
  FUN_1000341d0(&local_60,&local_68);
  QVariant::QVariant(&local_58,(QStringList *)&local_60.field0);
  QObject::setProperty(pcVar2,pQVar3);
  QVariant::~QVariant(&local_58);
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_31 = *(int *)pQVar9 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100568d49;
    }
    QArrayData::deallocate(pQVar9,2,8);
  }
LAB_100568d49:
  AVar6 = local_60;
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100568dd1;
    }
    iVar11 = *(int *)(local_60.field1 + 0xc);
    if (iVar11 != *(int *)(local_60.field1 + 8)) {
      lVar13 = (long)*(int *)(local_60.field1 + 8) * 8 + (long)iVar11 * -8;
      pDVar10 = (Data *)(local_60.field1 + (long)iVar11 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar10;
        if (*(int *)pQVar9 == 0) {
LAB_100568db0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar10;
            goto LAB_100568db0;
          }
        }
        pDVar10 = pDVar10 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100568dd1:
  puVar5 = PTR_s_SendKeyToVmList_1022744d8;
  puVar4 = PTR_s_SendKeyToVmListStorage_102274498;
  pcVar2 = *(char **)(param_1 + 0x10);
  local_80.field1 = (Data *)PTR_shared_null_1021e15e8;
  iVar11 = -1;
  if (PTR_s_SendKeyToVmList_1022744d8 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_SendKeyToVmList_1022744d8);
    iVar11 = (int)sVar8;
  }
  pQVar9 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar11);
  local_88 = pQVar9;
  FUN_1000341d0(&local_80,&local_88);
  QVariant::QVariant(&local_78,(QStringList *)&local_80.field0);
  QObject::setProperty(pcVar2,(QVariant *)puVar4);
  QVariant::~QVariant(&local_78);
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_31 = *(int *)pQVar9 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100568e6f;
    }
    QArrayData::deallocate(pQVar9,2,8);
  }
LAB_100568e6f:
  AVar6 = local_80;
  if (*(int *)local_80.field1 != -1) {
    if (*(int *)local_80.field1 != 0) {
      LOCK();
      *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
      local_31 = *(int *)local_80.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100568f01;
    }
    iVar11 = *(int *)(local_80.field1 + 0xc);
    if (iVar11 != *(int *)(local_80.field1 + 8)) {
      lVar13 = (long)*(int *)(local_80.field1 + 8) * 8 + (long)iVar11 * -8;
      pDVar10 = (Data *)(local_80.field1 + (long)iVar11 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar10;
        if (*(int *)pQVar9 == 0) {
LAB_100568ee0:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar10;
            goto LAB_100568ee0;
          }
        }
        pDVar10 = pDVar10 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_100568f01:
  pcVar2 = *(char **)(param_1 + 0x10);
  pQVar3 = *(QVariant **)PTR_SetterProp_1021e1558;
  local_a0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("setSendKeyToVmList",0x12);
  QVariant::QVariant(&local_98,&local_a0);
  QObject::setProperty(pcVar2,pQVar3);
  QVariant::~QVariant(&local_98);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100568f8e;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_100568f8e:
  pcVar2 = *(char **)(param_1 + 0x10);
  pQVar3 = *(QVariant **)PTR_GetterProp_1021e1548;
  local_b8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("getSendKeyToVmList",0x12);
  QVariant::QVariant(&local_b0,&local_b8);
  QObject::setProperty(pcVar2,pQVar3);
  QVariant::~QVariant(&local_b0);
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_b8.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
  return;
}

