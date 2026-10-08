
undefined8 FUN_100b09f40(long param_1,undefined8 param_2,long param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [4];
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = _SCardEstablishContext(2,0,0,param_1 + 0x10);
    if (iVar1 != 0) {
      if (DAT_10230ffd0 < 3) {
        return 0xffffffff;
      }
      uVar2 = _pcsc_stringify_error(iVar1);
      FUN_100df99c0("","PrlPCSC",3,"PCSC Error: Can\'t establish context 0x%x %s",iVar1,uVar2);
      return 0xffffffff;
    }
    *(undefined4 *)(param_1 + 4) = 1;
  }
  iVar1 = FUN_100b0a100(param_2,param_1);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    iVar1 = _SCardStatus(*(undefined4 *)(param_1 + 0x14),0,local_34,&local_38,&local_3c,param_3,
                         param_4);
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","PrlPCSC",3,"PCSC: Status state 0x%x, 0x%x",local_38,local_3c);
    }
    if (iVar1 == 0) {
      uVar2 = 0;
      if ((param_3 != 0) && (param_4 != (undefined4 *)0x0)) {
        uVar2 = 0;
        iVar1 = FUN_100dfa590();
        if (2 < iVar1) {
          uVar2 = 0;
          FUN_100b0a240("atr",param_3,*param_4,0,0);
        }
      }
    }
    else {
      if (2 < DAT_10230ffd0) {
        uVar3 = _pcsc_stringify_error(iVar1);
        FUN_100df99c0("","PrlPCSC",3,"PCSC: SCardStatus 0x%x %s",iVar1,uVar3);
      }
      if ((iVar1 + 0x7fefff9aU < 4) && (iVar1 + 0x7fefff9aU != 1)) {
        _SCardDisconnect(*(undefined4 *)(param_1 + 0x14),0);
        *(undefined4 *)(param_1 + 4) = 1;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

