
void FUN_100be4280(long param_1)

{
  if (*(long *)(param_1 + 0x30) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0x6000;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x20);
    FUN_100be2de0(param_1);
    if (*(long *)(param_1 + 0xd8) != 0) {
      FUN_100c66030();
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    if (*(long *)(param_1 + 0xf0) != 0) {
      FUN_100c66030();
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000100be42fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x20))(param_1);
  return;
}

