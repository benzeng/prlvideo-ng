
void FUN_10055c670(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100bc5eb0;
  if ((undefined8 *)param_1[0x11] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0x11])();
  }
  if ((undefined8 *)param_1[0x12] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0x12])();
  }
  pQVar1 = (QArrayData *)param_1[0x10];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10055c6e6;
      pQVar1 = (QArrayData *)param_1[0x10];
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_10055c6e6:
  pQVar1 = (QArrayData *)param_1[0xf];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10055c716;
      pQVar1 = (QArrayData *)param_1[0xf];
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_10055c716:
  pQVar1 = (QArrayData *)param_1[0xb];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10055c746;
      pQVar1 = (QArrayData *)param_1[0xb];
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_10055c746:
  pQVar1 = (QArrayData *)param_1[10];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10055c776;
      pQVar1 = (QArrayData *)param_1[10];
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_10055c776:
  FUN_1005527e0(param_1);
  return;
}

