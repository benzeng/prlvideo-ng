
undefined8 FUN_100291300(void)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001554a0(uVar2);
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server to query support code");
    uVar2 = 0x3bfa;
  }
  else {
    cVar1 = FUN_10028ea80(lVar3);
    uVar2 = 0x3bfa;
    if (cVar1 == '\0') {
      pvVar4 = operator_new(0x40);
      FUN_1002533d0(pvVar4,lVar3);
      CAbstractTask::execute();
      uVar2 = 0;
    }
  }
  return uVar2;
}

