
undefined8 FUN_1002ad790(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 local_24;
  undefined8 local_20;
  
  local_20 = 0;
  iVar1 = _CGLCreateContext(param_2,param_3,&local_20);
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 0x868) != 0) {
      _CGLGetVirtualScreen(*(long *)(param_1 + 0x868),&local_24);
      _CGLSetVirtualScreen(local_20,local_24);
    }
  }
  else {
    FUN_1008e3970("","LocalDevices",0,"Failed to CGLCreateContext for GL context (%u)",iVar1);
    local_20 = 0;
  }
  return local_20;
}

