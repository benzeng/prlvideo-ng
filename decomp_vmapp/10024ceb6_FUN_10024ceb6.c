
void * FUN_10024ceb6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  local_28 = (void *)(*(code *)_xmlMalloc)(0x30);
  if (local_28 == (void *)0x0) {
    local_28 = (void *)0x0;
  }
  else {
    _memset(local_28,0,0x30);
    uVar1 = (*(code *)_xmlMalloc)(0x20);
    *(undefined8 *)((long)local_28 + 0x20) = uVar1;
    if (*(long *)((long)local_28 + 0x20) == 0) {
      (*(code *)_xmlFree)(local_28);
      local_28 = (void *)0x0;
    }
    else {
      *(undefined4 *)((long)local_28 + 0x10) = 0;
      *(undefined4 *)((long)local_28 + 0x14) = 4;
      *(undefined4 *)((long)local_28 + 0x18) = 0;
      *(undefined8 *)((long)local_28 + 8) = param_1;
      *(undefined4 *)((long)local_28 + 0x2c) = 0xffffffff;
    }
  }
  return local_28;
}

