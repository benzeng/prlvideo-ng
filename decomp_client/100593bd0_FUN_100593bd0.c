
void FUN_100593bd0(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  size_t sVar6;
  undefined4 *puVar7;
  QKeySequence *this;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  QArrayData *pQVar11;
  QString local_80;
  QVariant local_78;
  QArrayData *local_68;
  QString local_60;
  QVariant local_58;
  Data *local_48 [2];
  undefined4 local_38;
  undefined1 local_31;
  
  lVar5 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221bae0);
  puVar2 = PTR_s_ShowHideAppShortcut_1022744d0;
  if (lVar5 == 0) {
    return;
  }
  iVar8 = -1;
  if (PTR_s_ShowHideAppShortcut_1022744d0 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_ShowHideAppShortcut_1022744d0);
    iVar8 = (int)sVar6;
  }
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar2,iVar8);
  pQVar11 = (QArrayData *)PTR_shared_null_1021e1288;
  local_68 = (QArrayData *)PTR_shared_null_1021e1288;
  MappingHelpers::getValueByPath((QHash *)&local_58,param_3,&local_60);
  FUN_1005981c0(local_48,&local_58);
  FUN_10055f440(lVar5,local_48);
  if (*(int *)local_48[0] != -1) {
    if (*(int *)local_48[0] != 0) {
      LOCK();
      *(int *)local_48[0] = *(int *)local_48[0] + -1;
      local_31 = *(int *)local_48[0] != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100593cd1;
    }
    iVar8 = *(int *)(local_48[0] + 0xc);
    if (iVar8 != *(int *)(local_48[0] + 8)) {
      lVar10 = (long)*(int *)(local_48[0] + 8) * 8 + (long)iVar8 * -8;
      this = (QKeySequence *)(local_48[0] + (long)iVar8 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(local_48[0]);
    pQVar11 = (QArrayData *)PTR_shared_null_1021e1288;
  }
LAB_100593cd1:
  QVariant::~QVariant(&local_58);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100593d0a;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100593d0a:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100593d3a;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100593d3a:
  puVar2 = PTR_s_GrabHostShortcutsType_1022744c8;
  iVar8 = -1;
  if (PTR_s_GrabHostShortcutsType_1022744c8 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_GrabHostShortcutsType_1022744c8);
    iVar8 = (int)sVar6;
  }
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar2,iVar8);
  MappingHelpers::getValueByPath((QHash *)&local_78,param_3,&local_80);
  if (DAT_1022743d8 == 0) {
    DAT_1022743d8 = FUN_100598070("Shortcuts::GrabHostShortcutsType",0xffffffffffffffff,1);
  }
  uVar1 = DAT_1022743d8;
  uVar4 = QVariant::userType();
  if (uVar1 == uVar4) {
    puVar7 = (undefined4 *)QVariant::constData();
    uVar9 = *puVar7;
  }
  else {
    cVar3 = QVariant::convert((int)&local_78,(void *)(ulong)uVar1);
    uVar9 = 0;
    if (cVar3 != '\0') {
      uVar9 = local_38;
    }
  }
  FUN_10055f410(lVar5,uVar9);
  QVariant::~QVariant(&local_78);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100593e19;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_100593e19:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_80.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
  return;
}

