
QString * FUN_100d39100(QString *param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = (QArrayData *)QString::fromAscii_helper("SavedStateItem",0xe);
  QDomDocument::createElement(param_1);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return param_1;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return param_1;
}

