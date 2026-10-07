
bool FUN_1007a45e0(long param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  QArrayData *pQVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  QArrayData *local_88;
  QArrayData *local_78;
  long *local_70;
  undefined4 local_64;
  QReadWriteLock local_60 [24];
  _func_void_Node_ptr *local_48;
  _func_void_Node_ptr *local_40;
  undefined1 local_31;
  
  if (*(int *)(param_1 + 0x68) != 1) {
    return false;
  }
  FUN_100792a30(local_60);
  local_64 = 0;
  FUN_1007942d0(&local_70,param_1 + 0x168,&local_64);
  uVar6 = local_64;
  if ((local_70 == (long *)0x0) || (lVar3 = local_70[2], lVar3 == 0)) {
    pQVar4 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,"%sCan\'t allocate memory!",
                  local_78 + *(long *)(local_78 + 0x10));
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007a47e9;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_1007a47e9:
    bVar5 = true;
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007a481f;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
  }
  else {
    if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
       (uVar8 = FUN_10080ee80(*(undefined8 *)(param_1 + 0x328)), (uVar8 & 0x3000) == 0)) {
      iVar7 = FUN_1007c91d0(param_1 + 400,param_2,*(undefined4 *)(param_1 + 0x2e8),lVar3,uVar6,
                            param_3,0);
    }
    else {
      iVar7 = FUN_1007c7b80(param_1 + 400,param_2,*(undefined4 *)(param_1 + 0x2e8),lVar3,uVar6,
                            param_3,0);
    }
    bVar5 = false;
    if (iVar7 != 0) {
      pQVar4 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)pQVar4 + 1U) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,"%sHandshake error: routing table send has been failed!",
                    local_88 + *(long *)(local_88 + 0x10));
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007a471d;
        }
        QArrayData::deallocate(local_88,1,8);
      }
LAB_1007a471d:
      bVar5 = true;
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007a481f;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
    }
  }
LAB_1007a481f:
  if (local_70 != (long *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar2 = local_40 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_31 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007a4875;
    }
    QHashData::free_helper(local_40);
  }
LAB_1007a4875:
  if (*(int *)(local_48 + 0x10) != -1) {
    if (*(int *)(local_48 + 0x10) != 0) {
      LOCK();
      pcVar2 = local_48 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_31 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007a48a4;
    }
    QHashData::free_helper(local_48);
  }
LAB_1007a48a4:
  QReadWriteLock::~QReadWriteLock(local_60);
  return !bVar5;
}

