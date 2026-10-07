
undefined8 * FUN_100249e98(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *local_20;
  
  local_20 = (undefined8 *)(*(code *)_xmlMalloc)(0x40);
  if (local_20 == (undefined8 *)0x0) {
    local_20 = (undefined8 *)0x0;
  }
  else {
    puVar3 = local_20;
    for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(local_20 + 5) = 10;
    uVar1 = (*(code *)_xmlMalloc)((long)*(int *)(local_20 + 5) * 0x18);
    local_20[6] = uVar1;
    if (local_20[6] == 0) {
      (*(code *)_xmlFree)(local_20);
      local_20 = (undefined8 *)0x0;
    }
  }
  return local_20;
}

