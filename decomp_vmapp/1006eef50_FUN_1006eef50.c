
undefined8 * FUN_1006eef50(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QString::toUtf8();
  lVar2 = _getpwnam(local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006eefac;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_1006eefac:
  if (lVar2 == 0) {
    QString::toUtf8();
    if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f)
      ;
    }
    FUN_1008e3970("","cmn_utils",0,"can\'t get info for user [%s]",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006ef0af;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
  else {
    pcVar1 = *(char **)(lVar2 + 0x30);
    if (pcVar1 != (char *)0x0) {
      _strlen(pcVar1);
      QString::fromUtf8_helper((char *)&local_40,(int)pcVar1);
      QString::normalized(param_1,&local_40,1,0);
      if (*(int *)local_40 == -1) {
        return param_1;
      }
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return param_1;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_40,2,8);
      return param_1;
    }
  }
LAB_1006ef0af:
  uVar3 = QString::fromAscii_helper("",0);
  *param_1 = uVar3;
  return param_1;
}

