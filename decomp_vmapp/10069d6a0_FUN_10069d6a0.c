
void FUN_10069d6a0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x140);
  FUN_1007dae90(*(undefined8 *)(lVar1 + 0x40 + (long)param_1));
  *(undefined4 *)(lVar1 + 0x58 + (long)param_1) = 0;
  *(undefined8 *)(lVar1 + 0x50 + (long)param_1) = 0;
  *(undefined8 *)(lVar1 + 0x48 + (long)param_1) = 0;
  if (DAT_1011b55f8 < 4) {
    return;
  }
  FUN_1008e3970("Compact","dimg",4,"[%p] UsedBlocksMap resetted",
                *(undefined8 *)(lVar1 + 0x38 + (long)param_1));
  return;
}

