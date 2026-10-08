
void FUN_10009e3d0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  long *local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  
  if (*(int *)(*(long *)(param_1[2] + 0x90) + 4) == 0) {
    return;
  }
  local_50 = 0x44;
  pvVar7 = operator_new__(0x44,(nothrow_t *)PTR_nothrow_1021e1620);
  local_58 = operator_new(0x18);
  *(undefined4 *)(local_58 + 1) = 1;
  local_58[2] = (long)pvVar7;
  *local_58 = (long)&PTR_FUN_102282990;
  if (pvVar7 != (void *)0x0) {
    puVar3 = (undefined4 *)local_58[2];
    *puVar3 = 1;
    puVar3[1] = 3;
    puVar3[2] = 4;
    puVar3[3] = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    puVar3[0x10] = *(undefined4 *)(param_2 + 5);
    *(undefined8 *)(puVar3 + 0xe) = param_2[4];
    *(undefined8 *)(puVar3 + 0xc) = param_2[3];
    *(undefined8 *)(puVar3 + 10) = param_2[2];
    uVar8 = *param_2;
    *(undefined8 *)(puVar3 + 8) = param_2[1];
    *(undefined8 *)(puVar3 + 6) = uVar8;
    auVar2 = *(undefined1 (*) [16])(puVar3 + 8);
    if (auVar2._12_4_ != 0 || (auVar2._8_4_ != 0 || (auVar2._4_4_ != 0 || auVar2._0_4_ != 0))) {
      local_48 = auVar2;
      uVar8 = FUN_100319cd0(*param_1);
      cVar6 = FUN_100345d70(uVar8,local_48,2);
      if (cVar6 == '\0') {
        if (0 < DAT_10230ffd0) {
          FUN_100df99c0("UIEMUSRV","prl_client_app",1,"failed to convert inputInfo");
        }
        goto LAB_10009e5c4;
      }
      puVar3[8] = local_48._0_4_;
      puVar3[9] = local_48._4_4_;
      puVar3[10] = local_48._8_4_;
      puVar3[0xb] = local_48._12_4_;
    }
    cVar6 = FUN_10009fca0(param_1,&local_58,&local_50);
    uVar8 = local_50;
    if (cVar6 != '\0') {
      lVar4 = param_1[2];
      lVar5 = *(long *)(lVar4 + 0x90);
      if ((*(long *)(lVar5 + 0x10) != 0) && (lVar9 = *(long *)(lVar5 + 0x20), lVar9 != lVar5 + 8)) {
        do {
          (**(code **)(*(long *)(lVar4 + 0x28) + 0x10))
                    ((long *)(lVar4 + 0x28),*(undefined8 *)(lVar9 + 0x18),&local_58,uVar8);
          lVar9 = QMapNodeBase::nextNode();
        } while (lVar9 != *(long *)(lVar4 + 0x90) + 8);
      }
    }
  }
LAB_10009e5c4:
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_58 + 0x10))(local_58);
    }
  }
  return;
}

