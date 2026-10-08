
int FUN_10032bf90(long param_1)

{
  QArrayData *pQVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *local_48;
  QArrayData *local_38;
  
  if (2 < DAT_10230ffd0) {
    pQVar1 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",3,"Unsubscribing TIS record %s",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_10032c031;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_10032c031:
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) goto LAB_10032c061;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
  }
LAB_10032c061:
  if (*(long *)(param_1 + 0x20) == 0) {
    return 0;
  }
  iVar3 = _PrlTisEmitter_UnregCallback(*(long *)(param_1 + 0x20),FUN_10032c790,param_1);
  if (-1 < iVar3) goto LAB_10032c14c;
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  QString::toLocal8Bit();
  lVar2 = *(long *)(local_48 + 0x10);
  uVar4 = FUN_100dddcf0(iVar3);
  FUN_100df99c0("","prl_client_app",0,
                "PrlTisEmitter_UnregCallback call error, record [%s], RC = %.8X [%s]",
                local_48 + lVar2,iVar3,uVar4);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_10032c11c;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10032c11c:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10032c14c;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10032c14c:
  if (*(long *)(param_1 + 0x20) != 0) {
    _PrlHandle_Free();
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return iVar3;
}

