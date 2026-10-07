
undefined8 * FUN_1001d8bb3(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *local_28;
  
  local_28 = (undefined8 *)(*(code *)_xmlMalloc)(0x30);
  if (local_28 == (undefined8 *)0x0) {
    FUN_1001d7cf4(param_1,"allocating state");
    local_28 = (undefined8 *)0x0;
  }
  else {
    puVar2 = local_28;
    for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)local_28 = 3;
    *(undefined4 *)((long)local_28 + 4) = 0;
  }
  return local_28;
}

