
void _xmlFreeStreamCtxt(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *local_20;
  
  local_20 = param_1;
  while (local_20 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*local_20;
    if (local_20[4] != 0) {
      (*(code *)_xmlFree)(local_20[4]);
    }
    (*(code *)_xmlFree)(local_20);
    local_20 = puVar1;
  }
  return;
}

