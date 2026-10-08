
QHash * FUN_100498f90(QHash *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  size_t sVar5;
  QVariant *this;
  int iVar6;
  Data_conflict local_70;
  undefined4 local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  _func_void_Node_ptr *local_50;
  QArrayData *local_48;
  Data *local_40;
  _func_void_Node_ptr *local_38;
  undefined1 local_29;
  
  FUN_10044b130();
  plVar3 = operator_new(0x170);
  uVar4 = FUN_10044b340(param_2);
  uVar4 = FUN_1003b0a90(uVar4);
  FUN_100436120(plVar3,uVar4,0);
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(plVar3,&local_48,PTR_staticMetaObject_1021e1540,&local_40,1);
  FUN_1003bb600(&local_38,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049903a;
    }
    QListData::dispose(local_40);
  }
LAB_10049903a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049906a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10049906a:
  (**(code **)(*plVar3 + 0x20))(plVar3);
  Mappings::unitePaths((QHash *)&local_50,param_1);
  FUN_1003ded90(param_1,&local_50);
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_50 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004990c2;
    }
    QHashData::free_helper(local_50);
  }
LAB_1004990c2:
  puVar2 = PTR_s_VmConfig_1021f1e00;
  iVar6 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar6 = (int)sVar5;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
  uVar4 = FUN_1003ae480(param_1,&local_58);
  puVar2 = PTR_s_Settings_Tools_SharedFolders_Hos_102273e48;
  iVar6 = -1;
  if (PTR_s_Settings_Tools_SharedFolders_Hos_102273e48 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_Settings_Tools_SharedFolders_Hos_102273e48);
    iVar6 = (int)sVar5;
  }
  local_60 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
  this = (QVariant *)FUN_1002edf40(uVar4,&local_60);
  local_68 = 0x80000000;
  local_70.field7 = 0;
  QVariant::operator=(this,(QVariant *)&local_70);
  QVariant::~QVariant((QVariant *)&local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100499187;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100499187:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004991b7;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004991b7:
  if (*(int *)(local_38 + 0x10) != -1) {
    if (*(int *)(local_38 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_38 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QHashData::free_helper(local_38);
  }
  return param_1;
}

