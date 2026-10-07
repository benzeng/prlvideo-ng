
void FUN_1002d4610(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  
  plVar1 = *(long **)(param_1 + 0x28);
  uVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  if ((int)plVar1[0x292] == 2) {
    lVar2 = plVar1[8];
    *(short *)(lVar2 + 0x2278 + (ulong)uVar3 * 4) = (short)param_2;
    *(undefined2 *)(lVar2 + 0x227a + (ulong)uVar3 * 4) = *(undefined2 *)(param_1 + 0x38);
  }
  return;
}

