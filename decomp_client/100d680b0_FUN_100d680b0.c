
ulong FUN_100d680b0(long param_1,long param_2,long *param_3)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  QArrayData *pQVar6;
  __darwin_ct_rune_t _Var7;
  __darwin_ct_rune_t _Var8;
  char *pcVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  long lVar15;
  ulong uVar16;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 8) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_100df99c0("","WinRegistry",0,"OA00004.10:");
    }
    else {
      puVar14 = (uint *)*puVar4;
      if ((1 < *puVar14) || (*(long *)(puVar14 + 4) != 0x18)) {
        QByteArray::reallocData(puVar4,puVar14[1] + 1,puVar14[2] >> 0x1f);
        puVar14 = (uint *)*puVar4;
      }
      lVar5 = *(long *)(puVar14 + 4);
      if ((long)puVar14 + lVar5 != 0) {
        iVar3 = *(int *)(param_2 + 0x28);
        uVar13 = *(uint *)(param_2 + 0x24);
        if (uVar13 == 0) {
          return 0xffffffff;
        }
        uVar11 = 0;
        while (uVar16 = (ulong)(*(int *)((long)puVar14 +
                                        uVar11 * 4 + (ulong)(iVar3 + 0x1004) + lVar5) + 0x1004),
              *(short *)((long)puVar14 + uVar16 + lVar5) == 0x6b76) {
          lVar1 = lVar5 + 2 + uVar16;
          uVar2 = *(ushort *)((long)puVar14 + lVar1);
          if ((uVar2 == 0) && (*(uint *)(*param_3 + 4) == 0)) {
            return uVar11;
          }
          if (*(uint *)(*param_3 + 4) == (uint)uVar2) {
            QString::toLatin1();
            if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
              QByteArray::reallocData
                        (&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
            }
            pQVar6 = local_40;
            uVar2 = *(ushort *)((long)puVar14 + lVar1);
            uVar13 = 0;
            if (uVar2 != 0) {
              lVar1 = *(long *)(local_40 + 0x10);
              lVar15 = 0;
              do {
                _Var7 = ___toupper((int)(char)pQVar6[lVar15 + lVar1]);
                _Var8 = ___toupper((int)*(char *)((long)puVar14 + lVar15 + uVar16 + lVar5 + 0x14));
                iVar12 = (_Var7 - _Var8) * 0x1000000;
                if (iVar12 != 0) {
                  uVar13 = iVar12 >> 0x1f | 1;
                  goto LAB_100d68251;
                }
                lVar15 = lVar15 + 1;
              } while ((int)lVar15 < (int)(uint)uVar2);
              uVar13 = 0;
            }
LAB_100d68251:
            if (*(int *)local_40 != -1) {
              if (*(int *)local_40 != 0) {
                LOCK();
                *(int *)local_40 = *(int *)local_40 + -1;
                local_31 = *(int *)local_40 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d68294;
              }
              QArrayData::deallocate(local_40,1,8);
            }
LAB_100d68294:
            if (uVar13 == 0) {
              return uVar11;
            }
            uVar13 = *(uint *)(param_2 + 0x24);
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulong)uVar10;
          if (uVar13 <= uVar10) {
            return 0xffffffff;
          }
        }
        pcVar9 = "OA00002.41:";
        goto LAB_100d682eb;
      }
    }
  }
  pcVar9 = "OA00002.40:";
LAB_100d682eb:
  FUN_100df99c0("","WinRegistry",0,pcVar9);
  return 0xffffffff;
}

