
void FUN_100261f00(long param_1)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  sockaddr local_a8 [7];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  *(undefined1 *)(param_1 + 0x151) = 1;
  cVar1 = *(char *)(param_1 + 0x151);
  while (cVar1 != '\0') {
    if (*(int *)(param_1 + 0x144) != 0) {
      FUN_1002621e0(param_1);
    }
    *(undefined4 *)(param_1 + 0x144) = 0;
    if (-1 < *(int *)(param_1 + 0x148)) {
      _close(*(int *)(param_1 + 0x148));
      *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
    }
    if (*(char *)(param_1 + 0x151) == '\0') break;
    QThread::msleep(500);
    iVar2 = _socket(1,1,0);
    *(int *)(param_1 + 0x148) = iVar2;
    if (*(int *)(param_1 + 0x148) < 0) {
      QThread::usleep(10);
    }
    else {
      local_a8[0].sa_family = '\x01';
      QString::toUtf8();
      sVar3 = _strlen((char *)(local_b8 + *(long *)(local_b8 + 0x10)));
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          UNLOCK();
          if (*(int *)local_b8 != 0) goto LAB_100262026;
        }
        QArrayData::deallocate(local_b8,1,8);
      }
LAB_100262026:
      if (sVar3 < 0x68) {
        QString::toUtf8();
        _strcpy(local_a8[0].sa_data,(char *)(local_c8 + *(long *)(local_c8 + 0x10)));
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            UNLOCK();
            if (*(int *)local_c8 != 0) goto LAB_100262132;
          }
          QArrayData::deallocate(local_c8,1,8);
        }
LAB_100262132:
        iVar2 = _connect(*(int *)(param_1 + 0x148),local_a8,0x6a);
        *(uint *)(param_1 + 0x144) = (uint)(iVar2 == 0);
      }
      else {
        QString::toUtf8();
        FUN_1008e3970("","LocalDevices",0,"Too long socket path %s",
                      local_c0 + *(long *)(local_c0 + 0x10));
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            UNLOCK();
            if (*(int *)local_c0 != 0) goto LAB_1002620a4;
          }
          QArrayData::deallocate(local_c0,1,8);
        }
LAB_1002620a4:
        _close(*(int *)(param_1 + 0x148));
        *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
      }
    }
    cVar1 = *(char *)(param_1 + 0x151);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

