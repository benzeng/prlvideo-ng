
bool FUN_100c2aab0(int param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *ptr;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  byte local_39;
  time_t local_38;
  
  if ((param_3 < 0) || ((param_3 == 1 && (0 < param_4)))) {
    uVar4 = 0x76;
    uVar6 = 0x7d;
LAB_100c2aaf7:
    FUN_100c62ee0(3,0x7f,uVar4,"bn_rand.c",uVar6);
    return false;
  }
  if (param_3 == 0) {
    FUN_100c26db0(param_2,0);
    return true;
  }
  iVar5 = (int)(param_3 + 7 + ((uint)(param_3 + 7 >> 0x1f) >> 0x1d)) >> 3;
  iVar7 = (param_3 + -1) - (param_3 + -1 + ((uint)(param_3 + -1 >> 0x1f) >> 0x1d) & 0xfffffff8);
  cVar1 = (char)iVar7;
  ptr = (byte *)FUN_100bf3540(iVar5,"bn_rand.c",0x8a);
  if (ptr == (byte *)0x0) {
    uVar4 = 0x41;
    uVar6 = 0x8c;
    goto LAB_100c2aaf7;
  }
  _time(&local_38);
  FUN_100c62060(0,&local_38,8);
  if (param_1 == 0) {
    iVar3 = FUN_100c62100(ptr,iVar5);
    bVar9 = false;
    if (iVar3 < 1) goto LAB_100c2ad03;
  }
  else {
    iVar3 = FUN_100c62190(ptr,iVar5);
    bVar9 = false;
    if (iVar3 == -1) goto LAB_100c2ad03;
    if (param_1 == 2) {
      bVar9 = false;
      lVar8 = 0;
      do {
        iVar3 = FUN_100c62190(&local_39,1);
        if (iVar3 < 0) goto LAB_100c2ad03;
        if ((lVar8 < 1) || (-1 < (char)local_39)) {
          if (local_39 < 0x2a) {
            ptr[lVar8] = 0;
          }
          else if (local_39 < 0x54) {
            ptr[lVar8] = 0xff;
          }
        }
        else {
          ptr[lVar8] = ptr[lVar8 + -1];
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar5);
    }
  }
  if (param_4 < 0) {
    bVar2 = *ptr;
  }
  else {
    if (param_4 == 0) {
      iVar3 = 1;
    }
    else {
      if (iVar7 == 0) {
        *ptr = 1;
        ptr[1] = ptr[1] | 0x80;
        bVar2 = 1;
        goto LAB_100c2acd2;
      }
      iVar7 = iVar7 + -1;
      iVar3 = 3;
    }
    bVar2 = *ptr | (byte)(iVar3 << ((byte)iVar7 & 0x1f));
    *ptr = bVar2;
  }
LAB_100c2acd2:
  *ptr = bVar2 & ~(byte)(0xff << (cVar1 + 1U & 0x1f));
  if (param_5 != 0) {
    ptr[(long)iVar5 + -1] = ptr[(long)iVar5 + -1] | 1;
  }
  lVar8 = FUN_100c26e20(ptr,iVar5,param_2);
  bVar9 = lVar8 != 0;
LAB_100c2ad03:
  _OPENSSL_cleanse(ptr,(long)iVar5);
  FUN_100bf3910(ptr);
  return bVar9;
}

