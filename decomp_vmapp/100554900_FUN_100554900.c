
undefined8 FUN_100554900(long param_1,undefined8 param_2,ulong param_3,ulong param_4,char *param_5)

{
  int iVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long *plVar8;
  code *pcVar9;
  undefined8 in_stack_ffffffffffffff78;
  uint uVar10;
  undefined4 uVar11;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar12;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  
  uVar12 = (undefined4)((ulong)in_stack_ffffffffffffff80 >> 0x20);
  uVar10 = (uint)((ulong)in_stack_ffffffffffffff78 >> 0x20);
  QString::toUtf8();
  lVar5 = (ulong)uVar10 << 0x20;
  cVar4 = FUN_100761540(param_1,local_40 + *(long *)(local_40 + 0x10),*param_5 == '\0',
                        *param_5 == '\0',1,0,lVar5);
  uVar11 = (undefined4)((ulong)lVar5 >> 0x20);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100554988;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100554988:
  if (cVar4 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"CSnapshotImpl::open(%s) failed to open file",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) goto LAB_100554ea7;
    local_68 = local_48;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      iVar1 = *(int *)local_48;
      UNLOCK();
      goto joined_r0x000100554a76;
    }
  }
  else {
    cVar4 = FUN_100554690(param_1,param_5);
    if (cVar4 == '\0') goto LAB_100554ea7;
    pcVar9 = (code *)0x0;
    if (param_5[0x28] != '\0') {
      pcVar9 = FUN_100555140;
    }
    if (*param_5 == '\0') {
      pcVar7 = (code *)0x0;
      if (param_5[0x28] != '\0') {
        pcVar7 = FUN_1005550b0;
      }
      lVar5 = FUN_100553bc0(param_1,param_3,param_4,pcVar7,param_1);
      *(long *)(param_1 + 8) = lVar5;
      if (lVar5 == 0) {
        QString::toUtf8();
        FUN_1008e3970("","TransMem",0,"CSnapshotImpl::open(%s, 0x%llX, 0x%llX) invalid swap file",
                      local_58 + *(long *)(local_58 + 0x10),param_3,param_4);
        if (*(int *)local_58 == -1) goto LAB_100554ea7;
        local_68 = local_58;
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          iVar1 = *(int *)local_58;
          UNLOCK();
          goto joined_r0x000100554a76;
        }
        goto LAB_100554e98;
      }
      QString::toUtf8();
      puVar2 = *(undefined2 **)(param_1 + 8);
      FUN_1008e3970("","TransMem",0,"CSnapshotImpl::open(%s) version=%x, %u clusters, %u blocks",
                    local_50 + *(long *)(local_50 + 0x10),*puVar2,
                    CONCAT44(uVar11,*(undefined4 *)(puVar2 + 6)),
                    CONCAT44(uVar12,*(undefined4 *)(puVar2 + 4)));
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          UNLOCK();
          if (*(int *)local_50 != 0) goto LAB_100554b2f;
        }
        QArrayData::deallocate(local_50,1,8);
      }
    }
    else {
      lVar5 = FUN_100553300(1,param_1,0x201,param_3 >> 0x15 & 0xffffffff,0x200,
                            param_4 >> 0xc & 0xffffffff,0,0);
      *(long *)(param_1 + 8) = lVar5;
      if (lVar5 == 0) goto LAB_100554ea7;
      if (*(long *)(param_1 + 0x68) != 0) {
        uVar3 = rdtsc();
        *(int *)(*(long *)(param_1 + 8) + 0x20) = (int)uVar3;
      }
    }
