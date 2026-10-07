
void FUN_1001eb5fe(long *param_1)

{
  long *plVar1;
  undefined8 local_20;
  
  if (param_1 != (long *)0x0) {
    local_20 = param_1;
    if (*param_1 == 0) {
      (*(code *)_xmlFree)(param_1);
    }
    else {
      do {
        plVar1 = (long *)*local_20;
        (*(code *)_xmlFree)(local_20);
        local_20 = plVar1;
      } while (plVar1 != (long *)0x0);
    }
  }
  return;
}

