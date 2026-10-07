
undefined8 FUN_10047eb10(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 *puVar7;
  Data *pDVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong *puVar14;
  long *plVar15;
  ulong *local_80;
  QArrayData *local_78;
  long local_70;
  long *local_68;
  long local_60;
  undefined8 *local_58;
  QString local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  if (*(uint *)(param_1 + 0x40) < 0x10001) {
    return 0x80034001;
  }
  local_68 = (long *)(param_1 + 0x50);
  local_80 = (ulong *)0x0;
  local_78 = (QArrayData *)*param_2;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_31 = *(int *)local_78 != 0;
    UNLOCK();
  }
  local_70 = 0;
  puVar5 = operator_new(8);
  *puVar5 = param_1 + 0x38;
  QMutex::lock();
  puVar14 = local_80;
  *(byte *)puVar5 = (byte)*puVar5 | 1;
  puVar4 = local_80;
  if ((local_80 != puVar5) && (puVar4 = puVar5, local_80 != (ulong *)0x0)) {
    if ((*local_80 & 1) != 0) {
      *local_80 = *local_80 & 0xfffffffffffffffe;
      local_80 = puVar5;
      QMutex::unlock();
      puVar5 = local_80;
    }
    local_80 = puVar5;
    operator_delete(puVar14);
    puVar4 = local_80;
  }
  local_80 = puVar4;
  if ((*(int *)(*local_68 + 0xc) == *(int *)(*local_68 + 8)) ||
     (lVar6 = FUN_10047def0(local_68,&local_78), lVar6 == 0)) {
    puVar14 = local_80;
    local_70 = 0;
    uVar13 = 0x80034002;
    if (local_80 != (ulong *)0x0) {
      local_80 = (ulong *)0x0;
      if ((*puVar14 & 1) != 0) {
        *puVar14 = *puVar14 & 0xfffffffffffffffe;
        QMutex::unlock();
      }
LAB_10047ed37:
      operator_delete(puVar14);
    }
  }
  else {
    lVar10 = param_1 + 0x58;
    puVar11 = *(uint **)(param_1 + 0x48);
    uVar2 = puVar11[2];
    local_70 = lVar6;
    if (puVar11[3] == uVar2) {
      local_48 = lVar10;
      puVar7 = operator_new(0x10);
      puVar3 = PTR_shared_null_100ba20d0;
      *puVar7 = PTR_shared_null_100ba20d0;
      puVar7[1] = puVar3;
      QByteArray::resize((int)puVar7);
      local_50.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar6 + 0x10);
      if (1 < *(int *)local_50.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
      }
      QString::operator=((QString *)(puVar7 + 1),&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10047ec92;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_10047ec92:
      puVar11 = (uint *)*puVar7;
      if ((1 < *puVar11) || (*(long *)(puVar11 + 4) != 0x18)) {
        QByteArray::reallocData(puVar7,puVar11[1] + 1,puVar11[2] >> 0x1f);
        puVar11 = (uint *)*puVar7;
      }
      lVar9 = *(long *)(puVar11 + 4);
      *(undefined8 *)((long)puVar11 + lVar9 + 8) = 0;
      *(undefined8 *)((long)puVar11 + lVar9) = 0;
      *(undefined4 *)((long)puVar11 + lVar9) = 0x10005;
      FUN_1004956b0(lVar6,&local_48,(long)puVar11 + lVar9);
      local_58 = puVar7;
      FUN_100496560(lVar10,&local_58);
      uVar13 = 0;
      FUN_1004955f0(&local_80,0);
    }
    else {
      plVar15 = (long *)(param_1 + 0x48);
      if (1 < *puVar11) {
        pDVar8 = (Data *)QListData::detach((int)plVar15);
        lVar6 = *plVar15;
        lVar9 = (long)*(int *)(lVar6 + 8);
        puVar1 = (uint *)(lVar6 + 0x10 + lVar9 * 8);
        if ((puVar11 + (long)(int)uVar2 * 2 + 4 != puVar1) &&
           (lVar12 = *(int *)(lVar6 + 0xc) - lVar9, lVar12 != 0 && lVar9 <= *(int *)(lVar6 + 0xc)))
        {
          _memcpy(puVar1,puVar11 + (long)(int)uVar2 * 2 + 4,lVar12 * 8);
        }
        if (*(int *)pDVar8 != -1) {
          if (*(int *)pDVar8 != 0) {
            LOCK();
            *(int *)pDVar8 = *(int *)pDVar8 + -1;
            local_31 = *(int *)pDVar8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10047ee0b;
          }
          QListData::dispose(pDVar8);
        }
      }
LAB_10047ee0b:
      lVar9 = local_70;
      lVar6 = *(long *)(*plVar15 + 0x10 + (long)*(int *)(*plVar15 + 8) * 8);
      local_60 = lVar6;
      local_40 = lVar10;
      if (*(ushort *)(lVar6 + 0x14) < 0x30) {
        FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Not enough space for cmd pass to guest");
      }
      else {
        lVar10 = FUN_1002a6010(lVar6);
        if (lVar10 != 0) {
          FUN_1004956b0(lVar9,&local_40,lVar10);
          FUN_100036ff0(plVar15,&local_60);
          uVar13 = 0;
          FUN_1004955f0(&local_80,lVar6);
          goto LAB_10047ed3f;
        }
        FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Not enough space for cmd pass to guest");
      }
      puVar14 = local_80;
      local_70 = 0;
      uVar13 = 0x80034001;
      if (local_80 != (ulong *)0x0) {
        local_80 = (ulong *)0x0;
        if ((*puVar14 & 1) != 0) {
          *puVar14 = *puVar14 & 0xfffffffffffffffe;
          QMutex::unlock();
        }
        goto LAB_10047ed37;
      }
    }
  }
LAB_10047ed3f:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047ed6f;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10047ed6f:
  puVar14 = local_80;
  if (local_80 != (ulong *)0x0) {
    if ((*local_80 & 1) != 0) {
      *local_80 = *local_80 & 0xfffffffffffffffe;
      QMutex::unlock();
    }
    operator_delete(puVar14);
  }
  return uVar13;
}

