
undefined8 * FUN_004108e0(long param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  if (param_1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    while ((puVar2 != (undefined8 *)0x0 && (iVar1 = strcmp(param_2,(char *)*puVar2), iVar1 != 0))) {
      puVar2 = (undefined8 *)puVar2[5];
    }
  }
  return puVar2;
}

