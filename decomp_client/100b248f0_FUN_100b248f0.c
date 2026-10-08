
void FUN_100b248f0(undefined8 *param_1)

{
  FUN_100ddc470(param_1[1]);
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (DAT_10230ffd0 < 4) {
    return;
  }
  FUN_100df99c0("Compact","dimg",4,"[%p] UsedBlocksMap resetted",*param_1);
  return;
}

