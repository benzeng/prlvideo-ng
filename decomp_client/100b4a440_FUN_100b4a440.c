
undefined8 FUN_100b4a440(undefined8 param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_3 == '\0') {
    uVar2 = 0;
    cVar1 = FUN_100b49b40(param_1,param_2,0);
    if (cVar1 == '\0') {
      FUN_100df99c0("","prl_net",0,
                    "[renamePrlAdapter]  configurePrlAdapter() for Adapter %d failed.",param_2);
      uVar2 = 0x80004005;
    }
  }
  return uVar2;
}

