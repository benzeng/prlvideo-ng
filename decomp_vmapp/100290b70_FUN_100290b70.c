
void FUN_100290b70(long *param_1)

{
  *(undefined4 *)
   ((ulong)*(ushort *)((long)param_1 + 0xfee) * 0x80 + param_1[0x200] + 0x4110 +
   (ulong)*(ushort *)(param_1 + 0x1fe) * 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x000100290b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))();
  return;
}

