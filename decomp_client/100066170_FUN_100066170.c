
void FUN_100066170(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  QEvent local_38 [18];
  ushort local_26;
  undefined1 local_19;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"Input source changed");
  }
  QEvent::QEvent(local_38,0xa9);
  QApplication::topLevelWidgets();
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar2 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_58 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar2 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 == -1) {
LAB_100066272:
    puVar1 = PTR_self_1021e1388;
    if (local_50 != local_48) {
      do {
        local_26 = local_26 & 0xfffd;
        if (*(QObject **)puVar1 != (QObject *)0x0) {
          QCoreApplication::notifyInternal(*(QObject **)puVar1,*(QEvent **)local_50);
        }
        local_50 = local_50 + 8;
        local_40 = 1;
      } while (local_50 != local_48);
    }
  }
  else {
    if (*(int *)local_60 == 0) {
LAB_100066267:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_19) goto LAB_100066267;
    }
    if (local_40 != 0) goto LAB_100066272;
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000662e7;
    }
    QListData::dispose(local_58);
  }
LAB_1000662e7:
  QEvent::~QEvent(local_38);
  return;
}

