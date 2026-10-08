
undefined4 FUN_100b67970(long param_1)

{
  size_t sVar1;
  QArrayData *pQVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined4 local_20;
  undefined1 local_19;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x193,"GetArchToNumber");
  }
  local_20 = 0;
  QString::toLatin1();
  if ((1 < *(uint *)local_28) || (*(long *)(local_28 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_28,*(uint *)(local_28 + 4) + 1,*(uint *)(local_28 + 8) >> 0x1f);
  }
  pQVar2 = local_28 + *(long *)(local_28 + 0x10);
  QString::toLatin1();
  if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f);
  }
  sVar1 = _strlen((char *)(local_30 + *(long *)(local_30 + 0x10)));
  FUN_100b9f400(&local_20,pQVar2,sVar1 & 0xffffffff);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100b67a88;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100b67a88:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return local_20;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return local_20;
}

