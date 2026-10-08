
undefined1 FUN_100a91330(long param_1,long param_2)

{
  int iVar1;
  ushort uVar2;
  QArrayData *pQVar3;
  QArrayData *local_40;
  QArrayData *local_30;
  QArrayData *local_20;
  
  if ((*(int *)(param_1 + 0x68) == 2) || (*(short *)(param_2 + 1) == 3)) {
    uVar2 = *(ushort *)(param_2 + 3);
    if ((ushort)(uVar2 << 8 | uVar2 >> 8) < 0x4001) {
      if (uVar2 != 0) {
        return 1;
      }
      pQVar3 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,"%sSSL data size is 0!",
                    local_40 + *(long *)(local_40 + 0x10));
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) goto LAB_100a9149b;
        }
        QArrayData::deallocate(local_40,1,8);
      }
LAB_100a9149b:
      if (*(int *)pQVar3 == -1) {
        return 0;
      }
      if (*(int *)pQVar3 == 0) goto LAB_100a9156a;
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      iVar1 = *(int *)pQVar3;
      UNLOCK();
    }
    else {
      pQVar3 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,"%sSSL data size is > 16384!",
                    local_30 + *(long *)(local_30 + 0x10));
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          UNLOCK();
          if (*(int *)local_30 != 0) goto LAB_100a913e2;
        }
        QArrayData::deallocate(local_30,1,8);
      }
LAB_100a913e2:
      if (*(int *)pQVar3 == -1) {
        return 0;
      }
      if (*(int *)pQVar3 == 0) goto LAB_100a9156a;
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      iVar1 = *(int *)pQVar3;
      UNLOCK();
    }
  }
  else {
    pQVar3 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","IOCommunication",0,"%sSSL version is wrong!",
                  local_20 + *(long *)(local_20 + 0x10));
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) goto LAB_100a91549;
      }
      QArrayData::deallocate(local_20,1,8);
    }
LAB_100a91549:
    if (*(int *)pQVar3 == -1) {
      return 0;
    }
    if (*(int *)pQVar3 == 0) goto LAB_100a9156a;
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + -1;
    iVar1 = *(int *)pQVar3;
    UNLOCK();
  }
  if (iVar1 != 0) {
    return 0;
  }
LAB_100a9156a:
  QArrayData::deallocate(pQVar3,2,8);
  return 0;
}

