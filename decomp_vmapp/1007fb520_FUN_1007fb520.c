
int FUN_1007fb520(long param_1,int param_2,int param_3,int param_4)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int local_44;
  
  if (0 < param_2) {
    lVar2 = *(long *)(param_1 + 0x80);
    lVar11 = *(long *)(lVar2 + 0xf0);
    if (lVar11 == 0) {
      iVar3 = FUN_1007fe5e0(param_1);
      if (iVar3 == 0) {
        return -1;
      }
      lVar11 = *(long *)(lVar2 + 0xf0);
    }
    iVar3 = *(int *)(lVar2 + 0x104);
    uVar8 = -(int)lVar11 - 5;
    uVar9 = (ulong)uVar8 & 7;
    iVar7 = (int)uVar9;
    if (param_4 == 0) {
      if (iVar3 == 0) {
        *(int *)(lVar2 + 0x100) = iVar7;
        iVar5 = iVar7;
      }
      else {
        iVar5 = *(int *)(lVar2 + 0x100);
        if ((((4 < iVar3) && ((uVar8 & 7) != 0)) &&
            (lVar10 = (long)iVar5, *(char *)(lVar11 + lVar10) == '\x17')) &&
           (0x7f < CONCAT11(*(undefined1 *)(lVar10 + 3 + lVar11),
                            *(undefined1 *)(lVar10 + 4 + lVar11)))) {
          _memmove((void *)(lVar11 + uVar9),(void *)(lVar10 + lVar11),(long)iVar3);
          *(int *)(lVar2 + 0x100) = iVar7;
          lVar11 = *(long *)(lVar2 + 0xf0);
          iVar5 = iVar7;
        }
      }
      *(long *)(param_1 + 0x68) = iVar5 + lVar11;
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    iVar4 = FUN_1008115d0(param_1);
    iVar5 = param_2;
    if ((iVar4 == 0xfeff) || (iVar4 = FUN_1008115d0(param_1), iVar4 == 0x100)) {
      if ((param_4 != 0) && (iVar3 == 0)) {
        return 0;
      }
      if (iVar3 <= param_2) {
        iVar5 = iVar3;
      }
      if (iVar3 < 1) {
        iVar5 = param_2;
      }
    }
    iVar4 = *(int *)(param_1 + 0x70);
    if (iVar3 < iVar5) {
      lVar11 = *(long *)(lVar2 + 0xf0);
      pvVar1 = (void *)(lVar11 + uVar9);
      if (*(void **)(param_1 + 0x68) == pvVar1) {
        iVar7 = *(int *)(lVar2 + 0x100);
      }
      else {
        _memmove(pvVar1,*(void **)(param_1 + 0x68),(long)(iVar4 + iVar3));
        *(void **)(param_1 + 0x68) = pvVar1;
        iVar7 = iVar7 + iVar4;
        *(int *)(lVar2 + 0x100) = iVar7;
      }
      iVar7 = *(int *)(lVar2 + 0xf8) - iVar7;
      if (iVar7 < iVar5) {
        FUN_100887ce0(0x14,0x95,0x44,"s3_pkt.c",0xd8);
        param_2 = -1;
      }
      else {
        if ((*(int *)(param_1 + 0x90) != 0) || (local_44 = iVar5, **(int **)(param_1 + 8) == 0xfeff)
           ) {
          if (param_3 <= iVar5) {
            param_3 = iVar5;
          }
          local_44 = param_3;
          if (iVar7 < param_3) {
            local_44 = iVar7;
          }
        }
        do {
          piVar6 = ___error();
          *piVar6 = 0;
          if (*(long *)(param_1 + 0x10) == 0) {
            FUN_100887ce0(0x14,0x95,0xd3,"s3_pkt.c",0xf3);
            iVar7 = -1;
LAB_1007fb7f2:
            *(int *)(lVar2 + 0x104) = iVar3;
            if ((*(byte *)(param_1 + 0x1b0) & 0x10) == 0) {
              return iVar7;
            }
            iVar5 = FUN_1008115d0(param_1);
            if (iVar5 == 0xfeff) {
              return iVar7;
            }
            iVar5 = FUN_1008115d0(param_1);
            if (iVar3 + iVar4 != 0) {
              return iVar7;
            }
            if (iVar5 == 0x100) {
              return iVar7;
            }
            FUN_1007fea40(param_1);
            return iVar7;
          }
          *(undefined4 *)(param_1 + 0x28) = 3;
          iVar7 = FUN_10087d6a0(*(long *)(param_1 + 0x10),(long)iVar4 + uVar9 + (long)iVar3 + lVar11
                                ,local_44 - iVar3);
          if (iVar7 < 1) goto LAB_1007fb7f2;
          iVar3 = iVar7 + iVar3;
          iVar7 = FUN_1008115d0(param_1);
          param_2 = iVar3;
          if (iVar7 == 0xfeff) {
            if (iVar3 < iVar5) break;
          }
          else {
            iVar7 = FUN_1008115d0(param_1);
            if ((iVar3 < iVar5) && (iVar7 == 0x100)) break;
          }
          param_2 = iVar5;
        } while (iVar3 < iVar5);
        *(int *)(lVar2 + 0x100) = *(int *)(lVar2 + 0x100) + param_2;
        *(int *)(lVar2 + 0x104) = iVar3 - param_2;
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + param_2;
        *(undefined4 *)(param_1 + 0x28) = 1;
      }
    }
    else {
      *(int *)(param_1 + 0x70) = iVar4 + iVar5;
      *(int *)(lVar2 + 0x104) = iVar3 - iVar5;
      *(int *)(lVar2 + 0x100) = *(int *)(lVar2 + 0x100) + iVar5;
      param_2 = iVar5;
    }
  }
  return param_2;
}

