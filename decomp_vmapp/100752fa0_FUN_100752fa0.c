
undefined8 * FUN_100752fa0(int param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  if (param_1 == 2) {
    puVar1 = operator_new(0x18);
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = param_2;
    puVar2 = &DAT_100bcecf0;
  }
  else {
    if (param_1 != 1) {
      if (param_1 != 0) {
        return (undefined8 *)0x0;
      }
      puVar1 = operator_new(0x20);
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1[2] = param_2;
      *puVar1 = &PTR_FUN_100bcecb0;
      puVar1[3] = 0;
      return puVar1;
    }
    puVar1 = operator_new(0x18);
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = param_2;
    puVar2 = &DAT_100bcec50;
  }
  *puVar1 = puVar2 + 0x10;
  return puVar1;
}

