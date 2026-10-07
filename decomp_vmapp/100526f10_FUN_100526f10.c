
void FUN_100526f10(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  code *in_stack_00000008;
  code *in_stack_00000010;
  code *in_stack_00000018;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((in_stack_00000008 != (code *)0x0) && (*(int *)(param_1 + 4) != 0)) &&
     (*(int *)(param_1 + 0x24) != 0)) {
    lVar4 = 0;
    do {
      (*in_stack_00000008)(param_2,*(undefined4 *)(param_1 + 0x30 + lVar4 * 4));
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(param_1 + 0x24));
  }
  if (((in_stack_00000010 != (code *)0x0) && (*(int *)(param_1 + 8) != 0)) &&
     (uVar1 = (ulong)*(uint *)(param_1 + 4), *(int *)(uVar1 + 0x24 + param_1) != 0)) {
    lVar4 = uVar1 + param_1 + 0x30;
    uVar5 = 0;
    do {
      lVar2 = 0;
      if (*(int *)(lVar4 + 0x2c) != 0) {
        lVar2 = (ulong)*(uint *)(lVar4 + 0x28) * 0x10 + 0x44 + lVar4;
      }
      (*in_stack_00000010)(param_2,lVar4 + 0x14,*(int *)(lVar4 + 0x2c),lVar2);
      lVar4 = lVar4 + 0x44 +
              (ulong)*(uint *)(lVar4 + 0x28) * 0x10 +
              ((ulong)*(uint *)(lVar4 + 4) + (ulong)*(uint *)(lVar4 + 0x2c)) * 2;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x24 + uVar1));
  }
  if ((in_stack_00000018 != (code *)0x0) && (*(int *)(param_1 + 0xc) != 0)) {
    lVar4 = (ulong)*(uint *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 4);
    if (*(int *)(param_1 + 0x24 + lVar4) != 0) {
      puVar6 = (uint *)(lVar4 + param_1 + 0x30);
      uVar5 = 0;
      do {
        puVar3 = (uint *)0x0;
        if (puVar6[3] != 0) {
          puVar3 = puVar6 + (ulong)puVar6[2] * 4 + 0x11;
        }
        (*in_stack_00000018)(param_2,puVar6 + 5,puVar6[3],puVar3,puVar6[1]);
        puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x24 + lVar4));
    }
  }
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if (*(int *)(param_1 + 0x14) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001005270a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_2);
      return;
    }
  }
  return;
}

