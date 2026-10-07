
void FUN_10069c280(undefined8 *param_1)

{
  FUN_1007dae90(param_1[1]);
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (DAT_1011b55f8 < 4) {
    return;
  }
  FUN_1008e3970("Compact","dimg",4,"[%p] UsedBlocksMap resetted",*param_1);
  return;
}

