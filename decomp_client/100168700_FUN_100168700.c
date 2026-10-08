
void FUN_100168700(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  QArrayData *local_70;
  QArrayData *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  uint local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  CVmEventBase::getEventIssuerId();
  lVar5 = FUN_10015cb20(param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100168761;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100168761:
  if (lVar5 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance.");
    return;
  }
  plVar1 = *(long **)(param_2 + 0xf8);
  local_60 = (Data *)*plVar1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      lVar7 = (long)*(int *)(local_60 + 8);
      lVar2 = *plVar1;
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_60 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_60 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar7 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  uVar4 = 0xffff;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    uVar4 = 0xffff;
    do {
      if (local_48 != 0) {
        CVmEventParameter::getParamName();
        iVar3 = QString::compare_helper
                          (local_68 + *(long *)(local_68 + 0x10),*(undefined4 *)(local_68 + 4),
                           "compacted_disk_err_code",0xffffffff,1);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001688aa;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_1001688aa:
        if (iVar3 == 0) {
          CVmEventParameter::getParamValue();
          uVar4 = QString::toInt((bool *)&local_70,0);
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100168910;
            }
            QArrayData::deallocate(local_70,2,8);
          }
        }
        else {
          local_48 = 0;
        }
      }
LAB_100168910:
      local_58 = local_58 + 8;
      uVar6 = local_48 ^ 1;
      bVar9 = local_48 != 1;
      local_48 = uVar6;
    } while ((bVar9) && (local_58 != local_50));
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10016895c;
    }
    QListData::dispose(local_60);
  }
LAB_10016895c:
  FUN_10018eda0(lVar5,uVar4);
  return;
}

