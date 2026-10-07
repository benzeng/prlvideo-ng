
undefined1 FUN_10079e1e0(long param_1,undefined4 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  QArrayData *pQVar4;
  char cVar5;
  undefined1 uVar6;
  QArrayData *local_38;
  
  if (*(int *)(param_1 + 0x68) != 1) {
    return 0;
  }
  QMutex::lock();
  cVar5 = FUN_1007cd1d0(param_1 + 400);
  if (cVar5 != '\0') {
    *(undefined1 *)(param_1 + 0x310) = 1;
    *(undefined4 *)(param_1 + 0x314) = param_2;
    lVar2 = *param_3;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    plVar3 = *(long **)(param_1 + 0x318);
    *(long *)(param_1 + 0x318) = lVar2;
    uVar6 = 1;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    goto LAB_10079e334;
  }
  pQVar4 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","IOCommunication",0,"%sSending detach request and pausing are failed.",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_10079e2fa;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10079e2fa:
  if (*(int *)pQVar4 == -1) {
    uVar6 = 0;
  }
  else {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) {
        uVar6 = 0;
        goto LAB_10079e334;
      }
    }
    QArrayData::deallocate(pQVar4,2,8);
    uVar6 = 0;
  }
LAB_10079e334:
  QMutex::unlock();
  return uVar6;
}

