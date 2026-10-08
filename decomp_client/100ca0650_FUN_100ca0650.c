
undefined8 FUN_100ca0650(byte *param_1,int param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  iVar2 = *(int *)(param_3 + 0x10);
  lVar5 = (long)iVar2;
  if (lVar5 == 0x10) {
    return 0;
  }
  if (param_2 == 0) {
    if (*(int *)(param_3 + 0x14) == -1) {
      *(int *)(param_3 + 0x14) = iVar2;
      *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
    }
    else {
      if (*(int *)(param_3 + 0x14) != iVar2) {
        return 0;
      }
      *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
    }
  }
  else if (param_2 < 5) {
    uVar3 = 0;
    do {
      bVar1 = *param_1;
      uVar4 = (uint)bVar1;
      if ((byte)(bVar1 - 0x30) < 10) {
        uVar4 = uVar4 - 0x30;
      }
      else if ((byte)(bVar1 + 0xbf) < 6) {
        uVar4 = uVar4 - 0x37;
      }
      else {
        if (5 < (byte)(bVar1 + 0x9f)) {
          return 0;
        }
        uVar4 = uVar4 - 0x57;
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      uVar3 = uVar3 << 4 | uVar4;
    } while (param_2 != 0);
    *(char *)(param_3 + lVar5) = (char)(uVar3 >> 8);
    *(char *)(param_3 + 1 + lVar5) = (char)uVar3;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 2;
  }
  else {
    if (0xc < iVar2) {
      return 0;
    }
    if (param_1[param_2] != 0) {
      return 0;
    }
    iVar2 = _sscanf((char *)param_1,"%d.%d.%d.%d",&local_24,&local_28,&local_2c,&local_30);
    if (iVar2 != 4) {
      return 0;
    }
    if (0xff < (local_28 | local_24 | local_2c | local_30)) {
      return 0;
    }
    *(char *)(param_3 + lVar5) = (char)local_24;
    *(char *)(param_3 + 1 + lVar5) = (char)local_28;
    *(char *)(param_3 + 2 + lVar5) = (char)local_2c;
    *(char *)(param_3 + 3 + lVar5) = (char)local_30;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 4;
  }
  return 1;
}

