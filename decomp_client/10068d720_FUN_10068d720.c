
void FUN_10068d720(QObject *param_1,undefined8 param_2)

{
  QObject *pQVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  QObject *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  int local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  local_40 = param_2;
  FUN_10068f820(&local_68,param_1 + 0x10,&local_40);
  local_60 = local_68;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
      QListData::detach((int)&local_60);
      lVar4 = (long)*(int *)(local_60 + 8);
      if ((local_68 + (long)*(int *)(local_68 + 8) * 8 != local_60 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_60 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar4 * 8 + 0x10,local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10,
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
LAB_10068d7f5:
      QListData::dispose(local_68);
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10068d7f5;
    }
    if (local_48 == 0) goto LAB_10068d8cd;
  }
  if (local_58 != local_50) {
    do {
      pQVar1 = *(QObject **)local_58;
      local_70 = pQVar1;
      FUN_10068f480(param_1 + 0x18,&local_70);
      FUN_10068f900(param_1 + 0x20,&local_70);
      iVar3 = FUN_10068fad0(param_1 + 0x10,&local_40,&local_70);
      if ((0 < iVar3) &&
         (cVar2 = QObject::disconnect(pQVar1,"2destroyed(QObject*)",param_1,
                                      "1onCloneDestroyed(QObject*)"), cVar2 == '\0')) {
        FUN_100df99c0("[ACTION_HELPERS]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "bDisconnect","ActionManager/ActionHelpers.cpp",0x70,"onOriginalDestroyed");
      }
      local_58 = local_58 + 8;
      local_48 = 1;
    } while (local_58 != local_50);
  }
LAB_10068d8cd:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_60);
  }
  return;
}

