
void FUN_10051c510(long param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  QArrayData *local_70;
  QArrayData *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  int *local_40;
  undefined1 local_31;
  
  FUN_100519b50(&local_40,param_1 + 0x28);
  local_60 = local_40;
  if (*local_40 != -1) {
    if (*local_40 == 0) {
      QListData::detach((int)&local_60);
      iVar1 = local_60[2];
      if (iVar1 != local_60[3]) {
        local_40 = local_40 + (long)local_40[2] * 2 + 4;
        piVar8 = local_60 + (long)iVar1 * 2 + 4;
        lVar5 = (long)local_60[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_40;
          *(int **)piVar8 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar8 = piVar8 + 2;
          local_40 = local_40 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_40 = *local_40 + 1;
      local_31 = *local_40 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  if (local_60[2] != local_60[3]) {
    do {
      local_68 = *(QArrayData **)local_58;
      if (1 < *(int *)local_68 + 1U) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
      if (local_48 != 0) {
        puVar6 = operator_new(8);
        piVar8 = (int *)*param_2;
        *puVar6 = piVar8;
        if (1 < *piVar8 + 1U) {
          LOCK();
          *piVar8 = *piVar8 + 1;
          local_31 = *piVar8 != 0;
          UNLOCK();
          piVar8 = (int *)*puVar6;
        }
        uVar4 = FUN_100519800(param_1 + 0x28,&local_68,*(long *)(piVar8 + 4) + (long)piVar8,
                              piVar8[1],FUN_10051c800,puVar6);
        cVar3 = FUN_100519210(uVar4);
        if (cVar3 == '\0') {
          QString::toUtf8();
          FUN_1008e3970("HCT","VmClientTGHost",0,
                        "Error: failed to send request to client with uuid=\"%s\", code=%d",
                        local_70 + *(long *)(local_70 + 0x10),uVar4);
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10051c6e0;
            }
            QArrayData::deallocate(local_70,1,8);
          }
        }
LAB_10051c6e0:
        local_48 = 0;
      }
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10051c717;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10051c717:
      local_58 = local_58 + 2;
      uVar7 = local_48 ^ 1;
      bVar9 = local_48 != 1;
      local_48 = uVar7;
    } while ((bVar9) && (local_58 != local_50));
  }
  FUN_100037320(&local_60);
  FUN_100037320(&local_40);
  return;
}

