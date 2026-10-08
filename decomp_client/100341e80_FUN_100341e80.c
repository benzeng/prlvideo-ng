
void FUN_100341e80(long param_1)

{
  long *plVar1;
  int *piVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 in_R9;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
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
  undefined4 *local_30;
  char *local_28;
  
  piVar2 = *(int **)(param_1 + 0x20);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    local_30 = (undefined4 *)CONCAT71(local_30._1_7_,*piVar2 != 0);
    if ((*piVar2 == 0) && (pvVar3 = *(void **)(param_1 + 0x20), pvVar3 != (void *)0x0)) {
      operator_delete(pvVar3);
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
     (lVar4 = *(long *)(param_1 + 0x38), lVar4 != 0)) {
    plVar1 = (long *)(param_1 + 0x30);
    local_d0 = *(undefined8 *)(lVar4 + 0x24);
    local_e0 = *(undefined8 *)(lVar4 + 0x14);
    local_d8 = *(undefined8 *)(lVar4 + 0x1c);
    lVar4 = FUN_100340370(param_1,*(undefined4 *)(lVar4 + 0x10),&local_e0);
    if (lVar4 == 0) {
      uVar5 = 0;
      if ((*plVar1 != 0) && (uVar5 = 0, *(int *)(*plVar1 + 4) != 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x38);
      }
      local_e4 = 0x80000009;
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
      local_30 = &local_e4;
      local_28 = "PRL_RESULT";
      local_48 = 0;
      uStack_40 = 0;
      QMetaObject::invokeMethod
                (uVar5,"switchFinished",0,0,0,in_R9,local_30,"PRL_RESULT",0,0,0,0,0,0,0,0,0,0,0,0,0,
                 0,0,0,0,0);
    }
    piVar2 = (int *)*plVar1;
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      local_30 = (undefined4 *)CONCAT71(local_30._1_7_,*piVar2 != 0);
      if ((*piVar2 == 0) && ((void *)*plVar1 != (void *)0x0)) {
        operator_delete((void *)*plVar1);
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
      *plVar1 = 0;
    }
  }
  return;
}

