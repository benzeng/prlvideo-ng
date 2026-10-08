
void FUN_100ac0850(long param_1,QString *param_2)

{
  QArrayData *pQVar1;
  long lVar2;
  QArrayData *local_40;
  QArrayData *local_30;
  
  QString::operator=((QString *)(param_1 + 0x48),param_2);
  if (*(char *)(param_1 + 0x38) == '\0') {
    return;
  }
  pQVar1 = (QArrayData *)param_2->field0_0x0;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  QString::toUtf8();
  lVar2 = _CFStringCreateWithCString(0,local_30 + *(long *)(local_30 + 0x10),0x8000100);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100ac08e2;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100ac08e2:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100ac0912;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100ac0912:
  if (lVar2 == 0) {
    if (0 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("","ShellIntClient",1,"failed to set the tooltip: \"%s\"",
                    local_40 + *(long *)(local_40 + 0x10));
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) {
            return;
          }
        }
        QArrayData::deallocate(local_40,1,8);
      }
    }
  }
  else {
    FUN_100abaf30(param_1 + 0x10,lVar2);
    _CFRelease(lVar2);
  }
  return;
}

