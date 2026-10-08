
undefined8 FUN_1005cf0b0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  size_t sVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  CAppliance::getApplianceName();
  puVar1 = PTR_s_Chrome_102275018;
  iVar2 = -1;
  if (PTR_s_Chrome_102275018 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_Chrome_102275018);
    iVar2 = (int)sVar3;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar2);
  iVar2 = QString::indexOf(&local_30,&local_38,0,1);
  if (iVar2 == -1) {
    CAppliance::getApplianceName();
  }
  else {
    EnumUtils::OsTypeToString((uint)param_1);
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005cf15a;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005cf15a:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