LAB_100554b2f:
    if (*(long **)(param_1 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x10) + 8))();
    }
    if (*param_5 == '\0') {
      if (*(char *)(*(long *)(param_1 + 8) + 3) == '\0') {
        FUN_1008e3970("","TransMem",0,"CSnapshotImpl::open() opening plain snapshot");
        plVar6 = operator_new(0x58,(nothrow_t *)PTR_nothrow_100ba21c8);
        plVar8 = (long *)0x0;
        if (plVar6 != (long *)0x0) {
          lVar5 = *(long *)(param_1 + 8);
          plVar6[1] = param_1;
          plVar6[2] = lVar5;
          plVar6[3] = param_1 + 0x18;
          plVar6[4] = (long)pcVar9;
          plVar6[5] = param_1;
          *plVar6 = (long)&PTR_FUN_100bc5e30;
          QMutex::QMutex((QMutex *)(plVar6 + 6),0);
          plVar6[7] = 0;
          *(undefined4 *)(plVar6 + 8) = 0;
          plVar6[9] = 0;
          plVar6[10] = -1;
          plVar8 = plVar6;
        }
      }
      else {
        FUN_1008e3970("","TransMem",0,"CSnapshotImpl::open() opening compressed snapshot");
        plVar6 = operator_new(0xa0,(nothrow_t *)PTR_nothrow_100ba21c8);
        plVar8 = (long *)0x0;
        if (plVar6 != (long *)0x0) {
          FUN_100557e80(plVar6,param_1,*(undefined8 *)(param_1 + 8),param_1 + 0x18,pcVar9,param_1);
          plVar8 = plVar6;
        }
      }
    }
    else if (*(char *)(param_1 + 0x38) == '\0') {
      FUN_1008e3970("","TransMem",0,"CSnapshotImpl::open() creating plain snapshot");
      plVar6 = operator_new(0x58,(nothrow_t *)PTR_nothrow_100ba21c8);
      plVar8 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        lVar5 = *(long *)(param_1 + 8);
        plVar6[1] = param_1;
        plVar6[2] = lVar5;
        plVar6[3] = param_1 + 0x18;
        plVar6[4] = (long)pcVar9;
        plVar6[5] = param_1;
        *plVar6 = (long)&PTR_FUN_100bc5e30;
        QMutex::QMutex((QMutex *)(plVar6 + 6),0);
        plVar6[7] = 0;
        *(undefined4 *)(plVar6 + 8) = 0;
        plVar6[9] = 0;
        plVar6[10] = -1;
        plVar8 = plVar6;
      }
    }
    else {
      FUN_1008e3970("","TransMem",0,"CSnapshotImpl::open() creating compressed snapshot");
      plVar6 = operator_new(0xb0,(nothrow_t *)PTR_nothrow_100ba21c8);
      plVar8 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        FUN_1005588b0(plVar6,param_1,*(undefined8 *)(param_1 + 8),param_1 + 0x18,pcVar9,param_1);
        plVar8 = plVar6;
      }
    }
    *(long **)(param_1 + 0x10) = plVar8;
    if (plVar8 == (long *)0x0) {
      QString::toUtf8();
      FUN_1008e3970("","TransMem",0,"CSnapshotImpl::open(%s) failed to allocate engine",
                    local_60 + *(long *)(local_60 + 0x10));
      if (*(int *)local_60 == -1) goto LAB_100554ea7;
      local_68 = local_60;
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        iVar1 = *(int *)local_60;
        UNLOCK();
        goto joined_r0x000100554a76;
      }
    }
    else {
      cVar4 = (**(code **)(*plVar8 + 0x10))(plVar8);
      if (cVar4 != '\0') {
        return 1;
      }
      QString::toUtf8();
      FUN_1008e3970("","TransMem",0,"CSnapshotImpl::open(%s) failed to initialize engine",
                    local_68 + *(long *)(local_68 + 0x10));
      if (*(int *)local_68 == -1) goto LAB_100554ea7;
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        iVar1 = *(int *)local_68;
        UNLOCK();
joined_r0x000100554a76:
        if (iVar1 != 0) goto LAB_100554ea7;
      }
    }
  }
LAB_100554e98:
  QArrayData::deallocate(local_68,1,8);
LAB_100554ea7:
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 8))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100554070();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN_1007614d0(param_1);
  if (*(undefined8 **)(param_1 + 0x68) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x68))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return 0;
}

