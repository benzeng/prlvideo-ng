
int FUN_1004d8820(long param_1,undefined8 *param_2,long param_3,long param_4)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  QArrayData *pQVar13;
  long *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  long *local_40;
  undefined1 local_31;
  
  if ((*(uint *)(param_3 + 0x1c) & 0x1000) == 0 && (*(uint *)(param_3 + 4) & 0x116) == 0) {
    if (*(uint *)(param_3 + 0x18) < 6) {
      if ((0x35U >> (*(uint *)(param_3 + 0x18) & 0x1f) & 1) != 0) goto LAB_1004d8868;
      bVar2 = false;
    }
    else {
      bVar2 = false;
    }
  }
  else {
LAB_1004d8868:
    bVar2 = true;
    if (*(char *)(param_1 + 0x30) != '\0') {
      return -0xffffff9;
    }
  }
  local_48 = (QArrayData *)*param_2;
  if (*(uint *)(local_48 + 4) == 0) {
    plVar9 = operator_new(0x60);
    FUN_1004e5bf0(plVar9,param_1 + 0x18,param_1);
    *plVar9 = (long)&PTR_FUN_100bc3168;
    QMutex::QMutex((QMutex *)(plVar9 + 8),0);
    plVar9[0xb] = 0;
    plVar9[10] = 0;
    plVar9[9] = (long)(plVar9 + 10);
    *plVar9 = (long)&PTR_FUN_100bc3318;
    uVar6 = FUN_1004c6130(*(long *)(param_1 + 0x50) + 0x40);
    lVar11 = *(long *)(param_1 + 0x50);
    plVar12 = plVar9 + 1;
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    local_40 = plVar9;
    cVar3 = FUN_1004d29c0(lVar11 + 0x48,uVar6,&local_40);
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    if (cVar3 == '\0') {
      iVar7 = -0xffffff8;
      FUN_1004c6150(*(long *)(param_1 + 0x50) + 0x40,uVar6);
    }
    else {
      (**(code **)(*plVar9 + 0x40))(plVar9,param_4);
      *(undefined4 *)(param_4 + 8) = 1;
      *(undefined4 *)(param_4 + 4) = uVar6;
      iVar7 = 0;
    }
    LOCK();
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 != 1) {
      return iVar7;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
    return iVar7;
  }
  if (1 < *(uint *)local_48 + 1) {
    LOCK();
    *(uint *)local_48 = *(uint *)local_48 + 1;
    local_31 = *(uint *)local_48 != 0;
    UNLOCK();
  }
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QString::reallocData((uint)&local_48,(bool)((char)*(uint *)(local_48 + 4) + '\x01'));
  }
  lVar11 = (long)(int)*(uint *)(local_48 + 4) * 2;
  if (lVar11 != 0) {
    pQVar13 = local_48 + *(long *)(local_48 + 0x10);
    do {
      uVar4 = FUN_100541f50();
      *(undefined2 *)pQVar13 = uVar4;
      pQVar13 = pQVar13 + 2;
      lVar11 = lVar11 + -2;
    } while (lVar11 != 0);
  }
  plVar12 = (long *)0x0;
  if (*(long *)(param_1 + 0x80) != 0) {
    plVar12 = *(long **)(*(long *)(param_1 + 0x80) + 0x10);
  }
  (**(code **)(*plVar12 + 0x18))(plVar12,&local_48);
  if (bVar2) {
    plVar12 = (long *)0x0;
    if (*(long *)(param_1 + 0x80) != 0) {
      plVar12 = *(long **)(*(long *)(param_1 + 0x80) + 0x10);
    }
    cVar3 = (**(code **)(*plVar12 + 0x30))(plVar12,&local_48);
    iVar7 = -0xffffff9;
    if (cVar3 == '\0') goto LAB_1004d8fe4;
  }
  local_58 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(uint *)local_58 + 1) {
    LOCK();
    *(uint *)local_58 = *(uint *)local_58 + 1;
    local_31 = *(uint *)local_58 != 0;
    UNLOCK();
  }
  uVar10 = *(uint *)(local_58 + 4);
  if ((1 < *(uint *)local_58) || ((*(uint *)(local_58 + 8) & 0x7fffffff) < uVar10 + 2)) {
    QString::reallocData((uint)&local_58,SUB41(uVar10 + 2,0));
    uVar10 = *(uint *)(local_58 + 4);
  }
  *(uint *)(local_58 + 4) = uVar10 + 1;
  *(undefined2 *)(local_58 + (long)(int)uVar10 * 2 + *(long *)(local_58 + 0x10)) = 0x2f;
  *(undefined2 *)(local_58 + (long)(int)*(uint *)(local_58 + 4) * 2 + *(long *)(local_58 + 0x10)) =
       0;
  if (1 < *(uint *)local_58 + 1) {
    LOCK();
    *(uint *)local_58 = *(uint *)local_58 + 1;
    local_31 = *(uint *)local_58 != 0;
    UNLOCK();
  }
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
  QString::append(&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d8a0c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004d8a0c:
  cVar3 = FUN_1004c5f90();
  if (cVar3 != '\0') {
    FUN_1004f5620(&local_50,0);
  }
  cVar3 = FUN_1004c5fb0();
  if ((((cVar3 != '\0') && (cVar3 = FUN_1004f1440(&local_50), cVar3 != '\0')) &&
      (cVar3 = QString::endsWith(&local_48,&DAT_1011bc078,0), cVar3 != '\0')) &&
     (cVar3 = QString::endsWith(&local_50,&DAT_1011bc078,0), cVar3 == '\0')) {
    QString::append(&local_50);
  }
  local_60 = (long *)0x0;
  iVar5 = FUN_1004d93e0(param_1,&local_50,&local_60);
  iVar7 = -0xffffffd;
  switch(*(undefined4 *)(param_3 + 0x18)) {
  case 0:
    uVar6 = 2;
    if (local_60 == (long *)0x0) {
LAB_1004d8e65:
      iVar5 = FUN_1004d9b30(param_1,&local_50,param_3,param_4,&local_60);
      goto LAB_1004d8f41;
    }
    iVar7 = (**(code **)(*local_60 + 0x18))();
    if (iVar7 == 1) {
      iVar7 = (**(code **)(*local_60 + 0x80))(local_60,0,0);
      if (iVar7 == 0) {
        iVar5 = (**(code **)(*local_60 + 0x48))
                          (local_60,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 0x14),
                           *(undefined4 *)(param_3 + 0x1c),param_4);
        uVar6 = 0;
        goto LAB_1004d8f41;
      }
    }
    else {
      iVar7 = (**(code **)(*local_60 + 0x58))();
      plVar12 = local_60;
      if (iVar7 == 0) {
        local_60 = (long *)0x0;
        uVar6 = 0;
        if (plVar12 != (long *)0x0) {
          LOCK();
          plVar9 = plVar12 + 1;
          lVar11 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          uVar6 = 0;
          if ((int)lVar11 == 1) {
            (**(code **)(*plVar12 + 0x10))();
          }
        }
        goto LAB_1004d8e65;
      }
    }
    break;
  case 1:
    uVar6 = 1;
    if (local_60 == (long *)0x0) goto LAB_1004d8f41;
    iVar7 = (**(code **)(*local_60 + 0x18))();
    if ((iVar7 != 2) || (iVar7 = -0xffffff0, (*(byte *)(param_3 + 0x1c) & 0x40) == 0)) {
      iVar7 = (**(code **)(*local_60 + 0x18))();
      if ((iVar7 == 2) || (iVar7 = -0xfffffeb, (*(uint *)(param_3 + 0x1c) & 1) == 0)) {
        iVar5 = (**(code **)(*local_60 + 0x48))
                          (local_60,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 0x14),
                           *(uint *)(param_3 + 0x1c),param_4);
        goto LAB_1004d8f41;
      }
    }
    break;
  case 2:
    iVar7 = -0xfffffe9;
    if (local_60 == (long *)0x0) {
      iVar5 = FUN_1004d9b30(param_1,&local_50,param_3,param_4,&local_60);
      uVar6 = 2;
      goto LAB_1004d8f41;
    }
    goto LAB_1004d8f9c;
  case 3:
    if (local_60 == (long *)0x0) {
      iVar5 = FUN_1004d9b30(param_1,&local_50,param_3,param_4,&local_60);
      uVar6 = 2;
    }
    else {
      iVar5 = (**(code **)(*local_60 + 0x48))
                        (local_60,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 0x14),
                         *(undefined4 *)(param_3 + 0x1c),param_4);
      uVar6 = 1;
    }
