
void FUN_1007bd4d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  Data *local_58;
  int *local_50;
  long *local_48;
  long *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  QMenu::clear();
  FUN_1007c5b80(&local_50,param_1 + 0x38);
  local_48 = (long *)(local_50 + (long)local_50[2] * 2 + 4);
  local_40 = (long *)(local_50 + (long)local_50[3] * 2 + 4);
  if (local_50[2] != local_50[3]) {
    do {
      local_38 = 1;
      lVar3 = *(long *)*local_48;
      if (((lVar3 != 0) && (*(int *)(lVar3 + 4) != 0)) && (((long *)*local_48)[1] != 0)) {
        QObject::deleteLater();
      }
      local_48 = local_48 + 1;
    } while (local_48 != local_40);
  }
  local_38 = 1;
  if (*local_50 != -1) {
    if (*local_50 != 0) {
      LOCK();
      *local_50 = *local_50 + -1;
      local_29 = *local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007bd582;
    }
    FUN_1007c5ae0(&local_50,local_50);
  }
LAB_1007bd582:
  FUN_1007c56a0(param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 8);
  local_58 = *(Data **)(lVar3 + 0x18);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar2 = (long)*(int *)(local_58 + 8);
      lVar3 = *(long *)(lVar3 + 0x18);
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_58 + lVar2 * 8) &&
         (lVar4 = *(int *)(local_58 + 0xc) - lVar2, lVar4 != 0 && lVar2 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar2 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_78 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_78);
      lVar3 = (long)*(int *)(local_78 + 8);
      if ((local_58 + (long)*(int *)(local_58 + 8) * 8 != local_78 + lVar3 * 8) &&
         (lVar2 = *(int *)(local_78 + 0xc) - lVar3, lVar2 != 0 && lVar3 <= *(int *)(local_78 + 0xc))
         ) {
        _memcpy(local_78 + lVar3 * 8 + 0x10,local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10,
                lVar2 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  puVar1 = PTR_staticMetaObject_1021e14a0;
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
    do {
      local_60 = 1;
      lVar3 = QMetaObject::cast((QObject *)&PTR_PTR_10222d7a0);
      if (((lVar3 != 0) ||
          (lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10222d860), lVar3 != 0)) ||
         (lVar3 = QMetaObject::cast((QObject *)puVar1), lVar3 != 0)) {
        QObject::deleteLater();
      }
      local_70 = local_70 + 8;
    } while (local_70 != local_68);
  }
  local_60 = 1;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007bd717;
    }
    QListData::dispose(local_78);
  }
LAB_1007bd717:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_29 = 0;
    }
    QListData::dispose(local_58);
  }
  return;
}

