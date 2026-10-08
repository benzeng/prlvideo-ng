
void * FUN_10097ff5d(int param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined4 local_1c;
  
  local_1c = param_1;
  if (param_1 < 4) {
    local_1c = 4;
  }
  local_28 = (void *)(*(code *)_xmlMalloc)(0x20);
  if (local_28 == (void *)0x0) {
    local_28 = (void *)0x0;
  }
  else {
    _memset(local_28,0,0x20);
    uVar1 = (*(code *)_xmlMalloc)((long)local_1c * 0x18);
    *(undefined8 *)((long)local_28 + 0x10) = uVar1;
    if (*(long *)((long)local_28 + 0x10) == 0) {
      (*(code *)_xmlFree)(local_28);
      local_28 = (void *)0x0;
    }
    else {
      *(undefined4 *)((long)local_28 + 8) = 0;
      *(int *)((long)local_28 + 0xc) = local_1c;
    }
  }
  return local_28;
}

