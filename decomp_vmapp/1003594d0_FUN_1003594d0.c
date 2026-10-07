
void FUN_1003594d0(long *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint *puVar1;
  long lVar2;
  
  if (param_1[4] != 0) {
    FUN_1002adb30(*param_1,param_1[1]);
    if (param_2 == 0) {
      lVar2 = param_1[0x200d];
      if (((param_6 & 0x2000) != 0) &&
         (*(uint *)(lVar2 + 0xc) = param_5 + param_4,
         (ulong)(param_1[0x200f] - param_1[0x200e]) < (ulong)(param_5 + param_4))) {
        FUN_10005a320(param_1 + 0x200e);
      }
      _memcpy((void *)((ulong)param_4 + param_1[0x200e]),
              (void *)((ulong)param_3 + *(long *)(*param_1 + 0x920)),(ulong)param_5);
LAB_1003595d4:
                    /* WARNING: Could not recover jumptable at 0x0001003595f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[5] + 0x20))
                ((long *)param_1[5],lVar2,param_3,(ulong)param_4,(ulong)param_5,param_6);
      return;
    }
    for (puVar1 = (uint *)param_1[(ulong)((param_2 >> 0xc ^ param_2) & 0xfff ^ param_2 >> 0x18) +
                                  0x100d]; puVar1 != (uint *)0x0; puVar1 = *(uint **)(puVar1 + 4)) {
      if (*puVar1 == param_2) {
        if (*(long *)(puVar1 + 2) == 0) {
          return;
        }
        lVar2 = *(long *)(*(long *)(puVar1 + 2) + 8);
        goto LAB_1003595d4;
      }
    }
  }
  return;
}

