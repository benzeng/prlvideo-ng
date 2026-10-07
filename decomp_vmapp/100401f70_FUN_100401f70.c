
void FUN_100401f70(long param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((*(uint *)(param_1 + 0x13c) != 0) &&
     (*(uint *)(param_1 + 0x13c) <= *(uint *)(param_1 + 0x158))) {
    uVar2 = *(ulong *)(param_1 + 0x150);
    uVar3 = FUN_1007d87f0();
    if (uVar2 <= uVar3) {
      if (DAT_1011bbce0 == '\0') {
        FUN_1008e3970("","HddUtils",0,"hdd: kick %d",*(uint *)(param_1 + 0x13c) >> 10);
        DAT_1011bbce0 = '\x01';
      }
      plVar1 = (long *)(*(long *)(param_1 + 0xb0) + 0xf0);
      *plVar1 = *plVar1 + 1;
      if (DAT_1011ccc18 != (code *)0x0) {
        (*DAT_1011ccc18)(*(undefined4 *)(param_1 + 0x40),0x1d,0);
      }
      lVar4 = FUN_1007d87f0();
      (**(code **)(**(long **)(param_1 + 0x38) + 0xe0))();
      lVar5 = FUN_1007d87f0();
      if (DAT_1011ccc18 != (code *)0x0) {
        (*DAT_1011ccc18)(*(undefined4 *)(param_1 + 0x40),0x1d,1);
      }
      if ((ulong)*(uint *)(param_1 + 0x140) < (ulong)(lVar5 - lVar4)) {
        *(long *)(param_1 + 0x150) = lVar5 + *(long *)(param_1 + 0x148);
      }
      *(undefined4 *)(param_1 + 0x158) = 0;
    }
  }
  return;
}

