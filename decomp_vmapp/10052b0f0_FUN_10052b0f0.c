
/* WARNING: Type propagation algorithm not settling */

bool FUN_10052b0f0(long param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  Data *pDVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  bool bVar13;
  int local_4c;
  int local_48 [2];
  Data *local_40;
  undefined1 local_31;
  
  if (param_2 != '\0') {
    return true;
  }
  local_40 = (Data *)PTR_shared_null_100ba2188;
  local_48[1] = 0;
  FUN_10052c0d0(&local_40,local_48 + 1);
  lVar10 = *(long *)(param_1 + 8);
LAB_10052b140:
  iVar12 = *(int *)(local_40 + 8);
  iVar5 = *(int *)(local_40 + 0xc);
  if (iVar5 - iVar12 == *(int *)(lVar10 + 4)) goto LAB_10052b2b5;
  local_48[0] = 0;
  local_4c = 0;
  if (0 < *(int *)(lVar10 + 4)) {
    do {
      iVar2 = local_48[0];
      if (iVar12 != iVar5) {
        pDVar6 = local_40 + (long)iVar12 * 8 + 0x10;
        lVar9 = (long)iVar5 * 8 + (long)iVar12 * -8;
        do {
          if (*(int *)pDVar6 == local_48[0]) goto LAB_10052b290;
          pDVar6 = pDVar6 + 8;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      if (iVar12 < iVar5) {
        lVar9 = (long)local_48[0];
        iVar12 = 0;
        do {
          piVar3 = (int *)FUN_10052c020(&local_40,iVar12);
          lVar10 = *(long *)(param_1 + 8);
          lVar4 = *(long *)(lVar10 + 0x10) + lVar10;
          lVar11 = (long)*piVar3 * 0x20;
          iVar5 = *(int *)(lVar11 + 0x18 + lVar4);
          lVar7 = lVar9 * 0x20;
          iVar8 = *(int *)(lVar7 + 0x18 + lVar4);
          iVar1 = iVar8;
          if (iVar8 <= iVar5) {
            iVar1 = iVar5;
          }
          iVar5 = (uint)*(ushort *)(lVar11 + 4 + lVar4) + iVar5;
          iVar8 = (uint)*(ushort *)(lVar7 + 4 + lVar4) + iVar8;
          if (iVar5 <= iVar8) {
            iVar8 = iVar5;
          }
          if (iVar1 <= iVar8) {
            iVar5 = *(int *)(lVar4 + 0x1c + lVar11);
            iVar8 = *(int *)(lVar4 + 0x1c + lVar7);
            iVar1 = iVar8;
            if (iVar8 <= iVar5) {
              iVar1 = iVar5;
            }
            iVar5 = (uint)*(ushort *)(lVar4 + 6 + lVar11) + iVar5;
            iVar8 = (uint)*(ushort *)(lVar4 + 6 + lVar7) + iVar8;
            if (iVar5 <= iVar8) {
              iVar8 = iVar5;
            }
            if (iVar1 <= iVar8) {
              FUN_10077ced0(&local_40,local_48);
              local_4c = local_4c + 1;
              lVar10 = *(long *)(param_1 + 8);
              break;
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(int *)(local_40 + 0xc) - *(int *)(local_40 + 8));
      }
LAB_10052b290:
      local_48[0] = iVar2 + 1;
      if (*(int *)(lVar10 + 4) <= local_48[0]) goto code_r0x00010052b2a1;
      iVar12 = *(int *)(local_40 + 8);
      iVar5 = *(int *)(local_40 + 0xc);
    } while( true );
  }
  goto LAB_10052b2ab;
code_r0x00010052b2a1:
  if (local_4c == 0) {
LAB_10052b2ab:
    iVar12 = *(int *)(local_40 + 8);
    iVar5 = *(int *)(local_40 + 0xc);
LAB_10052b2b5:
    bVar13 = iVar5 - iVar12 == *(int *)(lVar10 + 4);
    if (*(int *)local_40 == -1) {
      return bVar13;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return bVar13;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
    return bVar13;
  }
  goto LAB_10052b140;
}

