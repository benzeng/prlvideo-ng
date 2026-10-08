
void FUN_10057a8c0(QObject *param_1,undefined8 param_2,long *param_3,QObject *param_4)

{
  QObject *pQVar1;
  QObject *pQVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  undefined *puVar7;
  void *pvVar8;
  size_t sVar9;
  int iVar10;
  undefined1 auVar11 [16];
  QArrayData *local_98;
  QArrayData *local_90;
  QVariant local_88;
  int *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QVariant local_60;
  long local_50;
  long local_48;
  int *local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_1021f3a50;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  pvVar8 = operator_new(0x80);
  *(void **)(param_1 + 0x18) = pvVar8;
  *(long **)(param_1 + 0x20) = param_3;
  auVar11._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar11._0_8_ = PTR_shared_null_1021e15e8;
  auVar11._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x28) = auVar11;
  puVar7 = PTR_s_ShortcutsStorage_102274490;
  pcVar3 = *(code **)(*param_3 + 0x60);
  iVar10 = -1;
  if (PTR_s_ShortcutsStorage_102274490 != (undefined *)0x0) {
    sVar9 = _strlen(PTR_s_ShortcutsStorage_102274490);
    iVar10 = (int)sVar9;
  }
  pQVar1 = param_1 + 0x28;
  pQVar2 = param_1 + 0x30;
  local_68 = (QArrayData *)QString::fromAscii_helper(puVar7,iVar10);
  puVar7 = PTR_s_Profiles_1022744b0;
  iVar10 = -1;
  if (PTR_s_Profiles_1022744b0 != (undefined *)0x0) {
    sVar9 = _strlen(PTR_s_Profiles_1022744b0);
    iVar10 = (int)sVar9;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper(puVar7,iVar10);
  (*pcVar3)(&local_60,param_3,&local_68,&local_70);
  FUN_1005810a0(&local_50,&local_60);
  if (*(long *)pQVar1 != local_50) {
    FUN_10055a620(&local_48,&local_50);
    lVar4 = *(long *)pQVar1;
    *(long *)pQVar1 = local_48;
    local_48 = lVar4;
    FUN_1000fe670(&local_48);
  }
  FUN_1000fe670(&local_50);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057aa26;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10057aa26:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057aa56;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10057aa56:
  puVar7 = PTR_s_ShortcutsStorage_102274490;
  plVar5 = *(long **)(param_1 + 0x20);
  pcVar3 = *(code **)(*plVar5 + 0x60);
  iVar10 = -1;
  if (PTR_s_ShortcutsStorage_102274490 != (undefined *)0x0) {
    sVar9 = _strlen(PTR_s_ShortcutsStorage_102274490);
    iVar10 = (int)sVar9;
  }
  local_90 = (QArrayData *)QString::fromAscii_helper(puVar7,iVar10);
  puVar7 = PTR_s_ProfileAssignments_1022744b8;
  iVar10 = -1;
  if (PTR_s_ProfileAssignments_1022744b8 != (undefined *)0x0) {
    sVar9 = _strlen(PTR_s_ProfileAssignments_1022744b8);
    iVar10 = (int)sVar9;
  }
  local_98 = (QArrayData *)QString::fromAscii_helper(puVar7,iVar10);
  (*pcVar3)(&local_88,plVar5,&local_90,&local_98);
  FUN_10024fb10(&local_78,&local_88);
  if (*(int **)pQVar2 != local_78) {
    FUN_1002101d0(&local_40,&local_78);
    piVar6 = *(int **)pQVar2;
    *(int **)pQVar2 = local_40;
    local_40 = piVar6;
    if (*piVar6 != -1) {
      if (*piVar6 != 0) {
        LOCK();
        *piVar6 = *piVar6 + -1;
        local_31 = *piVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10057ab34;
      }
      FUN_1001c45d0(&local_40,piVar6);
    }
  }
LAB_10057ab34:
  if (*local_78 != -1) {
    if (*local_78 != 0) {
      LOCK();
      *local_78 = *local_78 + -1;
      local_31 = *local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057ab5e;
    }
    FUN_1001c45d0(&local_78,local_78);
  }
LAB_10057ab5e:
  QVariant::~QVariant(&local_88);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057ab9d;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10057ab9d:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      UNLOCK();
      if (*(int *)local_90 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_90,2,8);
  }
  return;
}

