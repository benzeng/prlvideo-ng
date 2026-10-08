
QPixmap * FUN_10008c2a0(QPixmap *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_3 == 1) {
    pcVar2 = ":/%1_compact.png";
    iVar1 = 0x10;
  }
  else {
    pcVar2 = ":/%1.png";
    iVar1 = 8;
  }
  local_28 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar1);
  QString::arg(&local_30,&local_28,param_2,0,0x20);
  QPixmap::QPixmap(param_1,&local_30,0,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10008c331;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10008c331:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

