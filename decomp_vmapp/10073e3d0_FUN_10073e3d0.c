
bool FUN_10073e3d0(int param_1,long param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *ptr;
  long lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  byte local_39;
  time_t local_38;
  
  if (param_3 == 0) {
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    return true;
  }
  iVar5 = (int)(param_3 + 7 + ((uint)(param_3 + 7 >> 0x1f) >> 0x1d)) >> 3;
  iVar6 = (param_3 + -1) - (param_3 + -1 + ((uint)(param_3 + -1 >> 0x1f) >> 0x1d) & 0xfffffff8);
  bVar1 = (byte)iVar6;
  ptr = (byte *)FUN_10081ddd0(iVar5,"../src/snlic/sn_crypto_helper_29.c",0x97);
  if (ptr == (byte *)0x0) {
    return false;
  }
  _time(&local_38);
  FUN_100886e60(0,&local_38,8);
  if (param_1 == 0) {
    iVar3 = FUN_100886f00(ptr,iVar5);
    bVar7 = false;
    if (iVar3 < 1) goto LAB_10073e5e5;
  }
  else {
    iVar3 = FUN_100886f90(ptr,iVar5);
    bVar7 = false;
    if (iVar3 == -1) goto LAB_10073e5e5;
    if ((param_1 == 2) && (0 < param_3)) {
      lVar4 = 0;
      do {
        FUN_100886f90(&local_39,1);
        if ((lVar4 < 1) || (-1 < (char)local_39)) {
          if (local_39 < 0x2a) {
            ptr[lVar4] = 0;
          }
          else if (local_39 < 0x54) {
            ptr[lVar4] = 0xff;
          }
        }
        else {
          ptr[lVar4] = ptr[lVar4 + -1];
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar5);
    }
  }
  if (param_4 == 0) {
    bVar2 = *ptr | (byte)(1 << (bVar1 & 0x1f));
    *ptr = bVar2;
  }
  else if (param_4 == -1) {
    bVar2 = *ptr;
  }
  else if (iVar6 == 0) {
    *ptr = 1;
    ptr[1] = ptr[1] | 0x80;
    bVar2 = 1;
  }
  else {
    bVar2 = *ptr | (byte)(3 << (bVar1 - 1 & 0x1f));
    *ptr = bVar2;
  }
  *ptr = bVar2 & ~(byte)(0xff << (bVar1 + 1 & 0x1f));
  if (param_5 != 0) {
    ptr[(long)iVar5 + -1] = ptr[(long)iVar5 + -1] | 1;
  }
  lVar4 = FUN_10072bbb0(ptr,iVar5,param_2);
  bVar7 = lVar4 != 0;
LAB_10073e5e5:
  _OPENSSL_cleanse(ptr,(long)iVar5);
  FUN_10081e1a0(ptr);
  return bVar7;
}

