
void FUN_1002df640(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 in_stack_00000008;
  
  FUN_1002dbac0();
  *param_1 = &PTR_FUN_100bb44c0;
  param_1[9] = in_stack_00000008;
  lVar1 = param_1[5];
  pvVar2 = operator_new__((ulong)*(byte *)(*(long *)(lVar1 + 0x10) + 4) << 3);
  param_1[8] = pvVar2;
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + 0x10) + 4);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      *(undefined8 *)((long)pvVar2 + uVar4 * 8) = 0x100000000;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return;
}

