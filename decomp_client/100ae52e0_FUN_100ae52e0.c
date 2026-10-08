
undefined8 * FUN_100ae52e0(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_100ae5060();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 + 0x10U <= param_2) {
    puVar2 = operator_new(0x20);
    FUN_100ae4e10(puVar2,param_1,param_2,1);
    *puVar2 = &PTR_FUN_10223b250;
  }
  return puVar2;
}

