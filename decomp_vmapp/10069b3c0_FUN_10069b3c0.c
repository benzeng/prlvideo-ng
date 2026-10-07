
void FUN_10069b3c0(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  param_1[0x113] = 0;
  param_1[0x114] = param_1[0x112];
  if (0xfff < (ulong)param_1[0x112]) {
    param_1[0x114] =
         (ulong)(0x1000 - *(uint *)((long)param_1 + 0x8ac) / *(uint *)((long)param_1 + 0x88c));
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = 0;
  plVar1 = (long *)*param_1;
  if (param_2 == 0xffffffffffffffff) {
    param_2 = *(ulong *)(*(long *)(*plVar1 + -0x18) + 0x58 + (long)plVar1);
  }
  lVar2 = plVar1[4];
  uVar3 = *(ulong *)(*(long *)(**(long **)(lVar2 + 0x38) + -0x18) + 0x38 +
                    (long)*(long **)(lVar2 + 0x38));
  *(int *)((long)param_1 + 0x8bc) =
       (int)((((param_2 / uVar3 - 1) - *(ulong *)(lVar2 + 0x20) / uVar3) +
             (ulong)*(uint *)(lVar2 + 0x10)) / (ulong)*(uint *)(lVar2 + 0x10));
  return;
}

