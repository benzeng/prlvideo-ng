
long * FUN_100a0c5e0(long *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  long lVar5;
  ulong *puVar6;
  undefined4 local_5c;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined1 local_48 [12];
  undefined1 local_31;
  
  if ((DAT_1023137e0 == '\0') && (iVar1 = ___cxa_guard_acquire(&DAT_1023137e0), iVar1 != 0)) {
    DAT_1023137d8 = (int *)PTR_shared_null_1021e12f0;
    ___cxa_atexit(FUN_100a0c8f0,&DAT_1023137d8,0x100000000);
    ___cxa_guard_release(&DAT_1023137e0);
  }
  if (DAT_1023137d8[1] == 0) {
    QMetaObject::indexOfEnumerator("");
    local_48 = QMetaObject::enumerator(0x2236e18);
    iVar1 = QMetaEnum::keyCount();
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        pcVar3 = (char *)QMetaEnum::key((int)local_48);
        iVar2 = -1;
        if (pcVar3 != (char *)0x0) {
          sVar4 = _strlen(pcVar3);
          iVar2 = (int)sVar4;
        }
        local_50 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar2);
        local_58 = (QArrayData *)QString::fromAscii_helper("OperationId",0xb);
        QString::remove(&local_50,&local_58,1);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a0c724;
          }
          QArrayData::deallocate(local_58,2,8);
        }
LAB_100a0c724:
        local_5c = QMetaEnum::value((int)local_48);
        FUN_1000be560(&DAT_1023137d8,&local_50,&local_5c);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a0c773;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_100a0c773:
        iVar1 = iVar1 + 1;
        iVar2 = QMetaEnum::keyCount();
      } while (iVar1 < iVar2);
    }
  }
  if (*DAT_1023137d8 == 0) {
    lVar5 = QMapDataBase::createData();
    *param_1 = lVar5;
    if (*(long *)(DAT_1023137d8 + 4) != 0) {
      puVar6 = (ulong *)FUN_1000be6f0(*(long *)(DAT_1023137d8 + 4),lVar5);
      *(ulong **)(lVar5 + 0x10) = puVar6;
      *puVar6 = *puVar6 & 3 | lVar5 + 8U;
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*DAT_1023137d8 == -1) {
    *param_1 = (long)DAT_1023137d8;
  }
  else {
    LOCK();
    *DAT_1023137d8 = *DAT_1023137d8 + 1;
    UNLOCK();
    *param_1 = (long)DAT_1023137d8;
  }
  return param_1;
}

