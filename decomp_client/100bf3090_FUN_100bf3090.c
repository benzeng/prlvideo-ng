
undefined8 FUN_100bf3090(undefined *param_1,undefined *param_2,undefined *param_3)

{
  undefined8 uVar1;
  
  FUN_100bf61a0();
  uVar1 = 0;
  if ((((DAT_102316040 == '\0') && (param_1 != (undefined *)0x0)) && (param_2 != (undefined *)0x0))
     && (uVar1 = 0, param_3 != (undefined *)0x0)) {
    PTR_FUN_102305358 = FUN_100bf3120;
    PTR_FUN_102305368 = FUN_100bf3130;
    PTR_FUN_102305380 = FUN_100bf3140;
    uVar1 = 1;
    PTR__malloc_102305350 = param_1;
    PTR__realloc_102305360 = param_2;
    PTR__free_102305370 = param_3;
    PTR__malloc_102305378 = param_1;
    PTR__free_102305388 = param_3;
  }
  return uVar1;
}

