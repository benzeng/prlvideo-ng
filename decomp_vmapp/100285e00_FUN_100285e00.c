
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100285e00(undefined8 *param_1,undefined8 param_2)

{
  ulong *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  void *pvVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  QArrayData *pQVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  nothrow_t *pnVar15;
  QString local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar7 = CVmClusteredDevice::getStackIndex();
  FUN_1002578b0(param_1,0xb,uVar7,0);
  FUN_10025ae40(param_1 + 0xd,param_2);
  *param_1 = &PTR_FUN_100bb0730;
  param_1[1] = &PTR_metaObject_100bb0818;
  param_1[0xd] = &PTR_FUN_100bb0890;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  uVar7 = CVmClusteredDevice::getStackIndex();
  *(undefined4 *)(param_1 + 0x12) = uVar7;
  lVar8 = FUN_100257d80(param_1);
  param_1[0x13] = lVar8 + 0x8000;
  param_1[0x14] = 0;
  param_1[0x7415] = 0;
  lVar8 = DAT_1011c3698;
  local_50 = (QArrayData *)QString::fromAscii_helper("%1%2.",5);
  local_58 = (QArrayData *)QString::fromAscii_helper("I@devices.scsi",0xe);
  QString::arg(&local_48,&local_50,&local_58,0,0x20);
  QString::arg(&local_40,&local_48,*(undefined4 *)(param_1 + 0x12),0,10,0x20);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100285f51;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100285f51:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100285f81;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100285f81:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100285fb1;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100285fb1:
  local_70 = (QArrayData *)QString::fromAscii_helper("spurious",8);
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::append(&local_68);
  QString::toUtf8();
  uVar9 = FUN_10070e6f0(local_60 + *(long *)(local_60 + 0x10));
  param_1[0x7423] = uVar9;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10028603e;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_10028603e:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10028606e;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10028606e:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10028609e;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10028609e:
  local_88 = (QArrayData *)QString::fromAscii_helper("context_reply",0xd);
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::append(&local_80);
  QString::toUtf8();
  uVar9 = FUN_10070e6f0(local_78 + *(long *)(local_78 + 0x10));
  param_1[0x7425] = uVar9;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10028612b;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_10028612b:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10028615b;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_10028615b:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10028618b;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10028618b:
  local_a0 = (QArrayData *)QString::fromAscii_helper("address_reply",0xd);
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::append(&local_98);
  QString::toUtf8();
  uVar9 = FUN_10070e6f0(local_90 + *(long *)(local_90 + 0x10));
  param_1[0x7424] = uVar9;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100286233;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_100286233:
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100286269;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_100286269:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10028629f;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10028629f:
  local_b8 = (QArrayData *)QString::fromAscii_helper("process",7);
  local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::append(&local_b0);
  QString::toUtf8();
  uVar9 = FUN_10070e6f0(local_a8 + *(long *)(local_a8 + 0x10));
  param_1[0x7426] = uVar9;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100286347;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
LAB_100286347:
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10028637d;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_10028637d:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002863b3;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1002863b3:
  pQVar10 = (QArrayData *)QString::fromAscii_helper("doorbell_reply",0xe);
  local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::append(&local_c8);
  QString::toUtf8();
  uVar9 = FUN_10070e6f0(local_c0 + *(long *)(local_c0 + 0x10));
  param_1[0x7427] = uVar9;
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10028645b;
    }
    QArrayData::deallocate(local_c0,1,8);
  }
LAB_10028645b:
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_31 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100286491;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_100286491:
  if (*(int *)pQVar10 != -1) {
    if (*(int *)pQVar10 != 0) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      local_31 = *(int *)pQVar10 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002864c7;
    }
    QArrayData::deallocate(pQVar10,2,8);
  }
