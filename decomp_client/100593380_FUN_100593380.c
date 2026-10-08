
void FUN_100593380(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  undefined *puVar1;
  long lVar2;
  size_t sVar3;
  QArrayData *pQVar4;
  int iVar5;
  int iVar6;
  QString local_80;
  QVariant local_78;
  undefined1 local_68 [8];
  QArrayData *local_60;
  QString local_58;
  QVariant local_50;
  undefined1 local_40 [15];
  undefined1 local_31;
  
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221b640);
  puVar1 = PTR_s_Profiles_1022744b0;
  if (lVar2 == 0) {
    return;
  }
  iVar6 = -1;
  iVar5 = -1;
  if (PTR_s_Profiles_1022744b0 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_Profiles_1022744b0);
    iVar5 = (int)sVar3;
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar1,iVar5);
  puVar1 = PTR_s_ShortcutsStorage_102274490;
  if (PTR_s_ShortcutsStorage_102274490 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_ShortcutsStorage_102274490);
    iVar6 = (int)sVar3;
  }
  local_60 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
  MappingHelpers::getValueByName((QHash *)&local_50,param_3,&local_58);
  FUN_1005810a0(local_40,&local_50);
  puVar1 = PTR_s_ProfileAssignments_1022744b8;
  iVar5 = -1;
  if (PTR_s_ProfileAssignments_1022744b8 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_ProfileAssignments_1022744b8);
    iVar5 = (int)sVar3;
  }
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar1,iVar5);
  puVar1 = PTR_s_ShortcutsStorage_102274490;
  iVar5 = -1;
  if (PTR_s_ShortcutsStorage_102274490 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_ShortcutsStorage_102274490);
    iVar5 = (int)sVar3;
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
  MappingHelpers::getValueByName((QHash *)&local_78,param_3,&local_80);
  FUN_10024fb10(local_68,&local_78);
  FUN_1005579c0(lVar2,local_40,local_68);
  FUN_1001e3400(local_68);
  QVariant::~QVariant(&local_78);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005934eb;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1005934eb:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059351b;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_10059351b:
  FUN_1000fe670(local_40);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059355d;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10059355d:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return;
}

