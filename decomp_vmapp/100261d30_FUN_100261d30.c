
undefined8 FUN_100261d30(long param_1)

{
  int iVar1;
  QArrayData *local_20;
  
  iVar1 = *(int *)(DAT_1011c3698 + 0x1948);
  *(undefined1 *)(param_1 + 0x151) = 0;
  if (*(int *)(param_1 + 0x148) != -1) {
    if (((iVar1 == 2) && (*(int *)(param_1 + 0x140) != 0)) &&
       (iVar1 = _dup(*(int *)(param_1 + 0x148)), -1 < iVar1)) {
      FUN_100407c70(param_1 + 0x18,iVar1);
    }
    _close(*(int *)(param_1 + 0x148));
    *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x14c) != -1) {
    _close(*(int *)(param_1 + 0x14c));
    *(undefined4 *)(param_1 + 0x14c) = 0xffffffff;
  }
  if ((*(int *)(param_1 + 0x140) != 0) && (*(char *)(param_1 + 0x150) != '\0')) {
    QString::toUtf8();
    _unlink((char *)(local_20 + *(long *)(local_20 + 0x10)));
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) goto LAB_100261e18;
      }
      QArrayData::deallocate(local_20,1,8);
    }
  }
LAB_100261e18:
  QThread::wait(param_1 + 8);
  _close(*(int *)(param_1 + 0x148));
  *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
  return 0;
}

