
void FUN_10017cc10(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  Data *pDVar4;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  Data *local_30;
  undefined1 local_21;
  
  QWidget::actions();
  local_50 = local_30;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 == 0) {
      QListData::detach((int)&local_50);
      lVar2 = (long)*(int *)(local_50 + 8);
      if ((local_30 + (long)*(int *)(local_30 + 8) * 8 != local_50 + lVar2 * 8) &&
         (lVar3 = *(int *)(local_50 + 0xc) - lVar2, lVar3 != 0 && lVar2 <= *(int *)(local_50 + 0xc))
         ) {
        _memcpy(local_50 + lVar2 * 8 + 0x10,local_30 + (long)*(int *)(local_30 + 8) * 8 + 0x10,
                lVar3 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
    }
  }
  puVar1 = PTR_typeinfo_1021e1718;
  pDVar4 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
  local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
  local_48 = pDVar4;
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      if ((*(long *)pDVar4 != 0) &&
         (local_48 = pDVar4, lVar2 = ___dynamic_cast(*(long *)pDVar4,puVar1,&PTR_vtable_1021fd120,0)
         , lVar2 != 0)) {
        FUN_100179cf0(lVar2);
        pDVar4 = local_48;
      }
      pDVar4 = pDVar4 + 8;
      local_48 = pDVar4;
    } while (pDVar4 != local_40);
  }
  local_38 = 1;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10017cd31;
    }
    QListData::dispose(local_50);
  }
LAB_10017cd31:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QListData::dispose(local_30);
  }
  return;
}

