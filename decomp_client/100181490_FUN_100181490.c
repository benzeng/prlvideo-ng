
undefined8 FUN_100181490(QString *param_1)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  int iVar2;
  QArrayData *pQVar3;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  pQVar1 = param_1->field0_0x0;
  iVar2 = QString::compare_helper
                    (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),"...\"",
                     0xffffffff,1);
  if (iVar2 == 0) {
    QString::fromUtf8_helper((char *)&local_30,0x1db6743);
    QString::insert((int)param_1,(QChar *)0x0,(int)*(undefined8 *)(local_30 + 0x10) + (int)local_30)
    ;
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return 0;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_30,2,8);
    }
    return 0;
  }
  pQVar3 = (QArrayData *)QString::fromAscii_helper("...\"",4);
  QString::chop((int)param_1);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_19 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100181519;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100181519:
  QString::fromUtf8_helper((char *)&local_28,0x1dc4439);
  QString::append(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return 1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return 1;
}

