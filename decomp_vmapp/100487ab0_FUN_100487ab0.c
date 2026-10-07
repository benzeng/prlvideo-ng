
int FUN_100487ab0(long param_1,void *param_2,uint *param_3,int param_4,undefined4 param_5,
                 undefined8 *param_6)

{
  uint *puVar1;
  ushort uVar2;
  QArrayData *pQVar3;
  long lVar4;
  undefined *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  Data *pDVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  uint *puVar16;
  long *plVar17;
  QArrayData *local_58;
  long local_50;
  QString local_48;
  undefined8 *local_40;
  undefined1 local_31;
  
  pQVar3 = (QArrayData *)*param_6;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    UNLOCK();
    local_40 = (undefined8 *)CONCAT71(local_40._1_7_,*(int *)pQVar3 != 0);
  }
  puVar6 = operator_new(8);
  *puVar6 = param_1 + 0x38;
  QMutex::lock();
  *(byte *)puVar6 = (byte)*puVar6 | 1;
  puVar16 = *(uint **)(param_1 + 0x48);
  uVar11 = puVar16[2];
  if (puVar16[3] != uVar11) {
    plVar17 = (long *)(param_1 + 0x48);
    if (1 < *puVar16) {
      pDVar8 = (Data *)QListData::detach((int)plVar17);
      lVar4 = *plVar17;
      lVar15 = (long)*(int *)(lVar4 + 8);
      puVar1 = (uint *)(lVar4 + 0x10 + lVar15 * 8);
      if ((puVar16 + (long)(int)uVar11 * 2 + 4 != puVar1) &&
         (lVar13 = *(int *)(lVar4 + 0xc) - lVar15, lVar13 != 0 && lVar15 <= *(int *)(lVar4 + 0xc)))
      {
        _memcpy(puVar1,puVar16 + (long)(int)uVar11 * 2 + 4,lVar13 * 8);
      }
      if (*(int *)pDVar8 != -1) {
        if (*(int *)pDVar8 != 0) {
          LOCK();
          *(int *)pDVar8 = *(int *)pDVar8 + -1;
          local_31 = *(int *)pDVar8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100487bdf;
        }
        QListData::dispose(pDVar8);
      }
    }
LAB_100487bdf:
    lVar4 = *(long *)(*plVar17 + 0x10 + (long)*(int *)(*plVar17 + 8) * 8);
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
    uVar2 = *(ushort *)(lVar4 + 0x14);
    iVar14 = -0x7ffffffa;
    local_58 = pQVar3;
    local_50 = lVar4;
    if ((uint)(*(short *)(lVar4 + 0x16) == 0) * 8 + 0x30 < (uint)uVar2) {
      uVar11 = *param_3;
      if (*(short *)(lVar4 + 0x16) == 0) {
        if ((param_4 == 3) || (param_4 == 6)) {
          uVar10 = uVar11 + 0x38;
        }
        else {
          uVar10 = uVar11 + 0x30;
        }
        uVar12 = uVar11;
        if (uVar2 <= uVar10 && uVar10 != uVar2) {
          uVar11 = uVar2 - 0x30;
          if (uVar2 < 0x30) {
            uVar11 = 0;
          }
          uVar12 = uVar11 - 8;
          if (uVar11 < 8) {
            uVar12 = 0;
          }
        }
      }
      else {
        lVar15 = FUN_1002a6120(lVar4,0,0);
        if (lVar15 == 0) {
          iVar14 = -0x7fffffff;
          FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Corrupted guest buffer!");
          goto LAB_100487e90;
        }
        uVar12 = 0;
        if (7 < *(uint *)(lVar15 + 8)) {
          uVar12 = *(uint *)(lVar15 + 8) - 8;
        }
        if (uVar11 <= uVar12) {
          uVar12 = uVar11;
        }
      }
      lVar15 = FUN_1002a6010(lVar4);
      iVar14 = -0x7fffffff;
      if (lVar15 != 0) {
        *param_3 = uVar12;
        *(undefined4 *)(lVar15 + 4) = 4;
        *(int *)(lVar15 + 0x10) = param_4;
        *(undefined4 *)(lVar15 + 0x24) = param_5;
        if (*param_3 == 0) {
          *(undefined4 *)(lVar15 + 0x28) = 0;
        }
        else {
          *(uint *)(lVar15 + 0x28) = *param_3 + 8;
          uVar9 = 4;
          if (param_4 == 3) {
            uVar9 = 0x2000;
          }
          *(undefined4 *)(lVar15 + 0x30) = uVar9;
          uVar11 = *param_3;
          *(uint *)(lVar15 + 0x34) = uVar11;
          _memcpy((void *)(lVar15 + 0x38),param_2,(ulong)uVar11);
        }
        iVar14 = 0;
        FUN_1007d6bf0(&local_58,lVar15 + 0x14);
      }
    }
LAB_100487e90:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100487ec3;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100487ec3:
    if (iVar14 < 0) {
      if ((*puVar6 & 1) != 0) {
        *puVar6 = *puVar6 & 0xfffffffffffffffe;
        QMutex::unlock();
      }
      operator_delete(puVar6);
    }
    else {
      FUN_100036ff0(plVar17,&local_50);
      if ((*puVar6 & 1) != 0) {
        *puVar6 = *puVar6 & 0xfffffffffffffffe;
        QMutex::unlock();
      }
      operator_delete(puVar6);
      iVar14 = 0;
      if (lVar4 != 0) {
        FUN_1002a5590(*(undefined8 *)(DAT_1011c3698 + 0x1a28),lVar4,0);
        iVar14 = 0;
      }
    }
    goto LAB_100487f41;
  }
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar3;
  puVar7 = operator_new(0x10);
  puVar5 = PTR_shared_null_100ba20d0;
  *puVar7 = PTR_shared_null_100ba20d0;
  puVar7[1] = puVar5;
  QByteArray::resize((int)puVar7);
  QString::operator=((QString *)(puVar7 + 1),&local_48);
  puVar16 = (uint *)*puVar7;
  if ((1 < *puVar16) || (*(long *)(puVar16 + 4) != 0x18)) {
    QByteArray::reallocData(puVar7,puVar16[1] + 1,puVar16[2] >> 0x1f);
    puVar16 = (uint *)*puVar7;
  }
  lVar4 = *(long *)(puVar16 + 4);
  *(undefined8 *)((long)puVar16 + lVar4 + 8) = 0;
  *(undefined8 *)((long)puVar16 + lVar4) = 0;
  *(undefined4 *)((long)puVar16 + lVar4) = 0x10005;
  *(undefined4 *)((long)puVar16 + lVar4 + 4) = 4;
  *(int *)((long)puVar16 + lVar4 + 0x10) = param_4;
  *(undefined4 *)((long)puVar16 + lVar4 + 0x24) = param_5;
  if (*param_3 == 0) {
    *(undefined4 *)(lVar4 + 0x28 + (long)puVar16) = 0;
  }
  else {
    *(uint *)(lVar4 + 0x28 + (long)puVar16) = *param_3 + 8;
    uVar9 = 4;
    if (param_4 == 3) {
      uVar9 = 0x2000;
    }
    *(undefined4 *)(lVar4 + 0x30 + (long)puVar16) = uVar9;
    uVar11 = *param_3;
    *(uint *)(lVar4 + 0x34 + (long)puVar16) = uVar11;
    _memcpy((void *)(lVar4 + 0x38 + (long)puVar16),param_2,(ulong)uVar11);
  }
  FUN_1007d6bf0(&local_48,lVar4 + 0x14 + (long)puVar16);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100487d77;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100487d77:
  local_40 = puVar7;
  FUN_100496560(param_1 + 0x58,&local_40);
  if ((*puVar6 & 1) != 0) {
    *puVar6 = *puVar6 & 0xfffffffffffffffe;
    QMutex::unlock();
  }
  operator_delete(puVar6);
  iVar14 = 0;
LAB_100487f41:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      local_40 = (undefined8 *)CONCAT71(local_40._1_7_,*(int *)pQVar3 != 0);
      if (*(int *)pQVar3 != 0) {
        return iVar14;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return iVar14;
}

