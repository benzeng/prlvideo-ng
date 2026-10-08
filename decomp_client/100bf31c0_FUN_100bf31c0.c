
undefined8 FUN_100bf31c0(undefined *param_1,undefined *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((DAT_102316040 == '\0') && (param_1 != (undefined *)0x0)) && (param_2 != (undefined *)0x0)) {
    PTR_FUN_102305380 = FUN_100bf3140;
    uVar1 = 1;
    PTR__malloc_102305378 = param_1;
    PTR__free_102305388 = param_2;
  }
  return uVar1;
}

