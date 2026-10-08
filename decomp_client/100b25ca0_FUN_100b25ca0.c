
void FUN_100b25ca0(long param_1)

{
  FUN_100ddc470(*(undefined8 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (DAT_10230ffd0 < 4) {
    return;
  }
  FUN_100df99c0("Compact","dimg",4,"[%p] UsedBlocksMap resetted",*(undefined8 *)(param_1 + 0x38));
  return;
}

