
undefined8 FUN_1004b3ea0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else if (*(int *)(*param_1 + 0xc) == *(int *)(*param_1 + 8)) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1004b4030();
    if (puVar1 == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      param_2[2] = puVar1[2];
      uVar2 = *puVar1;
      param_2[1] = puVar1[1];
      *param_2 = uVar2;
      operator_delete(puVar1);
      uVar2 = 1;
    }
  }
  return uVar2;
}

