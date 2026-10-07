
undefined8 FUN_10081da90(undefined *param_1,undefined *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((DAT_1011c0650 == '\0') && (param_1 != (undefined *)0x0)) && (param_2 != (undefined *)0x0)) {
    PTR__malloc_1011ab5a8 = (undefined *)0x0;
    uVar1 = 1;
    PTR__free_1011ab5a0 = param_2;
    PTR_FUN_1011ab5b0 = param_1;
  }
  return uVar1;
}

