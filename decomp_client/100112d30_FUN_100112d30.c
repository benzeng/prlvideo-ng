
long * FUN_100112d30(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  plVar7 = *(long **)(param_2 + 0x150);
  local_58 = (Data *)*plVar7;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar4 = (long)*(int *)(local_58 + 8);
      lVar1 = *plVar7;
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_58 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_58 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar4 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar5 * 8);
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
  local_40 = 1;
  iVar6 = 2;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      plVar2 = *(long **)local_50;
      local_78 = (Data *)plVar2[0x13];
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 == 0) {
          QListData::detach((int)&local_78);
          lVar4 = (long)*(int *)(local_78 + 8);
          lVar1 = plVar2[0x13];
          if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_78 + lVar4 * 8) &&
             (lVar5 = *(int *)(local_78 + 0xc) - lVar4,
             lVar5 != 0 && lVar4 <= *(int *)(local_78 + 0xc))) {
            _memcpy(local_78 + lVar4 * 8 + 0x10,
                    (void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),lVar5 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + 1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
        }
      }
      local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
      local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
      local_60 = 1;
      iVar6 = 8;
      if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
        do {
          local_60 = 1;
          cVar3 = FUN_100112fc0(param_1,*(undefined8 *)local_70);
          if (cVar3 != '\0') {
            iVar6 = 1;
            plVar7 = plVar2;
            break;
          }
          local_70 = local_70 + 8;
          local_60 = 1;
        } while (local_70 != local_68);
      }
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100112eef;
        }
        QListData::dispose(local_78);
      }
LAB_100112eef:
      if (iVar6 != 8) break;
      local_50 = local_50 + 8;
      local_40 = 1;
      iVar6 = 2;
    } while (local_50 != local_48);
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) goto LAB_100112f3d;
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
LAB_100112f3d:
  if (iVar6 == 2) {
    plVar7 = (long *)0x0;
  }
  return plVar7;
}

