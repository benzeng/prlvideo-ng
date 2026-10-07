
undefined1 FUN_1006ef5a0(undefined8 param_1,QString *param_2,QString *param_3)

{
  long lVar1;
  char *pcVar2;
  QArrayData *pQVar3;
  int iVar4;
  QString *pQVar5;
  undefined8 *puVar6;
  int *piVar7;
  QArrayData *local_f0;
  QString local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  undefined1 local_c8 [16];
  int local_b8;
  QString local_38;
  undefined1 local_29;
  
  QString::fromUtf8_helper((char *)&local_38,0xa320a0);
  pQVar5 = (QString *)QString::operator=(param_3,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ef60e;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1006ef60e:
  QString::operator=(param_2,pQVar5);
  QString::toUtf8();
  iVar4 = _stat_INODE64(local_d0 + *(long *)(local_d0 + 0x10),local_c8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_29 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ef677;
    }
    QArrayData::deallocate(local_d0,1,8);
  }
LAB_1006ef677:
  if (iVar4 == -1) {
    QString::toUtf8();
    pQVar3 = local_d8;
    lVar1 = *(long *)(local_d8 + 0x10);
    piVar7 = ___error();
    FUN_1008e3970("","cmn_utils",0,"stat() system call for file \'%s\' finished with %d error code",
                  pQVar3 + lVar1,*piVar7);
    if (*(int *)local_d8 == -1) {
      return 0;
    }
    local_e0 = local_d8;
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      UNLOCK();
      if (*(int *)local_d8 != 0) {
        return 0;
      }
      local_29 = 0;
    }
LAB_1006ef86e:
    QArrayData::deallocate(local_e0,1,8);
    return 0;
  }
  puVar6 = (undefined8 *)_getpwuid(local_b8);
  if (puVar6 == (undefined8 *)0x0) {
    QString::toUtf8();
    pQVar3 = local_e0;
    lVar1 = *(long *)(local_e0 + 0x10);
    piVar7 = ___error();
    FUN_1008e3970("","cmn_utils",0,"An error occured on file \'%s\' owner retrieving: %d",
                  pQVar3 + lVar1,*piVar7);
    if (*(int *)local_e0 == -1) {
      return 0;
    }
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      UNLOCK();
      if (*(int *)local_e0 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    goto LAB_1006ef86e;
  }
  if (local_b8 == 99) {
    return 0;
  }
  pcVar2 = (char *)*puVar6;
  if (pcVar2 != (char *)0x0) {
    _strlen(pcVar2);
  }
  QString::fromUtf8_helper((char *)&local_f0,(int)pcVar2);
  QString::normalized(&local_e8,&local_f0,1,0);
  QString::operator=(param_2,&local_e8);
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_29 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ef7e9;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_1006ef7e9:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_29 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ef81f;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1006ef81f:
  QString::operator=(param_3,(QString *)&DAT_1011ccb00);
  return 1;
}

