
undefined8 * FUN_10079f0f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  Data *local_98;
  undefined8 local_90;
  QArrayData *local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  int local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  plVar3 = (long *)FUN_100d38a10(param_2);
  local_58 = (Data *)*plVar3;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar4 = (long)*(int *)(local_58 + 8);
      lVar5 = *plVar3;
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_58 + lVar4 * 8) &&
         (lVar6 = *(int *)(local_58 + 0xc) - lVar4, lVar6 != 0 && lVar4 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar4 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      puVar1 = *(undefined8 **)local_50;
      local_88 = (QArrayData *)*puVar1;
      if (1 < *(int *)local_88 + 1U) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
      }
      FUN_100124a60(&local_80,&local_88,param_3);
      local_78 = local_80;
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 == 0) {
          QListData::detach((int)&local_78);
          lVar5 = (long)*(int *)(local_78 + 8);
          if ((local_80 + (long)*(int *)(local_80 + 8) * 8 != local_78 + lVar5 * 8) &&
             (lVar4 = *(int *)(local_78 + 0xc) - lVar5,
             lVar4 != 0 && lVar5 <= *(int *)(local_78 + 0xc))) {
            _memcpy(local_78 + lVar5 * 8 + 0x10,local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10,
                    lVar4 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + 1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
        }
      }
      local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
      local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
      local_60 = 1;
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10079f2a3;
        }
        QListData::dispose(local_80);
      }
LAB_10079f2a3:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10079f2d3;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_10079f2d3:
      if (local_60 != 0) {
        for (; local_70 != local_68; local_70 = local_70 + 8) {
          local_90 = *(undefined8 *)local_70;
          FUN_10012c6e0(param_1,&local_90);
          local_60 = 1;
        }
      }
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10079f336;
        }
        QListData::dispose(local_78);
      }
LAB_10079f336:
      iVar2 = FUN_100d38910(puVar1);
      if (iVar2 != 0) {
        FUN_10079f0f0(&local_98,puVar1,param_3);
        FUN_1007a1c60(param_1,&local_98);
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10079f387;
          }
          QListData::dispose(local_98);
        }
      }
LAB_10079f387:
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return param_1;
}

