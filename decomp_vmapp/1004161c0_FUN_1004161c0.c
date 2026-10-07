
bool FUN_1004161c0(long param_1,int *param_2,QString *param_3)

{
  QArrayData *pQVar1;
  bool bVar2;
  
  pQVar1 = (QArrayData *)param_3->field0_0x0;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  bVar2 = true;
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    *(int *)(param_1 + 0x9c) = param_2[1];
    bVar2 = false;
  }
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10041622e;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10041622e:
  if (!bVar2) {
    *(short *)(param_1 + 0x604) = (short)param_2[2];
    *(int *)(param_1 + 0x608) = param_2[3];
    QString::operator=((QString *)(param_1 + 0x628),param_3);
  }
  return !bVar2;
}

