
void FUN_100083580(undefined8 *param_1)

{
  QArrayData *pQVar1;
  QArrayData *local_20;
  
  pQVar1 = (QArrayData *)*param_1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  QString::toLocal8Bit();
  _printf("%s",local_20 + *(long *)(local_20 + 0x10));
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) goto LAB_1000835f4;
    }
    QArrayData::deallocate(local_20,1,8);
  }
LAB_1000835f4:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100083624;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100083624:
  _fflush(*(FILE **)PTR____stdoutp_100ba2338);
  return;
}

