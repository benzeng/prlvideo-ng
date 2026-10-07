
byte FUN_1006a91d0(long *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  
  if (*param_1 == 0) {
    FUN_1008e3970("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","m_Bitmap != NULL",
                  "ReclaimGuestBitmap.cpp",0x97,"at");
  }
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 <= param_2) {
    FUN_1008e3970("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","i < m_SizeBits",
                  "ReclaimGuestBitmap.cpp",0x98,"at");
    uVar2 = *(uint *)((long)param_1 + 0xc);
  }
  bVar1 = 0;
  if (param_2 < uVar2) {
    param_2 = param_2 + (int)param_1[2];
    bVar1 = -((*(uint *)(*param_1 + (ulong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) & 1;
  }
  return bVar1;
}

