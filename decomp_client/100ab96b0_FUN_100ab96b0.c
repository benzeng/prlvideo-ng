
undefined8 FUN_100ab96b0(undefined8 param_1,long *param_2)

{
  short sVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_100d77820();
  uVar2 = _FSOpenResFile(param_1,1);
  sVar1 = _ResError();
  if (sVar1 == 0) {
    lVar3 = _Get1Resource(0x69636e73,0xffffbfb9);
    if (lVar3 == 0) {
      sVar1 = _ResError();
      if ((sVar1 == -0xc0) || (sVar1 == 0)) {
        FUN_100df99c0("MACFSICON","FileIconsMac",3,"Get1Resource() err %i");
        uVar4 = 8;
      }
      else {
        FUN_100df99c0("MACFSICON","FileIconsMac",1,"Get1Resource() err %i");
        uVar4 = 3;
      }
    }
    else {
      _DetachResource(lVar3);
      *param_2 = lVar3;
      uVar4 = 0;
    }
    _CloseResFile(uVar2);
  }
  else if (sVar1 == -0x581) {
    FUN_100df99c0("MACFSICON","FileIconsMac",3,"FSOpenResFile() err %i",0xfffffa7f);
    uVar4 = 8;
  }
  else {
    FUN_100df99c0("MACFSICON","FileIconsMac",1,"FSOpenResFile() err %i");
    uVar4 = 3;
  }
  FUN_100d77870();
  return uVar4;
}

