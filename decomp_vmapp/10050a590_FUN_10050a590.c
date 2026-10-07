
undefined8 FUN_10050a590(undefined8 param_1)

{
  short sVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_1008ef550();
  uVar2 = _FSOpenResFile(param_1,3);
  sVar1 = _ResError();
  if (sVar1 == 0) {
    lVar3 = _Get1Resource(0x69636e73,0xffffbfb9);
    if (lVar3 == 0) {
      sVar1 = _ResError();
      if ((sVar1 == -0xc0) || (sVar1 == 0)) {
        FUN_1008e3970("MACFSICON","FileIconsMac",3,"Get1Resource() err %i");
        uVar4 = 8;
      }
      else {
        FUN_1008e3970("MACFSICON","FileIconsMac",1,"Get1Resource() err %i");
        uVar4 = 3;
      }
    }
    else {
      _RemoveResource(lVar3);
      _DisposeHandle(lVar3);
      uVar4 = 0;
    }
    _CloseResFile(uVar2);
  }
  else if (sVar1 == -0x581) {
    FUN_1008e3970("MACFSICON","FileIconsMac",3,"FSOpenResFile() err %i",0xfffffa7f);
    uVar4 = 8;
  }
  else {
    FUN_1008e3970("MACFSICON","FileIconsMac",1,"FSOpenResFile() err %i");
    uVar4 = 3;
  }
  FUN_1008ef5a0();
  return uVar4;
}

