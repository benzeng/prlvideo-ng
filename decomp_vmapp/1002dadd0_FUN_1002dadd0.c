
void FUN_1002dadd0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  QArrayData *local_28;
  
  *param_1 = &PTR_FUN_100bb4300;
  if (DAT_1011c568c < 1) goto LAB_1002daea8;
  pQVar1 = *(QArrayData **)(param_1[1] + 0x20);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  QString::toUtf8();
  FUN_1008e3970("","USB",0,"[HUB] Destroyed <%s>",local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_1002dae78;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_1002dae78:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1002daea8;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1002daea8:
  FUN_1002dc020(param_1);
  return;
}

