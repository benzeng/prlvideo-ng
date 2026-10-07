
undefined1 FUN_1006cd0a0(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  
  cVar1 = _SCPreferencesLock(param_1,0);
  uVar4 = 1;
  if (cVar1 == '\0') {
    uVar2 = _SCError();
    FUN_1008e3970("","prl_net",0,"Attempt %d to lock SCPreferences failed. Error 0x%x",0,uVar2);
    iVar3 = _SCError();
    if (iVar3 != 0x3eb) {
      _sleep(1);
      cVar1 = _SCPreferencesLock(param_1,0);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar2 = _SCError();
      FUN_1008e3970("","prl_net",0,"Attempt %d to lock SCPreferences failed. Error 0x%x",1,uVar2);
      iVar3 = _SCError();
      if (iVar3 != 0x3eb) {
        _sleep(1);
        cVar1 = _SCPreferencesLock(param_1,0);
        if (cVar1 != '\0') {
          return 1;
        }
        uVar2 = _SCError();
        FUN_1008e3970("","prl_net",0,"Attempt %d to lock SCPreferences failed. Error 0x%x",2,uVar2);
        iVar3 = _SCError();
        if (iVar3 != 0x3eb) {
          _sleep(1);
          cVar1 = _SCPreferencesLock(param_1,0);
          if (cVar1 != '\0') {
            return 1;
          }
          uVar2 = _SCError();
          FUN_1008e3970("","prl_net",0,"Attempt %d to lock SCPreferences failed. Error 0x%x",3,uVar2
                       );
          iVar3 = _SCError();
          if (iVar3 != 0x3eb) {
            _sleep(1);
            cVar1 = _SCPreferencesLock(param_1,0);
            if (cVar1 != '\0') {
              return 1;
            }
            uVar2 = _SCError();
            FUN_1008e3970("","prl_net",0,"Attempt %d to lock SCPreferences failed. Error 0x%x",4,
                          uVar2);
            iVar3 = _SCError();
            if (iVar3 != 0x3eb) {
              _sleep(1);
            }
          }
        }
      }
    }
    uVar4 = 0;
    FUN_1008e3970("","prl_net",0,"Failed to lock SCPreferences.");
  }
  return uVar4;
}

