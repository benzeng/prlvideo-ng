
void FUN_1002eab10(long *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  void *pvVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  Data *local_30;
  undefined1 local_21;
  
  if (((param_1[3] == 0) || (*(int *)(param_1[3] + 4) == 0)) || (param_1[4] == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server object is null");
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar5 = 0x80000009;
  }
  else {
    iVar1 = FUN_10015a6e0();
    if (iVar1 == 0) {
      if (DAT_1023109b0 == (void *)0x0) {
        pvVar2 = operator_new(0x20);
        FUN_100751470(pvVar2);
        DAT_102271388 = 1;
        DAT_1023109b0 = pvVar2;
      }
      FUN_100753710(&local_30,DAT_1023109b0);
      local_50 = local_30;
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 == 0) {
          QListData::detach((int)&local_50);
          lVar3 = (long)*(int *)(local_50 + 8);
          if ((local_30 + (long)*(int *)(local_30 + 8) * 8 != local_50 + lVar3 * 8) &&
             (lVar4 = *(int *)(local_50 + 0xc) - lVar3,
             lVar4 != 0 && lVar3 <= *(int *)(local_50 + 0xc))) {
            _memcpy(local_50 + lVar3 * 8 + 0x10,local_30 + (long)*(int *)(local_30 + 8) * 8 + 0x10,
                    lVar4 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + 1;
          local_21 = *(int *)local_30 != 0;
          UNLOCK();
        }
      }
      local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
      local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
      if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
        do {
          local_38 = 1;
          lVar3 = 0;
          if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
            lVar3 = param_1[4];
          }
          FUN_10015bf80(lVar3,*(undefined8 *)local_48,0);
          local_48 = local_48 + 8;
        } while (local_48 != local_40);
      }
      local_38 = 1;
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_21 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1002eacd6;
        }
        QListData::dispose(local_50);
      }
LAB_1002eacd6:
      (**(code **)(*param_1 + 0xb0))(param_1,0);
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          UNLOCK();
          if (*(int *)local_30 != 0) {
            return;
          }
          local_21 = 0;
        }
        QListData::dispose(local_30);
      }
      return;
    }
    FUN_100df99c0("","prl_client_app",0,
                  "server is not in connected state, waiting for it to add found vms");
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
    uVar5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002eaba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar5);
  return;
}

