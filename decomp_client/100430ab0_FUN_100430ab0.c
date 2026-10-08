
QString * FUN_100430ab0(QString *param_1,undefined8 *param_2,undefined8 param_3)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  char cVar2;
  long lVar3;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar1 = (QTypedArrayData<unsigned_short> *)*param_2;
  param_1->field0_0x0 = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  do {
    local_40 = (QArrayData *)QString::fromAscii_helper(".",1);
    cVar2 = QString::endsWith(param_1,&local_40,1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100430b43;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100430b43:
    if (cVar2 == '\0') break;
    QString::chop((int)param_1);
  } while( true );
  lVar3 = 2;
  do {
    cVar2 = FUN_1004308e0(param_1,param_3);
    if (cVar2 == '\0') {
      return param_1;
    }
    local_58 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
    QString::arg(&local_50,&local_58,param_2,0,0x20);
    QString::arg(&local_48,&local_50,lVar3,0,10,0x20);
    QString::operator=(param_1,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100430c07;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_100430c07:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100430c37;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100430c37:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100430c67;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100430c67:
    lVar3 = lVar3 + 2;
    if (999 < lVar3) {
      return param_1;
    }
  } while( true );
}

