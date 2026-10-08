
undefined8 FUN_100c81490(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined1 local_38;
  
  local_40 = 0;
  puVar2 = &local_40;
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = param_1;
  }
  local_38 = 0;
  uVar3 = 0;
  iVar1 = FUN_100c814f0(puVar2);
  if (0 < iVar1) {
    uVar3 = *puVar2;
  }
  return uVar3;
}

