
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_100722e10(undefined8 *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  Data *pDVar5;
  Data *pDVar6;
  long lVar7;
  int local_7c;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  uint local_54 [5];
  Data *local_40;
  undefined1 local_31;
  
  puVar2 = PTR_shared_null_1021e15e8;
  *param_1 = PTR_shared_null_1021e15e8;
  iVar3 = QKeySequence::count();
  if (iVar3 <= param_3) {
    return param_1;
  }
  local_40 = (Data *)puVar2;
  uVar4 = QKeySequence::operator[](param_2);
  if ((uVar4 & 0x8000000) != 0) {
    local_54[4] = 0x1000023;
    FUN_10071b9f0(&local_40,local_54 + 4);
  }
  uVar4 = QKeySequence::operator[](param_2);
  if ((uVar4 & 0x2000000) != 0) {
    local_54[3] = 0x1000020;
    FUN_10071b9f0(&local_40,local_54 + 3);
  }
  uVar4 = QKeySequence::operator[](param_2);
  if ((uVar4 & 0x4000000) != 0) {
    local_54[2] = 0x1000022;
    FUN_10071b9f0(&local_40,local_54 + 2);
  }
  uVar4 = QKeySequence::operator[](param_2);
  if ((uVar4 & 0x10000000) != 0) {
    local_54[1] = 0x1000021;
    FUN_10071b9f0(&local_40,local_54 + 1);
  }
  local_54[0] = QKeySequence::operator[](param_2);
  local_54[0] = local_54[0] & 0x1ffffff;
  if (local_54[0] != 0) {
    FUN_10071b9f0(&local_40,local_54);
  }
  FUN_10071bdd0(&local_78,&local_40);
  iVar3 = DAT_100e15328;
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
    do {
      local_60 = 1;
      iVar1 = **(int **)local_70;
      local_7c = 0;
      if (iVar3 == iVar1) {
        local_7c = 0x3e;
LAB_100722f8f:
        FUN_100724bf0(param_1,&local_7c);
      }
      else {
        local_7c = FUN_100cdf420(iVar1);
        if (local_7c != 0) goto LAB_100722f8f;
        FUN_100df99c0("","prl_client_app",0,"Invalid VM key for key %d",iVar1);
      }
      local_70 = local_70 + 8;
    } while (local_70 != local_68);
  }
  local_60 = 1;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10072303f;
    }
    iVar3 = *(int *)(local_78 + 0xc);
    if (iVar3 != *(int *)(local_78 + 8)) {
      lVar7 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = local_78 + (long)iVar3 * 8 + 8;
      do {
        if (*(void **)pDVar5 != (void *)0x0) {
          operator_delete(*(void **)pDVar5);
        }
        pDVar5 = pDVar5 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_78);
  }
LAB_10072303f:
  pDVar5 = local_40;
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
    iVar3 = *(int *)(local_40 + 0xc);
    if (iVar3 != *(int *)(local_40 + 8)) {
      lVar7 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = local_40 + (long)iVar3 * 8 + 8;
      do {
        if (*(void **)pDVar6 != (void *)0x0) {
          operator_delete(*(void **)pDVar6);
        }
        pDVar6 = pDVar6 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar5);
  }
  return param_1;
}

