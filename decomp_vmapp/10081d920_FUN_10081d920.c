
undefined8 FUN_10081d920(undefined *param_1,undefined *param_2,undefined *param_3)

{
  undefined8 uVar1;
  
  FUN_100820a30();
  uVar1 = 0;
  if ((((DAT_1011c0650 == '\0') && (param_1 != (undefined *)0x0)) && (param_2 != (undefined *)0x0))
     && (uVar1 = 0, param_3 != (undefined *)0x0)) {
    PTR_FUN_1011ab588 = FUN_10081d9b0;
    PTR_FUN_1011ab598 = FUN_10081d9c0;
    PTR_FUN_1011ab5b0 = FUN_10081d9d0;
    uVar1 = 1;
    PTR__malloc_1011ab580 = param_1;
    PTR__realloc_1011ab590 = param_2;
    PTR__free_1011ab5a0 = param_3;
    PTR__malloc_1011ab5a8 = param_1;
    PTR__free_1011ab5b8 = param_3;
  }
  return uVar1;
}

