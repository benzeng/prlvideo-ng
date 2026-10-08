
undefined1 FUN_1007b3a00(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  Connection local_40 [8];
  QArrayData *local_38;
  undefined1 local_29;
  
  if (*(int *)(*param_2 + 4) == 0) {
    pcVar3 = "Invalid snapshotID";
  }
  else {
    if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
       (*(long *)(param_1 + 0x18) != 0)) {
      lVar2 = FUN_1001934f0(*(long *)(param_1 + 0x18),param_2,0x49);
      if (lVar2 == 0) {
        return 0;
      }
      cVar1 = CAbstractTask::isFinished();
      if (cVar1 != '\0') {
        return 1;
      }
      QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,0x1dcde42);
      FUN_100862860(param_1,&local_38);
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_29 = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1007b3ac8;
        }
        QArrayData::deallocate(local_38,2,8);
      }
LAB_1007b3ac8:
      QObject::connect(local_40,lVar2,"2taskFinished(PRL_RESULT)",param_1,"1onSwitchToFinished()",0)
      ;
      QMetaObject::Connection::~Connection(local_40);
      return 1;
    }
    pcVar3 = "(!)Error: can\'t get VM instance.";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar3);
  return 0;
}

