
char * FUN_100591e50(char *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  QVariant local_40;
  Data *local_30;
  undefined1 local_21;
  
  lVar2 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12f8);
  if (lVar2 == 0) {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = -0x80;
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    return param_1;
  }
  QObject::property((char *)&local_40);
  FUN_100597390(&local_30,&local_40);
  QVariant::~QVariant(&local_40);
  local_60 = local_30;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 == 0) {
      QListData::detach((int)&local_60);
      lVar2 = (long)*(int *)(local_60 + 8);
      if ((local_30 + (long)*(int *)(local_30 + 8) * 8 != local_60 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_60 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar2 * 8 + 0x10,local_30 + (long)*(int *)(local_30 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  iVar4 = 6;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      if ((*(long *)local_58 != 0) && (cVar1 = QAbstractButton::isChecked(), cVar1 != '\0')) {
        iVar4 = 1;
        QObject::property(param_1);
        break;
      }
      local_58 = local_58 + 8;
      local_48 = 1;
    } while (local_58 != local_50);
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100591fbd;
    }
    QListData::dispose(local_60);
  }
LAB_100591fbd:
  if (iVar4 == 6) {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = -0x80;
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QListData::dispose(local_30);
  }
  return param_1;
}

