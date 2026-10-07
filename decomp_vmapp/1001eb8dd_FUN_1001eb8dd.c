
void FUN_1001eb8dd(long param_1)

{
  long *plVar1;
  long *local_18;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_1001eb5fe(*(undefined8 *)(param_1 + 8));
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      if (*(long *)(*(long *)(param_1 + 0x30) + 0x20) != 0) {
        _xmlFreePattern(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20));
      }
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x30));
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      local_18 = *(long **)(param_1 + 0x38);
      do {
        plVar1 = (long *)*local_18;
        if (local_18[4] != 0) {
          _xmlFreePattern(local_18[4]);
        }
        (*(code *)_xmlFree)(local_18);
        local_18 = plVar1;
      } while (plVar1 != (long *)0x0);
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

