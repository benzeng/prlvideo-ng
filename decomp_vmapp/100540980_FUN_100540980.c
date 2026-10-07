
bool FUN_100540980(undefined8 param_1,QString *param_2)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  bool bVar5;
  QArrayData *local_8c0;
  QString local_8b8;
  undefined1 local_8a9;
  undefined1 local_8a8 [72];
  char local_860 [16];
  char local_850 [1024];
  char local_450 [9];
  char local_447 [1047];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  ___bzero(local_8a8,0x878);
  QString::toUtf8();
  iVar2 = _statfs_INODE64(local_8c0 + *(long *)(local_8c0 + 0x10),local_8a8);
  if (*(int *)local_8c0 != -1) {
    if (*(int *)local_8c0 != 0) {
      LOCK();
      *(int *)local_8c0 = *(int *)local_8c0 + -1;
      local_8a9 = *(int *)local_8c0 != 0;
      UNLOCK();
      if ((bool)local_8a9) goto LAB_100540a1b;
    }
    QArrayData::deallocate(local_8c0,1,8);
  }
LAB_100540a1b:
  if (iVar2 != 0) {
    if (DAT_1011b55f8 < 1) {
      bVar5 = false;
    }
    else {
      piVar3 = ___error();
      pcVar4 = _strerror(*piVar3);
      bVar5 = false;
      FUN_1008e3970("","InvSharingHost",1,"statfs() failed: %s",pcVar4);
    }
    goto LAB_100540b38;
  }
  iVar2 = _strcmp(local_860,"smbfs");
  if (iVar2 != 0) {
    bVar5 = false;
    goto LAB_100540b38;
  }
  iVar2 = _strncmp(local_450,"//guest:@",9);
  if (iVar2 != 0) {
    bVar5 = false;
    goto LAB_100540b38;
  }
  pcVar4 = _strchr(local_447,0x3a);
  if (pcVar4 == (char *)0x0) {
    bVar5 = false;
    goto LAB_100540b38;
  }
  _strlen(local_850);
  QString::fromUtf8_helper((char *)&local_8b8,(int)local_850);
  QString::operator=(param_2,&local_8b8);
  if (*(int *)local_8b8.field0_0x0 != -1) {
    if (*(int *)local_8b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_8b8.field0_0x0 = *(int *)local_8b8.field0_0x0 + -1;
      local_8a9 = *(int *)local_8b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_8a9) goto LAB_100540b2a;
    }
    QArrayData::deallocate((QArrayData *)local_8b8.field0_0x0,2,8);
  }
LAB_100540b2a:
  bVar5 = *(int *)(param_2->field0_0x0 + 4) != 0;
LAB_100540b38:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar5;
}

