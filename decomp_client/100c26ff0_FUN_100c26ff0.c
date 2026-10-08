
uint FUN_100c26ff0(long *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = (int)param_1[1];
  uVar5 = 0;
  if ((long)iVar2 != 0) {
    iVar4 = (iVar2 + -1) * 0x40;
    iVar2 = FUN_100c26520(*(undefined8 *)(*param_1 + -8 + (long)iVar2 * 8));
    uVar5 = 0;
    if (0xe < (uint)(iVar4 + 0xe + iVar2)) {
      iVar2 = iVar4 + 7 + iVar2;
      uVar5 = (int)(((uint)(iVar2 >> 0x1f) >> 0x1d) + iVar2) >> 3;
      uVar1 = uVar5 - 1;
      uVar3 = uVar5;
      if ((uVar5 & 1) != 0) {
        iVar2 = (uVar5 - 1) + ((uint)((int)uVar1 >> 0x1f) >> 0x1d);
        *param_2 = (char)(*(ulong *)(*param_1 + (long)(iVar2 >> 3) * 8) >>
                         (((char)uVar1 - ((byte)iVar2 & 0x18)) * '\b' & 0x3f));
        param_2 = param_2 + 1;
        uVar3 = uVar1;
      }
      if (uVar1 != 0) {
        iVar2 = uVar3 - 1;
        do {
          iVar4 = ((uint)(iVar2 >> 0x1f) >> 0x1d) + iVar2;
          *param_2 = (char)(*(ulong *)(*param_1 + (long)(iVar4 >> 3) * 8) >>
                           (((char)iVar2 - ((byte)iVar4 & 0x18)) * '\b' & 0x3f));
          iVar4 = iVar2 + -1 + ((uint)(iVar2 + -1 >> 0x1f) >> 0x1d);
          param_2[1] = (char)(*(ulong *)(*param_1 + (long)(iVar4 >> 3) * 8) >>
                             ((((char)iVar2 + -1) - ((byte)iVar4 & 0x18)) * '\b' & 0x3f));
          iVar2 = iVar2 + -2;
          param_2 = param_2 + 2;
        } while (iVar2 != -1);
      }
    }
  }
  return uVar5;
}

