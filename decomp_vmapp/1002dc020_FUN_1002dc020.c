
void FUN_1002dc020(undefined8 *param_1)

{
  QMapNodeBase *pQVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_100bb43e0;
  if (param_1[5] != 0) {
    if (*(long *)(param_1[5] + 0x10) == 0) {
LAB_1002dc05c:
      if ((void *)param_1[3] != (void *)0x0) {
        operator_delete__((void *)param_1[3]);
      }
    }
    else if (param_1[3] != 0) {
      FUN_1002dcf80(param_1,0);
      goto LAB_1002dc05c;
    }
    if (*(char *)((long)param_1 + 0x39) != '\0') {
      puVar2 = (undefined8 *)param_1[5];
      if ((void *)*puVar2 != (void *)0x0) {
        _free((void *)*puVar2);
        puVar2 = (undefined8 *)param_1[5];
      }
      if ((void *)puVar2[2] != (void *)0x0) {
        _free((void *)puVar2[2]);
        puVar2 = (undefined8 *)param_1[5];
      }
      if ((void *)puVar2[4] != (void *)0x0) {
        _free((void *)puVar2[4]);
        puVar2 = (undefined8 *)param_1[5];
      }
      if ((void *)puVar2[6] != (void *)0x0) {
        _free((void *)puVar2[6]);
        puVar2 = (undefined8 *)param_1[5];
      }
      _free(puVar2);
    }
  }
  pQVar1 = (QMapNodeBase *)param_1[6];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1002dc115;
      pQVar1 = (QMapNodeBase *)param_1[6];
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_1002e5460();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_1002dc115:
  QReadWriteLock::~QReadWriteLock((QReadWriteLock *)(param_1 + 4));
  return;
}

