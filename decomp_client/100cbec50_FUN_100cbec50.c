
bool FUN_100cbec50(long param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  char *ptr;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  size_t len;
  bool bVar7;
  
  if ((param_3 == 0) && ((param_2 == 0 && param_4 == 0) && param_5 == 0)) {
    if (*(int *)(param_1 + 0x128) == -1) {
      return false;
    }
    iVar4 = FUN_100c66e00(param_1,0,0,0,&DAT_102318740);
    if (iVar4 == 0) {
      return false;
    }
    iVar4 = FUN_100c6fb80(param_1);
    len = (size_t)iVar4;
  }
  else {
    if (param_4 == 0) {
      bVar7 = true;
    }
    else {
      iVar4 = FUN_100c66e00(param_1,param_4,param_5,0,0);
      bVar7 = iVar4 != 0;
      if (iVar4 == 0) {
        return false;
      }
    }
    if (param_2 == 0) {
      return bVar7;
    }
    lVar6 = FUN_100c6fba0(param_1);
    if (lVar6 == 0) {
      return false;
    }
    iVar4 = FUN_100c66f00(param_1,param_3 & 0xffffffff);
    if (iVar4 == 0) {
      return false;
    }
    iVar4 = FUN_100c66e00(param_1,0,0,param_2,&DAT_102318740);
    if (iVar4 == 0) {
      return false;
    }
    iVar4 = FUN_100c6fb80(param_1);
    ptr = (char *)(param_1 + 0xe8);
    iVar5 = FUN_100c6fb90(param_1,ptr,&DAT_102318740,iVar4);
    if (iVar5 == 0) {
      return false;
    }
    if (0 < iVar4) {
      lVar6 = 0;
      do {
        bVar3 = *(char *)(param_1 + 0xe8 + lVar6) * '\x02';
        *(byte *)(param_1 + 0xa8 + lVar6) = bVar3;
        lVar1 = lVar6 + 1;
        if ((lVar6 < iVar4 + -1) && (*(char *)(param_1 + 0xe9 + lVar6) < '\0')) {
          *(byte *)(param_1 + 0xa8 + lVar6) = bVar3 | 1;
        }
        lVar6 = lVar1;
      } while (iVar4 != (int)lVar1);
    }
    if (*ptr < '\0') {
      bVar3 = 0x87;
      if (iVar4 != 0x10) {
        bVar3 = 0x1b;
      }
      pbVar2 = (byte *)((long)iVar4 + 0xa7 + param_1);
      *pbVar2 = *pbVar2 ^ bVar3;
    }
    if (0 < iVar4) {
      lVar6 = 0;
      do {
        bVar3 = *(char *)(param_1 + 0xa8 + lVar6) * '\x02';
        *(byte *)(param_1 + 200 + lVar6) = bVar3;
        lVar1 = lVar6 + 1;
        if ((lVar6 < iVar4 + -1) && (*(char *)(param_1 + 0xa9 + lVar6) < '\0')) {
          *(byte *)(param_1 + 200 + lVar6) = bVar3 | 1;
        }
        lVar6 = lVar1;
      } while (iVar4 != (int)lVar1);
    }
    if (*(char *)(param_1 + 0xa8) < '\0') {
      bVar3 = 0x87;
      if (iVar4 != 0x10) {
        bVar3 = 0x1b;
      }
      pbVar2 = (byte *)((long)iVar4 + 199 + param_1);
      *pbVar2 = *pbVar2 ^ bVar3;
    }
    len = (size_t)iVar4;
    _OPENSSL_cleanse(ptr,len);
    iVar4 = FUN_100c66e00(param_1,0,0,0,&DAT_102318740);
    if (iVar4 == 0) {
      return false;
    }
  }
  ___bzero(param_1 + 0xe8,len);
  *(undefined4 *)(param_1 + 0x128) = 0;
  return true;
}

