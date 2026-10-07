
undefined8 * FUN_100214804(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *local_20;
  
  local_20 = (undefined8 *)(*(code *)_xmlMalloc)(0x30);
  if (local_20 == (undefined8 *)0x0) {
    FUN_10021457c(0,"allocating particle component");
    local_20 = (undefined8 *)0x0;
  }
  else {
    puVar2 = local_20;
    for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)local_20 = 0x19;
    *(undefined4 *)(local_20 + 4) = 1;
    *(undefined4 *)((long)local_20 + 0x24) = 1;
  }
  return local_20;
}

