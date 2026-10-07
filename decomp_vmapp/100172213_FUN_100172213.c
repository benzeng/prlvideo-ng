
void FUN_100172213(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_18;
  
  local_18 = param_1;
  while (local_18 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*local_18;
    (*(code *)_xmlFree)(local_18);
    local_18 = puVar1;
  }
  return;
}

