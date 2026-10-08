
void FUN_100cd1f00(long param_1)

{
  QTimer::stop();
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x28);
  (**(code **)(**(long **)(param_1 + 0x60) + 0xd8))(*(long **)(param_1 + 0x60),param_1 + 0x70,1);
                    /* WARNING: Could not recover jumptable at 0x000100cd1f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x60) + 0xd8))(*(long **)(param_1 + 0x60),param_1 + 0x70,0);
  return;
}