LAB_1004d8f41:
    iVar7 = iVar5;
    if (iVar5 == 0) {
      uVar8 = FUN_1004c6130(*(long *)(param_1 + 0x50) + 0x40);
      cVar3 = FUN_1004d29c0(*(long *)(param_1 + 0x50) + 0x48,uVar8,&local_60);
      if (cVar3 == '\0') {
        iVar7 = -0xffffff8;
        FUN_1004c6150(*(long *)(param_1 + 0x50) + 0x40,uVar8);
      }
      else {
        *(undefined4 *)(param_4 + 4) = uVar8;
        *(undefined4 *)(param_4 + 8) = uVar6;
        iVar7 = 0;
      }
    }
    break;
  case 4:
    iVar7 = -0xfffffe7;
    if (local_60 != (long *)0x0) {
      iVar7 = (**(code **)(*local_60 + 0x18))();
      if (iVar7 == 1) {
        iVar7 = (**(code **)(*local_60 + 0x80))(local_60,0,0);
        if (iVar7 == 0) {
          iVar5 = (**(code **)(*local_60 + 0x48))
                            (local_60,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 0x14),
                             *(undefined4 *)(param_3 + 0x1c),param_4);
          uVar6 = 3;
          goto LAB_1004d8f41;
        }
      }
      else {
        iVar7 = (**(code **)(*local_60 + 0x58))();
        plVar12 = local_60;
        if (iVar7 == 0) {
          local_60 = (long *)0x0;
          if (plVar12 != (long *)0x0) {
            LOCK();
            plVar9 = plVar12 + 1;
            lVar11 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)(*plVar12 + 0x10))();
            }
          }
          iVar5 = FUN_1004d9b30(param_1,&local_50,param_3,param_4,&local_60);
          uVar6 = 3;
          goto LAB_1004d8f41;
        }
      }
      break;
    }
    goto LAB_1004d8fb4;
  case 5:
    uVar6 = 2;
    if (local_60 == (long *)0x0) {
LAB_1004d8f2a:
      iVar5 = FUN_1004d9b30(param_1,&local_50,param_3,param_4,&local_60);
      goto LAB_1004d8f41;
    }
    iVar7 = (**(code **)(*local_60 + 0x18))();
    if (iVar7 == 1) {
      iVar7 = (**(code **)(*local_60 + 0x80))(local_60,0,0);
      if (iVar7 == 0) {
        iVar5 = (**(code **)(*local_60 + 0x48))
                          (local_60,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 0x14),
                           *(undefined4 *)(param_3 + 0x1c),param_4);
        uVar6 = 3;
        goto LAB_1004d8f41;
      }
    }
    else {
      iVar7 = (**(code **)(*local_60 + 0x58))();
      plVar12 = local_60;
      if (iVar7 == 0) {
        local_60 = (long *)0x0;
        uVar6 = 3;
        if (plVar12 != (long *)0x0) {
          LOCK();
          plVar9 = plVar12 + 1;
          lVar11 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)(*plVar12 + 0x10))();
          }
        }
        goto LAB_1004d8f2a;
      }
    }
  }
  if (local_60 != (long *)0x0) {
LAB_1004d8f9c:
    LOCK();
    plVar12 = local_60 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
LAB_1004d8fb4:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004d8fe4;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1004d8fe4:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return iVar7;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return iVar7;
}

