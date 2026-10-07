
int FUN_1005a41f0(long *param_1,long param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  QArrayData QVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  QArrayData QVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QByteArray::QByteArray((QByteArray *)&local_40,*(int *)(param_2 + 0x20),'\0');
  pcVar1 = *(code **)(*param_1 + 0x98);
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  iVar5 = (*pcVar1)(param_1,local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(param_2 + 0x20),
                    param_4);
  if (iVar5 < 0) {
    FUN_1008e3970("","vdisk",0,"Error reading sector %llu from disk. 0x%x",param_4,iVar5);
    goto LAB_1005a45bf;
  }
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  lVar2 = *(long *)(local_40 + 0x10);
  uVar3 = *(ulong *)(param_2 + 0x10);
  uVar15 = 0x3f;
  if (uVar3 < 0xfb0400) {
    uVar15 = *(uint *)(param_2 + 8);
  }
  uVar10 = 0xff;
  if (uVar3 < 0x7e0000) {
    uVar10 = 0x80;
  }
  uVar12 = 0x20;
  if (uVar3 < 0xfc000) {
    uVar12 = 0x10;
  }
  uVar16 = 0x40;
  if (0x3effff < uVar3) {
    uVar16 = uVar10;
  }
  lVar17 = 0;
  do {
    if (local_40[lVar17 + lVar2 + 0x1c2] != (QArrayData)0x0) {
      uVar10 = *(uint *)(local_40 + lVar17 + lVar2 + 0x1c6);
      uVar4 = uVar16;
      if (uVar3 < 0x1f8000) {
        uVar4 = uVar12;
      }
      uVar14 = 0x3ff;
      bVar8 = 0x3f;
      QVar13 = (QArrayData)0xfe;
      QVar9 = (QArrayData)0xfe;
      bVar11 = 0x3f;
      uVar6 = 0x3ff;
      if (uVar10 < 0xfb0400) {
        QVar9 = SUB81(((ulong)uVar10 / (ulong)uVar15) % (ulong)uVar4,0);
        uVar6 = uVar10 / (uVar4 * uVar15);
        bVar11 = (char)(uVar10 % uVar15) + 1U & 0x3f;
      }
      local_40[lVar17 + lVar2 + 0x1bf] = QVar9;
      local_40[lVar17 + lVar2 + 0x1c0] = (QArrayData)((byte)(uVar6 >> 2) & 0xc0 | bVar11);
      local_40[lVar17 + lVar2 + 0x1c1] = SUB41(uVar6,0);
      uVar10 = (uVar10 - 1) + *(int *)(local_40 + lVar17 + lVar2 + 0x1ca);
      uVar4 = uVar16;
      if (uVar3 < 0x1f8000) {
        uVar4 = uVar12;
      }
      if (uVar10 < 0xfb0400) {
        QVar13 = SUB81(((ulong)uVar10 / (ulong)uVar15) % (ulong)uVar4,0);
        uVar14 = (ulong)uVar10 / (ulong)(uVar4 * uVar15);
        bVar8 = (char)(uVar10 % uVar15) + 1U & 0x3f;
      }
      local_40[lVar17 + lVar2 + 0x1c3] = QVar13;
      local_40[lVar17 + lVar2 + 0x1c4] = (QArrayData)((byte)(uVar14 >> 2) & 0xc0 | bVar8);
      local_40[lVar17 + lVar2 + 0x1c5] = SUB81(uVar14,0);
    }
    lVar17 = lVar17 + 0x10;
  } while (lVar17 != 0x40);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (param_4 == 0) {
    local_60.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("PhysicalMbr.hds",0xf);
    QString::operator=(&local_48,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005a454c;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
  else {
    local_58 = (QArrayData *)QString::fromAscii_helper("PhysicalExtended%1.hds",0x16);
    QString::arg(&local_50,&local_58,param_5,0,10,0x20);
    QString::operator=(&local_48,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005a4489;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_1005a4489:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005a454c;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_1005a454c:
  iVar7 = FUN_1005a4720(param_2,&local_40,param_3,param_4,&local_48);
  iVar5 = 0;
  if (iVar7 < 0) {
    FUN_1008e3970("","vdisk",0,"Error 0x%x at adding MBR to storages",iVar7);
    iVar5 = iVar7;
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a45bf;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1005a45bf:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return iVar5;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return iVar5;
}

