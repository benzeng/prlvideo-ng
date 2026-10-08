
undefined4 FUN_100b70a20(long param_1)

{
  undefined4 uVar1;
  QArrayData *local_20;
  undefined1 local_13;
  undefined1 local_12;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x74,"GetLicenseKey");
  }
  local_20 = *(QArrayData **)(param_1 + 8);
  if (1 < *(int *)local_20 + 1U) {
    LOCK();
    *(int *)local_20 = *(int *)local_20 + 1;
    local_13 = *(int *)local_20 != 0;
    UNLOCK();
  }
  uVar1 = FUN_100b6fd60(param_1,&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar1;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return uVar1;
}

