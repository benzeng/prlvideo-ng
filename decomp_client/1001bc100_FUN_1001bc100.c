
long * FUN_1001bc100(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  Data *pDVar7;
  long lVar8;
  long lVar9;
  Data *pDVar10;
  long local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  undefined4 local_70;
  Data *local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  Data *local_40;
  int local_38;
  undefined1 local_31;
  
  local_38 = param_3;
  cVar4 = FUN_1001754c0(param_2,0x18);
  if (cVar4 != '\0') {
    uVar5 = FUN_10016f500(param_2);
    cVar4 = FUN_10061b4d0(uVar5,0x10000);
    if (cVar4 != '\0') {
      CVmProfileDataObject::vmProfiles();
      return param_1;
    }
  }
  puVar3 = PTR_shared_null_1021e15e8;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  cVar4 = FUN_1001754c0(param_2,0x18);
  if (cVar4 == '\0') {
LAB_1001bc1f0:
    local_58 = 0;
    FUN_1001bce10(&local_40,&local_58);
    local_5c = 1;
    FUN_1001bce10(&local_40,&local_5c);
  }
  else {
    uVar5 = FUN_10016f500(param_2);
    cVar4 = FUN_10061b4d0(uVar5,0x80);
    if (cVar4 == '\0') goto LAB_1001bc1f0;
    local_44 = 0;
    FUN_1001bce10(&local_40,&local_44);
    local_48 = 2;
    FUN_1001bce10(&local_40,&local_48);
    local_4c = 4;
    FUN_1001bce10(&local_40,&local_4c);
    local_50 = 3;
    FUN_1001bce10(&local_40,&local_50);
    local_54 = 1;
    FUN_1001bce10(&local_40,&local_54);
  }
  iVar1 = *(int *)(local_40 + 8);
  if (iVar1 != *(int *)(local_40 + 0xc)) {
    pDVar7 = local_40 + (long)iVar1 * 8 + 0x10;
    lVar6 = (long)*(int *)(local_40 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if (**(int **)pDVar7 == param_3) goto LAB_1001bc25f;
      pDVar7 = pDVar7 + 8;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  FUN_1001bce10(&local_40,&local_38);
LAB_1001bc25f:
  local_68 = (Data *)puVar3;
  FUN_1001bd110(&local_88,&local_40);
  local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
  local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
  if (*(int *)(local_88 + 8) != *(int *)(local_88 + 0xc)) {
    do {
      local_70 = 1;
      uVar2 = **(undefined4 **)local_80;
      lVar6 = CVmProfileDataObject::vmProfileByType(uVar2);
      if (lVar6 == 0) {
        FUN_100df99c0("","prl_client_app",0,"Invalid VM profile %d",uVar2);
      }
      else {
        local_90 = lVar6;
        FUN_1000630f0(&local_68,&local_90);
      }
      local_80 = local_80 + 8;
    } while (local_80 != local_78);
  }
  local_70 = 1;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001bc37f;
    }
    iVar1 = *(int *)(local_88 + 0xc);
    if (iVar1 != *(int *)(local_88 + 8)) {
      lVar6 = (long)*(int *)(local_88 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_88 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar7 != (void *)0x0) {
          operator_delete(*(void **)pDVar7);
        }
        pDVar7 = pDVar7 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_88);
  }
LAB_1001bc37f:
  *param_1 = (long)local_68;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
      QListData::detach((int)param_1);
      lVar6 = *param_1;
      lVar8 = (long)*(int *)(lVar6 + 8);
      if ((local_68 + (long)*(int *)(local_68 + 8) * 8 != (Data *)(lVar6 + lVar8 * 8)) &&
         (lVar9 = *(int *)(lVar6 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(lVar6 + 0xc))) {
        _memcpy((void *)(lVar6 + 0x10 + lVar8 * 8),
                local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10,lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001bc51a;
    }
    QListData::dispose(local_68);
  }
LAB_1001bc51a:
  pDVar7 = local_40;
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
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar6 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar10 = local_40 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar10 != (void *)0x0) {
          operator_delete(*(void **)pDVar10);
        }
        pDVar10 = pDVar10 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar7);
  }
  return param_1;
}

