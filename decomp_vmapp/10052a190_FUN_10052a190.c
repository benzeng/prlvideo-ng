
undefined8 * FUN_10052a190(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_100529f10();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 + 0x10U <= param_2) {
    puVar2 = operator_new(0x20);
    FUN_100529cc0(puVar2,param_1,param_2,1);
    *puVar2 = &PTR_FUN_100bc4f20;
  }
  return puVar2;
}

