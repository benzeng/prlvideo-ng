
ulong FUN_100bce9c0(int *param_1,undefined2 *param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) + 0x18);
  iVar3 = *param_1;
  if ((iVar3 < 0x301) || ((uVar1 & 0x200) == 0)) {
    uVar2 = 0;
    if ((uVar1 & 10) != 0) {
      *param_2 = 0x403;
      iVar3 = *param_1;
      uVar2 = 2;
    }
    if (((uVar1 & 0xe) != 0) && (iVar3 == 0x300)) {
      *(undefined1 *)((long)param_2 + (ulong)uVar2) = 5;
      *(undefined1 *)((long)param_2 + (ulong)(uVar2 | 1)) = 6;
      uVar2 = (uVar2 | 1) + 1;
    }
    lVar5 = (long)(int)uVar2;
    *(undefined2 *)((long)param_2 + lVar5) = 0x201;
    uVar4 = lVar5 + 2;
    if ((uVar1 & 0x60) != 0) {
      if (*param_1 < 0x301) {
        return uVar4;
      }
      *(undefined1 *)((long)param_2 + uVar4) = 0x41;
      uVar4 = (ulong)(uVar2 + 4);
      *(undefined1 *)(lVar5 + 3 + (long)param_2) = 0x42;
    }
    if (0x300 < *param_1) {
      iVar3 = (int)uVar4;
      uVar4 = (ulong)(iVar3 + 1);
      *(undefined1 *)((long)param_2 + (long)iVar3) = 0x40;
    }
  }
  else {
    *param_2 = 0x1615;
    uVar4 = 2;
  }
  return uVar4;
}

