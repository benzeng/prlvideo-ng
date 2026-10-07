
undefined8 FUN_1006770c0(long param_1,char *param_2,int param_3,int param_4,int *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  __darwin_ct_rune_t _Var8;
  __darwin_ct_rune_t _Var9;
  size_t sVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  uint *puVar19;
  uint uVar20;
  
  if (*(long *)(param_1 + 8) != 0) {
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_1008e3970("","WinRegistry",0,"OA00004.10:");
    }
    else {
      puVar19 = (uint *)*puVar5;
      if ((1 < *puVar19) || (*(long *)(puVar19 + 4) != 0x18)) {
        QByteArray::reallocData(puVar5,puVar19[1] + 1,puVar19[2] >> 0x1f);
        puVar19 = (uint *)*puVar5;
      }
      lVar6 = *(long *)(puVar19 + 4);
      if ((long)puVar19 + lVar6 != 0) {
        lVar1 = lVar6 + (ulong)(param_4 + 0x1004);
        sVar10 = _strlen(param_2);
        if (*(short *)((long)puVar19 + lVar1) != 0x696c) {
          FUN_1008e3970("","WinRegistry",0,"OA00002.16:");
          return 0x815800a;
        }
        uVar4 = *(ushort *)((long)puVar19 + lVar1 + 2);
        if (0x3f3 < uVar4) {
          FUN_1008e3970("","WinRegistry",0,"OA00002.17:");
          return 0x815800c;
        }
        uVar11 = FUN_10067cc50(*(undefined8 *)(param_1 + 8),(uint)uVar4 * 4 + 8,param_5);
        if ((int)uVar11 != 0x8000000) {
          return uVar11;
        }
        lVar3 = (ulong)(param_4 + 0x1004) + 2 + lVar6;
        lVar12 = (ulong)(*param_5 + 4) + lVar6;
        *(undefined2 *)((long)puVar19 + lVar12) = *(undefined2 *)((long)puVar19 + lVar1);
        *(short *)((long)puVar19 + lVar12 + 2) = *(short *)((long)puVar19 + lVar3) + 1;
        if (*(short *)((long)puVar19 + lVar3) == 0) {
          lVar12 = (long)puVar19 + lVar12 + 4;
          uVar17 = 0xffffffff;
          uVar13 = 0;
        }
        else {
          lVar12 = (long)puVar19 + lVar12 + 4;
          uVar17 = 0xffffffff;
          uVar15 = 0;
          uVar20 = 0;
          do {
            if (uVar17 == 0xffffffff) {
              uVar18 = (ulong)(*(int *)((long)puVar19 + uVar15 * 4 + lVar1 + 4) + 0x1004);
              lVar2 = lVar6 + 0x48 + uVar18;
              uVar4 = *(ushort *)((long)puVar19 + lVar2);
              uVar13 = (uint)sVar10;
              uVar17 = (uint)uVar4;
              if ((int)uVar13 <= (int)(uint)uVar4) {
                uVar17 = uVar13;
              }
              if (0 < (int)uVar17) {
                lVar16 = 0;
                do {
                  _Var8 = ___toupper((int)param_2[lVar16]);
                  _Var9 = ___toupper((int)*(char *)((long)puVar19 + lVar16 + uVar18 + lVar6 + 0x4c))
                  ;
                  iVar7 = (_Var8 - _Var9) * 0x1000000;
                  if (iVar7 != 0) {
                    uVar17 = 0xffffffff;
                    if (iVar7 < 0) goto LAB_10067740c;
                    goto LAB_10067741a;
                  }
                  lVar16 = lVar16 + 1;
                } while ((int)lVar16 < (int)uVar17);
                uVar4 = *(ushort *)((long)puVar19 + lVar2);
              }
              if (uVar13 == uVar4) {
                FUN_1008e3970("","WinRegistry",0,"OA00002.18:\t%s",param_2);
                FUN_10067ce20(*(undefined8 *)(param_1 + 8),*param_5);
                return 0x815800e;
              }
              uVar17 = 0xffffffff;
              if ((int)uVar13 < (int)(uint)uVar4) {
LAB_10067740c:
                uVar20 = uVar20 + 1;
                uVar17 = (uint)uVar15;
              }
            }
LAB_10067741a:
            *(undefined4 *)(lVar12 + (ulong)(uVar20 & 0xffff) * 4) =
                 *(undefined4 *)((long)puVar19 + uVar15 * 4 + lVar1 + 4);
            uVar20 = uVar20 + 1;
            uVar14 = (uint)uVar15 + 1 & 0xffff;
            uVar15 = (ulong)uVar14;
            uVar13 = (uint)*(ushort *)((long)puVar19 + lVar3);
          } while (uVar14 < *(ushort *)((long)puVar19 + lVar3));
        }
        if (-1 < (int)uVar17) {
          uVar13 = uVar17;
        }
        *(int *)(lVar12 + (long)(int)uVar13 * 4) = param_3 + -0x1000;
        uVar11 = FUN_10067ce20(*(undefined8 *)(param_1 + 8),param_4 + 0x1000);
        return uVar11;
      }
    }
  }
  FUN_1008e3970("","WinRegistry",0,"OA00002.15:");
  return 0x8158002;
}

