
void FUN_100517350(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  int *piVar8;
  bool bVar9;
  QArrayData *local_68;
  QArrayData *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  lVar5 = *(long *)(param_1 + 0x68);
  local_58 = *(int **)(lVar5 + 8);
  if (*local_58 != -1) {
    if (*local_58 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = local_58[2];
      if (iVar1 != local_58[3]) {
        lVar5 = *(long *)(lVar5 + 8);
        puVar7 = (undefined8 *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8);
        piVar8 = local_58 + (long)iVar1 * 2 + 4;
        lVar5 = (long)local_58[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar7;
          *(int **)piVar8 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
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
      local_60 = *(QArrayData **)local_50;
      if (1 < *(int *)local_60 + 1U) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
      }
      if (local_40 != 0) {
        uVar4 = FUN_100519ab0(param_1 + 0x28,&local_60,param_2,param_3,0,0);
        cVar3 = FUN_100519210(uVar4);
        if (cVar3 == '\0' && 0 < DAT_1011b55f8) {
          QString::toUtf8();
          FUN_1008e3970("","LayoutSyncHost",1,"failed to send %ld bytes to %s");
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005174f0;
            }
            QArrayData::deallocate(local_68,1,8);
          }
        }
LAB_1005174f0:
        local_40 = 0;
      }
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100517527;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100517527:
      local_50 = local_50 + 2;
      uVar6 = local_40 ^ 1;
      bVar9 = local_40 != 1;
      local_40 = uVar6;
    } while ((bVar9) && (local_50 != local_48));
  }
  FUN_100037320(&local_58);
  return;
}

