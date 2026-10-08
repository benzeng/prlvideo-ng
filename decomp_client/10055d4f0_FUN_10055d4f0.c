
void FUN_10055d4f0(long param_1)

{
  char *pcVar1;
  QVariant *pQVar2;
  undefined *puVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  size_t sVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  Data *pDVar9;
  int iVar10;
  long lVar11;
  QString local_c0;
  QVariant local_b8;
  QString local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QArrayData *local_88;
  AnonymousUnion0 local_80;
  QVariant local_78;
  QArrayData *local_68;
  AnonymousUnion0 local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  FUN_10055f600(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  QWidget::setFixedWidth((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40));
  QObject::installEventFilter(*(QObject **)(*(long *)(param_1 + 0x18) + 0x20));
  pcVar1 = *(char **)(param_1 + 0x10);
  pQVar2 = *(QVariant **)PTR_PreprocessValueProp_1021e1570;
  QVariant::QVariant(&local_48,true);
  QObject::setProperty(pcVar1,pQVar2);
  QVariant::~QVariant(&local_48);
  puVar3 = PTR_s_ShortcutsStorage_102274490;
  pcVar1 = *(char **)(param_1 + 0x10);
  pQVar2 = *(QVariant **)PTR_StoragesProp_1021e1560;
  local_60.field1 = (Data *)PTR_shared_null_1021e15e8;
  iVar10 = -1;
  if (PTR_s_ShortcutsStorage_102274490 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_ShortcutsStorage_102274490);
    iVar10 = (int)sVar6;
  }
  pQVar7 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar10);
  local_68 = pQVar7;
  FUN_1000341d0(&local_60,&local_68);
  QVariant::QVariant(&local_58,(QStringList *)&local_60.field0);
  QObject::setProperty(pcVar1,pQVar2);
  QVariant::~QVariant(&local_58);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055d611;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_10055d611:
  AVar5 = local_60;
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055d6a1;
    }
    iVar10 = *(int *)(local_60.field1 + 0xc);
    if (iVar10 != *(int *)(local_60.field1 + 8)) {
      lVar11 = (long)*(int *)(local_60.field1 + 8) * 8 + (long)iVar10 * -8;
      pDVar9 = (Data *)(local_60.field1 + (long)iVar10 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar7 == 0) {
LAB_10055d680:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar9;
            goto LAB_10055d680;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10055d6a1:
  puVar4 = PTR_s_GrabHostShortcutsType_1022744c8;
  puVar3 = PTR_s_ShortcutsStorage_102274490;
  pcVar1 = *(char **)(param_1 + 0x10);
  local_80.field1 = (Data *)PTR_shared_null_1021e15e8;
  iVar10 = -1;
  if (PTR_s_GrabHostShortcutsType_1022744c8 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_GrabHostShortcutsType_1022744c8);
    iVar10 = (int)sVar6;
  }
  pQVar7 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar10);
  local_88 = pQVar7;
  FUN_1000341d0(&local_80,&local_88);
  puVar4 = PTR_s_ShowHideAppShortcut_1022744d0;
  iVar10 = -1;
  if (PTR_s_ShowHideAppShortcut_1022744d0 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_ShowHideAppShortcut_1022744d0);
    iVar10 = (int)sVar6;
  }
  pQVar8 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar10);
  local_90 = pQVar8;
  FUN_1000341d0(&local_80,&local_90);
  QVariant::QVariant(&local_78,(QStringList *)&local_80.field0);
  QObject::setProperty(pcVar1,(QVariant *)puVar3);
  QVariant::~QVariant(&local_78);
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055d780;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_10055d780:
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055d7ad;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_10055d7ad:
  AVar5 = local_80;
  if (*(int *)local_80.field1 != -1) {
    if (*(int *)local_80.field1 != 0) {
      LOCK();
      *(int *)local_80.field1 = *(int *)local_80.field1 + -1;
      local_31 = *(int *)local_80.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055d841;
    }
    iVar10 = *(int *)(local_80.field1 + 0xc);
    if (iVar10 != *(int *)(local_80.field1 + 8)) {
      lVar11 = (long)*(int *)(local_80.field1 + 8) * 8 + (long)iVar10 * -8;
      pDVar9 = (Data *)(local_80.field1 + (long)iVar10 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar7 == 0) {
LAB_10055d820:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar9;
            goto LAB_10055d820;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_10055d841:
  pcVar1 = *(char **)(param_1 + 0x10);
  pQVar2 = *(QVariant **)PTR_SetterProp_1021e1558;
  local_a8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("setOSXShortcutData",0x12);
  QVariant::QVariant(&local_a0,&local_a8);
  QObject::setProperty(pcVar1,pQVar2);
  QVariant::~QVariant(&local_a0);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055d8ce;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_10055d8ce:
  pcVar1 = *(char **)(param_1 + 0x10);
  pQVar2 = *(QVariant **)PTR_GetterProp_1021e1548;
  local_c0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("getOSXShortcutData",0x12);
  QVariant::QVariant(&local_b8,&local_c0);
  QObject::setProperty(pcVar1,pQVar2);
  QVariant::~QVariant(&local_b8);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055d95b;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_10055d95b:
  WidgetUtils::Adjuster::adjustWidget(*(QWidget **)(*(long *)(param_1 + 0x18) + 0x20),-1,-1);
  return;
}

