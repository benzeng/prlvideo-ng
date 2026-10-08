
undefined8 FUN_1003e5550(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  size_t sVar3;
  int iVar4;
  QString local_60;
  QArrayData *local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar2 = PTR_s_VmConfig_1021f1e00;
  pcVar1 = *(code **)(*param_2 + 0x60);
  iVar4 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar4 = (int)sVar3;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar4);
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_3;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_31 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1df2cfc);
  QString::append(&local_60);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003e5607;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003e5607:
  (*pcVar1)(&local_50,param_2,&local_58,&local_60);
  FUN_1003e6af0(param_1,&local_50);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003e565e;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1003e565e:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return param_1;
}

