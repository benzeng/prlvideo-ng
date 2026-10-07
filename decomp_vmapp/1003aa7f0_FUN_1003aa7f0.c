
void FUN_1003aa7f0(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_1003aa890(*param_1);
  if (bVar1 == 0xf) {
    bVar2 = *(byte *)((long)param_1 + 0x31);
  }
  else {
    if ((bVar1 & 1) == 0) {
      if ((bVar1 & 2) == 0) {
        if ((bVar1 & 4) == 0) {
          bVar2 = 0xff;
          if ((bVar1 & 8) != 0) {
            bVar2 = *(byte *)((long)param_1 + 0x34);
          }
        }
        else {
          bVar2 = *(byte *)((long)param_1 + 0x33);
        }
      }
      else {
        bVar2 = *(byte *)((long)param_1 + 0x32);
      }
      *(byte *)((long)param_1 + 0x31) = bVar2;
    }
    else {
      bVar2 = *(byte *)((long)param_1 + 0x31);
    }
    if ((bVar1 & 2) == 0) {
      *(byte *)((long)param_1 + 0x32) = bVar2;
    }
    if ((bVar1 & 4) == 0) {
      *(byte *)((long)param_1 + 0x33) = bVar2;
    }
    if ((bVar1 & 8) == 0) {
      *(byte *)((long)param_1 + 0x34) = bVar2;
    }
  }
  *(byte *)(param_1 + 6) =
       (byte)(1 << (*(byte *)((long)param_1 + 0x34) & 0x1f)) |
       (byte)(1 << (*(byte *)((long)param_1 + 0x33) & 0x1f)) |
       (byte)(1 << (*(byte *)((long)param_1 + 0x32) & 0x1f)) | (byte)(1 << (bVar2 & 0x1f));
  return;
}

