
bool FUN_100a02590(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  QRegExp local_28 [15];
  undefined1 local_19;
  
  local_38 = (QArrayData *)QString::fromAscii_helper("^.*%1\\s+.*jettisoned.*",0x16);
  QString::arg(&local_30,&local_38,param_1,0,0x20);
  QRegExp::QRegExp(local_28,&local_30,1,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a02612;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100a02612:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a02642;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100a02642:
  iVar1 = QRegExp::indexIn(local_28,param_2,0,0);
  QRegExp::~QRegExp(local_28);
  return iVar1 != -1;
}

