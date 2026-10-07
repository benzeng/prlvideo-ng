
void FUN_1008214b0(void)

{
  long lVar1;
  
  lVar1 = DAT_1011c06e8;
  if (DAT_1011ccc04 != 0) {
    DAT_1011ccc04 = 2;
    return;
  }
  if (DAT_1011c06e8 != 0) {
    *(undefined8 *)(DAT_1011c06e8 + 0x30) = 0;
    FUN_100885ea0(lVar1,FUN_100821530);
    FUN_100885ea0(DAT_1011c06e8,FUN_100821550);
    FUN_100885ea0(DAT_1011c06e8,FUN_100821560);
    FUN_100885960(DAT_1011c06e8);
    DAT_1011c06e8 = 0;
  }
  return;
}

