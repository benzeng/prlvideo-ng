
undefined8 * FUN_1000a65d0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  uid_t uVar3;
  char *pcVar4;
  long lVar5;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if ((DAT_102311ea0 != '\0') || (iVar2 = ___cxa_guard_acquire(&DAT_102311ea0), iVar2 == 0))
  goto LAB_1000a6741;
  pcVar4 = _getenv("HOME");
  if (pcVar4 == (char *)0x0) {
    uVar3 = _getuid();
    lVar5 = _getpwuid(uVar3);
    if (lVar5 == 0) {
      QDir::homePath();
    }
    else {
      pcVar4 = *(char **)(lVar5 + 0x30);
      if (pcVar4 != (char *)0x0) {
        _strlen(pcVar4);
      }
      QString::fromUtf8_helper((char *)&local_38,(int)pcVar4);
      QString::normalized(&DAT_102311e98,&local_38,1,0);
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_21 = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1000a671b;
        }
        QArrayData::deallocate(local_38,2,8);
      }
    }
  }
  else {
    _strlen(pcVar4);
    QString::fromUtf8_helper((char *)&local_30,(int)pcVar4);
    QString::normalized(&DAT_102311e98,&local_30,1,0);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000a671b;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
LAB_1000a671b:
  ___cxa_atexit(FUN_100054e40,&DAT_102311e98,0x100000000);
  ___cxa_guard_release(&DAT_102311ea0);
LAB_1000a6741:
  piVar1 = DAT_102311e98;
  *param_1 = DAT_102311e98;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

