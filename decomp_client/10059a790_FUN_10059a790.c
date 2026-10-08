
undefined8 FUN_10059a790(long param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  int *piVar8;
  bool bVar9;
  QVariant local_70;
  QArrayData *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  local_58 = (int *)*param_3;
  if (*local_58 != -1) {
    if (*local_58 == 0) {
      QListData::detach((int)&local_58);
      iVar4 = local_58[2];
      if (iVar4 != local_58[3]) {
        puVar7 = (undefined8 *)(*param_3 + 0x10 + (long)*(int *)(*param_3 + 8) * 8);
        piVar8 = local_58 + (long)iVar4 * 2 + 4;
        lVar5 = (long)local_58[3] * 8 + (long)iVar4 * -8;
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
        plVar2 = *(long **)(param_1 + 0x40);
        pcVar3 = *(code **)(*plVar2 + 0x70);
        iVar4 = QString::compare_helper
                          (local_60 + *(long *)(local_60 + 0x10),*(int *)(local_60 + 4),
                           "ProxySettings.UseProxy",0xffffffff,1);
        QVariant::QVariant(&local_70,iVar4 == 0);
        (*pcVar3)(plVar2,param_2,&local_60,&local_70);
        QVariant::~QVariant(&local_70);
        local_40 = 0;
      }
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10059a91f;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_10059a91f:
      local_50 = local_50 + 2;
      uVar6 = local_40 ^ 1;
      bVar9 = local_40 != 1;
      local_40 = uVar6;
    } while ((bVar9) && (local_50 != local_48));
  }
  FUN_100039a80(&local_58);
  return 0;
}

