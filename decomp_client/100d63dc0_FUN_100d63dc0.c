
ulong FUN_100d63dc0(long param_1,char *param_2,int param_3,int param_4,int *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  __darwin_ct_rune_t _Var7;
  __darwin_ct_rune_t _Var8;
  size_t sVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ushort uVar19;
  ulong uVar20;
  uint uVar21;
  
  if (*(long *)(param_1 + 8) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_100df99c0("","WinRegistry",0,"OA00004.10:");
    }
    else {
      puVar11 = (uint *)*puVar4;
      if ((1 < *puVar11) || (*(long *)(puVar11 + 4) != 0x18)) {
        QByteArray::reallocData(puVar4,puVar11[1] + 1,puVar11[2] >> 0x1f);
        puVar11 = (uint *)*puVar4;
      }
      lVar16 = *(long *)(puVar11 + 4);
      if ((long)puVar11 + lVar16 != 0) {
        lVar3 = lVar16 + (ulong)(param_4 + 0x1004);
        sVar9 = _strlen(param_2);
        if ((*(short *)((long)puVar11 + lVar3) != 0x666c) &&
           (*(short *)((long)puVar11 + lVar3) != 0x686c)) {
          FUN_100df99c0("","WinRegistry",0,"OA00002.10:");
          return 0x815800a;
        }
        uVar19 = *(ushort *)((long)puVar11 + lVar3 + 2);
        if (0x1fa < uVar19) {
          FUN_100df99c0("","WinRegistry",0,"OA00002.11:");
          return 0x815800c;
        }
        iVar14 = (uint)uVar19 * 8 + 0xc;
        uVar6 = FUN_100d69e90(*(undefined8 *)(param_1 + 8),iVar14,param_5);
        if (uVar6 != 0x8000000) {
          FUN_100df99c0("","WinRegistry",0,"OA00002.12:\t%x;\t%d",iVar14,uVar6);
          return (ulong)uVar6;
        }
        lVar2 = (ulong)(param_4 + 0x1004) + 2 + lVar16;
        lVar13 = (ulong)(*param_5 + 4) + lVar16;
        *(undefined2 *)((long)puVar11 + lVar13) = *(undefined2 *)((long)puVar11 + lVar3);
        *(short *)((long)puVar11 + lVar13 + 2) = *(short *)((long)puVar11 + lVar2) + 1;
        if (*(short *)((long)puVar11 + lVar2) == 0) {
          lVar18 = (long)puVar11 + lVar13 + 4;
          uVar6 = 0xffffffff;
          uVar15 = 0;
        }
        else {
          lVar18 = (long)puVar11 + lVar13 + 4;
          uVar6 = 0xffffffff;
          uVar10 = 0;
          uVar21 = 0;
          do {
            if (uVar6 == 0xffffffff) {
              uVar20 = (ulong)(*(int *)((long)puVar11 + uVar10 * 8 + lVar3 + 4) + 0x1004);
              lVar1 = lVar16 + 0x48 + uVar20;
              uVar19 = *(ushort *)((long)puVar11 + lVar1);
              uVar15 = (uint)sVar9;
              uVar6 = (uint)uVar19;
              if ((int)uVar15 <= (int)(uint)uVar19) {
                uVar6 = uVar15;
              }
              if (0 < (int)uVar6) {
                lVar17 = 0;
                do {
                  _Var7 = ___toupper((int)param_2[lVar17]);
                  _Var8 = ___toupper((int)*(char *)((long)puVar11 + lVar17 + uVar20 + lVar16 + 0x4c)
                                    );
                  iVar14 = (_Var7 - _Var8) * 0x1000000;
                  if (iVar14 != 0) {
                    uVar6 = 0xffffffff;
                    if (-1 < iVar14) goto LAB_100d640c0;
                    goto LAB_100d640bb;
                  }
                  lVar17 = lVar17 + 1;
                } while ((int)lVar17 < (int)uVar6);
                uVar19 = *(ushort *)((long)puVar11 + lVar1);
              }
              if (uVar15 == uVar19) {
                FUN_100df99c0("","WinRegistry",0,"OA00002.13:\t%s",param_2);
                FUN_100d6a060(*(undefined8 *)(param_1 + 8),*param_5);
                return 0x815800e;
              }
              uVar6 = 0xffffffff;
              if ((int)uVar15 < (int)(uint)uVar19) {
LAB_100d640bb:
                uVar21 = uVar21 + 1;
                uVar6 = (uint)uVar10;
              }
            }
LAB_100d640c0:
            *(undefined4 *)(lVar18 + (ulong)(uVar21 & 0xffff) * 8) =
                 *(undefined4 *)((long)puVar11 + uVar10 * 8 + lVar3 + 4);
            *(undefined4 *)(lVar18 + 4 + (ulong)(uVar21 & 0xffff) * 8) =
                 *(undefined4 *)((long)puVar11 + uVar10 * 8 + lVar3 + 8);
            uVar21 = uVar21 + 1;
            uVar12 = (uint)uVar10 + 1 & 0xffff;
            uVar10 = (ulong)uVar12;
            uVar15 = (uint)*(ushort *)((long)puVar11 + lVar2);
          } while (uVar12 < *(ushort *)((long)puVar11 + lVar2));
        }
        if (-1 < (int)uVar6) {
          uVar15 = uVar6;
        }
        lVar16 = (long)(int)uVar15;
        *(int *)(lVar18 + lVar16 * 8) = param_3 + -0x1000;
        if (*(short *)((long)puVar11 + lVar13) == 0x666c) {
          *(char *)(lVar18 + 4 + lVar16 * 8) = *param_2;
          if (*param_2 == '\0') {
            cVar5 = '\0';
          }
          else {
            cVar5 = param_2[1];
          }
          *(char *)(lVar18 + 5 + lVar16 * 8) = cVar5;
          sVar9 = _strlen(param_2);
          if (sVar9 < 2) {
            cVar5 = '\0';
          }
          else {
            cVar5 = param_2[2];
          }
          *(char *)(lVar18 + 6 + lVar16 * 8) = cVar5;
          sVar9 = _strlen(param_2);
          if (sVar9 < 3) {
            *(undefined1 *)(lVar18 + 7 + lVar16 * 8) = 0;
          }
          else {
            *(char *)(lVar18 + 7 + lVar16 * 8) = param_2[3];
          }
        }
        else {
          if (*(short *)((long)puVar11 + lVar13) != 0x686c) {
            FUN_100df99c0("","WinRegistry",0,"OA00002.14:");
            FUN_100d6a060(*(undefined8 *)(param_1 + 8),*param_5);
            return 0x815800a;
          }
          _Var7 = 0;
          if (*param_2 != '\0') {
            _Var7 = ___toupper((int)*param_2);
            sVar9 = _strlen(param_2);
            uVar10 = 1;
            if (1 < sVar9) {
              uVar19 = 2;
              do {
                _Var8 = ___toupper((int)param_2[uVar10]);
                _Var7 = _Var8 + _Var7 * 0x25;
                uVar10 = (ulong)uVar19;
                sVar9 = _strlen(param_2);
                uVar19 = uVar19 + 1;
              } while (uVar10 < sVar9);
            }
          }
          *(__darwin_ct_rune_t *)(lVar18 + 4 + lVar16 * 8) = _Var7;
        }
        uVar10 = FUN_100d6a060(*(undefined8 *)(param_1 + 8),param_4 + 0x1000);
        return uVar10;
      }
    }
  }
  FUN_100df99c0("","WinRegistry",0,"OA00002.09:");
  return 0x8158002;
}

