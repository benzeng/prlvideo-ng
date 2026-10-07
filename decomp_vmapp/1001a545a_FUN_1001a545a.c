
undefined8 * FUN_1001a545a(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *local_20;
  
  local_20 = (undefined8 *)(*(code *)_xmlMalloc)(0x30);
  if (local_20 == (undefined8 *)0x0) {
    FUN_1001a4e9b(0,"allocating component\n");
    local_20 = (undefined8 *)0x0;
  }
  else {
    puVar3 = local_20;
    for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)((long)local_20 + 4) = 10;
    *(undefined4 *)local_20 = 0;
    uVar1 = (*(code *)_xmlMalloc)((long)*(int *)((long)local_20 + 4) * 0x38);
    local_20[1] = uVar1;
    if (local_20[1] == 0) {
      FUN_1001a4e9b(0,"allocating steps\n");
      (*(code *)_xmlFree)(local_20);
      local_20 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined1 *)local_20[1];
      for (lVar2 = (long)*(int *)((long)local_20 + 4) * 0x38; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)(local_20 + 2) = 0xffffffff;
    }
  }
  return local_20;
}

