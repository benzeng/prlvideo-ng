
void FUN_10055a8c0(long param_1)

{
  char *pcVar1;
  QVariant *pQVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  AnonymousUnion0 AVar6;
  size_t sVar7;
  QArrayData *pQVar8;
  Data *pDVar9;
  int iVar10;
  long lVar11;
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
  
  FUN_10055bd20(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  pcVar1 = *(char **)(param_1 + 0x10);
  pQVar2 = *(QVariant **)PTR_PreprocessValueProp_1021e1570;
  QVariant::QVariant(&local_48,true);
  QObject::setProperty(pcVar1,pQVar2);
  QVariant::~QVariant(&local_48);
  puVar4 = PTR_s_ShortcutsStorage_102274490;
  pcVar1 = *(char **)(param_1 + 0x10);
  pQVar2 = *(QVariant **)PTR_StoragesProp_1021e1560;
  local_60.field1 = (Data *)PTR_shared_null_1021e15e8;
  iVar10 = -1;
  if (PTR_s_ShortcutsStorage_102274490 != (undefined *)0x0) {
    sVar7 = _strlen(PTR_s_ShortcutsStorage_102274490);
    iVar10 = (int)sVar7;
  }
  pQVar8 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar10);
  local_68 = pQVar8;
  FUN_1000341d0(&local_60,&local_68);
  QVariant::QVariant(&local_58,(QStringList *)&local_60.field0);
  QObject::setProperty(pcVar1,pQVar2);
  QVariant::~QVariant(&local_58);
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055a9bf;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_10055a9bf:
  AVar6 = local_60;
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055aa51;
    }
    iVar10 = *(int *)(local_60.field1 + 0xc);
    if (iVar10 != *(int *)(local_60.field1 + 8)) {
      lVar11 = (long)*(int *)(local_60.field1 + 8) * 8 + (long)iVar10 * -8;
      pDVar9 = (Data *)(local_60.field1 + (long)iVar10 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar8 == 0) {
LAB_10055aa30:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar9;
            goto LAB_10055aa30;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10055aa51:
  puVar5 = PTR_s_MouseShortcuts_1022744c0;
  puVar4 = PTR_s_ShortcutsStorage_102274490;
  pcVar1 = *(char **)(param_1 + 0x10);
  local_80.field1 = (Data *)PTR_shared_null_1021e15e8;
  iVar10 = -1;
  if (PTR_s_MouseShortcuts_1022744c0 != (undefined *)0x0) {
    sVar7 = _strlen(PTR_s_MouseShortcuts_1022744c0);
    iVar10 = (int)sVar7;
  }
  pQVar8 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar10);
  local_88 = pQVar8;
  FUN_1000341d0(&local_80,&local_88);
  QVariant::QVariant(&local_78,(QStringList *)&local_80.field0);
  QObject::setProperty(pcVar1,(QVariant *)puVar4);
  QVariant::~QVariant(&local_78);
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055aaef;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_10055aaef:
  AVar6 = local_80;
  if (*(int *)local_80.field1 != -1) {
    if (*(int *)local_80.field1 != 0) {
      LOCK();
      *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
      local_31 = *(int *)local_80.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055ab81;
    }
    iVar10 = *(int *)(local_80.field1 + 0xc);
    if (iVar10 != *(int *)(local_80.field1 + 8)) {
      lVar11 = (long)*(int *)(local_80.field1 + 8) * 8 + (long)iVar10 * -8;
      pDVar9 = (Data *)(local_80.field1 + (long)iVar10 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar8 == 0) {
LAB_10055ab60:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar9;
            goto LAB_10055ab60;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar6.field1);
  }
LAB_10055ab81:
  pcVar1 = *(char **)(param_1 + 0x10);
  pQVar2 = *(QVariant **)PTR_SetterProp_1021e1558;
  local_a0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("setMouseRemaps",0xe);
  QVariant::QVariant(&local_98,&local_a0);
  QObject::setProperty(pcVar1,pQVar2);
  QVariant::~QVariant(&local_98);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055ac0e;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_10055ac0e:
  pcVar1 = *(char **)(param_1 + 0x10);
  pQVar2 = *(QVariant **)PTR_GetterProp_1021e1548;
  local_b8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("getMouseRemaps",0xe);
  QVariant::QVariant(&local_b0,&local_b8);
  QObject::setProperty(pcVar1,pQVar2);
  QVariant::~QVariant(&local_b0);
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055ac9b;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_10055ac9b:
  lVar11 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(lVar11 + 0x20);
  *(undefined4 *)(lVar3 + 0x30) = 1;
  *(undefined1 *)(lVar3 + 0x35) = 1;
  lVar11 = *(long *)(lVar11 + 0x40);
  *(undefined4 *)(lVar11 + 0x30) = 1;
  *(undefined1 *)(lVar11 + 0x35) = 1;
  QWidget::setMaximumWidth((int)lVar3);
  QWidget::setMaximumWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40));
  return;
}

