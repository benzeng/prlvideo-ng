
void FUN_100cd9330(long param_1)

{
  char *pcVar1;
  int iVar2;
  uid_t uVar3;
  ssize_t sVar4;
  long lVar5;
  char local_d0;
  char local_cf;
  undefined4 local_ce;
  sockaddr local_a8 [7];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar5;
  iVar2 = _socket(1,1,0);
  *(int *)(param_1 + 0x28) = iVar2;
  if (iVar2 < 0) {
    FUN_100df99c0("","hid",0,"[CHIDThread] Open socket error");
  }
  else {
    local_a8[0].sa_family = '\x01';
    pcVar1 = local_a8[0].sa_data;
    uVar3 = _getuid();
    _snprintf(pcVar1,0x68,"/var/tmp/prl_event_tap.socket_%d",(ulong)uVar3);
    iVar2 = _connect(*(int *)(param_1 + 0x28),local_a8,0x6a);
    if (iVar2 < 0) {
      FUN_100df99c0("","hid",0,"[CHIDThread] Can\'t connect to etap-server <%s> (%d)",pcVar1);
    }
    else {
      FUN_100df99c0("","hid",0,"[CHIDThread] Connection to etap-server <%s> created",pcVar1);
      *(undefined1 *)(param_1 + 0x14) = 1;
      QMutex::lock();
      QWaitCondition::wakeAll();
      QMutex::unlock();
      do {
        sVar4 = _read(*(int *)(param_1 + 0x28),&local_d0,0x26);
        if (sVar4 != 0x26) {
          FUN_100df99c0("","hid",0,"[CHIDThread] Error read etap-socket");
          break;
        }
        if (local_d0 == '\x01') {
          QMutex::lock();
          lVar5 = *(long *)(param_1 + 0x38);
          if ((lVar5 != 0) && (*(char *)(lVar5 + 1) == local_cf)) {
            *(undefined4 *)(lVar5 + 2) = local_ce;
            *(undefined8 *)(param_1 + 0x38) = 0;
            QWaitCondition::wakeAll();
          }
        }
        else {
          QMutex::lock();
          if (*(code **)(param_1 + 0x58) != (code *)0x0) {
            (**(code **)(param_1 + 0x58))(&local_d0,*(undefined8 *)(param_1 + 0x50));
          }
        }
        QMutex::unlock();
      } while (*(char *)(param_1 + 0x15) == '\0');
    }
    _close(*(int *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  *(undefined1 *)(param_1 + 0x14) = 0;
  QMutex::lock();
  QWaitCondition::wakeAll();
  QMutex::unlock();
  if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

