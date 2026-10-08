
ulong FUN_100bd1760(int *param_1,int param_2,long param_3,int param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  int iVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((param_4 < *(int *)(lVar1 + 0x1a4)) ||
     (((*(long *)(lVar1 + 0x1b0) != param_3 && ((*(byte *)(param_1 + 0x6c) & 2) == 0)) ||
      (*(int *)(lVar1 + 0x1a8) != param_2)))) {
    FUN_100c62ee0(0x14,0x9f,0x7f,"s3_pkt.c",0x399);
    uVar3 = 0xffffffff;
  }
  else {
    while( true ) {
      piVar4 = ___error();
      *piVar4 = 0;
      if (*(long *)(param_1 + 6) == 0) {
        FUN_100c62ee0(0x14,0x9f,0x80,"s3_pkt.c",0x3a5);
        uVar3 = 0xffffffff;
      }
      else {
        param_1[10] = 2;
        uVar3 = FUN_100c58980(*(long *)(param_1 + 6),
                              (long)*(int *)(lVar1 + 0x118) + *(long *)(lVar1 + 0x108),
                              *(undefined4 *)(lVar1 + 0x11c));
      }
      iVar2 = (int)uVar3;
      iVar5 = *(int *)(lVar1 + 0x11c) - iVar2;
      if (iVar5 == 0) {
        *(undefined4 *)(lVar1 + 0x11c) = 0;
        *(int *)(lVar1 + 0x118) = *(int *)(lVar1 + 0x118) + iVar2;
        if ((((*(byte *)(param_1 + 0x6c) & 0x10) != 0) &&
            (iVar2 = FUN_100be6d40(param_1), iVar2 != 0xfeff)) &&
           (iVar2 = FUN_100be6d40(param_1), iVar2 != 0x100)) {
          FUN_100bd4080(param_1);
        }
        param_1[10] = 1;
        return (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x1ac);
      }
      if (iVar2 < 1) break;
      *(int *)(lVar1 + 0x118) = *(int *)(lVar1 + 0x118) + iVar2;
      *(int *)(lVar1 + 0x11c) = iVar5;
    }
    if ((*param_1 == 0x100) || (*param_1 == 0xfeff)) {
      *(undefined4 *)(lVar1 + 0x11c) = 0;
    }
  }
  return uVar3;
}

