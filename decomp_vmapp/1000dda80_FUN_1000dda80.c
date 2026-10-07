
void FUN_1000dda80(undefined8 param_1,ushort param_2)

{
  if (DAT_1011c3760 == 0) {
    FUN_1000dce90();
    if (DAT_1011c3760 == 0) {
      return;
    }
  }
  if (*(ushort *)(DAT_1011c3760 + 4) <= param_2) {
    param_2 = *(ushort *)(DAT_1011c3760 + 4);
  }
  FUN_10008c9b0(DAT_1011c3688,param_1,DAT_1011c3760,param_2);
  return;
}

