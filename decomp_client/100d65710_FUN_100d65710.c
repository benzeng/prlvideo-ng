
undefined8 FUN_100d65710(long param_1,char *param_2,int param_3,int param_4,int *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  __darwin_ct_rune_t _Var9;
  __darwin_ct_rune_t _Var10;
  size_t sVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  
  if (*(long *)(param_1 + 8) != 0) {
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_100df99c0("","WinRegistry",0,"OA00004.10:");
    }
    else {
      puVar15 = (uint *)*puVar5;
      if ((1 < *puVar15) || (*(long *)(puVar15 + 4) != 0x18)) {
        QByteArray::reallocData(puVar5,puVar15[1] + 1,puVar15[2] >> 0x1f);
        puVar15 = (uint *)*puVar5;
      }
      lVar6 = *(long *)(puVar15 + 4);
      if ((long)puVar15 + lVar6 != 0) {
        lVar1 = lVar6 + (ulong)(param_4 + 0x1004);
        if ((*(short *)((long)puVar15 + lVar1) != 0x666c) &&
           (*(short *)((long)puVar15 + lVar1) != 0x686c)) {
          FUN_100df99c0("","WinRegistry",0,"OA00002.71:");
          return 0x815800a;
        }
        sVar11 = _strlen(param_2);
        uVar12 = FUN_100d69e90(*(undefined8 *)(param_1 + 8),
                               (uint)*(ushort *)((long)puVar15 + lVar1 + 2) * 4 + 8,param_5);
        if ((int)uVar12 != 0x8000000) {
          return uVar12;
        }
        lVar3 = (ulong)(param_4 + 0x1004) + 2 + lVar6;
        lVar13 = (ulong)(*param_5 + 4) + lVar6;
        *(undefined2 *)((long)puVar15 + lVar13) = 0x696c;
        *(short *)((long)puVar15 + lVar13 + 2) = *(short *)((long)puVar15 + lVar3) + 1;
        if (*(short *)((long)puVar15 + lVar3) == 0) {
          lVar13 = (long)puVar15 + lVar13 + 4;
          uVar8 = 0xffffffff;
          uVar14 = 0;
        }
        else {
          lVar13 = (long)puVar15 + lVar13 + 4;
          uVar8 = 0xffffffff;
          uVar17 = 0;
          uVar19 = 0;
          do {
            if (uVar8 == 0xffffffff) {
              uVar18 = (ulong)(*(int *)((long)puVar15 + uVar17 * 8 + lVar1 + 4) + 0x1004);
              lVar2 = lVar6 + 0x48 + uVar18;
              uVar4 = *(ushort *)((long)puVar15 + lVar2);
              uVar14 = (uint)sVar11;
              uVar8 = (uint)uVar4;
              if ((int)uVar14 <= (int)(uint)uVar4) {
                uVar8 = uVar14;
              }
              if (0 < (int)uVar8) {
                lVar20 = 0;
                do {
                  _Var9 = ___toupper((int)param_2[lVar20]);
                  _Var10 = ___toupper((int)*(char *)((long)puVar15 + lVar20 + uVar18 + lVar6 + 0x4c)
                                     );
                  iVar7 = (_Var9 - _Var10) * 0x1000000;
                  if (iVar7 != 0) {
                    uVar8 = 0xffffffff;
                    if (iVar7 < 0) goto LAB_100d65967;
                    goto LAB_100d65970;
                  }
                  lVar20 = lVar20 + 1;
                } while ((int)lVar20 < (int)uVar8);
                uVar4 = *(ushort *)((long)puVar15 + lVar2);
              }
              if (uVar14 == uVar4) {
                FUN_100df99c0("","WinRegistry",0,"OA00002.72:\t%s",param_2);
                FUN_100d6a060(*(undefined8 *)(param_1 + 8),*param_5);
                return 0x815800e;
              }
              uVar8 = 0xffffffff;
              if ((int)uVar14 < (int)(uint)uVar4) {
LAB_100d65967:
                uVar19 = uVar19 + 1;
                uVar8 = (uint)uVar17;
              }
            }
LAB_100d65970:
            *(undefined4 *)(lVar13 + (ulong)(uVar19 & 0xffff) * 4) =
                 *(undefined4 *)((long)puVar15 + uVar17 * 8 + lVar1 + 4);
            uVar19 = uVar19 + 1;
            uVar16 = (uint)uVar17 + 1 & 0xffff;
            uVar17 = (ulong)uVar16;
            uVar14 = (uint)*(ushort *)((long)puVar15 + lVar3);
          } while (uVar16 < *(ushort *)((long)puVar15 + lVar3));
        }
        if (-1 < (int)uVar8) {
          uVar14 = uVar8;
        }
        *(int *)(lVar13 + (long)(int)uVar14 * 4) = param_3 + -0x1000;
        uVar12 = FUN_100d6a060(*(undefined8 *)(param_1 + 8),param_4 + 0x1000);
        return uVar12;
      }
    }
  }
  FUN_100df99c0("","WinRegistry",0,"OA00002.70:");
  return 0x8158002;
}

