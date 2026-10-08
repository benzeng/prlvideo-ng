
void FUN_10031e150(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  undefined4 uVar7;
  double dVar8;
  QArrayData *local_60;
  QArrayData *local_58;
  Data *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_29;
  
  local_48 = 0;
  uStack_40 = 0;
  local_30 = 0;
  local_38 = 0;
  MacUtils::getHiDPIDisplays();
  iVar3 = *(int *)(local_50 + 0xc);
  iVar1 = *(int *)(local_50 + 8);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10031e1b0;
    }
    QListData::dispose(local_50);
  }
LAB_10031e1b0:
  uVar7 = 1;
  if (iVar3 != iVar1) {
    uVar7 = 3;
  }
  uVar4 = FUN_100319960(param_1);
  dVar8 = (double)FUN_1003588f0(uVar4);
  pQVar5 = (QArrayData *)QArrayData::allocate(0x24,8,1,0);
  local_58 = pQVar5;
  if (pQVar5 == (QArrayData *)0x0) {
    qBadAlloc();
  }
  pQVar6 = local_58;
  *(uint *)(pQVar5 + 4) = 1;
  pQVar5 = pQVar5 + *(long *)(pQVar5 + 0x10) + 0x24;
  do {
    *(undefined4 *)(pQVar5 + -0xc) = local_30;
    *(undefined8 *)(pQVar5 + -0x14) = local_38;
    *(undefined8 *)(pQVar5 + -0x1c) = uStack_40;
    *(undefined8 *)(pQVar5 + -0x24) = local_48;
    *(int *)(pQVar5 + -8) = (int)dVar8;
    *(undefined4 *)(pQVar5 + -4) = uVar7;
    pQVar5 = pQVar5 + -0x24;
  } while (pQVar5 != local_58 + *(long *)(local_58 + 0x10));
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    _PrlHandle_AddRef(lVar2);
  }
  if (1 < *(uint *)pQVar6) {
    if ((*(uint *)(pQVar6 + 8) & 0x7fffffff) == 0) {
      pQVar6 = (QArrayData *)QArrayData::allocate(0x24,8,0,2);
      local_58 = pQVar6;
    }
    else {
      FUN_1003228c0(&local_58,*(uint *)(pQVar6 + 4),*(uint *)(pQVar6 + 8) & 0x7fffffff,0);
      pQVar6 = local_58;
    }
  }
  iVar3 = _PrlDevDisplay_SetDpiConfiguration
                    (lVar2,pQVar6 + *(long *)(pQVar6 + 0x10),*(undefined4 *)(pQVar6 + 4));
  if (lVar2 != 0) {
    _PrlHandle_Free(lVar2);
  }
  if (-1 < iVar3) goto LAB_10031e399;
  pQVar5 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)pQVar5 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_29 = *(int *)pQVar5 != 0;
    UNLOCK();
  }
  QString::toUtf8();
  lVar2 = *(long *)(local_60 + 0x10);
  uVar4 = FUN_100dddcf0(iVar3);
  FUN_100df99c0("","prl_client_app",0,
                "(!)Error: failed to send host display options to VM [%s] with RC = %.8X [%s]",
                local_60 + lVar2,iVar3,uVar4);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10031e369;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_10031e369:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_29 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10031e399;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_10031e399:
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_29 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return;
      }
    }
    QArrayData::deallocate(pQVar6,0x24,8);
  }
  return;
}

