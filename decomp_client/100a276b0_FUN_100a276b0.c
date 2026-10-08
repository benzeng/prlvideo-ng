
void FUN_100a276b0(long param_1,QString *param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  int *piVar8;
  bool bVar9;
  QArrayData *local_d0;
  undefined1 local_c8 [8];
  void *local_c0;
  void *local_b8;
  string local_a0 [40];
  void *local_78;
  void *local_70;
  QString local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  *(undefined4 *)(param_1 + 0x60) = param_3;
  lVar1 = param_1 + 0x68;
  if (lVar1 != param_4) {
    FUN_100a2bc20(lVar1,*(undefined8 *)(param_4 + 8),param_4,0);
  }
  FUN_100094f70(param_1 + 0x40);
  FUN_1000341d0(param_1 + 0x40,param_2);
  local_58 = *(int **)(param_1 + 0x50);
  if (*local_58 != -1) {
    if (*local_58 == 0) {
      QListData::detach((int)&local_58);
      iVar2 = local_58[2];
      if (iVar2 != local_58[3]) {
        puVar7 = (undefined8 *)
                 (*(long *)(param_1 + 0x50) + 0x10 +
                 (long)*(int *)(*(long *)(param_1 + 0x50) + 8) * 8);
        piVar8 = local_58 + (long)iVar2 * 2 + 4;
        lVar5 = (long)local_58[3] * 8 + (long)iVar2 * -8;
        do {
          piVar3 = (int *)*puVar7;
          *(int **)piVar8 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
            UNLOCK();
          }
          piVar8 = piVar8 + 2;
          puVar7 = puVar7 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_58 = *local_58 + 1;
      local_31 = *local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  if (local_58[2] != local_58[3]) {
    do {
      local_60.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_50;
      if (1 < *(int *)local_60.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
      }
      if (local_40 != 0) {
        cVar4 = operator==(&local_60,param_2);
        if (cVar4 == '\0') {
          FUN_100a23f10(&local_78,lVar1,1);
          FUN_100a332c0(local_c8,6,*(undefined4 *)(param_1 + 0x60),1,local_78,
                        (int)local_70 - (int)local_78);
          local_d0 = (QArrayData *)local_60.field0_0x0;
          if (1 < *(int *)local_60.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
            local_31 = *(int *)local_60.field0_0x0 != 0;
            UNLOCK();
          }
          FUN_100a27a60(param_1,&local_d0,local_c8);
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a2788c;
            }
            QArrayData::deallocate(local_d0,2,8);
          }
LAB_100a2788c:
          std::string::~string(local_a0);
          if (local_c0 != (void *)0x0) {
            if (local_b8 != local_c0) {
              local_b8 = local_c0;
            }
            operator_delete(local_c0);
          }
          if (local_78 != (void *)0x0) {
            if (local_70 != local_78) {
              local_70 = local_78;
            }
            operator_delete(local_78);
          }
        }
        local_40 = 0;
      }
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a27908;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_100a27908:
      local_50 = local_50 + 2;
      uVar6 = local_40 ^ 1;
      bVar9 = local_40 != 1;
      local_40 = uVar6;
    } while ((bVar9) && (local_50 != local_48));
  }
  FUN_100039a80(&local_58);
  return;
}

