
void FUN_100750070(long *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x68) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  if (*(long *)(param_2 + 0x50) != 0) {
    (**(code **)(**(long **)(param_2 + 0x38) + 0x18))
              (*(long **)(param_2 + 0x38),param_1,*(undefined8 *)(param_2 + 0x48),
               *(undefined4 *)(param_2 + 0x60));
  }
  if (*(long *)(param_2 + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001007500c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1);
    return;
  }
  return;
}

