
void FUN_100aa7ef0(long param_1)

{
  long *plVar1;
  QArrayData *pQVar2;
  long *plVar3;
  long lVar4;
  QArrayData *local_30;
  
  QMutex::lock();
  if (*(char *)(param_1 + 0x129) == '\0') {
    *(undefined1 *)(param_1 + 0x128) = 0;
    plVar3 = *(long **)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = 0;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    QWaitCondition::wakeOne();
    goto LAB_100aa800f;
  }
  pQVar2 = *(QArrayData **)(param_1 + 0x10);
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","IOCommunication",0,
                "%sCan\'t continue writing from detaching state! Writing thread can be only stopped!"
                ,local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100aa7f98;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100aa7f98:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100aa800f;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100aa800f:
  QMutex::unlock();
  return;
}

