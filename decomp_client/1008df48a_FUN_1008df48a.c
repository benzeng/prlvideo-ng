
void * FUN_1008df48a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *local_30;
  
  local_30 = (void *)(*(code *)_xmlMalloc)(0x50);
  if (local_30 == (void *)0x0) {
    FUN_1008d87c3(param_2,"creating evaluation context\n");
    local_30 = (void *)0x0;
  }
  else {
    _memset(local_30,0,0x50);
    uVar1 = (*(code *)_xmlMalloc)(0x50);
    *(undefined8 *)((long)local_30 + 0x30) = uVar1;
    if (*(long *)((long)local_30 + 0x30) == 0) {
      (*(code *)_xmlFree)(local_30);
      FUN_1008d87c3(param_2,"creating evaluation context\n");
      local_30 = (void *)0x0;
    }
    else {
      *(undefined4 *)((long)local_30 + 0x28) = 0;
      *(undefined4 *)((long)local_30 + 0x2c) = 10;
      *(undefined8 *)((long)local_30 + 0x20) = 0;
      *(undefined8 *)((long)local_30 + 0x18) = param_2;
      *(undefined8 *)((long)local_30 + 0x38) = param_1;
    }
  }
  return local_30;
}

