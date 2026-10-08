
void FUN_1009df1b0(undefined8 *param_1)

{
  int iVar1;
  char *pcVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  *param_1 = 0;
  QString::toUtf8();
  iVar1 = *(int *)(local_38 + 4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1009df209;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1009df209:
  *(int *)(param_1 + 1) = iVar1;
  pcVar2 = _malloc((ulong)(iVar1 + 1));
  param_1[2] = pcVar2;
  param_1[4] = 0;
  param_1[3] = 0;
  if (pcVar2 == (char *)0x0) {
    FUN_100df99c0("","PasswordEncryption",0,"(!)Error: failed to allocate buffer");
  }
  else {
    QString::toUtf8();
    if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f)
      ;
    }
    _strcpy(pcVar2,(char *)(local_40 + *(long *)(local_40 + 0x10)));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
  return;
}

