
void FUN_10073a190(QRegExp *param_1,QString *param_2)

{
  char cVar1;
  QRegExp local_40 [8];
  QRegExp local_38 [8];
  QString local_30;
  undefined1 local_21;
  
  QSortFilterProxyModel::filterRegExp();
  QRegExp::pattern();
  QRegExp::~QRegExp(local_38);
  cVar1 = operator==(&local_30,param_2);
  if (cVar1 == '\0') {
    QRegExp::QRegExp(local_40,param_2,0,1);
    QSortFilterProxyModel::setFilterRegExp(param_1);
    QRegExp::~QRegExp(local_40);
    FUN_100857fb0(param_1,param_2);
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

