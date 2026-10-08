
void FUN_100902b80(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  local_20 = param_1;
  while (local_20 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*local_20;
    FUN_100902a3c(local_20);
    local_20 = puVar1;
  }
  return;
}

