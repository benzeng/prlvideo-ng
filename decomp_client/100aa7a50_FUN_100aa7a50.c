
undefined1 FUN_100aa7a50(long param_1,long *param_2,undefined1 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  undefined1 uVar7;
  ulong uVar8;
  bool bVar9;
  undefined1 local_51;
  long *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  uVar6 = param_1 + 0x110U | 1;
  if (*(char *)(param_1 + 0x128) != '\0') {
    local_48 = *(QArrayData **)(param_1 + 0x10);
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","IOCommunication",0,"%sWriting thread is paused!",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100aa7b09;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100aa7b09:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100aa7b3c;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100aa7b3c:
    uVar7 = 0;
    uVar8 = uVar6;
    goto LAB_100aa7c68;
  }
  *(undefined1 *)(param_1 + 0x129) = param_3;
  *(undefined1 *)(param_1 + 0x128) = 1;
  plVar2 = (long *)(param_1 + 0x120);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (long *)*plVar2;
  *plVar2 = lVar3;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar8 = param_1 + 0x110U & 0xfffffffffffffffe;
  QMutex::unlock();
  FUN_100aa4070(&local_50,param_1,plVar2,1);
  if ((local_50 == (long *)0x0) || (local_50[2] == 0)) {
LAB_100aa7bf7:
    bVar9 = uVar8 != 0;
    uVar8 = 0;
    if (bVar9) {
      QMutex::lock();
      uVar8 = uVar6;
    }
    *(undefined2 *)(param_1 + 0x128) = 0;
    plVar2 = *(long **)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = 0;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar4 = plVar2 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    uVar7 = 0;
  }
  else {
    local_51 = 0;
    FUN_100a6fb80(local_50[2],0xffffffff,&local_51);
    iVar5 = FUN_100a6fe10(local_50[2]);
    uVar7 = 1;
    if (iVar5 != 0) goto LAB_100aa7bf7;
  }
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_50 + 0x10))(local_50);
    }
  }
LAB_100aa7c68:
  if ((uVar8 & 1) != 0) {
    QMutex::unlock();
  }
  return uVar7;
}

