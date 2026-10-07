
void FUN_1004345f0(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  bool bVar7;
  undefined4 local_64;
  QArrayData *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  if (param_4 != 0) {
    FUN_1004369e0(param_4);
  }
  local_58 = (int *)*param_2;
  if (*local_58 != -1) {
    if (*local_58 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = local_58[2];
      if (iVar1 != local_58[3]) {
        puVar5 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        piVar6 = local_58 + (long)iVar1 * 2 + 4;
        lVar4 = (long)local_58[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar5;
          *(int **)piVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
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
        if (*(int *)(local_60 + 4) == 0) {
          FUN_1008e3970("","IODesktopServer",0,"sendPackageToClients: handle is empty! Skip!");
        }
        else {
          local_64 = FUN_100433970(param_1,&local_60,param_3,1);
          if (param_4 != 0) {
            FUN_100469110(param_4,&local_60,&local_64);
          }
        }
        local_40 = 0;
      }
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100434795;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100434795:
      local_50 = local_50 + 2;
      uVar3 = local_40 ^ 1;
      bVar7 = local_40 != 1;
      local_40 = uVar3;
    } while ((bVar7) && (local_50 != local_48));
  }
  FUN_100037320(&local_58);
  return;
}

