
void FUN_1003265e0(long param_1)

{
  undefined8 in_stack_00000008;
  int iStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",3,
                  " GUEST screen size received by Display #%d: displayId=%d, size=%dx%d, pos=(%d,%d)"
                  ,*(undefined4 *)(param_1 + 0x30),iStack0000000000000018,(int)in_stack_00000008,
                  (int)((ulong)in_stack_00000008 >> 0x20),uStack000000000000001c,in_stack_00000020);
  }
  if (iStack0000000000000018 == *(int *)(param_1 + 0x30)) {
    FUN_1003261e0(param_1);
    if (((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) &&
       (*(long **)(param_1 + 0x78) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010032668e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x78) + 0x78))();
      return;
    }
  }
  return;
}

