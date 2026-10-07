
bool FUN_100537330(undefined8 param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  QArrayData *local_8c0;
  QArrayData *local_8b8;
  undefined1 local_8a8 [72];
  char local_860 [1040];
  char local_450 [9];
  char local_447 [1047];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  ___bzero(local_8a8,0x878);
  QString::toUtf8();
  iVar3 = _statfs_INODE64(local_8b8 + *(long *)(local_8b8 + 0x10),local_8a8);
  if (*(int *)local_8b8 != -1) {
    if (*(int *)local_8b8 != 0) {
      LOCK();
      *(int *)local_8b8 = *(int *)local_8b8 + -1;
      UNLOCK();
      if (*(int *)local_8b8 != 0) goto LAB_1005373cb;
    }
    QArrayData::deallocate(local_8b8,1,8);
  }
LAB_1005373cb:
  if (iVar3 == 0) {
    iVar3 = _strcmp(local_860,"smbfs");
    if (iVar3 == 0) {
      iVar3 = _strncmp(local_450,"//guest:@",9);
      if (iVar3 == 0) {
        pcVar5 = _strchr(local_447,0x3a);
        bVar6 = pcVar5 != (char *)0x0;
      }
      else {
        bVar6 = false;
      }
    }
    else {
      bVar6 = false;
    }
  }
  else if (DAT_1011b55f8 < 1) {
    bVar6 = false;
  }
  else {
    QString::toUtf8();
    lVar2 = *(long *)(local_8c0 + 0x10);
    piVar4 = ___error();
    pcVar5 = _strerror(*piVar4);
    FUN_1008e3970("","InvSharingHost",1,"statfs() failed for \"%s\": %s",local_8c0 + lVar2,pcVar5);
    if (*(int *)local_8c0 == -1) {
      bVar6 = false;
    }
    else {
      if (*(int *)local_8c0 != 0) {
        LOCK();
        *(int *)local_8c0 = *(int *)local_8c0 + -1;
        UNLOCK();
        if (*(int *)local_8c0 != 0) {
          bVar6 = false;
          goto LAB_1005374c9;
        }
      }
      QArrayData::deallocate(local_8c0,1,8);
      bVar6 = false;
    }
  }
LAB_1005374c9:
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = bVar6;
  }
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar6;
}

