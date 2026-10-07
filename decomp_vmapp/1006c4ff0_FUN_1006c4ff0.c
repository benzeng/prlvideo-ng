
undefined8 FUN_1006c4ff0(undefined8 param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_3 == '\0') {
    uVar2 = 0;
    cVar1 = FUN_1006c46f0(param_1,param_2,0);
    if (cVar1 == '\0') {
      FUN_1008e3970("","prl_net",0,
                    "[renamePrlAdapter]  configurePrlAdapter() for Adapter %d failed.",param_2);
      uVar2 = 0x80004005;
    }
  }
  return uVar2;
}

