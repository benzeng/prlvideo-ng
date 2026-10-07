
undefined1 FUN_1004ec3e0(ulong param_1)

{
  ssize_t sVar1;
  int *piVar2;
  undefined1 uVar3;
  QArrayData *local_30;
  undefined1 local_22;
  
  QMutex::lock();
  uVar3 = 1;
  if (*(char *)(param_1 + 0x18) != '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
    sVar1 = _write(*(int *)(param_1 + 0x14),"",1);
    if (sVar1 < 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      piVar2 = ___error();
      uVar3 = 0;
      FUN_1008e3970("SmartMount","SharedFoldersHost",0,
                    "failed to stop watching thread (couldn\'t write to the pipe, err = %d)",*piVar2
                   );
    }
    else {
      QThread::wait(param_1);
      _close(*(int *)(param_1 + 0x10));
      _close(*(int *)(param_1 + 0x14));
      local_30 = (QArrayData *)QString::fromAscii_helper("",0);
      FUN_1004ec530(param_1,&local_30);
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          local_22 = *(int *)local_30 != 0;
          UNLOCK();
          if ((bool)local_22) goto LAB_1004ec4c2;
        }
        QArrayData::deallocate(local_30,2,8);
      }
    }
  }
LAB_1004ec4c2:
  QMutex::unlock();
  return uVar3;
}

