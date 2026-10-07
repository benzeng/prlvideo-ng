
undefined8 FUN_100509cb0(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  undefined4 uVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  
  FUN_1008ef550();
  uVar6 = 3;
  uVar2 = _FSOpenResFile(param_1,3);
  sVar1 = _ResError();
  if (sVar1 != 0) {
    FUN_1008e3970("MACFSICON","FileIconsMac",1,"FSOpenResFile() err %i",(int)sVar1);
    goto LAB_100509e31;
  }
  lVar3 = _Get1Resource(0x69636e73,0xffffbfb9);
  if (lVar3 == 0) {
    sVar1 = _ResError();
    iVar5 = (int)sVar1;
    if ((iVar5 == -0xc0) || (sVar1 == 0)) goto LAB_100509d7f;
    pcVar4 = "Get1Resource() err %i";
LAB_100509e17:
    FUN_1008e3970("MACFSICON","FileIconsMac",1,pcVar4,iVar5);
    uVar6 = 3;
  }
  else {
    _RemoveResource(lVar3);
    sVar1 = _ResError();
    _DisposeHandle(lVar3);
    if (sVar1 != 0) {
      iVar5 = (int)sVar1;
      pcVar4 = "RemoveResource() err %i";
      goto LAB_100509e17;
    }
LAB_100509d7f:
    uVar6 = 0;
    _AddResource(param_2,0x69636e73,0xffffbfb9,0);
    sVar1 = _ResError();
    if (sVar1 != 0) {
      iVar5 = (int)sVar1;
      pcVar4 = "AddResource() err %i";
      goto LAB_100509e17;
    }
    _WriteResource(param_2);
    sVar1 = _ResError();
    if (sVar1 != 0) {
      FUN_1008e3970("MACFSICON","FileIconsMac",1,"WriteResource() err %i",(int)sVar1);
      uVar6 = 3;
    }
    _DetachResource(param_2);
  }
  _CloseResFile(uVar2);
LAB_100509e31:
  FUN_1008ef5a0();
  return uVar6;
}

