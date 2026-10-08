
undefined8 * _xmlPatternGetStreamCtxt(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_28;
  long local_20;
  undefined8 *local_18;
  
  local_18 = (undefined8 *)0x0;
  if ((param_1 == 0) || (local_20 = param_1, *(long *)(param_1 + 0x38) == 0)) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    for (; local_20 != 0; local_20 = *(long *)(local_20 + 0x10)) {
      if ((*(long *)(local_20 + 0x38) == 0) ||
         (puVar2 = (undefined8 *)FUN_1009807de(*(undefined8 *)(local_20 + 0x38)),
         puVar2 == (undefined8 *)0x0)) {
        _xmlFreeStreamCtxt(local_18);
        return (undefined8 *)0x0;
      }
      puVar1 = puVar2;
      if (local_18 != (undefined8 *)0x0) {
        *puVar2 = *local_18;
        *local_18 = puVar2;
        puVar1 = local_18;
      }
      local_18 = puVar1;
      *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(local_20 + 0x20);
    }
    local_28 = local_18;
  }
  return local_28;
}

