
void FUN_1003e13e0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  size_t sVar4;
  undefined8 uVar5;
  QVariant *this;
  int iVar6;
  undefined1 local_49;
  QVariant local_48;
  QArrayData *local_38;
  QArrayData *local_30;
  _func_void_Node_ptr *local_28;
  undefined1 local_19;
  
  lVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  puVar2 = PTR_s_VmConfig_1021f1e00;
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  local_28 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  iVar6 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar6 = (int)sVar4;
  }
  local_30 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
  uVar5 = FUN_1003ae480(&local_28,&local_30);
  local_38 = (QArrayData *)QString::fromAscii_helper("Settings.VmEncryptionInfo.Enabled",0x21);
  this = (QVariant *)FUN_1002edf40(uVar5,&local_38);
  uVar5 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  FUN_10018c2b0(uVar5);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmEncryption();
  local_49 = CVmEncryption::isEnabled();
  QVariant::QVariant(&local_48,1,&local_49,0);
  QVariant::operator=(this,&local_48);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003e14ef;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1003e14ef:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003e151f;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003e151f:
  (**(code **)(**(long **)(param_1 + 0x10) + 0x78))(*(long **)(param_1 + 0x10),&local_28);
  if (*(int *)(local_28 + 0x10) != -1) {
    if (*(int *)(local_28 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_28 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_19 = 0;
    }
    QHashData::free_helper(local_28);
  }
  return;
}

