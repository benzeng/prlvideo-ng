
undefined8 * FUN_100a94160(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  QArrayData *pQVar4;
  char cVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  undefined8 local_148;
  undefined1 local_139;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0xffffffffffffffff;
  local_30 = lVar2;
  cVar5 = FUN_100a9fe10(&local_148);
  if (cVar5 != '\0') {
    local_160 = (long *)0x0;
    cVar5 = FUN_100a944c0(param_2,local_148 & 0xffffffff,&local_160,0);
    if (local_160 != (long *)0x0) {
      LOCK();
      plVar1 = local_160 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_160 + 0x10))();
      }
    }
    if (cVar5 == '\0') {
      _close((int)local_148);
      _close(local_148._4_4_);
      *param_1 = 0;
    }
    else {
      pvVar6 = operator_new(4);
      FUN_100a6a3f0(pvVar6,local_148._4_4_);
      puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
      if (puVar7 == (undefined8 *)0x0) {
        FUN_100a6a430(pvVar6);
        operator_delete(pvVar6);
        puVar7 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar7 + 1) = 1;
        puVar7[2] = pvVar6;
        *puVar7 = &PTR_FUN_102281ab8;
      }
      *param_1 = puVar7;
    }
    goto LAB_100a943d2;
  }
  local_158 = *(QArrayData **)(param_2 + 0x20);
  if (1 < *(int *)local_158 + 1U) {
    LOCK();
    *(int *)local_158 = *(int *)local_158 + 1;
    local_139 = *(int *)local_158 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  pQVar4 = local_150;
  lVar3 = *(long *)(local_150 + 0x10);
  uVar8 = FUN_100a9fde0(&local_138,0x100);
  FUN_100df99c0("","IOCommunication",0,"%sCan\'t create socketpair (native error: %s)",
                pQVar4 + lVar3,uVar8);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_139 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_139) goto LAB_100a94359;
    }
    QArrayData::deallocate(local_150,1,8);
  }
LAB_100a94359:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_139 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_139) goto LAB_100a94395;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100a94395:
  *param_1 = 0;
LAB_100a943d2:
  if (lVar2 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

