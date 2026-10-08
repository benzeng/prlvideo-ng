
undefined8 FUN_10028f1c0(long param_1)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long local_48;
  int *local_40;
  int *local_38;
  undefined1 local_29;
  
  iVar4 = FUN_1001b19b0();
  uVar7 = 0x3bfa;
  if (iVar4 != 1) {
    plVar1 = (long *)(param_1 + 0x18);
    FUN_1001b1ce0(&local_40);
    if (*(int **)(param_1 + 0x18) != local_40) {
      local_38 = local_40;
      if (*local_40 != -1) {
        if (*local_40 == 0) {
          QListData::detach((int)&local_38);
          iVar2 = local_38[2];
          if (iVar2 != local_38[3]) {
            local_40 = local_40 + (long)local_40[2] * 2 + 4;
            piVar6 = local_38 + (long)iVar2 * 2 + 4;
            lVar5 = (long)local_38[3] * 8 + (long)iVar2 * -8;
            do {
              piVar3 = *(int **)local_40;
              *(int **)piVar6 = piVar3;
              if (1 < *piVar3 + 1U) {
                LOCK();
                *piVar3 = *piVar3 + 1;
                local_29 = *piVar3 != 0;
                UNLOCK();
              }
              piVar6 = piVar6 + 2;
              local_40 = local_40 + 2;
              lVar5 = lVar5 + -8;
            } while (lVar5 != 0);
          }
        }
        else {
          LOCK();
          *local_40 = *local_40 + 1;
          local_29 = *local_40 != 0;
          UNLOCK();
        }
      }
      piVar6 = (int *)*plVar1;
      *plVar1 = (long)local_38;
      local_38 = piVar6;
      FUN_100039a80(&local_38);
    }
    FUN_100039a80(&local_40);
    if (*(int *)(*plVar1 + 0xc) == *(int *)(*plVar1 + 8)) {
      FUN_1001b1b60(1);
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_100152280();
      lVar5 = FUN_1001554a0(uVar7);
      if (lVar5 == 0) {
        FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get local server");
        uVar7 = 0x80000009;
      }
      else {
        lVar5 = FUN_1001762b0(lVar5,plVar1,iVar4);
        uVar7 = 0;
        if (lVar5 != 0) {
          uVar7 = 0;
          QObject::connect(&local_48,lVar5,"2jobCompleted(PRL_RESULT)",param_1,
                           "1onUsbAssociationsListUpdated(PRL_RESULT)",0);
          if (local_48 != 0) {
            QMetaObject::Connection::isConnected_helper();
          }
          QMetaObject::Connection::~Connection((Connection *)&local_48);
          CAbstractTask::setWaitForSubTaskCompletion();
        }
      }
    }
  }
  return uVar7;
}

