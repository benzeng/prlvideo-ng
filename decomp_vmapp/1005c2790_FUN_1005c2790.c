
undefined8 FUN_1005c2790(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  QString local_98;
  undefined1 local_89;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_1007d6a70(&local_98,&DAT_1011bc8b8);
  plVar1 = param_1 + 0xf;
  if ((long *)param_1[0xf] == (long *)0x0) {
LAB_1005c2839:
    plVar7 = plVar1;
  }
  else {
    plVar2 = (long *)param_1[0xf];
    plVar7 = plVar1;
    do {
      while (plVar6 = plVar2, cVar3 = operator<((QString *)(plVar6 + 4),&local_98), cVar3 != '\0') {
        plVar2 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) goto LAB_1005c2820;
      }
      plVar7 = plVar6;
      plVar2 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
LAB_1005c2820:
    if ((plVar7 == plVar1) || (cVar3 = operator<(&local_98,(QString *)(plVar7 + 4)), cVar3 != '\0'))
    goto LAB_1005c2839;
  }
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_89 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_1005c2878;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1005c2878:
  if (plVar7 == plVar1) {
    FUN_1008e3970("","vdisk",0,"The temporary uid is not found");
    uVar5 = 1;
  }
  else {
    local_40 = DAT_1011bc8c0;
    local_48 = DAT_1011bc8b8;
    local_50 = DAT_1011bc8c0;
    local_58 = DAT_1011bc8b8;
    do {
      (**(code **)(*param_1 + 0xb8))(&local_68,param_1,&local_48,0);
      local_40 = local_60;
      local_48 = local_68;
      cVar3 = FUN_1007ea210(&local_48);
      if (cVar3 != '\0') {
        uVar5 = 0;
        break;
      }
      (**(code **)(*param_1 + 0xb8))(&local_78,param_1,&local_58,0);
      local_50 = local_70;
      local_58 = local_78;
      cVar3 = FUN_1007ea210(&local_58);
      if (cVar3 != '\0') {
        uVar5 = 0;
        break;
      }
      (**(code **)(*param_1 + 0xb8))(&local_88,param_1,&local_58,0);
      local_50 = local_80;
      local_58 = local_88;
      cVar3 = FUN_1007ea210(&local_58);
      if (cVar3 != '\0') {
        uVar5 = 0;
        break;
      }
      iVar4 = FUN_1007ea6f0(&local_48,&local_58);
      uVar5 = 1;
    } while (iVar4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

