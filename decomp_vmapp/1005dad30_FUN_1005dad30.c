
undefined8 * FUN_1005dad30(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  QArrayData *local_288;
  QArrayData *local_280;
  long *local_278;
  undefined1 local_269;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_248 [512];
  undefined8 local_48;
  long lStack_40;
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar5;
  if (*(int *)(*param_2 + 4) == 0) {
    FUN_1007d6870(param_1);
    goto LAB_1005daf4c;
  }
  local_278 = (long *)0x0;
  iVar4 = FUN_1005da7e0(param_2,1,local_248,&local_278);
  if (iVar4 < 0) {
    FUN_1007d6870(param_1);
    plVar6 = local_278;
  }
  else {
    FUN_1007d6870(&local_258);
    plVar6 = local_278;
    lVar5 = 0;
    if (local_278 != (long *)0x0) {
      lVar5 = local_278[2];
    }
    local_280 = (QArrayData *)QString::fromAscii_helper("DDB",3);
    local_288 = (QArrayData *)QString::fromAscii_helper("ddb.parallels_snapshot_uuid",0x1b);
    lVar5 = FUN_1006aff80(lVar5,&local_280,&local_288);
    if (*(int *)local_288 != -1) {
      if (*(int *)local_288 != 0) {
        LOCK();
        *(int *)local_288 = *(int *)local_288 + -1;
        local_269 = *(int *)local_288 != 0;
        UNLOCK();
        if ((bool)local_269) goto LAB_1005dae37;
      }
      QArrayData::deallocate(local_288,2,8);
    }
LAB_1005dae37:
    if (*(int *)local_280 != -1) {
      if (*(int *)local_280 != 0) {
        LOCK();
        *(int *)local_280 = *(int *)local_280 + -1;
        local_269 = *(int *)local_280 != 0;
        UNLOCK();
        if ((bool)local_269) goto LAB_1005dae73;
      }
      QArrayData::deallocate(local_280,2,8);
    }
LAB_1005dae73:
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x20);
      if (*(int *)(lVar5 + 0xc) - *(int *)(lVar5 + 8) == 1) {
        FUN_1007d6920(&local_268,lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8);
        local_250 = local_260;
        local_258 = local_268;
      }
    }
    cVar3 = FUN_1007ea210(&local_258);
    if (cVar3 == '\0') {
      param_1[1] = local_250;
      *param_1 = local_258;
    }
    else {
      iVar4 = FUN_1005db030(param_2,0);
      local_48 = 0;
      lStack_40 = (ulong)(iVar4 + 1) << 0x20;
      FUN_1007d6c60(param_1,&local_48);
    }
    lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_1005daf4c:
  if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

