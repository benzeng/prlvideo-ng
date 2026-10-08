
undefined8 FUN_100d64940(long param_1,QString *param_2,int *param_3,int param_4)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  __darwin_ct_rune_t _Var7;
  __darwin_ct_rune_t _Var8;
  int iVar9;
  size_t sVar10;
  long lVar11;
  uint *puVar12;
  int iVar13;
  QArrayData *pQVar14;
  ulong uVar15;
  ushort uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QString::toLatin1();
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  pQVar14 = local_40;
  if (*(long *)(param_1 + 8) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_100df99c0("","WinRegistry",0,"OA00004.10:");
    }
    else {
      lVar5 = *(long *)(local_40 + 0x10);
      puVar12 = (uint *)*puVar4;
      if ((1 < *puVar12) || (*(long *)(puVar12 + 4) != 0x18)) {
        QByteArray::reallocData(puVar4,puVar12[1] + 1,puVar12[2] >> 0x1f);
        puVar12 = (uint *)*puVar4;
      }
      lVar11 = *(long *)(puVar12 + 4);
      if ((long)puVar12 + lVar11 != 0) {
        uVar19 = (ulong)(param_4 + 0x1004);
        lVar1 = lVar11 + uVar19;
        if (*(short *)((long)puVar12 + lVar1) == 0x696c) {
          if (0x3f3 < *(ushort *)((long)puVar12 + lVar1 + 2)) {
            pQVar14 = pQVar14 + lVar5;
            lVar5 = uVar19 + 2 + lVar11;
            sVar10 = _strlen((char *)pQVar14);
            uVar16 = 0;
LAB_100d64b50:
            uVar15 = (ulong)uVar16;
            uVar21 = (ulong)(*(int *)((long)puVar12 + uVar15 * 4 + lVar1 + 4) + 0x1004);
            lVar2 = lVar11 + 0x48 + uVar21;
            uVar3 = *(ushort *)((long)puVar12 + lVar2);
            uVar6 = (uint)sVar10;
            uVar17 = (uint)uVar3;
            if ((int)uVar6 <= (int)(uint)uVar3) {
              uVar17 = uVar6;
            }
            if (0 < (int)uVar17) {
              lVar18 = 0;
              do {
                _Var7 = ___toupper((int)(char)pQVar14[lVar18]);
                _Var8 = ___toupper((int)*(char *)((long)puVar12 + lVar18 + uVar21 + lVar11 + 0x4c));
                iVar13 = (_Var7 - _Var8) * 0x1000000;
                if (iVar13 != 0) {
                  if (-1 < iVar13) goto LAB_100d64c05;
                  goto LAB_100d64c19;
                }
                lVar18 = lVar18 + 1;
              } while ((int)lVar18 < (int)uVar17);
              uVar3 = *(ushort *)((long)puVar12 + lVar2);
            }
            if (uVar6 == uVar3) {
              uVar20 = 0x815800e;
              FUN_100df99c0("","WinRegistry",0,"OA00002.79:\t%s",pQVar14);
              goto LAB_100d64a81;
            }
            if ((int)(uint)uVar3 <= (int)uVar6) goto LAB_100d64c05;
LAB_100d64c19:
            if (uVar16 < *(ushort *)((long)puVar12 + lVar5)) {
              lVar1 = uVar19 + lVar11 + 4;
              iVar13 = *param_3;
              do {
                iVar9 = *(int *)((long)puVar12 + uVar15 * 4 + lVar1) + 0x1000;
                *(int *)((long)puVar12 + uVar15 * 4 + lVar1) = iVar13 + -0x1000;
                *param_3 = iVar9;
                uVar15 = uVar15 + 1;
                iVar13 = iVar9;
              } while (((uint)uVar15 & 0xffff) < (uint)*(ushort *)((long)puVar12 + lVar5));
              goto LAB_100d64c7f;
            }
            goto LAB_100d64c76;
          }
          uVar20 = 0x815801b;
          FUN_100df99c0("","WinRegistry",0,"OA00002.78:");
        }
        else {
          uVar20 = 0x815800a;
          FUN_100df99c0("","WinRegistry",0,"OA00002.77:");
        }
        goto LAB_100d64a81;
      }
    }
  }
  uVar20 = 0x8158002;
  FUN_100df99c0("","WinRegistry",0,"OA00002.76:");
  goto LAB_100d64a81;
LAB_100d64c05:
  uVar16 = uVar16 + 1;
  if (*(ushort *)((long)puVar12 + lVar5) <= uVar16) goto LAB_100d64c76;
  goto LAB_100d64b50;
LAB_100d64c76:
  iVar9 = *param_3;
LAB_100d64c7f:
  lVar11 = (ulong)(iVar9 + 4) + lVar11;
  if (*(short *)((long)puVar12 + lVar11) == 0x6b6e) {
    local_48.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)
         QString::fromLatin1_helper
                   ((char *)((long)puVar12 + lVar11 + 0x4c),
                    (uint)*(ushort *)((long)puVar12 + lVar11 + 0x48));
    QString::operator=(param_2,&local_48);
    uVar20 = 0x8000000;
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d64a81;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
  else {
    uVar20 = 0x8158009;
    FUN_100df99c0("","WinRegistry",0,"OA00002.81:");
  }
LAB_100d64a81:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar20;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return uVar20;
}

