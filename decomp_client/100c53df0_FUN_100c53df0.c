
undefined8 FUN_100c53df0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = _dlopen(0,1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _dlsym(lVar1,param_1);
    _dlclose(lVar1);
  }
  return uVar2;
}

