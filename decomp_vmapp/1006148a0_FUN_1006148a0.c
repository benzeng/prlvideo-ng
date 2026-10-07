
int FUN_1006148a0(long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  undefined1 local_81;
  undefined1 local_80 [64];
  undefined4 local_40;
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar4 = -0x7ffffffd;
  local_38 = lVar8;
  if (((param_3 == (long *)0x0) || (*(int *)(*param_1 + 4) < 0x300)) ||
     (iVar4 = (**(code **)(*param_3 + 0x58))(param_3,local_80), iVar4 < 0)) goto LAB_100614db3;
  uVar3 = rdtsc();
  qsrand((uint)uVar3);
  iVar4 = *(int *)(*param_1 + 4);
  iVar9 = iVar4 / 2;
  iVar5 = qrand();
  puVar7 = (uint *)*param_1;
  if ((1 < *puVar7) || (*(long *)(puVar7 + 4) != 0x18)) {
    QByteArray::reallocData(param_1,puVar7[1] + 1,puVar7[2] >> 0x1f);
    puVar7 = (uint *)*param_1;
  }
  iVar5 = iVar5 % iVar9 + 4;
  lVar8 = *(long *)(puVar7 + 4);
  if (3 < iVar4) {
    uVar11 = 0;
    do {
      uVar6 = qrand();
      *(undefined4 *)((long)puVar7 + uVar11 * 4 + lVar8) = uVar6;
      if ((uVar11 & 0x1f) == 0) {
        uVar3 = rdtsc();
        qsrand((uint)uVar3);
      }
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)((int)(((uint)(iVar4 >> 0x1f) >> 0x1e) + iVar4) >> 2));
  }
  *(int *)((long)puVar7 + lVar8) = iVar5;
  lVar10 = iVar5 + lVar8;
  *(undefined8 *)((long)puVar7 + lVar10 + 8) = 0x840331617472614d;
  *(undefined8 *)((long)puVar7 + lVar10) = 0x20616e766f72754d;
  iVar4 = qrand();
  iVar5 = qrand();
  QByteArray::QByteArray
            ((QByteArray *)&local_90,(char *)(iVar4 % iVar9 + lVar8 + (long)puVar7),iVar5 % iVar9);
  QCryptographicHash::hash(&local_98,(QByteArray *)&local_90,1);
  uVar3 = *(undefined8 *)(local_98 + *(long *)(local_98 + 0x10));
  *(undefined8 *)((long)puVar7 + lVar10 + 0x18) =
       *(undefined8 *)(local_98 + *(long *)(local_98 + 0x10) + 8);
  *(undefined8 *)((long)puVar7 + lVar10 + 0x10) = uVar3;
  QByteArray::append((QByteArray *)&local_90);
  QCryptographicHash::hash(&local_a0,&local_90,1);
  uVar3 = *(undefined8 *)(local_a0 + *(long *)(local_a0 + 0x10));
  *(undefined8 *)((long)puVar7 + lVar10 + 0x28) =
       *(undefined8 *)(local_a0 + *(long *)(local_a0 + 0x10) + 8);
  *(undefined8 *)((long)puVar7 + lVar10 + 0x20) = uVar3;
  QByteArray::clear();
  local_a8 = (QArrayData *)PTR_shared_null_100ba20d0;
  QByteArray::QByteArray((QByteArray *)&local_b0,&DAT_100b47be0,0x10);
  FUN_100613fc0(&local_b0,&local_a8,local_40);
  pcVar2 = *(code **)(*param_3 + 0x38);
  puVar7 = (uint *)*param_1;
  if ((1 < *puVar7) || (*(long *)(puVar7 + 4) != 0x18)) {
    QByteArray::reallocData(param_1,puVar7[1] + 1,puVar7[2] >> 0x1f);
    puVar7 = (uint *)*param_1;
  }
  lVar8 = *(long *)(puVar7 + 4);
  uVar1 = puVar7[1];
  if ((1 < *(uint *)local_a8) || (*(long *)(local_a8 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_a8,*(uint *)(local_a8 + 4) + 1,*(uint *)(local_a8 + 8) >> 0x1f);
  }
  iVar4 = (*pcVar2)(param_3,(long)puVar7 + lVar8,uVar1,local_a8 + *(long *)(local_a8 + 0x10));
  if (iVar4 < 0) {
LAB_100614c4b:
    QByteArray::fill((char)param_1,0x7a);
  }
  else {
    FUN_100613fc0(&local_98,&local_a8,local_40);
    pcVar2 = *(code **)(*param_3 + 0x48);
    if ((1 < *(uint *)local_a8) || (*(long *)(local_a8 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_a8,*(uint *)(local_a8 + 4) + 1,*(uint *)(local_a8 + 8) >> 0x1f)
      ;
    }
    iVar4 = (*pcVar2)(param_3,local_a8 + *(long *)(local_a8 + 0x10));
    if (iVar4 < 0) goto LAB_100614c4b;
    FUN_100613fc0(&local_a0,&local_a8,local_40);
    pcVar2 = *(code **)(*param_3 + 0x50);
    if ((1 < *(uint *)local_a8) || (*(long *)(local_a8 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_a8,*(uint *)(local_a8 + 4) + 1,*(uint *)(local_a8 + 8) >> 0x1f)
      ;
    }
    iVar4 = (*pcVar2)(param_3,local_a8 + *(long *)(local_a8 + 0x10));
    if (iVar4 < 0) goto LAB_100614c4b;
  }
  QByteArray::fill((char)&local_98,0x78);
  QByteArray::fill((char)&local_a0,0x79);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_81 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_81) goto LAB_100614cbf;
    }
    QArrayData::deallocate(local_b0,1,8);
  }
LAB_100614cbf:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_81 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_81) goto LAB_100614cf5;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
LAB_100614cf5:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_81 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_81) goto LAB_100614d2b;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_100614d2b:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_81 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_81) goto LAB_100614d61;
    }
    QArrayData::deallocate(local_98,1,8);
  }
LAB_100614d61:
  if (*(int *)local_90 == -1) {
    lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  else {
    lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_81 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_81) goto LAB_100614db3;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_100614db3:
  if (lVar8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

