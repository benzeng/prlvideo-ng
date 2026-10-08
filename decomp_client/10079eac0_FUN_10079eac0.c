
long * FUN_10079eac0(long *param_1,long param_2,undefined8 *param_3,char param_4)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  Data *local_90;
  undefined8 local_88;
  QArrayData *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  int local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x10);
  local_48 = (QArrayData *)*param_3;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  puVar2 = (undefined8 *)FUN_100d38a90(uVar4);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10079eb41;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10079eb41:
  iVar7 = (int)param_1;
  if (((*(long *)(param_2 + 0x28) == 0) || (cVar1 = FUN_100d3e730(), puVar2 == (undefined8 *)0x0))
     || (cVar1 == '\x01')) {
    *param_1 = (long)local_40;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 == 0) {
        QListData::detach(iVar7);
        lVar3 = *param_1;
        lVar5 = (long)*(int *)(lVar3 + 8);
        if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != (Data *)(lVar3 + lVar5 * 8)) &&
           (lVar6 = *(int *)(lVar3 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar3 + 0xc))) {
          _memcpy((void *)(lVar3 + 0x10 + lVar5 * 8),
                  local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
    }
    goto LAB_10079eef8;
  }
  uVar4 = 0;
  if ((*(long *)(param_2 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_2 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_2 + 0x20);
  }
  lVar3 = FUN_1007b56d0(uVar4);
  if (lVar3 == 0) {
    local_50 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    uVar4 = 0;
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_2 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_2 + 0x20);
    }
    uVar4 = FUN_1007b56d0(uVar4);
    FUN_100188480(&local_50,uVar4);
  }
  local_80 = (QArrayData *)*puVar2;
  if (1 < *(int *)local_80 + 1U) {
    LOCK();
    *(int *)local_80 = *(int *)local_80 + 1;
    local_31 = *(int *)local_80 != 0;
    UNLOCK();
  }
  FUN_100124a60(&local_78,&local_80,&local_50);
  local_70 = local_78;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
      QListData::detach((int)&local_70);
      lVar3 = (long)*(int *)(local_70 + 8);
      if ((local_78 + (long)*(int *)(local_78 + 8) * 8 != local_70 + lVar3 * 8) &&
         (lVar5 = *(int *)(local_70 + 0xc) - lVar3, lVar5 != 0 && lVar3 <= *(int *)(local_70 + 0xc))
         ) {
        _memcpy(local_70 + lVar3 * 8 + 0x10,local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10,
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  local_58 = 1;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10079ed06;
    }
    QListData::dispose(local_78);
  }
LAB_10079ed06:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10079ed36;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10079ed36:
  if ((local_58 != 0) && (local_68 != local_60)) {
    do {
      local_88 = *(undefined8 *)local_68;
      FUN_10012c6e0(&local_40,&local_88);
      local_68 = local_68 + 8;
      local_58 = 1;
    } while (local_68 != local_60);
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10079eda1;
    }
    QListData::dispose(local_70);
  }
LAB_10079eda1:
  if (param_4 == '\0') {
    *param_1 = (long)local_40;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 == 0) {
        QListData::detach(iVar7);
        lVar3 = *param_1;
        lVar5 = (long)*(int *)(lVar3 + 8);
        if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != (Data *)(lVar3 + lVar5 * 8)) &&
           (lVar6 = *(int *)(lVar3 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar3 + 0xc))) {
          _memcpy((void *)(lVar3 + 0x10 + lVar5 * 8),
                  local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
    }
  }
  else {
    FUN_10079f0f0(&local_90,puVar2,&local_50);
    *param_1 = (long)local_40;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 == 0) {
        QListData::detach(iVar7);
        lVar3 = *param_1;
        lVar5 = (long)*(int *)(lVar3 + 8);
        if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != (Data *)(lVar3 + lVar5 * 8)) &&
           (lVar6 = *(int *)(lVar3 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar3 + 0xc))) {
          _memcpy((void *)(lVar3 + 0x10 + lVar5 * 8),
                  local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
    }
    FUN_1007a1c60(param_1,&local_90);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10079eec8;
      }
      QListData::dispose(local_90);
    }
  }
LAB_10079eec8:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10079eef8;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10079eef8:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return param_1;
}

