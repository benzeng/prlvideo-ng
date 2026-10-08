
undefined8 * FUN_100947ed5(undefined4 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *local_28;
  
  local_28 = (undefined8 *)(*(code *)_xmlMalloc)(0x30);
  if (local_28 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    puVar2 = local_28;
    for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)local_28 = param_1;
  }
  return local_28;
}

