
void FUN_100331470(long param_1,char param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  long local_20;
  
  FUN_100df99c0("","prl_client_app",0,
                "Coherence tool status: bAvailable = %d. Deferred Coherence Start = %d\n",param_2,
                *(undefined1 *)(param_1 + 0x28));
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    FUN_100df99c0("","prl_client_app",0,
                  "Failed to process Coherence tool availability change. VM desktop object does not exit!"
                 );
    return;
  }
  lVar2 = FUN_100319390();
  if (lVar2 != 0) {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar3 = FUN_100319390(uVar3);
    cVar1 = FUN_10018ff50(uVar3);
    if (cVar1 != '\0') {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x18);
      }
      uVar3 = FUN_100319390(uVar3);
      QObject::connect(&local_20,uVar3,"2vmHWUpgradeFinished()",param_1,"1onVmUpgradeFinished()",0);
      if (local_20 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_20);
      return;
    }
  }
  if ((param_2 != '\0') && (*(char *)(param_1 + 0x28) != '\0')) {
    *(undefined1 *)(param_1 + 0x28) = 0;
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
    }
    local_38 = 3;
    local_30 = 0;
    local_34 = 0;
    local_2c = 0xffff;
    local_28 = 0;
    local_24 = 0;
    FUN_10031bef0(uVar3,3,&local_38);
  }
  return;
}

