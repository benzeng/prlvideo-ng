
ulong FUN_100ba1fc0(long param_1,long param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  
  for (uVar3 = 0;
      (((ulong)*(byte *)(param_2 + uVar3) < 0x3e &&
       ((0x2000000100000200U >> ((ulong)*(byte *)(param_2 + uVar3) & 0x3f) & 1) != 0)) &&
      ((long)uVar3 < (long)param_3)); uVar3 = uVar3 + 1) {
  }
  iVar4 = (int)uVar3;
  if (iVar4 < 0) {
    uVar3 = uVar3 & 0xffffffff;
  }
  else {
    uVar3 = uVar3 & 0xffffffff;
    if (iVar4 != param_3) {
      for (uVar3 = (long)iVar4;
          ((0x3d < (ulong)*(byte *)(param_2 + uVar3) ||
           ((0x2000000100000200U >> ((ulong)*(byte *)(param_2 + uVar3) & 0x3f) & 1) == 0)) &&
          ((long)uVar3 < (long)param_3)); uVar3 = uVar3 + 1) {
      }
      iVar5 = (int)uVar3;
      if (iVar5 < 0) {
        uVar3 = uVar3 & 0xffffffff;
      }
      else {
        uVar3 = 0xffffffff;
        if ((iVar5 < param_3) && (*(char *)(param_2 + iVar5) != '=')) {
          _strncpy((char *)(param_1 + 0x20),(char *)(iVar4 + param_2),(long)(iVar5 - iVar4));
          *(undefined1 *)(param_1 + 0x6f) = 0;
          lVar1 = param_1 + 0x290;
          *(long *)(param_1 + 0x298) = lVar1;
          *(long *)(param_1 + 0x290) = lVar1;
          iVar2 = FUN_100ba20d0(lVar1,iVar5 + param_2,param_3 - iVar5,param_1,param_4);
          iVar4 = 0;
          if (-1 < iVar2) {
            iVar4 = iVar5;
          }
          uVar3 = (ulong)(uint)(iVar2 + iVar4);
        }
      }
    }
  }
  return uVar3;
}

