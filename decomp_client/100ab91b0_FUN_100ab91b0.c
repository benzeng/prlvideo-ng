
undefined8 FUN_100ab91b0(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  undefined4 uVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  
  FUN_100d77820();
  uVar6 = 3;
  uVar2 = _FSOpenResFile(param_1,3);
  sVar1 = _ResError();
  if (sVar1 != 0) {
    FUN_100df99c0("MACFSICON","FileIconsMac",1,"FSOpenResFile() err %i",(int)sVar1);
    goto LAB_100ab9331;
  }
  lVar3 = _Get1Resource(0x69636e73,0xffffbfb9);
  if (lVar3 == 0) {
    sVar1 = _ResError();
    iVar5 = (int)sVar1;
    if ((iVar5 == -0xc0) || (sVar1 == 0)) goto LAB_100ab927f;
    pcVar4 = "Get1Resource() err %i";
LAB_100ab9317:
    FUN_100df99c0("MACFSICON","FileIconsMac",1,pcVar4,iVar5);
    uVar6 = 3;
  }
  else {
    _RemoveResource(lVar3);
    sVar1 = _ResError();
    _DisposeHandle(lVar3);
    if (sVar1 != 0) {
      iVar5 = (int)sVar1;
      pcVar4 = "RemoveResource() err %i";
      goto LAB_100ab9317;
    }
LAB_100ab927f:
    uVar6 = 0;
    _AddResource(param_2,0x69636e73,0xffffbfb9,0);
    sVar1 = _ResError();
    if (sVar1 != 0) {
      iVar5 = (int)sVar1;
      pcVar4 = "AddResource() err %i";
      goto LAB_100ab9317;
    }
    _WriteResource(param_2);
    sVar1 = _ResError();
    if (sVar1 != 0) {
      FUN_100df99c0("MACFSICON","FileIconsMac",1,"WriteResource() err %i",(int)sVar1);
      uVar6 = 3;
    }
    _DetachResource(param_2);
  }
  _CloseResFile(uVar2);
LAB_100ab9331:
  FUN_100d77870();
  return uVar6;
}

