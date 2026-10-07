
undefined8 * FUN_1006425c0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  QArrayData *local_70;
  QArrayData *local_68;
  uint *local_60;
  uint *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  uint *local_38;
  uint *local_30;
  undefined1 local_21;
  
  local_70 = (QArrayData *)*param_2;
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    UNLOCK();
  }
  local_38 = (uint *)PTR_shared_null_100ba2188;
  local_48 = (QArrayData *)
             QString::fromAscii_helper
                       ("(kMDItemKind == \'Application\' || kMDItemFSName == \"*.app\") && kMDItemCFBundleIdentifier == \"%1\""
                        ,0x5f);
  QString::arg(&local_40,&local_48,&local_70,0,0x20);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100642651;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100642651:
  local_50 = local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_21 = *(int *)local_40 != 0;
    UNLOCK();
  }
  lVar2 = FUN_100642cc0(&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006426a6;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006426a6:
  if (lVar2 != 0) {
    FUN_100642e20(lVar2,0);
    FUN_100641960(&local_58,lVar2);
    if (local_38 != local_58) {
      local_30 = local_58;
      if (*local_58 != 0xffffffff) {
        if (*local_58 == 0) {
          QListData::detach((int)&local_30);
          uVar5 = local_30[2];
          if (uVar5 != local_30[3]) {
            local_58 = local_58 + (long)(int)local_58[2] * 2 + 4;
            puVar4 = local_30 + (long)(int)uVar5 * 2 + 4;
            lVar3 = (long)(int)local_30[3] * 8 + (long)(int)uVar5 * -8;
            do {
              piVar1 = *(int **)local_58;
              *(int **)puVar4 = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                local_21 = *piVar1 != 0;
                UNLOCK();
              }
              puVar4 = puVar4 + 2;
              local_58 = local_58 + 2;
              lVar3 = lVar3 + -8;
            } while (lVar3 != 0);
          }
        }
        else {
          LOCK();
          *local_58 = *local_58 + 1;
          local_21 = *local_58 != 0;
          UNLOCK();
        }
      }
      puVar4 = local_30;
      local_30 = local_38;
      local_38 = puVar4;
      FUN_100013180(&local_30);
    }
    FUN_100013180(&local_58);
    _CFRelease(lVar2);
  }
  uVar5 = local_38[2];
  if (local_38[3] == uVar5) {
    *param_1 = PTR_shared_null_100ba20d0;
  }
  else {
    if (1 < *local_38) {
      FUN_100022c80(&local_38,local_38[1]);
      uVar5 = local_38[2];
    }
    puVar4 = local_38;
    local_68 = (QArrayData *)QString::fromAscii_helper(":",1);
    QString::split(&local_60,puVar4 + (long)(int)uVar5 * 2 + 4,&local_68,0,1);
    if (1 < *local_60) {
      FUN_100022c80(&local_60,local_60[1]);
    }
    piVar1 = *(int **)(local_60 + (long)(int)local_60[3] * 2 + 2);
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_21 = *piVar1 != 0;
      UNLOCK();
    }
    FUN_100013180(&local_60);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100642850;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_100642850:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100642880;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100642880:
  FUN_100013180(&local_38);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      local_38 = (uint *)CONCAT71(local_38._1_7_,*(int *)local_70 != 0);
      if (*(int *)local_70 != 0) {
        return param_1;
      }
    }
    QArrayData::deallocate(local_70,2,8);
  }
  return param_1;
}

