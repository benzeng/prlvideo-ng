
void FUN_10081db40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = PTR__malloc_1011ab580;
    if ((code *)PTR_FUN_1011ab588 != FUN_10081d9b0) {
      puVar1 = (undefined *)0x0;
    }
    *param_1 = puVar1;
  }
  if (param_2 != (undefined8 *)0x0) {
    puVar1 = PTR__realloc_1011ab590;
    if ((code *)PTR_FUN_1011ab598 != FUN_10081d9c0) {
      puVar1 = (undefined *)0x0;
    }
    *param_2 = puVar1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = PTR__free_1011ab5a0;
  }
  return;
}

