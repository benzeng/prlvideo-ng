
void FUN_1003283e0(undefined8 *param_1,uint param_2)

{
  if ((param_2 & 0x200) != 0) {
    if (*(int *)((long)param_1 + 0xa69c) == 0) {
      FUN_1002faad0(*param_1,param_1 + 0x14cd,param_1[0x14cf],*(undefined1 *)(param_1 + 1),1);
      if (*(int *)((long)param_1 + 0xa69c) == 0) goto LAB_1003284d4;
    }
    (*DAT_1011c5738)(0x8ca9,*(undefined4 *)(param_1 + 0x14d0));
    (*(code *)DAT_1011c4a88[0x43])(*DAT_1011c4a88,*(undefined4 *)((long)param_1 + 0xa69c));
    (*(code *)DAT_1011c4a88[0xd])
              (*(undefined4 *)(param_1 + 0x2a),*(undefined4 *)((long)param_1 + 0x154),
               *(undefined4 *)(param_1 + 0x2b),*(undefined4 *)((long)param_1 + 0x15c),*DAT_1011c4a88
              );
    (*(code *)DAT_1011c4a88[0xb])(*DAT_1011c4a88,0x4000);
    (*(code *)DAT_1011c4a88[0xd])
              (*(undefined4 *)(param_1 + 0x22),*(undefined4 *)((long)param_1 + 0x114),
               *(undefined4 *)(param_1 + 0x23),*(undefined4 *)((long)param_1 + 0x11c),*DAT_1011c4a88
              );
    FUN_100301c10(param_1 + 7);
  }
LAB_1003284d4:
  if ((param_2 & 0xfffffdff) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003284f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)DAT_1011c4a88[0xb])(*DAT_1011c4a88,param_2 & 0xfffffdff);
    return;
  }
  return;
}

