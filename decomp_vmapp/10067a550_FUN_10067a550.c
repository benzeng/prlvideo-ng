
undefined8 FUN_10067a550(long param_1,uint param_2,int param_3,QString *param_4,QString *param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  short sVar9;
  QArrayData *pQVar10;
  ushort uVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  QString local_88;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0x8158002;
  }
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_1008e3970("","WinRegistry",0,"OA00004.10:");
    return 0x8158002;
  }
  puVar13 = (uint *)*puVar2;
  if ((1 < *puVar13) || (*(long *)(puVar13 + 4) != 0x18)) {
    QByteArray::reallocData(puVar2,puVar13[1] + 1,puVar13[2] >> 0x1f);
    puVar13 = (uint *)*puVar2;
  }
  lVar8 = *(long *)(puVar13 + 4);
  if ((long)puVar13 + lVar8 == 0) {
    return 0x8158002;
  }
  if (param_2 == 0xffffffff) {
    iVar3 = FUN_10067c2a0(*(undefined8 *)(param_1 + 8));
    param_2 = iVar3 + 0x1004;
  }
  if (*(short *)((long)puVar13 + (ulong)param_2 + lVar8) != 0x6b6e) {
    return 0x8158009;
  }
  uVar14 = (ulong)(*(int *)((long)puVar13 + (ulong)param_2 + lVar8 + 0x1c) + 0x1004);
  lVar6 = uVar14 + lVar8;
  sVar9 = *(short *)((long)puVar13 + lVar6);
  uVar4 = 0;
  uVar7 = (long)puVar13 + lVar6;
  if (sVar9 != 0x6972) {
    uVar7 = uVar4;
  }
  uVar11 = 0xffff;
  if (sVar9 == 0x6972) {
    uVar11 = 0;
  }
  do {
    uVar12 = uVar14;
    if (uVar7 != 0) {
      uVar12 = (ulong)(*(int *)(uVar7 + 4 + (ulong)uVar11 * 4) + 0x1004);
      sVar9 = *(short *)((long)puVar13 + uVar12 + lVar8);
    }
    if ((sVar9 == 0x666c) || (sVar9 == 0x686c)) {
      uVar1 = *(ushort *)((long)puVar13 + lVar8 + 2 + uVar12);
      if (uVar1 != 0) {
        lVar6 = 0;
        do {
          lVar5 = (ulong)(*(int *)((long)puVar13 + lVar6 * 8 + uVar12 + lVar8 + 4) + 0x1004) + lVar8
          ;
          if (*(short *)((long)puVar13 + lVar5) != 0x6b6e) {
            return 0x8158009;
          }
          if (param_3 - (int)uVar4 == (int)lVar6) {
            if (param_4 == (QString *)0x0) goto LAB_10067a8e2;
            QByteArray::QByteArray
                      ((QByteArray *)&local_48,(char *)((long)puVar13 + lVar5 + 0x4c),
                       (uint)*(ushort *)((long)puVar13 + lVar5 + 0x48));
            lVar6 = 0;
            pQVar10 = local_48 + *(long *)(local_48 + 0x10);
            if ((pQVar10 == (QArrayData *)0x0) || (*(uint *)(local_48 + 4) == 0))
            goto LAB_10067a86d;
            lVar6 = 0;
            goto LAB_10067a860;
          }
          lVar6 = lVar6 + 1;
        } while (((uint)lVar6 & 0xffff) < (uint)uVar1);
        uVar4 = (ulong)((int)uVar4 + (uint)lVar6);
        goto LAB_10067a730;
      }
    }
    else {
LAB_10067a730:
      if ((sVar9 == 0x696c) && (uVar1 = *(ushort *)((long)puVar13 + lVar8 + 2 + uVar12), uVar1 != 0)
         ) {
        lVar6 = 0;
        do {
          lVar5 = (ulong)(*(int *)((long)puVar13 + lVar6 * 4 + uVar12 + lVar8 + 4) + 0x1004) + lVar8
          ;
          if (*(short *)((long)puVar13 + lVar5) != 0x6b6e) {
            return 0x8158009;
          }
          if (param_3 - (int)uVar4 == (int)lVar6) {
            if (param_4 == (QString *)0x0) goto LAB_10067aa1b;
            QByteArray::QByteArray
                      ((QByteArray *)&local_70,(char *)((long)puVar13 + lVar5 + 0x4c),
                       (uint)*(ushort *)((long)puVar13 + lVar5 + 0x48));
            lVar6 = 0;
            pQVar10 = local_70 + *(long *)(local_70 + 0x10);
            if ((pQVar10 == (QArrayData *)0x0) || (*(uint *)(local_70 + 4) == 0))
            goto LAB_10067a9a6;
            lVar6 = 0;
            goto LAB_10067a999;
          }
          lVar6 = lVar6 + 1;
        } while (((uint)lVar6 & 0xffff) < (uint)uVar1);
        uVar4 = (ulong)((int)uVar4 + (uint)lVar6);
      }
    }
    if (uVar7 == 0) {
      return 0x8158017;
    }
    uVar11 = uVar11 + (uVar7 != 0);
    if (*(ushort *)(uVar7 + 2) <= uVar11) {
      return 0x8158017;
    }
  } while( true );
  while (lVar6 = lVar6 + 1, (uint)lVar6 < *(uint *)(local_48 + 4)) {
LAB_10067a860:
    if (pQVar10[lVar6] == (QArrayData)0x0) break;
  }
