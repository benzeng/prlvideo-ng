
undefined1 FUN_1007b5440(long param_1,long *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  Connection local_20 [8];
  
  if (*(int *)(*param_2 + 4) == 0) {
    pcVar2 = "Invalid snapshotID";
  }
  else {
    if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
       (*(long *)(param_1 + 0x18) != 0)) {
      uVar1 = FUN_100193f00();
      QObject::connect(local_20,uVar1,"2jobCompleted(PRL_RESULT)",param_1,"1onUpdateDataFinished()",
                       0);
      QMetaObject::Connection::~Connection(local_20);
      return 1;
    }
    pcVar2 = "(!)Error: can\'t get VM instance.";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar2);
  return 0;
}

