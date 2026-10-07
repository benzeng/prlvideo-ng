
void FUN_100821350(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = DAT_1011c06d0;
  if (DAT_1011c06d0 != 0) {
    uVar1 = *(undefined8 *)(DAT_1011c06d0 + 0x30);
    DAT_1011c06e0 = param_1;
    *(undefined8 *)(DAT_1011c06d0 + 0x30) = 0;
    FUN_100885ea0(lVar2,FUN_1008213d0);
    if (param_1 < 0) {
      FUN_100885960();
      FUN_100885590(DAT_1011c06d8,FUN_100821470);
      DAT_1011c06d0 = 0;
      DAT_1011c06d8 = 0;
    }
    else {
      *(undefined8 *)(DAT_1011c06d0 + 0x30) = uVar1;
    }
  }
  return;
}

