
undefined8 * FUN_100dca270(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  QArrayData *pQVar3;
  int iVar4;
  int *piVar5;
  QArrayData *local_8c8;
  QArrayData *local_8c0;
  QArrayData *local_8b8;
  undefined1 local_8a9;
  undefined1 local_8a8 [1112];
  undefined1 local_450 [1056];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if ((DAT_102319228 == '\0') && (iVar4 = ___cxa_guard_acquire(&DAT_102319228), iVar4 != 0)) {
    DAT_102319220 = (int *)QString::fromAscii_helper("Undefined",9);
    ___cxa_atexit(FUN_100054e40,&DAT_102319220,0x100000000);
    ___cxa_guard_release(&DAT_102319228);
  }
  ___bzero(local_8a8,0x878);
  QString::toUtf8();
  iVar4 = _statfs_INODE64(local_8b8 + *(long *)(local_8b8 + 0x10),local_8a8);
  if (*(int *)local_8b8 != -1) {
    if (*(int *)local_8b8 != 0) {
      LOCK();
      *(int *)local_8b8 = *(int *)local_8b8 + -1;
      local_8a9 = *(int *)local_8b8 != 0;
      UNLOCK();
      if ((bool)local_8a9) goto LAB_100dca363;
    }
    QArrayData::deallocate(local_8b8,1,8);
  }
LAB_100dca363:
  if (-1 < iVar4) {
    QString::fromUtf8_helper((char *)&local_8c8,(int)local_450);
    QString::normalized(param_1,&local_8c8,1,0);
    if (*(int *)local_8c8 != -1) {
      if (*(int *)local_8c8 != 0) {
        LOCK();
        *(int *)local_8c8 = *(int *)local_8c8 + -1;
        local_8a9 = *(int *)local_8c8 != 0;
        UNLOCK();
        if ((bool)local_8a9) goto LAB_100dca480;
      }
      QArrayData::deallocate(local_8c8,2,8);
    }
    goto LAB_100dca480;
  }
  QString::toUtf8();
  pQVar3 = local_8c0;
  lVar2 = *(long *)(local_8c0 + 0x10);
  piVar5 = ___error();
  FUN_100df99c0("","HostUtils",0,"statfs(%s) at resolving MP failed %u",pQVar3 + lVar2,*piVar5);
  if (*(int *)local_8c0 != -1) {
    if (*(int *)local_8c0 != 0) {
      LOCK();
      *(int *)local_8c0 = *(int *)local_8c0 + -1;
      local_8a9 = *(int *)local_8c0 != 0;
      UNLOCK();
      if ((bool)local_8a9) goto LAB_100dca462;
    }
    QArrayData::deallocate(local_8c0,1,8);
  }
LAB_100dca462:
  piVar5 = DAT_102319220;
  *param_1 = DAT_102319220;
  if (1 < *piVar5 + 1U) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    local_8a9 = *piVar5 != 0;
    UNLOCK();
  }
LAB_100dca480:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

