
void FUN_1003f0560(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if ((((param_1[0x3fc] != 0) &&
       (uVar2 = (ulong)((int)param_1[3] - 1), lVar3 = uVar2 * 0x40,
       *(char *)((long)param_1 + lVar3 + 0x59) == '\0')) &&
      (*(char *)((long)param_1 + lVar3 + 0x5a) == '\0')) &&
     (*(char *)((long)param_1 + lVar3 + 0x5b) == '\0')) {
    iVar1 = (int)((ulong)param_1[uVar2 * 8 + 6] / (ulong)*(uint *)(param_1[0x3fc] + 0x28));
    *(int *)((long)param_1 + lVar3 + 0x5c) = iVar1;
    *(char *)((long)param_1 + lVar3 + 0x59) = (char)((iVar1 + 0x96U) / 0x1194);
    lVar3 = (ulong)((int)param_1[3] - 1) * 0x40;
    iVar1 = *(int *)((long)param_1 + lVar3 + 0x5c);
    *(char *)((long)param_1 + lVar3 + 0x5a) =
         (char)((iVar1 + 0x96 + ((iVar1 + 0x96U) / 0x1194) * -0x1194) / 0x4b);
    lVar3 = (ulong)((int)param_1[3] - 1) * 0x40;
    *(char *)((long)param_1 + lVar3 + 0x5b) =
         (char)(((*(int *)((long)param_1 + lVar3 + 0x5c) + 0x96U) % 0x1194) % 0x4b);
  }
                    /* WARNING: Could not recover jumptable at 0x0001003f063c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))();
  return;
}

