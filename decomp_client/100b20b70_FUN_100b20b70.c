
void FUN_100b20b70(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  uVar2 = 0x80021029;
  if ((*(uint *)(param_1 + 8) & 0xfc | 0x20) == 0x20) {
    uVar2 = FUN_100b20be0(puVar1[2],puVar1);
  }
  (*(code *)*puVar1)(puVar1[1],uVar2);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    if ((void *)puVar1[3] != (void *)0x0) {
      _free((void *)puVar1[3]);
    }
    operator_delete(puVar1);
    return;
  }
  return;
}

