
undefined8 * FUN_1007d8ba0(undefined8 *param_1,long *param_2)

{
  QArrayData QVar1;
  QArrayData QVar2;
  QArrayData QVar3;
  QArrayData QVar4;
  QArrayData QVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  QArrayData *pQVar10;
  undefined8 *puVar11;
  uint *puVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_100ba20d0;
  QByteArray::QByteArray
            ((QByteArray *)&local_50,((*(int *)(*param_2 + 4) / 5) * 5 - *(int *)(*param_2 + 4)) + 5
             ,'\0');
  local_40 = (QArrayData *)*param_2;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  puVar11 = (undefined8 *)QByteArray::append((QByteArray *)&local_40);
  local_48 = (QArrayData *)*puVar11;
  if (1 < *(uint *)local_48 + 1) {
    LOCK();
    *(uint *)local_48 = *(uint *)local_48 + 1;
    local_31 = *(uint *)local_48 != 0;
    UNLOCK();
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d8c66;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1007d8c66:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d8c96;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1007d8c96:
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  pQVar10 = local_48;
  lVar7 = *(long *)(local_48 + 0x10);
  uVar6 = *(uint *)(local_48 + 4);
  uVar8 = (int)uVar6 / 5;
  uVar15 = uVar8 * 8;
  puVar12 = (uint *)*param_1;
  if ((1 < *puVar12) || (uVar13 = puVar12[2], (uVar13 & 0x7fffffff) <= uVar15)) {
    if ((int)uVar15 <= (int)puVar12[1]) {
      uVar15 = puVar12[1];
    }
    QString::reallocData((uint)param_1,(bool)((char)uVar15 + '\x01'));
    puVar12 = (uint *)*param_1;
    uVar13 = puVar12[2];
  }
  if (-1 < (int)uVar13) {
    puVar12[2] = uVar13 | 0x80000000;
  }
  if (8 < uVar6 + 4) {
    uVar16 = 0;
    uVar14 = 0;
    do {
      QVar1 = pQVar10[uVar16 + lVar7];
      iVar9 = (int)uVar16;
      QVar2 = pQVar10[(ulong)(iVar9 + 1) + lVar7];
      QVar3 = pQVar10[(ulong)(iVar9 + 2) + lVar7];
      QVar4 = pQVar10[(ulong)(iVar9 + 3) + lVar7];
      QVar5 = pQVar10[(ulong)(iVar9 + 4) + lVar7];
      QString::append(param_1,(int)"0123456789ABCDEFGHJKMNPQRSTVWXYZ"[(byte)QVar1 >> 3]);
      uVar16 = (ulong)(byte)QVar2 << 0x18 | (ulong)(byte)QVar1 << 0x20;
      QString::append(param_1,(int)"0123456789ABCDEFGHJKMNPQRSTVWXYZ"[uVar16 >> 0x1e & 0x1f]);
      QString::append(param_1,(int)"0123456789ABCDEFGHJKMNPQRSTVWXYZ"
                                   [(ulong)((byte)QVar2 >> 1) & 0x1f]);
      uVar16 = uVar16 | (ulong)(byte)QVar3 << 0x10;
      QString::append(param_1,(int)"0123456789ABCDEFGHJKMNPQRSTVWXYZ"[uVar16 >> 0x14 & 0x1f]);
      uVar16 = uVar16 | (ulong)(byte)QVar4 << 8;
      QString::append(param_1,(int)"0123456789ABCDEFGHJKMNPQRSTVWXYZ"[uVar16 >> 0xf & 0x1f]);
      QString::append(param_1,(int)"0123456789ABCDEFGHJKMNPQRSTVWXYZ"
                                   [(ulong)((byte)QVar4 >> 2) & 0x1f]);
      QString::append(param_1,(int)"0123456789ABCDEFGHJKMNPQRSTVWXYZ"
                                   [uVar16 + (byte)QVar5 >> 5 & 0x1f]);
      QString::append(param_1,(int)"0123456789ABCDEFGHJKMNPQRSTVWXYZ"[(ulong)(byte)QVar5 & 0x1f]);
      uVar14 = uVar14 + 1;
      uVar16 = (ulong)(iVar9 + 5);
    } while (uVar14 < uVar8);
  }
  QString::chop((uint)param_1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
  }
  return param_1;
}

