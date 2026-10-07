
void FUN_100083890(long param_1)

{
  void *pvVar1;
  uint uVar2;
  size_t sVar3;
  QArrayData *pQVar4;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::getSystemFlags();
  QString::toUtf8();
  pQVar4 = local_40;
  uVar2 = *(uint *)(local_40 + 4);
  pvVar1 = (void *)(param_1 + 0x4a4);
  ___bzero(pvVar1,0x500);
  if ((1 < *(uint *)pQVar4) || (*(long *)(pQVar4 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(pQVar4 + 4) + 1,*(uint *)(pQVar4 + 8) >> 0x1f);
    pQVar4 = local_40;
  }
  sVar3 = 0x4ff;
  if (uVar2 < 0x500) {
    sVar3 = (ulong)uVar2;
  }
  _memcpy(pvVar1,pQVar4 + *(long *)(pQVar4 + 0x10),sVar3);
  FUN_1007da1e0(param_1 + 0xa58,pvVar1,0x500);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100083973;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100083973:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

