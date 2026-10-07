
undefined2 FUN_100464cf0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined2 local_1a;
  
  uVar2 = _CFNumberGetTypeID();
  lVar3 = FUN_1004645d0(param_1,param_2,uVar2);
  local_1a = 0xffff;
  if (lVar3 != 0) {
    local_1a = 0;
    cVar1 = _CFNumberGetValue(lVar3,2,&local_1a);
    if (cVar1 != '\x01') {
      local_1a = 0xffff;
    }
    _CFRelease(lVar3);
  }
  return local_1a;
}

