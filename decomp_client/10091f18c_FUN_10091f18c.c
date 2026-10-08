
void FUN_10091f18c(long param_1)

{
  long lVar1;
  undefined8 local_20;
  
  local_20 = param_1;
  while (local_20 != 0) {
    lVar1 = *(long *)(local_20 + 8);
    if (*(long *)(local_20 + 0x18) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(local_20 + 0x18));
    }
    if (*(long *)(local_20 + 0x38) != 0) {
      _xmlFreeStreamCtxt(*(undefined8 *)(local_20 + 0x38));
    }
    (*(code *)_xmlFree)(local_20);
    local_20 = lVar1;
  }
  return;
}

