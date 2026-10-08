
undefined8 * FUN_10092b653(xmlDictPtr param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *local_28;
  
  local_28 = (undefined8 *)(*(code *)_xmlMalloc)(0x30);
  if (local_28 == (undefined8 *)0x0) {
    FUN_10091b97e(0,"allocating schema construction context",0);
    local_28 = (undefined8 *)0x0;
  }
  else {
    puVar3 = local_28;
    for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    uVar1 = FUN_10091e82d();
    local_28[2] = uVar1;
    if (local_28[2] == 0) {
      FUN_10091b97e(0,"allocating list of schema buckets",0);
      (*(code *)_xmlFree)(local_28);
      local_28 = (undefined8 *)0x0;
    }
    else {
      uVar1 = FUN_10091e82d();
      local_28[4] = uVar1;
      if (local_28[4] == 0) {
        FUN_10091b97e(0,"allocating list of pending global components",0);
        FUN_10092b5c6(local_28);
        local_28 = (undefined8 *)0x0;
      }
      else {
        local_28[1] = param_1;
        _xmlDictReference(param_1);
      }
    }
  }
  return local_28;
}

