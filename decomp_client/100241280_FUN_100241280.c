
undefined8 FUN_100241280(long param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  QArrayData *local_a0;
  QString local_98;
  QString local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  undefined4 local_70;
  QString local_68;
  Data *local_60;
  Data *local_58;
  int *local_50;
  int *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 != (undefined8 *)0x0) {
    local_50 = (int *)PTR_shared_null_1021e15e8;
    FUN_1000341d0(&local_50,param_1 + 0x40);
    if ((int *)*param_2 != local_50) {
      local_48 = local_50;
      if (*local_50 != -1) {
        if (*local_50 == 0) {
          QListData::detach((int)&local_48);
          iVar1 = local_48[2];
          if (iVar1 != local_48[3]) {
            piVar9 = local_50 + (long)local_50[2] * 2 + 4;
            piVar10 = local_48 + (long)iVar1 * 2 + 4;
            lVar5 = (long)local_48[3] * 8 + (long)iVar1 * -8;
            do {
              piVar3 = *(int **)piVar9;
              *(int **)piVar10 = piVar3;
              if (1 < *piVar3 + 1U) {
                LOCK();
                *piVar3 = *piVar3 + 1;
                local_31 = *piVar3 != 0;
                UNLOCK();
              }
              piVar10 = piVar10 + 2;
              piVar9 = piVar9 + 2;
              lVar5 = lVar5 + -8;
            } while (lVar5 != 0);
          }
        }
        else {
          LOCK();
          *local_50 = *local_50 + 1;
          local_31 = *local_50 != 0;
          UNLOCK();
        }
      }
      piVar9 = (int *)*param_2;
      *param_2 = local_48;
      local_48 = piVar9;
      FUN_100039a80(&local_48);
    }
    FUN_100039a80(&local_50);
  }
  uVar6 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar6,param_1 + 0x18);
  local_58 = (Data *)PTR_shared_null_1021e15e8;
  uVar6 = 0x36cd;
  if (lVar5 == 0) goto LAB_1002416bc;
  uVar7 = FUN_10018d490(lVar5);
  FUN_10015ccc0(&local_60,uVar7,param_1 + 0x18);
  plVar8 = (long *)FUN_100241920(&local_58,&local_60);
  iVar1 = *(int *)(*plVar8 + 8);
  iVar2 = *(int *)(*plVar8 + 0xc);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002413f2;
    }
    QListData::dispose(local_60);
  }
LAB_1002413f2:
  if ((iVar2 == iVar1) || (uVar6 = 0x36de, param_3 == 0)) goto LAB_1002416bc;
  FUN_1000341d0(param_3,(QString *)(param_1 + 0x40));
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_88 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_88);
      lVar5 = (long)*(int *)(local_88 + 8);
      if ((local_58 + (long)*(int *)(local_58 + 8) * 8 != local_88 + lVar5 * 8) &&
         (lVar11 = *(int *)(local_88 + 0xc) - lVar5,
         lVar11 != 0 && lVar5 <= *(int *)(local_88 + 0xc))) {
        _memcpy(local_88 + lVar5 * 8 + 0x10,local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10,
                lVar11 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
  local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
  if (*(int *)(local_88 + 8) != *(int *)(local_88 + 0xc)) {
    do {
      local_70 = 1;
      uVar6 = *(undefined8 *)local_80;
      FUN_10018d830(&local_90,uVar6);
      cVar4 = operator==((QString *)(param_1 + 0x40),&local_90);
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100241522;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_100241522:
      if (cVar4 == '\0') {
        FUN_10018d830(&local_a0,uVar6);
        local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_a0;
        if (1 < *(int *)local_a0 + 1U) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + 1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_40,0x1ddad42);
        QString::append(&local_98);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002415ac;
          }
          QArrayData::deallocate(local_40,2,8);
        }
LAB_1002415ac:
        QString::append(&local_68);
        if (*(int *)local_98.field0_0x0 != -1) {
          if (*(int *)local_98.field0_0x0 != 0) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
            local_31 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002415f2;
          }
          QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
        }
LAB_1002415f2:
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100241630;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
      }
LAB_100241630:
      local_80 = local_80 + 8;
    } while (local_80 != local_78);
  }
  local_70 = 1;
  uVar6 = 0x36de;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100241680;
    }
    QListData::dispose(local_88);
  }
LAB_100241680:
  FUN_1000341d0(param_3,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002416bc;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1002416bc:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return uVar6;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return uVar6;
}

