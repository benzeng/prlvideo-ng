
undefined8 FUN_10081da50(undefined *param_1,undefined *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((DAT_1011c0650 == '\0') && (param_1 != (undefined *)0x0)) && (param_2 != (undefined *)0x0)) {
    PTR_FUN_1011ab5b0 = FUN_10081d9d0;
    uVar1 = 1;
    PTR__malloc_1011ab5a8 = param_1;
    PTR__free_1011ab5b8 = param_2;
  }
  return uVar1;
}

