
ulong FUN_100ae7e50(long *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  undefined1 local_48 [32];
  
  lVar4 = *param_1;
  if (0 < *(int *)(lVar4 + 4)) {
    iVar1 = *param_2;
    iVar2 = param_2[1];
    uVar5 = 0;
    do {
      _CGDisplayBounds(local_48,*(undefined4 *)(lVar4 + *(long *)(lVar4 + 0x10) + uVar5 * 4));
      cVar3 = _CGRectContainsPoint((double)iVar1,(double)iVar2);
      if (cVar3 != '\0') {
        return uVar5 & 0xffffffff;
      }
      uVar5 = uVar5 + 1;
      lVar4 = *param_1;
    } while ((long)uVar5 < (long)*(int *)(lVar4 + 4));
  }
  return 0;
}

