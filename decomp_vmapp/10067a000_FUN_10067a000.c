
undefined4
FUN_10067a000(long param_1,uint param_2,QString *param_3,undefined4 *param_4,undefined2 *param_5,
             ushort *param_6,uint *param_7,ushort *param_8,uint *param_9)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ushort uVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  short sVar19;
  long lVar20;
  uint *puVar21;
  ushort uVar22;
  ulong uVar23;
  undefined4 local_4c;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar9 = PTR_shared_null_100ba20d0;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_4c = 0x8158002;
  if (*(long *)(param_1 + 8) == 0) goto LAB_10067a48c;
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_1008e3970("","WinRegistry",0,"OA00004.10:");
    goto LAB_10067a48c;
  }
  puVar21 = (uint *)*puVar7;
  if ((1 < *puVar21) || (*(long *)(puVar21 + 4) != 0x18)) {
    QByteArray::reallocData(puVar7,puVar21[1] + 1,puVar21[2] >> 0x1f);
    puVar21 = (uint *)*puVar7;
  }
  lVar8 = *(long *)(puVar21 + 4);
  if ((long)puVar21 + lVar8 == 0) goto LAB_10067a48c;
  if (param_2 == 0xffffffff) {
    iVar10 = FUN_10067c2a0(*(undefined8 *)(param_1 + 8));
    param_2 = iVar10 + 0x1004;
  }
  lVar17 = (ulong)param_2 + lVar8;
  if (*(short *)((long)puVar21 + lVar17) != 0x6b6e) {
    local_4c = 0x8158009;
    goto LAB_10067a48c;
  }
  iVar10 = *(int *)((long)puVar21 + lVar17 + 0x30);
  if (iVar10 + 1U < 2) {
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar9;
    QString::operator=(&local_40,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10067a168;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
  else {
    QString::setUnicode((QChar *)&local_40,iVar10 + 0x1004 + (int)lVar8 + (int)puVar21);
  }
LAB_10067a168:
  local_4c = 0x8158009;
  uVar4 = *(undefined4 *)((long)puVar21 + lVar17 + 0x14);
  uVar5 = *(uint *)((long)puVar21 + lVar17 + 0x24);
  uVar12 = (ulong)(*(int *)((long)puVar21 + lVar17 + 0x1c) + 0x1004);
  lVar1 = uVar12 + lVar8;
  sVar19 = *(short *)((long)puVar21 + lVar1);
  uVar23 = 0;
  uVar15 = 0xffff;
  uVar14 = uVar23;
  if (sVar19 == 0x6972) {
    uVar15 = 0;
    uVar14 = (long)puVar21 + lVar1;
  }
  lVar1 = lVar8 + 2;
  uVar22 = 0;
  do {
    uVar11 = uVar12;
    if (uVar14 != 0) {
      uVar11 = (ulong)(*(int *)(uVar14 + 4 + (ulong)uVar15 * 4) + 0x1004);
      sVar19 = *(short *)((long)puVar21 + uVar11 + lVar8);
    }
    if ((sVar19 == 0x666c) || (sVar19 == 0x686c)) {
      uVar2 = *(ushort *)((long)puVar21 + lVar1 + uVar11);
      if (uVar2 != 0) {
        lVar20 = 0;
        do {
          uVar13 = (ulong)(*(int *)((long)puVar21 + lVar20 * 8 + uVar11 + lVar8 + 4) + 0x1004);
          if (*(short *)((long)puVar21 + uVar13 + lVar8) != 0x6b6e) goto LAB_10067a48c;
          uVar3 = *(ushort *)((long)puVar21 + lVar8 + 0x48 + uVar13);
          if ((uint)uVar23 < (uint)uVar3) {
            uVar23 = (ulong)uVar3;
          }
          uVar3 = *(ushort *)((long)puVar21 + uVar13 + lVar8 + 0x4a);
          if (uVar22 < uVar3) {
            uVar22 = uVar3;
          }
          lVar20 = lVar20 + 1;
        } while (((uint)lVar20 & 0xffff) < (uint)uVar2);
        goto LAB_10067a2c8;
      }
    }
    else {
LAB_10067a2c8:
      if ((sVar19 == 0x696c) && (uVar2 = *(ushort *)((long)puVar21 + lVar1 + uVar11), uVar2 != 0)) {
        lVar20 = 0;
        do {
          uVar13 = (ulong)(*(int *)((long)puVar21 + lVar20 * 4 + uVar11 + lVar8 + 4) + 0x1004);
          if (*(short *)((long)puVar21 + uVar13 + lVar8) != 0x6b6e) goto LAB_10067a48c;
          uVar3 = *(ushort *)((long)puVar21 + lVar8 + 0x48 + uVar13);
          if ((uint)uVar23 < (uint)uVar3) {
            uVar23 = (ulong)uVar3;
          }
          uVar3 = *(ushort *)((long)puVar21 + uVar13 + lVar8 + 0x4a);
          if (uVar22 < uVar3) {
            uVar22 = uVar3;
          }
          lVar20 = lVar20 + 1;
        } while (((uint)lVar20 & 0xffff) < (uint)uVar2);
      }
    }
  } while ((uVar14 != 0) && (uVar15 = uVar15 + (uVar14 != 0), uVar15 < *(ushort *)(uVar14 + 2)));
  uVar16 = 0;
  uVar15 = 0;
  if (uVar5 != 0) {
    lVar20 = 0;
    uVar16 = 0;
    uVar15 = 0;
    do {
      uVar14 = (ulong)(*(int *)((long)puVar21 +
                               lVar20 * 4 +
                               (ulong)(*(int *)((long)puVar21 + lVar17 + 0x28) + 0x1004) + lVar8) +
                      0x1004);
      local_4c = 0x815800b;
      if (*(short *)((long)puVar21 + uVar14 + lVar8) != 0x6b76) goto LAB_10067a48c;
      uVar2 = *(ushort *)((long)puVar21 + lVar1 + uVar14);
      if (uVar15 < uVar2) {
        uVar15 = uVar2;
      }
      uVar6 = *(uint *)((long)puVar21 + uVar14 + lVar8 + 4);
      uVar18 = 4;
      if ((uVar6 != 0x80000000) && (uVar18 = uVar6, (int)uVar6 < 0)) {
        uVar18 = 4;
      }
      if (uVar16 < uVar18) {
        uVar16 = uVar18;
      }
      lVar20 = lVar20 + 1;
    } while ((uint)lVar20 < uVar5);
  }
  if (param_3 != (QString *)0x0) {
    QString::operator=(param_3,&local_40);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar4;
  }
  if (param_5 != (undefined2 *)0x0) {
    *param_5 = (short)uVar23;
  }
  if (param_6 != (ushort *)0x0) {
    *param_6 = uVar22;
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = uVar5;
  }
  if (param_8 != (ushort *)0x0) {
    *param_8 = uVar15;
  }
  local_4c = 0x8000000;
  if (param_9 != (uint *)0x0) {
    *param_9 = uVar16;
  }
LAB_10067a48c:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return local_4c;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return local_4c;
}

