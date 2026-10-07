
bool FUN_100504c10(long *param_1)

{
  byte *pbVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_2c;
  
  *(undefined1 *)((long)param_1 + 0x11) = 0;
  FUN_100504f80(*param_1);
  if (*(int *)(param_1[5] + 4) != 0) {
    lVar8 = *param_1;
    if ((*(long *)(lVar8 + 0x10) == 0) || (*(long *)(*(long *)(lVar8 + 0x10) + 0x10) == 0)) {
      puVar4 = operator_new(0x18);
      *puVar4 = &PTR_FUN_100bc42b8;
      puVar4[2] = PTR_shared_null_100ba20d8;
      plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (plVar5 == (long *)0x0) {
        FUN_100507800(puVar4);
        goto LAB_100504e55;
      }
      *(undefined4 *)(plVar5 + 1) = 1;
      plVar5[2] = (long)puVar4;
      *plVar5 = (long)&PTR_FUN_10111d3a0;
      puVar4[1] = lVar8;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      plVar6 = *(long **)(lVar8 + 0x10);
      *(long **)(lVar8 + 0x10) = plVar5;
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      LOCK();
      plVar6 = plVar5 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    lVar8 = 0;
    if (*(long *)(*param_1 + 0x10) != 0) {
      lVar8 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    }
    local_2c = 8;
    FUN_1002e5540(lVar8 + 0x10,&local_2c,param_1 + 5);
  }
  if ((*(int *)(param_1[3] + 4) != 0) && (*(int *)(param_1[4] + 4) != 0)) {
    plVar5 = (long *)*param_1;
    if ((*plVar5 == 0) || (*(long *)(*plVar5 + 0x10) == 0)) {
      puVar4 = operator_new(0x18);
      *puVar4 = &PTR_FUN_100bc4220;
      puVar4[2] = PTR_shared_null_100ba20d0;
      plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (plVar6 == (long *)0x0) {
LAB_100504e55:
        uVar7 = FUN_100507680(puVar4);
                    /* WARNING: Subroutine does not return */
        FUN_10000c540(uVar7);
      }
      *(undefined4 *)(plVar6 + 1) = 1;
      plVar6[2] = (long)puVar4;
      *plVar6 = (long)&PTR_FUN_10111d408;
      puVar4[1] = plVar5;
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      plVar2 = (long *)*plVar5;
      *plVar5 = (long)plVar6;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar5 = plVar2 + 1;
        lVar8 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      LOCK();
      plVar5 = plVar6 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    uVar7 = 0;
    if (*(long *)*param_1 != 0) {
      uVar7 = *(undefined8 *)(*(long *)*param_1 + 0x10);
    }
    FUN_1005050d0(uVar7,param_1 + 3,param_1 + 4,(char)param_1[6]);
  }
  lVar8 = *param_1;
  if ((char)param_1[6] != '\0') {
    pbVar1 = (byte *)(lVar8 + 0x38);
    *pbVar1 = *pbVar1 | 0x10;
  }
  iVar3 = FUN_1005060d0(lVar8,param_1 + 1);
  if (iVar3 == 0) {
    *(undefined1 *)((long)param_1 + 0x12) = 0;
  }
  return iVar3 == 0;
}

