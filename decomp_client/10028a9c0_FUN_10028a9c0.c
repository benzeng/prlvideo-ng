
undefined8 FUN_10028a9c0(long param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(long *)(param_1 + 0x18) + 0xc) == *(int *)(*(long *)(param_1 + 0x18) + 8)) {
    return 0x80000009;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  puVar1 = *(uint **)(param_1 + 0x18);
  if (1 < *puVar1) {
    FUN_100036c40((undefined8 *)(param_1 + 0x18),puVar1[1]);
    puVar1 = *(uint **)(param_1 + 0x18);
  }
  uVar2 = FUN_10028aa20(param_1,puVar1 + (long)(int)puVar1[2] * 2 + 4);
  return uVar2;
}

