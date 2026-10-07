
void FUN_10081dc40(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined *)0x0;
    if ((code *)PTR_FUN_1011ab5b0 != FUN_10081d9d0) {
      puVar1 = PTR_FUN_1011ab5b0;
    }
    *param_1 = puVar1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = PTR__free_1011ab5b8;
  }
  return;
}

