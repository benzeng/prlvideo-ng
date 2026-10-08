
undefined1 FUN_100daf690(undefined8 param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  long lVar4;
  undefined1 uVar5;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  undefined1 local_c0 [151];
  undefined1 local_29;
  
  QString::toUtf8();
  iVar1 = _stat_INODE64(local_c8 + *(long *)(local_c8 + 0x10),local_c0);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100daf709;
    }
    QArrayData::deallocate(local_c8,1,8);
  }
LAB_100daf709:
  if (iVar1 != 0) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    FUN_100df99c0("","CAuth",0,"stat64() return error: %s",pcVar3);
    return 0;
  }
  QString::toUtf8();
  lVar4 = _getpwnam(local_d0 + *(long *)(local_d0 + 0x10));
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_29 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100daf7ab;
    }
    QArrayData::deallocate(local_d0,1,8);
  }
LAB_100daf7ab:
  if (lVar4 == 0) {
    piVar2 = ___error();
    iVar1 = *piVar2;
    QString::toUtf8();
    FUN_100df99c0("","CAuth",0,"An error %d occured on extracting info for user \'%s\'",iVar1,
                  local_d8 + *(long *)(local_d8 + 0x10));
    if (*(int *)local_d8 == -1) {
      uVar5 = 0;
    }
    else {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        UNLOCK();
        if (*(int *)local_d8 != 0) {
          return 0;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_d8,1,8);
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 1;
    if (*(int *)(lVar4 + 0x10) != 0) {
      if ((int)local_c0._16_8_ == *(int *)(lVar4 + 0x10)) {
        QString::toLatin1();
        _chmod((char *)(local_e0 + *(long *)(local_e0 + 0x10)),
               (ushort)((param_2 & 8) << 3) |
               (ushort)((param_2 & 4) << 5) | (ushort)((param_2 & 2) << 7));
        if (*(int *)local_e0 == -1) {
          return 1;
        }
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          UNLOCK();
          if (*(int *)local_e0 != 0) {
            return 1;
          }
          local_29 = 0;
        }
      }
      else {
        if (SUB84(local_c0._16_8_,4) != *(int *)(lVar4 + 0x14)) {
          return 0;
        }
        QString::toLatin1();
        _chmod((char *)(local_e8 + *(long *)(local_e8 + 0x10)),
               (ushort)param_2 & 8 | (ushort)((param_2 & 2) << 4) | (ushort)param_2 * 4 & 0x10);
        if (*(int *)local_e8 == -1) {
          return 1;
        }
        local_e0 = local_e8;
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          UNLOCK();
          if (*(int *)local_e8 != 0) {
            return 1;
          }
          local_29 = 0;
        }
      }
      QArrayData::deallocate(local_e0,1,8);
    }
  }
  return uVar5;
}