LAB_1002864c7:
  lVar11 = FUN_1000e9a40(*(undefined8 *)(lVar8 + 0x1158),0xae,0);
  if (lVar11 == 0) {
    FUN_1000e9b50(*(undefined8 *)(lVar8 + 0x1158),0xae,0x10,0x2048,0,0x801);
  }
  FUN_1000a4cd0(lVar8,0xae,*(undefined4 *)(param_1 + 0x12),0);
  lVar8 = FUN_1000e99d0(*(undefined8 *)(lVar8 + 0x1158),0xae,*(undefined2 *)(param_1 + 0x12));
  param_1[0x14] = lVar8;
  if (lVar8 != 0) {
    param_1[0x741a] = param_1 + 0x741a;
    param_1[0x741b] = param_1 + 0x741a;
    param_1[0x741c] = param_1 + 0x741c;
    param_1[0x741d] = param_1 + 0x741c;
    param_1[0x7418] = param_1 + 0x7418;
    param_1[0x7419] = param_1 + 0x7418;
    puVar3 = param_1 + 0x7416;
    param_1[0x7416] = puVar3;
    param_1[0x7417] = puVar3;
    uVar14 = 0;
    pnVar15 = (nothrow_t *)PTR_nothrow_100ba21c8;
    do {
      puVar12 = operator_new(0x900,pnVar15);
      lVar8 = DAT_1011c3688;
      if (puVar12 == (undefined8 *)0x0) {
        if ((int)uVar14 == 0) {
          uVar14 = 0;
        }
        else {
          puVar12 = param_1 + (ulong)((int)uVar14 - 1) * 0x1d + 0x31;
          do {
            pvVar5 = (void *)*puVar12;
            if (pvVar5 != (void *)0x0) {
              FUN_10008d470((long)pvVar5 + 200);
              operator_delete(pvVar5);
              *puVar12 = 0;
            }
            puVar12 = puVar12 + -0x1d;
            uVar13 = (int)uVar14 - 1;
            uVar14 = (ulong)uVar13;
          } while (uVar13 != 0);
          uVar14 = 0;
          pnVar15 = (nothrow_t *)PTR_nothrow_100ba21c8;
        }
      }
      else {
        puVar12[0x19] = DAT_1011c3688;
        puVar12[0x1a] = *(undefined8 *)(*(long *)(lVar8 + 0x60) + 0x20);
        puVar12[0x1b] = puVar12 + 0x1c;
        *(undefined4 *)(puVar12 + 0x1c) = 0;
        puVar12[0x1d] = 0;
        *puVar12 = param_1;
        puVar12[7] = param_1 + uVar14 * 0x1d + 0x15;
        param_1[uVar14 * 0x1d + 0x31] = puVar12;
      }
      lVar8 = uVar14 * 0xe8;
      *(undefined4 *)((long)param_1 + lVar8 + 0x17c) = 0;
      *(undefined4 *)(param_1 + uVar14 * 0x1d + 0x30) = 0;
      *(undefined1 *)((long)param_1 + lVar8 + 0x16a) = 0;
      *(undefined1 *)((long)param_1 + lVar8 + 0x174) = 0;
      *(undefined1 *)((long)param_1 + lVar8 + 0x175) = 0;
      param_1[uVar14 * 0x1d + 0x17] = 0;
      param_1[uVar14 * 0x1d + 0x16] = 0;
      *(undefined1 *)(param_1 + uVar14 * 0x1d + 0x2d) = 0;
      param_1[uVar14 * 0x1d + 0x2c] = 0;
      param_1[uVar14 * 0x1d + 0x2b] = 0;
      param_1[uVar14 * 0x1d + 0x2a] = 0;
      puVar12 = param_1 + uVar14 * 0x1d + 0x28;
      param_1[uVar14 * 0x1d + 0x28] = puVar12;
      param_1[uVar14 * 0x1d + 0x29] = puVar12;
      plVar6 = (long *)param_1[0x7417];
      param_1[0x7417] = puVar12;
      param_1[uVar14 * 0x1d + 0x28] = puVar3;
      param_1[uVar14 * 0x1d + 0x29] = plVar6;
      *plVar6 = (long)puVar12;
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulong)uVar13;
    } while (uVar13 < 0x400);
    param_1[0x741e] = param_1 + 0x741e;
    param_1[0x741f] = param_1 + 0x741e;
    *(undefined4 *)(param_1 + 0x7420) = 0;
    param_1[0x7421] = 0;
    QMutex::lock();
    (&DAT_1011b89e0)[*(uint *)(param_1 + 0x12)] = param_1;
    _DAT_1011c3cb0 = 0;
    _DAT_1011c3cb8 = 0;
    _DAT_1011c3cc0 = 0;
    iVar4 = *(int *)(param_1 + 0x12);
    lVar8 = param_1[0x13];
    puVar1 = (ulong *)(lVar8 + 0x10a8);
    *puVar1 = *puVar1 | 1L << ((byte)iVar4 & 0x3f);
    if (iVar4 != 7) {
      piVar2 = (int *)(lVar8 + 0x108c);
      *piVar2 = *piVar2 + 1;
    }
    QMutex::unlock();
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

