
void FUN_1003f59c0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  QArrayData *pQVar5;
  
  QMutex::lock();
  if (*(char *)(param_1 + 0x28) == '\0') goto LAB_1003f5a65;
  plVar1 = (long *)(param_1 + 0x10);
  plVar4 = plVar1;
  do {
    plVar4 = (long *)*plVar4;
    if (plVar4 == plVar1) goto LAB_1003f5a57;
  } while (plVar4[-2] != param_2);
  lVar2 = *plVar4;
  plVar3 = (long *)plVar4[1];
  *(long **)(lVar2 + 8) = plVar3;
  *plVar3 = lVar2;
  *plVar4 = 0x112233;
  plVar4[1] = (long)&DAT_00445566;
  pQVar5 = (QArrayData *)plVar4[-1];
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1003f5a4f;
      pQVar5 = (QArrayData *)plVar4[-1];
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1003f5a4f:
  operator_delete(plVar4 + -2);
LAB_1003f5a57:
  if ((long *)*plVar1 == plVar1) {
    FUN_1003f4c70(param_1);
  }
LAB_1003f5a65:
  QMutex::unlock();
  return;
}

