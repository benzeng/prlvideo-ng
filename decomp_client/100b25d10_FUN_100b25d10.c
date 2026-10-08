
void FUN_100b25d10(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x140);
  FUN_100ddc470(*(undefined8 *)(lVar1 + 0x40 + (long)param_1));
  *(undefined4 *)(lVar1 + 0x58 + (long)param_1) = 0;
  *(undefined8 *)(lVar1 + 0x50 + (long)param_1) = 0;
  *(undefined8 *)(lVar1 + 0x48 + (long)param_1) = 0;
  if (DAT_10230ffd0 < 4) {
    return;
  }
  FUN_100df99c0("Compact","dimg",4,"[%p] UsedBlocksMap resetted",
                *(undefined8 *)(lVar1 + 0x38 + (long)param_1));
  return;
}

