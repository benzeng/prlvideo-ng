
void FUN_100ce4ce0(QString *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  bool bVar7;
  QTypedArrayData<unsigned_short> *local_c0;
  QString local_b8;
  QArrayData *local_b0;
  int *local_a8;
  int *local_a0;
  int *local_98;
  int *local_90;
  uint local_88;
  QTypedArrayData<unsigned_short> *local_80;
  QString local_78;
  QArrayData *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  QDir local_40 [15];
  undefined1 local_31;
  
  QDir::QDir(local_40,param_1);
  QDir::entryList(&local_68,local_40,param_2,2,0xffffffff);
  local_60 = local_68;
  if (*local_68 != -1) {
    if (*local_68 == 0) {
      QListData::detach((int)&local_60);
      iVar1 = local_60[2];
      if (iVar1 != local_60[3]) {
        local_68 = local_68 + (long)local_68[2] * 2 + 4;
        piVar6 = local_60 + (long)iVar1 * 2 + 4;
        lVar5 = (long)local_60[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_68;
          *(int **)piVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          local_68 = local_68 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_68 = *local_68 + 1;
      local_31 = *local_68 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  FUN_100039a80(&local_68);
  if (local_48 != 0) {
    do {
      if (local_58 == local_50) break;
      local_70 = *(QArrayData **)local_58;
      if (1 < *(int *)local_70 + 1U) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + 1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
      }
      if (local_48 != 0) {
        uVar3 = QDir::separator();
        local_80 = param_1->field0_0x0;
        if (1 < *(uint *)local_80 + 1) {
          LOCK();
          *(uint *)local_80 = *(uint *)local_80 + 1;
          local_31 = *(uint *)local_80 != 0;
          UNLOCK();
        }
        uVar4 = *(uint *)(local_80 + 4);
        if ((1 < *(uint *)local_80) || ((*(uint *)(local_80 + 8) & 0x7fffffff) < uVar4 + 2)) {
          QString::reallocData((uint)&local_80,SUB41(uVar4 + 2,0));
          uVar4 = *(uint *)(local_80 + 4);
        }
        *(uint *)(local_80 + 4) = uVar4 + 1;
        *(undefined2 *)(local_80 + (long)(int)uVar4 * 2 + *(long *)(local_80 + 0x10)) = uVar3;
        *(undefined2 *)
         (local_80 + (long)(int)*(uint *)(local_80 + 4) * 2 + *(long *)(local_80 + 0x10)) = 0;
        if (1 < *(uint *)local_80 + 1) {
          LOCK();
          *(uint *)local_80 = *(uint *)local_80 + 1;
          local_31 = *(uint *)local_80 != 0;
          UNLOCK();
        }
        local_78.field0_0x0 = local_80;
        QString::append(&local_78);
        FUN_1000341d0(param_3,&local_78);
        if (*(int *)local_78.field0_0x0 != -1) {
          if (*(int *)local_78.field0_0x0 != 0) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
            local_31 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ce4f02;
          }
          QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
        }
LAB_100ce4f02:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ce4f32;
          }
          QArrayData::deallocate((QArrayData *)local_80,2,8);
        }
LAB_100ce4f32:
        local_48 = 0;
      }
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce4f69;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100ce4f69:
      local_58 = local_58 + 2;
      uVar4 = local_48 ^ 1;
      bVar7 = local_48 != 1;
      local_48 = uVar4;
    } while (bVar7);
  }
  FUN_100039a80(&local_60);
  QDir::entryList(&local_a8,local_40,0x6400,0xffffffff);
  local_a0 = local_a8;
  if (*local_a8 != -1) {
    if (*local_a8 == 0) {
      QListData::detach((int)&local_a0);
      iVar1 = local_a0[2];
      if (iVar1 != local_a0[3]) {
        local_a8 = local_a8 + (long)local_a8[2] * 2 + 4;
        piVar6 = local_a0 + (long)iVar1 * 2 + 4;
        lVar5 = (long)local_a0[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_a8;
          *(int **)piVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          local_a8 = local_a8 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_a8 = *local_a8 + 1;
      local_31 = *local_a8 != 0;
      UNLOCK();
    }
  }
  local_98 = local_a0 + (long)local_a0[2] * 2 + 4;
  local_90 = local_a0 + (long)local_a0[3] * 2 + 4;
  local_88 = 1;
  FUN_100039a80(&local_a8);
  if (local_88 != 0) {
    do {
      if (local_98 == local_90) break;
      local_b0 = *(QArrayData **)local_98;
      if (1 < *(int *)local_b0 + 1U) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + 1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
      }
      if (local_88 != 0) {
        uVar3 = QDir::separator();
        local_c0 = param_1->field0_0x0;
        if (1 < *(uint *)local_c0 + 1) {
          LOCK();
          *(uint *)local_c0 = *(uint *)local_c0 + 1;
          local_31 = *(uint *)local_c0 != 0;
          UNLOCK();
        }
        uVar4 = *(uint *)(local_c0 + 4);
        if ((1 < *(uint *)local_c0) || ((*(uint *)(local_c0 + 8) & 0x7fffffff) < uVar4 + 2)) {
          QString::reallocData((uint)&local_c0,SUB41(uVar4 + 2,0));
          uVar4 = *(uint *)(local_c0 + 4);
        }
        *(uint *)(local_c0 + 4) = uVar4 + 1;
        *(undefined2 *)(local_c0 + (long)(int)uVar4 * 2 + *(long *)(local_c0 + 0x10)) = uVar3;
        *(undefined2 *)
         (local_c0 + (long)(int)*(uint *)(local_c0 + 4) * 2 + *(long *)(local_c0 + 0x10)) = 0;
        if (1 < *(uint *)local_c0 + 1) {
          LOCK();
          *(uint *)local_c0 = *(uint *)local_c0 + 1;
          local_31 = *(uint *)local_c0 != 0;
          UNLOCK();
        }
        local_b8.field0_0x0 = local_c0;
        QString::append(&local_b8);
        FUN_100ce4ce0(&local_b8,param_2,param_3);
        if (*(int *)local_b8.field0_0x0 != -1) {
          if (*(int *)local_b8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
            local_31 = *(int *)local_b8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ce51c2;
          }
          QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
        }
LAB_100ce51c2:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ce51f8;
          }
          QArrayData::deallocate((QArrayData *)local_c0,2,8);
        }
LAB_100ce51f8:
        local_88 = 0;
      }
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce5235;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100ce5235:
      local_98 = local_98 + 2;
      uVar4 = local_88 ^ 1;
      bVar7 = local_88 != 1;
      local_88 = uVar4;
    } while (bVar7);
  }
  FUN_100039a80(&local_a0);
  QDir::~QDir(local_40);
  return;
}

