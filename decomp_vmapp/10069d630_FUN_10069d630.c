
void FUN_10069d630(long param_1)

{
  FUN_1007dae90(*(undefined8 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (DAT_1011b55f8 < 4) {
    return;
  }
  FUN_1008e3970("Compact","dimg",4,"[%p] UsedBlocksMap resetted",*(undefined8 *)(param_1 + 0x38));
  return;
}

