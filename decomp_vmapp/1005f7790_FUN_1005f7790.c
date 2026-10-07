
undefined8 FUN_1005f7790(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  QArrayData *local_80;
  QArrayData *local_78;
  char local_6a;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_6a = '\0';
  local_38 = lVar2;
  FUN_1007d6870(&local_48);
  *(undefined4 *)(param_1 + 0x40) = 4;
  lVar1 = param_1 + 0x62;
  cVar4 = FUN_1007ea210(lVar1);
  uVar7 = 0;
  if (cVar4 != '\0') goto LAB_1005f7987;
  lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  plVar6 = (long *)0x0;
  if (lVar3 != 0) {
    plVar6 = *(long **)(lVar3 + 0x10);
  }
  (**(code **)(*plVar6 + 0xa0))(local_58);
  iVar5 = FUN_1007ea6f0();
  if (iVar5 == 0) {
    uVar7 = 0x80019014;
    FUN_1008e3970("","vdisk",0,"Can\'t switch to temporary UID");
    goto LAB_1005f7987;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  plVar6 = (long *)0x0;
  if (lVar3 != 0) {
    plVar6 = *(long **)(lVar3 + 0x10);
  }
  (**(code **)(*plVar6 + 0x60))();
  QMutex::lock();
  lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  plVar6 = (long *)0x0;
  if (lVar3 != 0) {
    plVar6 = *(long **)(lVar3 + 0x10);
  }
  (**(code **)(*plVar6 + 0xb8))(&local_68,plVar6,lVar1,&local_6a);
  local_40 = local_60;
  local_48 = local_68;
  if (local_6a == '\0') {
    FUN_1007d6a70(&local_80,lVar1);
    QString::toLocal8Bit();
    FUN_1008e3970("","vdisk",0,"Error: UID \'%s\' does not exist. Incredible!",
                  local_78 + *(long *)(local_78 + 0x10));
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_69 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_69) goto LAB_1005f7945;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_1005f7945:
    uVar7 = 0x80019014;
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_69 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_69) goto LAB_1005f797b;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    plVar6 = (long *)0x0;
    if (lVar3 != 0) {
      plVar6 = *(long **)(lVar3 + 0x10);
    }
    (**(code **)(*plVar6 + 0xb0))(plVar6,lVar1);
    *(undefined4 *)(param_1 + 0x40) = 7;
    uVar7 = 0;
  }
LAB_1005f797b:
  QMutex::unlock();
LAB_1005f7987:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

