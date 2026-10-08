
void FUN_100bf33b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined *)0x0;
    if ((code *)PTR_FUN_102305380 != FUN_100bf3140) {
      puVar1 = PTR_FUN_102305380;
    }
    *param_1 = puVar1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = PTR__free_102305388;
  }
  return;
}

