
ulong FUN_100ae7a50(long *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  lVar4 = *param_1;
  if (0 < *(int *)(lVar4 + 4)) {
    uVar5 = 0;
    do {
      iVar1 = *param_2;
      iVar2 = param_2[1];
      _CGDisplayBounds(&local_50,*(undefined4 *)(lVar4 + *(long *)(lVar4 + 0x10) + uVar5 * 4));
      cVar3 = _CGRectContainsPoint((double)iVar1,(double)iVar2);
      if (cVar3 != '\0') {
        if (param_3 != (int *)0x0) {
          *param_3 = (int)local_50;
          param_3[1] = (int)local_48;
          param_3[2] = (int)local_50 + -1 + (int)local_40;
          param_3[3] = (int)local_48 + -1 + (int)local_38;
        }
        goto LAB_100ae7b27;
      }
      uVar5 = uVar5 + 1;
      lVar4 = *param_1;
    } while ((long)uVar5 < (long)*(int *)(lVar4 + 4));
  }
  uVar5 = 0xffffffff;
LAB_100ae7b27:
  return uVar5 & 0xffffffff;
}

