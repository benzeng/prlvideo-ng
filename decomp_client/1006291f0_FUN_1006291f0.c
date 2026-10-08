
QUrl * FUN_1006291f0(QUrl *param_1,undefined4 param_2,int param_3)

{
  int *local_48;
  QUrlQuery local_40 [8];
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  QUrl::QUrl(param_1);
  if (param_3 == 0) {
    FUN_1006276d0(&local_30);
    QUrl::operator=(param_1,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10062929c;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
  else {
    FUN_1006273e0(&local_38,param_3);
    QUrl::operator=(param_1,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10062929c;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_10062929c:
  QUrlQuery::QUrlQuery(local_40);
  FUN_1006279c0(&local_48,param_2);
  QUrlQuery::setQueryItems((QList *)local_40);
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      local_21 = *local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006292e8;
    }
    FUN_1001c45d0(&local_48,local_48);
  }
LAB_1006292e8:
  QUrl::setQuery((QUrlQuery *)param_1);
  QUrlQuery::~QUrlQuery(local_40);
  return param_1;
}

