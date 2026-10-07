
int FUN_100646bc0(undefined8 *param_1)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (DAT_1011bcb48 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1011bcb48);
    if (iVar1 != 0) {
      QMutex::QMutex((QMutex *)&DAT_1011bcb40,0);
      ___cxa_atexit(PTR__QMutex_100ba2138,&DAT_1011bcb40,0x100000000);
      ___cxa_guard_release(&DAT_1011bcb48);
    }
  }
  QMutex::lock();
  if (DAT_1011bcb28 == 0) {
    local_24 = 0;
    local_2c = 0;
    FUN_100778270(&local_24,&local_2c,&local_30,&local_28);
    DAT_1011bcb2c._0_4_ = local_28;
    DAT_1011bcb2c._4_4_ = local_30;
    DAT_1011bcb34 = local_2c;
    DAT_1011bcb38 = 0;
    iVar1 = _memcmp(&DAT_1011bcb2c,"GenuineIntel",0xc);
    if (iVar1 == 0) {
      DAT_1011bcb28 = 1;
    }
    else {
      iVar1 = _memcmp(&DAT_1011bcb2c,"AuthenticAMD",0xc);
      if (iVar1 == 0) {
        DAT_1011bcb28 = 2;
      }
      else {
        DAT_1011bcb28 = 0;
      }
    }
  }
  iVar1 = DAT_1011bcb28;
  if (param_1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)param_1 + 0xc) = DAT_1011bcb38;
    *(undefined4 *)(param_1 + 1) = DAT_1011bcb34;
    *param_1 = CONCAT44(DAT_1011bcb2c._4_4_,(undefined4)DAT_1011bcb2c);
  }
  QMutex::unlock();
  return iVar1;
}

