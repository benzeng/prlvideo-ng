
bool FUN_100b7f950(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x226,"IsDateExpired");
  }
  bVar1 = false;
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar2 = QDate::currentDate();
    bVar1 = *(long *)(param_1 + 0x60) < lVar2;
  }
  return bVar1;
}

