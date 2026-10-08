
undefined1
FUN_100332df0(long param_1,undefined8 *param_2,undefined8 *param_3,QFutureInterfaceBase *param_4)

{
  int iVar1;
  long *plVar2;
  Data *pDVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  QFutureInterfaceBase *pQVar7;
  Data *pDVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  QFutureInterfaceBase local_70 [16];
  undefined4 local_60 [2];
  Data *local_58;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar10;
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x48) == 0) {
    uVar11 = 0;
  }
  else {
    local_60[0] = 0;
    local_58 = (Data *)PTR_shared_null_1021e15e8;
    plVar2 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
    cVar5 = (**(code **)(*plVar2 + 0x168))(plVar2,local_60);
    if (cVar5 == '\0') {
      uVar11 = 0;
    }
    else {
      local_48 = *param_2;
      local_40 = param_2[1];
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x18);
      }
      uVar6 = FUN_100319cd0(uVar6);
      FUN_100345d70(uVar6,&local_48,2);
      uVar4 = local_40;
      uVar6 = local_48;
      pQVar7 = operator_new(0x70);
      QFutureInterfaceBase::QFutureInterfaceBase(pQVar7,0);
      *(undefined ***)pQVar7 = &PTR_FUN_1022737f0;
      QFutureInterfaceBase::refT();
      *(undefined4 *)(pQVar7 + 0x18) = 0;
      *(undefined ***)pQVar7 = &PTR_FUN_102273798;
      *(undefined ***)(pQVar7 + 0x10) = &PTR_FUN_1022737c8;
      QImage::QImage((QImage *)(pQVar7 + 0x20));
      *(undefined ***)pQVar7 = &PTR_FUN_1022736c0;
      *(undefined ***)(pQVar7 + 0x10) = &PTR_FUN_1022736f0;
      *(code **)(pQVar7 + 0x40) = FUN_100333190;
      *(int *)(pQVar7 + 0x48) = (int)uVar6;
      *(int *)(pQVar7 + 0x4c) = (int)((ulong)uVar6 >> 0x20);
      *(int *)(pQVar7 + 0x50) = (int)uVar4;
      *(int *)(pQVar7 + 0x54) = (int)((ulong)uVar4 >> 0x20);
      *(undefined8 *)(pQVar7 + 0x58) = *param_3;
      *(undefined4 *)(pQVar7 + 0x60) = local_60[0];
      FUN_100333820(pQVar7 + 0x68,&local_58);
      *(undefined4 *)(pQVar7 + 0x60) = local_60[0];
      uVar6 = QThreadPool::globalInstance();
      FUN_100333c30(local_70,pQVar7,uVar6);
      QFutureInterfaceBase::refT();
      cVar5 = QFutureInterfaceBase::derefT();
      if (cVar5 == '\0') {
        uVar6 = QFutureInterfaceBase::resultStoreBase();
        FUN_100293340(uVar6);
      }
      QFutureInterfaceBase::operator=(param_4,local_70);
      uVar11 = 1;
      FUN_1002932e0(local_70);
    }
    pDVar3 = local_58;
    if (*(int *)local_58 == -1) {
      lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
    }
    else {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_49 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_49) {
          lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
          goto LAB_10033305f;
        }
      }
      lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
      iVar1 = *(int *)(local_58 + 0xc);
      if (iVar1 != *(int *)(local_58 + 8)) {
        lVar9 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
        pDVar8 = local_58 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar8 != (void *)0x0) {
            operator_delete(*(void **)pDVar8);
          }
          pDVar8 = pDVar8 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose(pDVar3);
    }
  }
LAB_10033305f:
  if (lVar10 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar11;
}

