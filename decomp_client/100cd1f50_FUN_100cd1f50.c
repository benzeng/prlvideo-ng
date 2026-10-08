
void FUN_100cd1f50(long param_1)

{
  if ((*(long *)(param_1 + 0x50) != 0) && (-1 < *(int *)(*(long *)(param_1 + 0x50) + 0x10))) {
    QTimer::stop();
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x000100cd1f93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x60) + 0xd8))(*(long **)(param_1 + 0x60),param_1 + 0x70,1);
    return;
  }
  return;
}

