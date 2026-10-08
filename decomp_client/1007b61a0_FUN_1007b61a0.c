
void FUN_1007b61a0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  Data *pDVar4;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  Data *local_40;
  Data *local_38;
  undefined1 local_29;
  
  QActionGroup::actions();
  WidgetUtils::getAllActionsRecursive((QList *)&local_38,SUB81(&local_40,0));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007b61f8;
    }
    QListData::dispose(local_40);
  }
LAB_1007b61f8:
  local_60 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 == 0) {
      QListData::detach((int)&local_60);
      lVar2 = (long)*(int *)(local_60 + 8);
      if ((local_38 + (long)*(int *)(local_38 + 8) * 8 != local_60 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_60 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar2 * 8 + 0x10,local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
    }
  }
  puVar1 = PTR_typeinfo_1021e1718;
  pDVar4 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_58 = pDVar4;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      lVar2 = *(long *)pDVar4;
      if (((lVar2 != param_2) && (lVar2 != 0)) &&
         (local_58 = pDVar4, lVar2 = ___dynamic_cast(lVar2,puVar1,&PTR_vtable_10222d910,0),
         lVar2 != 0)) {
        FUN_1001324d0(lVar2,0);
        pDVar4 = local_58;
      }
      pDVar4 = pDVar4 + 8;
      local_58 = pDVar4;
    } while (pDVar4 != local_50);
  }
  local_48 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007b6308;
    }
    QListData::dispose(local_60);
  }
LAB_1007b6308:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QListData::dispose(local_38);
  }
  return;
}

