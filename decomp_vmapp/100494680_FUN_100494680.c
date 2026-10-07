
int FUN_100494680(long param_1,undefined8 param_2)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  void *pvVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  Data *pDVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  ulong *local_80;
  long local_78;
  void *local_70;
  QArrayData *local_68;
  long local_60;
  QString local_58;
  undefined8 *local_50;
  void *local_48;
  undefined1 local_39;
  void *local_38;
  
  if (*(uint *)(param_1 + 0x40) < 0x10004) {
    return -0x7ffffdff;
  }
  pvVar6 = operator_new(0x38);
  FUN_10047e480(pvVar6,param_2);
  lVar1 = param_1 + 0x50;
  local_80 = (ulong *)0x0;
  local_78 = lVar1;
  local_70 = pvVar6;
  puVar7 = operator_new(8);
  *puVar7 = param_1 + 0x38;
  QMutex::lock();
  *(byte *)puVar7 = (byte)*puVar7 | 1;
  puVar9 = *(uint **)(param_1 + 0x48);
  uVar3 = puVar9[2];
  local_80 = puVar7;
  if (puVar9[3] == uVar3) {
    local_58.field0_0x0 = *(QTypedArrayData<unsigned_short> **)((long)pvVar6 + 0x10);
    if (1 < *(int *)local_58.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
      local_39 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
    }
    puVar8 = operator_new(0x10);
    puVar5 = PTR_shared_null_100ba20d0;
    *puVar8 = PTR_shared_null_100ba20d0;
    puVar8[1] = puVar5;
    QByteArray::resize((int)puVar8);
    QString::operator=((QString *)(puVar8 + 1),&local_58);
    puVar9 = (uint *)*puVar8;
    if ((1 < *puVar9) || (*(long *)(puVar9 + 4) != 0x18)) {
      QByteArray::reallocData(puVar8,puVar9[1] + 1,puVar9[2] >> 0x1f);
      puVar9 = (uint *)*puVar8;
    }
    lVar4 = *(long *)(puVar9 + 4);
    *(undefined8 *)((long)puVar9 + lVar4 + 8) = 0;
    *(undefined8 *)((long)puVar9 + lVar4) = 0;
    *(undefined4 *)((long)puVar9 + lVar4) = 0x10005;
    *(undefined4 *)((long)puVar9 + lVar4 + 4) = 0xc;
    *(undefined4 *)((long)puVar9 + lVar4 + 0x10) = 2;
    FUN_1007d6bf0(&local_58,(long)puVar9 + lVar4 + 0x14);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_39 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_1004947f0;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_1004947f0:
    local_50 = puVar8;
    FUN_100496560(param_1 + 0x58,&local_50);
    local_70 = (void *)0x0;
    local_48 = pvVar6;
    FUN_1004965c0(lVar1,&local_48);
    local_80 = (ulong *)0x0;
    if ((*puVar7 & 1) != 0) {
      *puVar7 = *puVar7 & 0xfffffffffffffffe;
      QMutex::unlock();
    }
    operator_delete(puVar7);
  }
  else {
    plVar13 = (long *)(param_1 + 0x48);
    if (1 < *puVar9) {
      pDVar10 = (Data *)QListData::detach((int)plVar13);
      lVar4 = *plVar13;
      lVar12 = (long)*(int *)(lVar4 + 8);
      puVar2 = (uint *)(lVar4 + 0x10 + lVar12 * 8);
      if ((puVar9 + (long)(int)uVar3 * 2 + 4 != puVar2) &&
         (lVar11 = *(int *)(lVar4 + 0xc) - lVar12, lVar11 != 0 && lVar12 <= *(int *)(lVar4 + 0xc)))
      {
        _memcpy(puVar2,puVar9 + (long)(int)uVar3 * 2 + 4,lVar11 * 8);
      }
      if (*(int *)pDVar10 != -1) {
        if (*(int *)pDVar10 != 0) {
          LOCK();
          *(int *)pDVar10 = *(int *)pDVar10 + -1;
          local_39 = *(int *)pDVar10 != 0;
          UNLOCK();
          if ((bool)local_39) goto LAB_1004948ad;
        }
        QListData::dispose(pDVar10);
      }
    }
LAB_1004948ad:
    lVar4 = *(long *)(*plVar13 + 0x10 + (long)*(int *)(*plVar13 + 8) * 8);
    local_68 = *(QArrayData **)((long)pvVar6 + 0x10);
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_39 = *(int *)local_68 != 0;
      UNLOCK();
    }
    local_60 = lVar4;
    if (*(ushort *)(lVar4 + 0x14) < 0x30) {
      iVar14 = -0x7ffcbfff;
      FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Not enough space for cmd pass to guest");
    }
    else {
      lVar12 = FUN_1002a6010(lVar4);
      if (lVar12 == 0) {
        iVar14 = -0x7ffcbfff;
        FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Not enough space for cmd pass to guest");
      }
      else {
        *(undefined4 *)(lVar12 + 4) = 0xc;
        *(undefined4 *)(lVar12 + 0x10) = 2;
        iVar14 = 0;
        FUN_1007d6bf0(&local_68,lVar12 + 0x14);
      }
    }
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_39 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_10049498a;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_10049498a:
    if (iVar14 < 0) {
      local_80 = (ulong *)0x0;
      if ((*puVar7 & 1) != 0) {
        *puVar7 = *puVar7 & 0xfffffffffffffffe;
        QMutex::unlock();
      }
      operator_delete(puVar7);
      local_70 = (void *)0x0;
      FUN_10047e550(pvVar6);
      operator_delete(pvVar6);
      goto LAB_100494a3f;
    }
    FUN_100036ff0(plVar13,&local_60);
    local_70 = (void *)0x0;
    local_38 = pvVar6;
    FUN_1004965c0(lVar1,&local_38);
    local_80 = (ulong *)0x0;
    if ((*puVar7 & 1) != 0) {
      *puVar7 = *puVar7 & 0xfffffffffffffffe;
      QMutex::unlock();
    }
    operator_delete(puVar7);
    if (lVar4 != 0) {
      FUN_1002a5590(*(undefined8 *)(DAT_1011c3698 + 0x1a28),lVar4,0);
    }
  }
  iVar14 = 0;
LAB_100494a3f:
  FUN_100484cd0(&local_80);
  return iVar14;
}

