
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005a4af0(void)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  _DAT_1011bc6e8 = 0;
  _DAT_1011bc6e0 = 0;
  _DAT_1011bc6d8 = 0;
  _DAT_1011bc6d0 = 0;
  _DAT_1011bc6c8 = 0;
  local_28 = (QArrayData *)QString::fromAscii_helper("^(/dev/disk\\d+)(s)(\\d+)$",0x18);
  QRegExp::QRegExp((QRegExp *)&DAT_1011bc6f0,&local_28,0,0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_1005a4b8a;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005a4b8a:
  ___cxa_atexit(PTR__QRegExp_100ba2148,&DAT_1011bc6f0,0x100000000);
  QMutex::QMutex((QMutex *)&DAT_1011bc6f8,0);
  ___cxa_atexit(PTR__QMutex_100ba2138,&DAT_1011bc6f8,0x100000000);
  return;
}