LAB_10067a86d:
  local_40.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper((char *)pQVar10,(int)lVar6);
  QString::operator=(param_4,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067a8b2;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10067a8b2:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067a8e2;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10067a8e2:
  if (param_5 == (QString *)0x0) {
    return 0x8000000;
  }
  iVar3 = *(int *)((long)puVar13 + lVar5 + 0x30);
  if (1 < iVar3 + 1U) {
    QByteArray::QByteArray
              ((QByteArray *)&local_58,(char *)((ulong)(iVar3 + 0x1004) + lVar8 + (long)puVar13),
               (uint)*(ushort *)((long)puVar13 + lVar5 + 0x4a));
    lVar8 = 0;
    pQVar10 = local_58 + *(long *)(local_58 + 0x10);
    if ((pQVar10 != (QArrayData *)0x0) && (*(uint *)(local_58 + 4) != 0)) {
      lVar8 = 0;
      do {
        if (pQVar10[lVar8] == (QArrayData)0x0) break;
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < *(uint *)(local_58 + 4));
    }
    local_50.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper((char *)pQVar10,(int)lVar8);
    QString::operator=(param_5,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10067aaff;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_10067aaff:
    if (*(int *)local_58 == -1) {
      return 0x8000000;
    }
    local_80 = local_58;
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return 0x8000000;
      }
      local_31 = 0;
    }
    goto LAB_10067abda;
  }
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QString::operator=(param_5,&local_60);
  if (*(int *)local_60.field0_0x0 == -1) {
    return 0x8000000;
  }
  local_80 = (QArrayData *)local_60.field0_0x0;
  if (*(int *)local_60.field0_0x0 != 0) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
    UNLOCK();
    if (*(int *)local_60.field0_0x0 != 0) {
      return 0x8000000;
    }
    local_31 = 0;
  }
  goto LAB_10067aa6d;
  while (lVar6 = lVar6 + 1, (uint)lVar6 < *(uint *)(local_70 + 4)) {
LAB_10067a999:
    if (pQVar10[lVar6] == (QArrayData)0x0) break;
  }
LAB_10067a9a6:
  local_68.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper((char *)pQVar10,(int)lVar6);
  QString::operator=(param_4,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067a9eb;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10067a9eb:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067aa1b;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_10067aa1b:
  if (param_5 == (QString *)0x0) {
    return 0x8000000;
  }
  iVar3 = *(int *)((long)puVar13 + lVar5 + 0x30);
  if (1 < iVar3 + 1U) {
    QByteArray::QByteArray
              ((QByteArray *)&local_80,(char *)((ulong)(iVar3 + 0x1004) + lVar8 + (long)puVar13),
               (uint)*(ushort *)((long)puVar13 + lVar5 + 0x4a));
    lVar8 = 0;
    pQVar10 = local_80 + *(long *)(local_80 + 0x10);
    if ((pQVar10 != (QArrayData *)0x0) && (*(uint *)(local_80 + 4) != 0)) {
      lVar8 = 0;
      do {
        if (pQVar10[lVar8] == (QArrayData)0x0) break;
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < *(uint *)(local_80 + 4));
    }
    local_78.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper((char *)pQVar10,(int)lVar8);
    QString::operator=(param_5,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10067abb9;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_10067abb9:
    if (*(int *)local_80 == -1) {
      return 0x8000000;
    }
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return 0x8000000;
      }
      local_31 = 0;
    }
LAB_10067abda:
    uVar7 = 1;
    goto LAB_10067abdf;
  }
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QString::operator=(param_5,&local_88);
  if (*(int *)local_88.field0_0x0 == -1) {
    return 0x8000000;
  }
  local_80 = (QArrayData *)local_88.field0_0x0;
  if (*(int *)local_88.field0_0x0 != 0) {
    LOCK();
    *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
    UNLOCK();
    if (*(int *)local_88.field0_0x0 != 0) {
      return 0x8000000;
    }
    uVar7 = 2;
    local_31 = 0;
    goto LAB_10067abdf;
  }
LAB_10067aa6d:
  uVar7 = 2;
LAB_10067abdf:
  QArrayData::deallocate(local_80,uVar7,8);
  return 0x8000000;
}

