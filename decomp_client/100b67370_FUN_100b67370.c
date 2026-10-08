
QDateTime * FUN_100b67370(QDateTime *param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x156,"GetStartDate");
  }
  QDateTime::QDateTime(param_1,(QDateTime *)(param_2 + 0x58));
  return param_1;
}

