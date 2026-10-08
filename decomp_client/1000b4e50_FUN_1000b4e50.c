
void FUN_1000b4e50(long param_1)

{
  QString *pQVar1;
  undefined4 uVar2;
  uint *puVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  undefined1 local_c8 [48];
  long local_98;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar5 = QDir::separator();
  local_d8 = *(QArrayData **)(param_1 + 8);
  if (1 < *(uint *)local_d8 + 1) {
    LOCK();
    *(uint *)local_d8 = *(uint *)local_d8 + 1;
    local_29 = *(uint *)local_d8 != 0;
    UNLOCK();
  }
  uVar8 = *(uint *)(local_d8 + 4);
  if ((1 < *(uint *)local_d8) || ((*(uint *)(local_d8 + 8) & 0x7fffffff) < uVar8 + 2)) {
    QString::reallocData((uint)&local_d8,SUB41(uVar8 + 2,0));
    uVar8 = *(uint *)(local_d8 + 4);
  }
  *(uint *)(local_d8 + 4) = uVar8 + 1;
  *(undefined2 *)(local_d8 + (long)(int)uVar8 * 2 + *(long *)(local_d8 + 0x10)) = uVar5;
  *(undefined2 *)(local_d8 + (long)(int)*(uint *)(local_d8 + 4) * 2 + *(long *)(local_d8 + 0x10)) =
       0;
  if (1 < *(uint *)local_d8 + 1) {
    LOCK();
    *(uint *)local_d8 = *(uint *)local_d8 + 1;
    local_29 = *(uint *)local_d8 != 0;
    UNLOCK();
  }
  local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_d8;
  QString::fromUtf8_helper((char *)&local_38,0x1dbcd69);
  QString::append(&local_d0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000b4f54;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000b4f54:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000b4f8a;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1000b4f8a:
  QString::toUtf8();
  iVar6 = _stat_INODE64(local_e0 + *(long *)(local_e0 + 0x10),local_c8);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_29 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000b4fed;
    }
    QArrayData::deallocate(local_e0,1,8);
  }
LAB_1000b4fed:
  pQVar1 = (QString *)(param_1 + 8);
  if (iVar6 == 0) {
    if (1 < *DAT_102311eb0) {
      FUN_1000b5460(&DAT_102311eb0);
    }
    puVar3 = *(uint **)(DAT_102311eb0 + 4);
    puVar10 = (uint *)0x0;
    if (*(uint **)(DAT_102311eb0 + 4) == (uint *)0x0) {
LAB_1000b5076:
      puVar9 = DAT_102311eb0 + 2;
    }
    else {
      do {
        while (puVar9 = puVar3, cVar4 = operator<((QString *)(puVar9 + 6),pQVar1), cVar4 == '\0') {
          puVar3 = *(uint **)(puVar9 + 2);
          puVar10 = puVar9;
          if (*(uint **)(puVar9 + 2) == (uint *)0x0) goto LAB_1000b5066;
        }
        puVar3 = *(uint **)(puVar9 + 4);
      } while (*(uint **)(puVar9 + 4) != (uint *)0x0);
      puVar9 = puVar10;
      if (puVar10 == (uint *)0x0) goto LAB_1000b5076;
LAB_1000b5066:
      cVar4 = operator<(pQVar1,(QString *)(puVar9 + 6));
      if (cVar4 != '\0') goto LAB_1000b5076;
    }
    if (1 < *DAT_102311eb0) {
      FUN_1000b5460(&DAT_102311eb0);
    }
    if (((puVar9 != DAT_102311eb0 + 2) && (puVar9[8] == *(uint *)(param_1 + 0x10))) &&
       (*(long *)(puVar9 + 10) == local_98)) goto LAB_1000b5171;
  }
  QMutex::lock();
  FUN_1000f2d70(pQVar1,*(undefined4 *)(param_1 + 0x10));
  QMutex::unlock();
  QString::toUtf8();
  iVar6 = _stat_INODE64(local_e8 + *(long *)(local_e8 + 0x10),local_c8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_29 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000b514c;
    }
    QArrayData::deallocate(local_e8,1,8);
  }
LAB_1000b514c:
  if (iVar6 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    puVar7 = (undefined4 *)FUN_1000b53a0(&DAT_102311eb0,pQVar1);
    *puVar7 = uVar2;
    *(long *)(puVar7 + 2) = local_98;
  }
LAB_1000b5171:
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_d0.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
  return;
}

