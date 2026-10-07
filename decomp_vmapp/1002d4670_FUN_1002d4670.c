
void FUN_1002d4670(long param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  plVar1 = *(long **)(param_1 + 0x28);
  if ((int)plVar1[0x292] == 2) {
    uVar3 = (**(code **)(*plVar1 + 0x80))(plVar1);
    if (uVar3 != 0xffffffff) {
      lVar2 = plVar1[8];
      *(undefined2 *)(lVar2 + 0x2278 + (ulong)uVar3 * 4) = 0;
      *(undefined2 *)(lVar2 + 0x227a + (ulong)uVar3 * 4) = 0;
    }
  }
  return;
}

