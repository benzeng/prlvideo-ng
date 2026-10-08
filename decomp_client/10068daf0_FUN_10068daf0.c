
void FUN_10068daf0(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  QArrayData *local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  int *local_80;
  int local_78;
  ulong local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  int local_48;
  undefined8 *local_40;
  undefined1 local_31;
  
  local_40 = (undefined8 *)QObject::sender();
  if (local_40 == (undefined8 *)0x0) {
    FUN_100df99c0("[ACTION_HELPERS]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 != orig","ActionManager/ActionHelpers.cpp",0xa8,"onOriginalChanged");
    return;
  }
  pcVar8 = (char *)(**(code **)*local_40)(local_40);
  FUN_10068f820(&local_68,param_1 + 0x10,&local_40);
  local_60 = local_68;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
      QListData::detach((int)&local_60);
      lVar11 = (long)*(int *)(local_60 + 8);
      if ((local_68 + (long)*(int *)(local_68 + 8) * 8 != local_60 + lVar11 * 8) &&
         (lVar13 = *(int *)(local_60 + 0xc) - lVar11,
         lVar13 != 0 && lVar11 <= *(int *)(local_60 + 0xc))) {
        _memcpy(local_60 + lVar11 * 8 + 0x10,local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10,
                lVar13 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
LAB_10068dc2f:
      QListData::dispose(local_68);
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10068dc2f;
    }
    if (local_48 == 0) goto LAB_10068e014;
  }
  if (local_58 != local_50) {
LAB_10068dc70:
    puVar5 = local_40;
    uVar1 = *(ulong *)local_58;
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    uVar15 = 0;
    if (*(uint *)(puVar2 + 4) != 0) {
      uVar10 = (uint)(uVar1 >> 0x1f) ^ (uint)uVar1 ^ *(uint *)((long)puVar2 + 0x24);
      uVar15 = 0;
      puVar9 = *(undefined8 **)(puVar2[1] + ((ulong)uVar10 % (ulong)*(uint *)(puVar2 + 4)) * 8);
      for (puVar3 = puVar9; puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
        if ((*(uint *)(puVar3 + 1) == uVar10) && (uVar1 == puVar3[2])) {
          uVar15 = 0;
          if ((puVar3 != puVar2) && (uVar15 = 0, *(int *)((long)puVar2 + 0x14) != 0))
          goto LAB_10068de50;
          break;
        }
      }
    }
    goto LAB_10068dcda;
  }
LAB_10068e014:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_60);
  }
  return;
  while (puVar9 = (undefined8 *)*puVar9, puVar9 != puVar2) {
LAB_10068de50:
    if ((*(uint *)(puVar9 + 1) == uVar10) && (uVar1 == puVar9[2])) {
      uVar15 = 0;
      if (puVar9 != puVar2) {
        uVar15 = *(undefined4 *)(puVar9 + 3);
      }
      break;
    }
  }
LAB_10068dcda:
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  local_70 = uVar1;
  if (*(uint *)(puVar2 + 4) != 0) {
    uVar10 = (uint)(uVar1 >> 0x1f) ^ (uint)uVar1 ^ *(uint *)((long)puVar2 + 0x24);
    puVar9 = *(undefined8 **)(puVar2[1] + ((ulong)uVar10 % (ulong)*(uint *)(puVar2 + 4)) * 8);
LAB_10068dd13:
    if (puVar9 != puVar2) {
      if ((*(uint *)(puVar9 + 1) != uVar10) || (uVar1 != puVar9[2])) goto LAB_10068dd10;
      if (puVar9 != puVar2) {
        FUN_10068fbb0(&local_98,(long *)(param_1 + 0x18),&local_70);
        local_90 = local_98;
        if (*local_98 != -1) {
          if (*local_98 == 0) {
            QListData::detach((int)&local_90);
            iVar7 = local_90[2];
            if (iVar7 != local_90[3]) {
              piVar12 = local_98 + (long)local_98[2] * 2 + 4;
              piVar14 = local_90 + (long)iVar7 * 2 + 4;
              lVar11 = (long)local_90[3] * 8 + (long)iVar7 * -8;
              do {
                piVar4 = *(int **)piVar12;
                *(int **)piVar14 = piVar4;
                if (1 < *piVar4 + 1U) {
                  LOCK();
                  *piVar4 = *piVar4 + 1;
                  local_31 = *piVar4 != 0;
                  UNLOCK();
                }
                piVar14 = piVar14 + 2;
                piVar12 = piVar12 + 2;
                lVar11 = lVar11 + -8;
              } while (lVar11 != 0);
            }
          }
          else {
            LOCK();
            *local_98 = *local_98 + 1;
            local_31 = *local_98 != 0;
            UNLOCK();
          }
        }
        local_88 = local_90 + (long)local_90[2] * 2 + 4;
        local_80 = local_90 + (long)local_90[3] * 2 + 4;
        local_78 = 1;
        FUN_100039a80(&local_98);
        puVar2 = local_40;
        uVar1 = local_70;
        if ((local_78 != 0) && (local_88 != local_80)) {
          do {
            QString::toLatin1();
            if ((1 < *(uint *)local_a0) || (*(long *)(local_a0 + 0x10) != 0x18)) {
              QByteArray::reallocData
                        (&local_a0,*(uint *)(local_a0 + 4) + 1,*(uint *)(local_a0 + 8) >> 0x1f);
            }
            iVar7 = QMetaObject::indexOfProperty(pcVar8);
            if (*(int *)local_a0 != -1) {
              if (*(int *)local_a0 != 0) {
                LOCK();
                *(int *)local_a0 = *(int *)local_a0 + -1;
                local_31 = *(int *)local_a0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10068df53;
              }
              QArrayData::deallocate(local_a0,1,8);
            }
LAB_10068df53:
            if (iVar7 == -1) {
              FUN_100df99c0("[ACTION_HELPERS]","prl_client_app",0,
                            "ASSERT( %s ) occured in %s:%d [%s]","-1 != i",
                            "ActionManager/ActionHelpers.cpp",0xb9,"onOriginalChanged");
            }
            QMetaObject::property((int)local_c0);
            FUN_10068e130(uVar1,puVar2,local_c0,uVar15);
            local_88 = local_88 + 2;
            local_78 = 1;
          } while (local_88 != local_80);
        }
        FUN_100039a80(&local_90);
        goto LAB_10068dff0;
      }
    }
  }
  for (iVar7 = 1; iVar6 = QMetaObject::propertyCount(), iVar7 < iVar6; iVar7 = iVar7 + 1) {
    QMetaObject::property((int)local_e0);
    FUN_10068e130(uVar1,puVar5,local_e0,uVar15);
  }
LAB_10068dff0:
  local_58 = local_58 + 8;
  local_48 = 1;
  if (local_58 == local_50) goto LAB_10068e014;
  goto LAB_10068dc70;
LAB_10068dd10:
  puVar9 = (undefined8 *)*puVar9;
  goto LAB_10068dd13;
}

