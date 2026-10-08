
int FUN_100aeed10(undefined8 *param_1)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (DAT_102313b98 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_102313b98);
    if (iVar1 != 0) {
      QMutex::QMutex((QMutex *)&DAT_102313b90,0);
      ___cxa_atexit(PTR__QMutex_1021e14b0,&DAT_102313b90,0x100000000);
      ___cxa_guard_release(&DAT_102313b98);
    }
  }
  QMutex::lock();
  if (DAT_102313b78 == 0) {
    local_24 = 0;
    local_2c = 0;
    FUN_100dc89e0(&local_24,&local_2c,&local_30,&local_28);
    DAT_102313b7c._0_4_ = local_28;
    DAT_102313b7c._4_4_ = local_30;
    DAT_102313b84 = local_2c;
    DAT_102313b88 = 0;
    iVar1 = _memcmp(&DAT_102313b7c,"GenuineIntel",0xc);
    if (iVar1 == 0) {
      DAT_102313b78 = 1;
    }
    else {
      iVar1 = _memcmp(&DAT_102313b7c,"AuthenticAMD",0xc);
      if (iVar1 == 0) {
        DAT_102313b78 = 2;
      }
      else {
        DAT_102313b78 = 0;
      }
    }
  }
  iVar1 = DAT_102313b78;
  if (param_1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)param_1 + 0xc) = DAT_102313b88;
    *(undefined4 *)(param_1 + 1) = DAT_102313b84;
    *param_1 = CONCAT44(DAT_102313b7c._4_4_,(undefined4)DAT_102313b7c);
  }
  QMutex::unlock();
  return iVar1;
}

