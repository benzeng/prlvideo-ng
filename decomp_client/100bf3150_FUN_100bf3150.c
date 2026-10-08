
undefined8 FUN_100bf3150(undefined *param_1,undefined *param_2,undefined *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((((DAT_102316040 == '\0') && (param_1 != (undefined *)0x0)) && (param_2 != (undefined *)0x0))
     && (uVar1 = 0, param_3 != (undefined *)0x0)) {
    PTR__malloc_102305350 = (undefined *)0x0;
    PTR__realloc_102305360 = (undefined *)0x0;
    PTR__malloc_102305378 = (undefined *)0x0;
    uVar1 = 1;
    PTR_FUN_102305358 = param_1;
    PTR_FUN_102305368 = param_2;
    PTR__free_102305370 = param_3;
    PTR_FUN_102305380 = param_1;
    PTR__free_102305388 = param_3;
  }
  return uVar1;
}

