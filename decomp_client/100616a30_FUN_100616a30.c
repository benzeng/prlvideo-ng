
undefined1 FUN_100616a30(long param_1,uint *param_2,QString *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined1 uVar4;
  QArrayData *local_2860;
  QString local_2858;
  undefined4 local_284c;
  QString local_2848;
  uint local_2840;
  bool local_2839;
  char local_2838 [10240];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar2 = *(long *)(param_1 + 0x28);
  local_38 = lVar1;
  if (lVar2 == 0) {
    uVar4 = 0;
    FUN_100df99c0("[LICENSE]","prl_client_app",0,"(!)Error: Invalid license handle.");
    goto LAB_100616d45;
  }
  _PrlHandle_AddRef(lVar2);
  _PrlHandle_Free(lVar2);
  local_2840 = 0x80011000;
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    _PrlHandle_AddRef(lVar2);
  }
  iVar3 = _PrlLic_GetStatus(lVar2,&local_2840);
  if (lVar2 != 0) {
    _PrlHandle_Free(lVar2);
  }
  if (iVar3 < 0) {
    uVar4 = 0;
    FUN_100df99c0("[LICENSE]","prl_client_app",0,
                  "(!)Error: Couldn\'t extract dispatcher license info (get status). \t\t\tError code: %.8X"
                  ,iVar3);
    goto LAB_100616d45;
  }
  if (local_2840 == 0x80011000) goto LAB_100616c4f;
  local_2848.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_284c = 0x2800;
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    _PrlHandle_AddRef(lVar2);
  }
  iVar3 = _PrlLic_GetLicenseKey(lVar2,local_2838,&local_284c);
  if (lVar2 != 0) {
    _PrlHandle_Free(lVar2);
  }
  if (iVar3 < 0) {
    FUN_100df99c0("[LICENSE]","prl_client_app",0,"(!)Error: Failed to retrieve license key.");
    if (*(int *)local_2848.field0_0x0 != -1) {
      if (*(int *)local_2848.field0_0x0 != 0) {
        LOCK();
        *(int *)local_2848.field0_0x0 = *(int *)local_2848.field0_0x0 + -1;
        iVar3 = *(int *)local_2848.field0_0x0;
        UNLOCK();
LAB_100616d24:
        local_2839 = iVar3 != 0;
        if (local_2839) goto LAB_100616d43;
      }
LAB_100616d34:
      QArrayData::deallocate((QArrayData *)local_2848.field0_0x0,2,8);
    }
  }
  else {
    _strlen(local_2838);
    QString::fromUtf8_helper((char *)&local_2860,(int)local_2838);
    QString::normalized(&local_2858,&local_2860,1,0);
    QString::operator=(&local_2848,&local_2858);
    if (*(int *)local_2858.field0_0x0 != -1) {
      if (*(int *)local_2858.field0_0x0 != 0) {
        LOCK();
        *(int *)local_2858.field0_0x0 = *(int *)local_2858.field0_0x0 + -1;
        local_2839 = *(int *)local_2858.field0_0x0 != 0;
        UNLOCK();
        if (local_2839) goto LAB_100616bb3;
      }
      QArrayData::deallocate((QArrayData *)local_2858.field0_0x0,2,8);
    }
LAB_100616bb3:
    if (*(int *)local_2860 != -1) {
      if (*(int *)local_2860 != 0) {
        LOCK();
        *(int *)local_2860 = *(int *)local_2860 + -1;
        local_2839 = *(int *)local_2860 != 0;
        UNLOCK();
        if (local_2839) goto LAB_100616bef;
      }
      QArrayData::deallocate(local_2860,2,8);
    }
LAB_100616bef:
    if (*(int *)(local_2848.field0_0x0 + 4) != 0) {
      QString::operator=(param_3,&local_2848);
      if (*(int *)local_2848.field0_0x0 != -1) {
        if (*(int *)local_2848.field0_0x0 != 0) {
          LOCK();
          *(int *)local_2848.field0_0x0 = *(int *)local_2848.field0_0x0 + -1;
          local_2839 = *(int *)local_2848.field0_0x0 != 0;
          UNLOCK();
          if (local_2839) goto LAB_100616c4f;
        }
        QArrayData::deallocate((QArrayData *)local_2848.field0_0x0,2,8);
      }
LAB_100616c4f:
      *param_2 = local_2840;
      uVar4 = 1;
      goto LAB_100616d45;
    }
    FUN_100df99c0("[LICENSE]","prl_client_app",0,"(!)Error: License key are empty.");
    if (*(int *)local_2848.field0_0x0 != -1) {
      if (*(int *)local_2848.field0_0x0 != 0) {
        LOCK();
        *(int *)local_2848.field0_0x0 = *(int *)local_2848.field0_0x0 + -1;
        iVar3 = *(int *)local_2848.field0_0x0;
        UNLOCK();
        goto LAB_100616d24;
      }
      goto LAB_100616d34;
    }
  }
LAB_100616d43:
  uVar4 = 0;
LAB_100616d45:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

