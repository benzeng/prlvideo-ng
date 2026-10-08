
long FUN_1007c5040(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  lVar3 = FUN_1007bd870(param_1,1);
  if (lVar3 == 0) {
    return 0;
  }
  lVar3 = QAction::menu();
  if (lVar3 == 0) {
    return 0;
  }
  QAction::menu();
  QWidget::actions();
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar3 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_58 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar3 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
LAB_1007c513b:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1007c513b;
    }
    lVar3 = 0;
    if (local_40 == 0) goto LAB_1007c51f4;
  }
  puVar1 = PTR_typeinfo_1021e1718;
  lVar3 = 0;
  if (local_50 != local_48) {
    do {
      if ((*(long *)local_50 == 0) ||
         (lVar3 = ___dynamic_cast(*(long *)local_50,puVar1,&PTR_vtable_10222dac0,0), lVar3 == 0)) {
        FUN_100df99c0("","prl_client_app",0);
      }
      else {
        uVar2 = FUN_1007b5ec0(lVar3);
        if (((uVar2 ^ param_2) & 0xfffffff) == 0) break;
      }
      local_50 = local_50 + 8;
      local_40 = 1;
      lVar3 = 0;
    } while (local_50 != local_48);
  }
LAB_1007c51f4:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return lVar3;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return lVar3;
}

