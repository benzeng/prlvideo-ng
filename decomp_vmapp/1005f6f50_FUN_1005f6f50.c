
undefined8 FUN_1005f6f50(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  QArrayData *local_68;
  QArrayData *local_60;
  char local_52;
  undefined1 local_51;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  long local_30;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar1 = param_1 + 0x62;
  local_30 = lVar2;
  (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x10) + 0xa0))(local_40);
  iVar5 = FUN_1007ea6f0(lVar1,local_40);
  if (iVar5 == 0) {
    uVar6 = 0x80019015;
    goto LAB_1005f70a2;
  }
  cVar4 = FUN_1007ea210(lVar1);
  if (cVar4 != '\0') {
    uVar6 = 0x80019015;
    goto LAB_1005f70a2;
  }
  local_52 = '\0';
  plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x10);
  (**(code **)(*plVar3 + 0xb8))(local_50,plVar3,lVar1,&local_52);
  uVar6 = 0;
  if (local_52 == '\0') goto LAB_1005f70a2;
  FUN_1007d6a70(&local_68,lVar1);
  QString::toUtf8();
  FUN_1008e3970("","vdisk",0,"Error: try to create snapshot by existing uuid %s",
                local_60 + *(long *)(local_60 + 0x10));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_51 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_1005f705f;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1005f705f:
  if (*(int *)local_68 == -1) {
    uVar6 = 0x80019015;
  }
  else {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_51 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_51) {
        uVar6 = 0x80019015;
        goto LAB_1005f70a2;
      }
    }
    QArrayData::deallocate(local_68,2,8);
    uVar6 = 0x80019015;
  }
LAB_1005f70a2:
  if (lVar2 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

