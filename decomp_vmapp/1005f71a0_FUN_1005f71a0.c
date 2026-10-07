
int FUN_1005f71a0(long param_1)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  char local_6a;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar5;
  FUN_1007d6870(&local_48);
  local_6a = '\0';
  *(undefined4 *)(param_1 + 0x40) = 4;
  lVar1 = param_1 + 0x62;
  cVar3 = FUN_1007ea210();
  if (cVar3 != '\0') {
    iVar4 = -0x7ffe6feb;
    FUN_1008e3970("","vdisk",0,"Error: can\'t create state with null UID");
    goto LAB_1005f74b1;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  plVar6 = (long *)0x0;
  if (lVar5 != 0) {
    plVar6 = *(long **)(lVar5 + 0x10);
  }
  (**(code **)(*plVar6 + 0x60))();
  QMutex::lock();
  lVar5 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  plVar6 = (long *)0x0;
  if (lVar5 != 0) {
    plVar6 = *(long **)(lVar5 + 0x10);
  }
  (**(code **)(*plVar6 + 0xb8))(&local_58,plVar6,lVar1,&local_6a);
  local_40 = local_50;
  local_48 = local_58;
  if (local_6a == '\0') {
    lVar5 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    plVar6 = (long *)0x0;
    if (lVar5 != 0) {
      plVar6 = *(long **)(lVar5 + 0x10);
    }
    (**(code **)(*plVar6 + 0xa8))(&local_68,plVar6,&local_6a);
    local_40 = local_60;
    local_48 = local_68;
    if (local_6a == '\0') {
      iVar4 = -0x7ffe6fec;
      FUN_1008e3970("","vdisk",0,"Error: temporary UID is not found. Incredible!");
    }
    else {
      lVar5 = *(long *)(*(long *)(param_1 + 0x58) + 8);
      plVar6 = (long *)0x0;
      if (lVar5 != 0) {
        plVar6 = *(long **)(lVar5 + 0x10);
      }
      pcVar2 = *(code **)(*plVar6 + 0x70);
      FUN_1007d6a70(&local_88,lVar1);
      FUN_1007d6a70(&local_90,&local_48);
      iVar4 = (*pcVar2)(plVar6,&local_88,&local_90);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_69 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_69) goto LAB_1005f73f0;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1005f73f0:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_69 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_69) goto LAB_1005f7420;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1005f7420:
      if (iVar4 < 0) {
        FUN_1008e3970("","vdisk",0,"Error: create snapshot failed, err=%d",iVar4);
      }
      else {
        lVar5 = *(long *)(*(long *)(param_1 + 0x58) + 8);
        plVar6 = (long *)0x0;
        if (lVar5 != 0) {
          plVar6 = *(long **)(lVar5 + 0x10);
        }
        (**(code **)(*plVar6 + 0xb0))(plVar6,lVar1);
        *(undefined4 *)(param_1 + 0x40) = 7;
        iVar4 = 0;
      }
    }
  }
  else {
    FUN_1007d6a70(&local_80,lVar1);
    QString::toLocal8Bit();
    FUN_1008e3970("","vdisk",0,"Error: UID \'%s\' exists. Incredible!",
                  local_78 + *(long *)(local_78 + 0x10));
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_69 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_69) goto LAB_1005f72ea;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_1005f72ea:
    iVar4 = -0x7ffe6feb;
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_69 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_69) goto LAB_1005f749b;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
LAB_1005f749b:
  QMutex::unlock();
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1005f74b1:
  if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

