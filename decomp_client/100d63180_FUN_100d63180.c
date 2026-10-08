
int FUN_100d63180(long param_1,long param_2,char *param_3,ushort *param_4,ushort *param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  __darwin_ct_rune_t _Var4;
  __darwin_ct_rune_t _Var5;
  long lVar6;
  ulong uVar7;
  size_t sVar8;
  long lVar9;
  short sVar10;
  int iVar11;
  long lVar12;
  uint *puVar13;
  ushort uVar14;
  ushort *local_48;
  
  if (*(long *)(param_1 + 8) != 0) {
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_100df99c0("","WinRegistry",0,"OA00004.10:");
    }
    else {
      puVar13 = (uint *)*puVar2;
      if ((1 < *puVar13) || (*(long *)(puVar13 + 4) != 0x18)) {
        QByteArray::reallocData(puVar2,puVar13[1] + 1,puVar13[2] >> 0x1f);
        puVar13 = (uint *)*puVar2;
      }
      lVar3 = *(long *)(puVar13 + 4);
      if ((long)puVar13 + lVar3 != 0) {
        lVar6 = (ulong)(*(int *)(param_2 + 0x1c) + 0x1004) + lVar3;
        sVar10 = *(short *)((long)puVar13 + lVar6);
        lVar9 = 0;
        uVar14 = 0xffff;
        if (sVar10 == 0x6972) {
          uVar14 = 0;
          lVar9 = (long)puVar13 + lVar6;
        }
        *param_5 = uVar14;
        do {
          if (lVar9 == 0) {
            uVar7 = (ulong)(*(int *)(param_2 + 0x1c) + 0x1004);
          }
          else {
            uVar7 = (ulong)(*(int *)(lVar9 + 4 + (ulong)uVar14 * 4) + 0x1004);
            sVar10 = *(short *)((long)puVar13 + uVar7 + lVar3);
          }
          if ((sVar10 == 0x666c) || (sVar10 == 0x686c)) {
            *param_4 = 0;
            lVar6 = lVar3 + 2 + uVar7;
            local_48 = (ushort *)((long)puVar13 + lVar6);
            if (*(short *)((long)puVar13 + lVar6) != 0) {
              lVar6 = lVar3 + 4 + uVar7;
              uVar14 = 0;
              do {
                iVar11 = *(int *)((long)puVar13 + (ulong)uVar14 * 8 + lVar6);
                sVar8 = _strlen(param_3);
                uVar1 = *(ushort *)((long)puVar13 + lVar3 + 0x48 + (ulong)(iVar11 + 0x1004));
                if (sVar8 == uVar1) {
                  if (uVar1 == 0) {
LAB_100d63542:
                    return iVar11 + 0x1004;
                  }
                  lVar12 = 0;
                  while( true ) {
                    _Var4 = ___toupper((int)param_3[lVar12]);
                    _Var5 = ___toupper((int)*(char *)((long)puVar13 +
                                                     lVar12 + (ulong)(iVar11 + 0x1004) +
                                                              lVar3 + 0x4c));
                    if ((char)_Var4 != (char)_Var5) break;
                    lVar12 = lVar12 + 1;
                    if ((int)(uint)uVar1 <= (int)lVar12) {
                      iVar11 = *(int *)((long)puVar13 + (ulong)*param_4 * 8 + lVar6);
                      goto LAB_100d63542;
                    }
                  }
                  uVar14 = *param_4;
                }
                uVar14 = uVar14 + 1;
                *param_4 = uVar14;
              } while (uVar14 < *local_48);
            }
            if (sVar10 == 0x696c) goto LAB_100d633d5;
          }
          else if (sVar10 == 0x696c) {
            local_48 = (ushort *)(lVar3 + 2 + uVar7 + (long)puVar13);
LAB_100d633d5:
            *param_4 = 0;
            if (*local_48 != 0) {
              lVar6 = uVar7 + lVar3 + 4;
              uVar14 = 0;
              do {
                iVar11 = *(int *)((long)puVar13 + (ulong)uVar14 * 4 + lVar6);
                sVar8 = _strlen(param_3);
                uVar1 = *(ushort *)((long)puVar13 + lVar3 + 0x48 + (ulong)(iVar11 + 0x1004));
                if (sVar8 == uVar1) {
                  if (uVar1 == 0) {
LAB_100d63558:
                    return iVar11 + 0x1004;
                  }
                  lVar12 = 0;
                  while( true ) {
                    _Var4 = ___toupper((int)param_3[lVar12]);
                    _Var5 = ___toupper((int)*(char *)((long)puVar13 +
                                                     lVar12 + (ulong)(iVar11 + 0x1004) +
                                                              lVar3 + 0x4c));
                    if ((char)_Var4 != (char)_Var5) break;
                    lVar12 = lVar12 + 1;
                    if ((int)(uint)uVar1 <= (int)lVar12) {
                      iVar11 = *(int *)((long)puVar13 + (ulong)*param_4 * 4 + lVar6);
                      goto LAB_100d63558;
                    }
                  }
                  uVar14 = *param_4;
                }
                uVar14 = uVar14 + 1;
                *param_4 = uVar14;
              } while (uVar14 < *local_48);
            }
          }
          if (lVar9 == 0) break;
          uVar14 = *param_5 + 1;
          *param_5 = uVar14;
        } while (uVar14 < *(ushort *)(lVar9 + 2));
        *param_4 = 0xffff;
        *param_5 = 0xffff;
        return -1;
      }
    }
  }
  FUN_100df99c0("","WinRegistry",0,"OA00002.01:");
  return -1;
}

