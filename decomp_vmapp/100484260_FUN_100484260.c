
int FUN_100484260(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  int *piVar6;
  void *pvVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  Data *pDVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint *puVar14;
  char cVar15;
  long *plVar16;
  int *local_d8;
  int *local_d0;
  int *local_c8;
  ulong *local_c0;
  long local_b8;
  void *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  QArrayData *local_80;
  long local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  QString local_58;
  undefined8 *local_50;
  void *local_48;
  undefined1 local_39;
  void *local_38;
  
  if (*(uint *)(param_1 + 0x40) < 0x10001) {
    return -0x7ffcbfff;
  }
  pvVar7 = operator_new(0x38);
  FUN_10047e480(pvVar7,param_5);
  lVar1 = param_1 + 0x50;
  local_c0 = (ulong *)0x0;
  local_d8 = (int *)*param_2;
  if (1 < *local_d8 + 1U) {
    LOCK();
    *local_d8 = *local_d8 + 1;
    local_39 = *local_d8 != 0;
    UNLOCK();
  }
  local_d0 = (int *)*param_3;
  if (1 < *local_d0 + 1U) {
    LOCK();
    *local_d0 = *local_d0 + 1;
    local_39 = *local_d0 != 0;
    UNLOCK();
  }
  puVar5 = PTR_shared_null_100ba20d0;
  local_c8 = (int *)PTR_shared_null_100ba20d0;
  local_b8 = lVar1;
  local_b0 = pvVar7;
  QString::toUtf8();
  QByteArray::operator=((QByteArray *)&local_c8,(char *)(local_a0 + *(long *)(local_a0 + 0x10)));
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_39 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_10048437e;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_10048437e:
  cVar15 = (char)(QByteArray *)&local_c8;
  QByteArray::append(cVar15);
  QString::toUtf8();
  QByteArray::append((char *)&local_c8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_39 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_1004843e4;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
LAB_1004843e4:
  QByteArray::append(cVar15);
  puVar8 = operator_new(8);
  *puVar8 = param_1 + 0x38;
  QMutex::lock();
  piVar6 = local_c8;
  *(byte *)puVar8 = (byte)*puVar8 | 1;
  puVar14 = *(uint **)(param_1 + 0x48);
  uVar3 = puVar14[2];
  local_c0 = puVar8;
  if (puVar14[3] == uVar3) {
    local_58.field0_0x0 = *(QTypedArrayData<unsigned_short> **)((long)pvVar7 + 0x10);
    if (1 < *(int *)local_58.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
      local_39 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
    }
    local_70 = local_d8;
    if (1 < *local_d8 + 1U) {
      LOCK();
      *local_d8 = *local_d8 + 1;
      local_39 = *local_d8 != 0;
      UNLOCK();
    }
    local_68 = local_d0;
    if (1 < *local_d0 + 1U) {
      LOCK();
      *local_d0 = *local_d0 + 1;
      local_39 = *local_d0 != 0;
      UNLOCK();
    }
    local_60 = local_c8;
    if (1 < *local_c8 + 1U) {
      LOCK();
      *local_c8 = *local_c8 + 1;
      local_39 = *local_c8 != 0;
      UNLOCK();
    }
    puVar9 = operator_new(0x10);
    *puVar9 = puVar5;
    puVar9[1] = puVar5;
    QByteArray::resize((int)puVar9);
    QString::operator=((QString *)(puVar9 + 1),&local_58);
    puVar14 = (uint *)*puVar9;
    if ((1 < *puVar14) || (*(long *)(puVar14 + 4) != 0x18)) {
      QByteArray::reallocData(puVar9,puVar14[1] + 1,puVar14[2] >> 0x1f);
      puVar14 = (uint *)*puVar9;
    }
    lVar4 = *(long *)(puVar14 + 4);
    *(undefined8 *)((long)puVar14 + lVar4 + 8) = 0;
    *(undefined8 *)((long)puVar14 + lVar4) = 0;
    *(undefined4 *)((long)puVar14 + lVar4) = 0x10005;
    *(undefined4 *)((long)puVar14 + lVar4 + 4) = 3;
    *(undefined4 *)((long)puVar14 + lVar4 + 0x10) = 2;
    if (piVar6[1] == 0) {
      *(undefined4 *)(lVar4 + 0x28 + (long)puVar14) = 0;
      FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Cannot get data storage for Login command");
    }
    else {
      *(int *)(lVar4 + 0x28 + (long)puVar14) = piVar6[1] + 8;
      *(undefined4 *)(lVar4 + 0x30 + (long)puVar14) = 0x2000;
      uVar3 = piVar6[1];
      *(uint *)(lVar4 + 0x34 + (long)puVar14) = uVar3;
      _memcpy((void *)(lVar4 + 0x38 + (long)puVar14),(void *)((long)piVar6 + *(long *)(piVar6 + 4)),
              (ulong)uVar3);
    }
    FUN_1007d6bf0(&local_58,lVar4 + 0x14 + (long)puVar14);
    FUN_100484bb0(&local_70);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_39 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_10048475b;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_10048475b:
    local_50 = puVar9;
    FUN_100496560(param_1 + 0x58,&local_50);
    local_b0 = (void *)0x0;
    local_48 = pvVar7;
    FUN_1004965c0(lVar1,&local_48);
    local_c0 = (ulong *)0x0;
    if ((*puVar8 & 1) != 0) {
      *puVar8 = *puVar8 & 0xfffffffffffffffe;
      QMutex::unlock();
    }
    operator_delete(puVar8);
  }
  else {
    plVar16 = (long *)(param_1 + 0x48);
    if (1 < *puVar14) {
      pDVar10 = (Data *)QListData::detach((int)plVar16);
      lVar4 = *plVar16;
      lVar11 = (long)*(int *)(lVar4 + 8);
      puVar2 = (uint *)(lVar4 + 0x10 + lVar11 * 8);
      if ((puVar14 + (long)(int)uVar3 * 2 + 4 != puVar2) &&
         (lVar12 = *(int *)(lVar4 + 0xc) - lVar11, lVar12 != 0 && lVar11 <= *(int *)(lVar4 + 0xc)))
      {
        _memcpy(puVar2,puVar14 + (long)(int)uVar3 * 2 + 4,lVar12 * 8);
      }
      if (*(int *)pDVar10 != -1) {
        if (*(int *)pDVar10 != 0) {
          LOCK();
          *(int *)pDVar10 = *(int *)pDVar10 + -1;
          local_39 = *(int *)pDVar10 != 0;
          UNLOCK();
          if ((bool)local_39) goto LAB_1004845ce;
        }
        QListData::dispose(pDVar10);
      }
    }
LAB_1004845ce:
    piVar6 = local_c8;
    lVar4 = *(long *)(*plVar16 + 0x10 + (long)*(int *)(*plVar16 + 8) * 8);
    local_80 = *(QArrayData **)((long)pvVar7 + 0x10);
    if (1 < *(int *)local_80 + 1U) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_39 = *(int *)local_80 != 0;
      UNLOCK();
    }
    local_98 = local_d8;
    if (1 < *local_d8 + 1U) {
      LOCK();
      *local_d8 = *local_d8 + 1;
      local_39 = *local_d8 != 0;
      UNLOCK();
    }
    local_90 = local_d0;
    if (1 < *local_d0 + 1U) {
      LOCK();
      *local_d0 = *local_d0 + 1;
      local_39 = *local_d0 != 0;
      UNLOCK();
    }
    local_88 = local_c8;
    if (1 < *local_c8 + 1U) {
      LOCK();
      *local_c8 = *local_c8 + 1;
      local_39 = *local_c8 != 0;
      UNLOCK();
    }
    local_78 = lVar4;
    if ((uint)*(ushort *)(lVar4 + 0x14) < local_c8[1] + 0x3cU) {
      iVar13 = -0x7ffcbfff;
      FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Not enough space for cmd pass to guest");
    }
    else {
      lVar11 = FUN_1002a6010(lVar4);
      if (lVar11 == 0) {
        iVar13 = -0x7ffcbfff;
        FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Not enough space for cmd pass to guest");
      }
      else {
        *(undefined4 *)(lVar11 + 4) = 3;
        *(undefined4 *)(lVar11 + 0x10) = 2;
        if (piVar6[1] == 0) {
          *(undefined4 *)(lVar11 + 0x28) = 0;
          FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Cannot get data storage for Login command");
        }
        else {
          *(int *)(lVar11 + 0x28) = piVar6[1] + 8;
          *(undefined4 *)(lVar11 + 0x30) = 0x2000;
          uVar3 = piVar6[1];
          *(uint *)(lVar11 + 0x34) = uVar3;
          _memcpy((void *)(lVar11 + 0x38),(void *)((long)piVar6 + *(long *)(piVar6 + 4)),
                  (ulong)uVar3);
        }
        iVar13 = 0;
        FUN_1007d6bf0(&local_80,lVar11 + 0x14);
      }
    }
    FUN_100484bb0(&local_98);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_39 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_100484861;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100484861:
    if (iVar13 < 0) {
      local_c0 = (ulong *)0x0;
      if ((*puVar8 & 1) != 0) {
        *puVar8 = *puVar8 & 0xfffffffffffffffe;
        QMutex::unlock();
      }
      operator_delete(puVar8);
      local_b0 = (void *)0x0;
      FUN_10047e550(pvVar7);
      operator_delete(pvVar7);
      goto LAB_10048492f;
    }
    FUN_100036ff0(plVar16,&local_78);
    local_b0 = (void *)0x0;
    local_38 = pvVar7;
    FUN_1004965c0(lVar1,&local_38);
    local_c0 = (ulong *)0x0;
    if ((*puVar8 & 1) != 0) {
      *puVar8 = *puVar8 & 0xfffffffffffffffe;
      QMutex::unlock();
    }
    operator_delete(puVar8);
    if (lVar4 != 0) {
      FUN_1002a5590(*(undefined8 *)(DAT_1011c3698 + 0x1a28),lVar4,0);
    }
  }
  iVar13 = 0;
LAB_10048492f:
  FUN_100484bb0(&local_d8);
  FUN_100484cd0(&local_c0);
  return iVar13;
}

