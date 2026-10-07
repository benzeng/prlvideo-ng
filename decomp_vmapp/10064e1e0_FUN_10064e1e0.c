
undefined8 FUN_10064e1e0(char param_1,QString *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  Data *pDVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  QArrayData *local_70;
  QString local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  Data *local_40;
  undefined1 local_31;
  
  param_3[0] = 3;
  param_3[1] = 0;
  FUN_1006d50c0(&local_40);
  FUN_100651880(&local_60,&local_40);
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  iVar10 = 2;
  bVar9 = 0;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      puVar4 = *(uint **)local_58;
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      FUN_1006d52e0(&local_68,*(undefined8 *)puVar4,param_1);
      cVar6 = operator==(&local_68,param_2);
      if (cVar6 == '\0') {
LAB_10064e2bf:
        bVar7 = 1;
        if (uVar1 != 1) {
          bVar7 = bVar9;
        }
        bVar5 = false;
        bVar9 = bVar7;
      }
      else {
        *param_3 = uVar1;
        param_3[1] = uVar2;
        if (param_1 == '\0') {
          cVar6 = FUN_1006d5790(*(undefined8 *)param_3);
        }
        else {
          cVar6 = FUN_1006d5730();
        }
        bVar5 = true;
        if (cVar6 == '\0') goto LAB_10064e2bf;
      }
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10064e300;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_10064e300:
      if (bVar5) {
        iVar10 = 1;
        goto LAB_10064e42a;
      }
      local_58 = local_58 + 8;
      local_48 = 1;
    } while (local_58 != local_50);
    iVar10 = 2;
  }
LAB_10064e42a:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10064e48f;
    }
    iVar3 = *(int *)(local_60 + 0xc);
    if (iVar3 != *(int *)(local_60 + 8)) {
      lVar11 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar3 * -8;
      pDVar8 = local_60 + (long)iVar3 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(local_60);
  }
LAB_10064e48f:
  if (iVar10 != 2) goto LAB_10064e50d;
  QString::toUtf8();
  FUN_1008e3970("","pvsHostInfo",0,"[HostInfo] switch to default for nonexisting device:\"%s\"",
                local_70 + *(long *)(local_70 + 0x10));
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10064e4f8;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_10064e4f8:
  *param_3 = (uint)bVar9;
  param_3[1] = 0;
LAB_10064e50d:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 1;
      }
      local_31 = 0;
    }
    iVar10 = *(int *)(local_40 + 0xc);
    if (iVar10 != *(int *)(local_40 + 8)) {
      lVar11 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar10 * -8;
      pDVar8 = local_40 + (long)iVar10 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(local_40);
  }
  return 1;
}

