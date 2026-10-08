
void FUN_1005a34c0(QString *param_1)

{
  undefined *puVar1;
  size_t sVar2;
  void *pvVar3;
  int iVar4;
  QArrayData *local_58;
  QVariant local_50;
  undefined1 local_40 [8];
  QArrayData *local_38;
  undefined1 local_29;
  
  puVar1 = PTR_s_SendKeyToVmListStorage_102274498;
  iVar4 = -1;
  if (PTR_s_SendKeyToVmListStorage_102274498 != (undefined *)0x0) {
    sVar2 = _strlen(PTR_s_SendKeyToVmListStorage_102274498);
    iVar4 = (int)sVar2;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar4);
  CMappingModel::startSubmit(param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005a3539;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005a3539:
  if (DAT_102310970 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1006b2390(pvVar3);
    DAT_102274b20 = 1;
    DAT_102310970 = pvVar3;
  }
  pvVar3 = DAT_102310970;
  puVar1 = PTR_s_SendKeyToVmList_1022744d8;
  iVar4 = -1;
  if (PTR_s_SendKeyToVmList_1022744d8 != (undefined *)0x0) {
    sVar2 = _strlen(PTR_s_SendKeyToVmList_1022744d8);
    iVar4 = (int)sVar2;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar4);
  FUN_100036660(&local_50,param_1 + 0xb,&local_58);
  FUN_1005993a0(local_40,&local_50);
  FUN_1006b24a0(pvVar3,local_40);
  FUN_10056e3a0(local_40);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005a3601;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005a3601:
  FUN_100076920(param_1 + 0xb);
  CMappingModel::endSubmit((int)param_1);
  CMappingModel::dataChanged();
  return;
}

