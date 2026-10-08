
undefined8 FUN_100b60380(long param_1)

{
  undefined8 uVar1;
  QDateTime local_18;
  
  if (*(long *)(param_1 + 8) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pPd4Lic || m_pVzLic",
                    "PrlLicense.cpp",0xba,"GetExpirationDate");
      if (*(long *)(param_1 + 8) != 0) goto LAB_100b603e9;
      if (*(long *)(param_1 + 0x10) == 0) {
        return 0x8000000000000000;
      }
    }
    FUN_100b673f0(&local_18);
    QDateTime::setTimeSpec(&local_18,0);
    uVar1 = QDateTime::date();
    QDateTime::~QDateTime(&local_18);
    return uVar1;
  }
LAB_100b603e9:
  uVar1 = FUN_100b7fed0();
  return uVar1;
}

