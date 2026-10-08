
void FUN_1000c6e70(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  int *piVar8;
  bool bVar9;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  uint local_60;
  undefined1 local_58 [39];
  undefined1 local_31;
  
  iVar2 = FUN_100a67f70(local_58,0x14);
  if (iVar2 == 0) {
    local_78 = (int *)*param_2;
    if (*local_78 != -1) {
      if (*local_78 == 0) {
        QListData::detach((int)&local_78);
        iVar2 = local_78[2];
        if (iVar2 != local_78[3]) {
          puVar7 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
          piVar8 = local_78 + (long)iVar2 * 2 + 4;
          lVar3 = (long)local_78[3] * 8 + (long)iVar2 * -8;
          do {
            piVar1 = (int *)*puVar7;
            *(int **)piVar8 = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_31 = *piVar1 != 0;
              UNLOCK();
            }
            piVar8 = piVar8 + 2;
            puVar7 = puVar7 + 1;
            lVar3 = lVar3 + -8;
          } while (lVar3 != 0);
        }
      }
      else {
        LOCK();
        *local_78 = *local_78 + 1;
        local_31 = *local_78 != 0;
        UNLOCK();
      }
    }
    local_70 = local_78 + (long)local_78[2] * 2 + 4;
    local_68 = local_78 + (long)local_78[3] * 2 + 4;
    local_60 = 1;
    if (local_78[2] != local_78[3]) {
      do {
        local_80 = *(QArrayData **)local_70;
        if (1 < *(int *)local_80 + 1U) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + 1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
        }
        if (local_60 != 0) {
          QString::normalized(&local_90,&local_80,1,0);
          QString::toUtf8();
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000c6fe6;
            }
            QArrayData::deallocate(local_90,2,8);
          }
LAB_1000c6fe6:
          FUN_100a68060(local_58,local_88 + *(long *)(local_88 + 0x10),*(undefined4 *)(local_88 + 4)
                        ,4);
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000c7031;
            }
            QArrayData::deallocate(local_88,1,8);
          }
LAB_1000c7031:
          local_60 = 0;
        }
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000c7068;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_1000c7068:
        local_70 = local_70 + 2;
        uVar6 = local_60 ^ 1;
        bVar9 = local_60 != 1;
        local_60 = uVar6;
      } while ((bVar9) && (local_70 != local_68));
    }
    FUN_100039a80(&local_78);
    puVar4 = (undefined4 *)FUN_100a67f30(local_58);
    puVar4[1] = 2;
    *puVar4 = 0x9b;
    puVar4[2] = 0;
    iVar2 = FUN_100a67f40(local_58);
    puVar4[4] = iVar2 + -0x14;
    puVar4[3] = 0;
    uVar5 = (**(code **)(*param_1 + 0x68))(param_1);
    FUN_1000e85b0(uVar5,puVar4);
    FUN_100a681d0(local_58);
  }
  return;
}

