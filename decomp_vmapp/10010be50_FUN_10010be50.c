
void FUN_10010be50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  long lVar11;
  QArrayData *local_b8;
  QArrayData *local_b0;
  long *local_a8;
  QString local_a0;
  QString local_98;
  long *local_90;
  undefined1 local_88 [47];
  undefined1 local_59;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  QString QStack_40;
  long local_38;
  
  lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_a8 = (long *)0x0;
  local_38 = lVar11;
  lVar5 = FUN_10010cf90(param_1 + 0x10);
  if (*(char *)(lVar5 + 0x24) == '\0') {
    if (2 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("CVSRC","vm",3,"Can not connect sources from \"%s\"",
                    local_b0 + *(long *)(local_b0 + 0x10));
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_59 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_59) goto LAB_10010c403;
        }
        QArrayData::deallocate(local_b0,1,8);
      }
    }
    goto LAB_10010c403;
  }
  pvVar6 = operator_new(0x40);
  FUN_10010aa10(pvVar6,param_2);
  plVar7 = (long *)FUN_10010d4b0(pvVar6,0);
  if (plVar7 != (long *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  plVar2 = plVar7;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar1 = local_a8 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      lVar11 = *local_a8;
      local_a8 = plVar7;
      (**(code **)(lVar11 + 0x10))();
      plVar2 = local_a8;
    }
  }
  local_a8 = plVar2;
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  FUN_1007d6870(local_58);
  register0x00001208 = (int)PTR_shared_null_100ba20d0;
  local_48 = (undefined1  [8])PTR_shared_null_100ba20d0;
  register0x0000120c = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  FUN_10078c8e0(&local_90,param_3);
  cVar3 = FUN_10078c9b0(&local_90,0x2001,local_58);
  if (cVar3 == '\0') {
    puVar10 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar10 = 0;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar10,&PTR_vtable_100ba9288,0);
  }
  cVar3 = FUN_10078c940(&local_90,0x2002);
  if (cVar3 == '\0') {
    puVar10 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar10 = 1;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar10,&PTR_vtable_100ba9288,0);
  }
  pcVar8 = (char *)FUN_10078d0a0(local_88);
  iVar4 = FUN_10078d0c0(local_88);
  if ((pcVar8 != (char *)0x0) && (iVar4 == -1)) {
    _strlen(pcVar8);
  }
  QString::fromUtf8_helper((char *)&local_98,(int)pcVar8);
  QString::operator=((QString *)local_48,&local_98);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_59 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_10010bffc;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_10010bffc:
  cVar3 = FUN_10078c940(&local_90,0x2003);
  if (cVar3 == '\0') {
    puVar10 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar10 = 2;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar10,&PTR_vtable_100ba9288,0);
  }
  pcVar8 = (char *)FUN_10078d0a0(local_88);
  iVar4 = FUN_10078d0c0(local_88);
  if ((pcVar8 != (char *)0x0) && (iVar4 == -1)) {
    _strlen(pcVar8);
  }
  QString::fromUtf8_helper((char *)&local_a0,(int)pcVar8);
  QString::operator=((QString *)(local_48 + 8),&local_a0);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_59 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_10010c094;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_10010c094:
  if (local_90 != (long *)0x0) {
    LOCK();
    plVar7 = local_90 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  lVar11 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_100109860(pvVar6,local_58);
  FUN_100109880(pvVar6,(QString *)local_48);
  FUN_100109890(pvVar6,(QString *)(local_48 + 8));
  local_b8 = (QArrayData *)PTR_shared_null_100ba20d0;
  uVar9 = FUN_100097990(DAT_1011c3698);
  FUN_1001080f0(uVar9,&local_a8,&local_b8);
  FUN_100109850(pvVar6,&local_b8);
  FUN_10010d070(param_1 + 0x18,&local_a8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_59 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_10010c170;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10010c170:
  if (*(int *)QStack_40.field0_0x0 != -1) {
    if (*(int *)QStack_40.field0_0x0 != 0) {
      LOCK();
      *(int *)QStack_40.field0_0x0 = *(int *)QStack_40.field0_0x0 + -1;
      local_59 = *(int *)QStack_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_10010c1a0;
    }
    QArrayData::deallocate((QArrayData *)QStack_40.field0_0x0,2,8);
  }
LAB_10010c1a0:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_59 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_10010c403;
    }
    QArrayData::deallocate((QArrayData *)local_48,2,8);
  }
LAB_10010c403:
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  if (lVar11 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

