
void FUN_100091590(long *param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int *piVar11;
  int *local_8a8;
  int *local_8a0;
  long *local_898;
  QArrayData *local_890;
  int *local_888;
  int *local_880;
  QArrayData *local_878;
  undefined1 local_870 [24];
  QArrayData **local_858;
  undefined4 local_848;
  undefined1 local_31;
  
  if (((char)param_1[5] != '\0') || (plVar7 = *(long **)(param_2 + 0x20), plVar7 == (long *)0x0)) {
    uVar9 = *(undefined8 *)(param_2 + 8);
    local_878 = (QArrayData *)QString::fromAscii_helper("",0);
    FUN_100099d90(local_870,5,uVar9,0xffffffff);
    local_858 = &local_878;
    local_848 = 0;
    FUN_1003342c0(param_1[2],local_870);
    *(undefined1 *)(param_1 + 5) = 0;
    if (*(int *)local_878 == -1) {
      return;
    }
    if (*(int *)local_878 != 0) {
      LOCK();
      *(int *)local_878 = *(int *)local_878 + -1;
      UNLOCK();
      if (*(int *)local_878 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_878,2,8);
    return;
  }
  *(undefined1 *)(param_1 + 5) = 1;
  if (*(int *)(param_2 + 0x28) == 0) {
    plVar7 = operator_new(0x20);
    lVar6 = *(long *)(param_2 + 8);
    puVar10 = *(undefined8 **)(param_2 + 0x18);
    *plVar7 = (long)&PTR_FUN_10226c868;
    plVar7[1] = (long)param_1;
    plVar7[2] = lVar6;
    if (puVar10 == (undefined8 *)0x0) {
      lVar6 = QString::fromAscii_helper("",0);
      plVar7[3] = lVar6;
    }
    else {
      piVar11 = (int *)*puVar10;
      plVar7[3] = (long)piVar11;
      if (1 < *piVar11 + 1U) {
        LOCK();
        *piVar11 = *piVar11 + 1;
        local_31 = *piVar11 != 0;
        UNLOCK();
      }
    }
    plVar8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (plVar8 == (long *)0x0) {
      (**(code **)(*plVar7 + 8))(plVar7);
      plVar8 = (long *)0x0;
    }
    else {
      *(undefined4 *)(plVar8 + 1) = 1;
      plVar8[2] = (long)plVar7;
      *plVar8 = (long)&PTR_FUN_10226ca80;
    }
    uVar9 = FUN_100319c30(param_1[4]);
    if (plVar8 != (long *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_898 = plVar8;
    iVar5 = FUN_10032fbd0(uVar9,&local_898,*(undefined8 *)(param_2 + 0x20));
    if (local_898 != (long *)0x0) {
      LOCK();
      plVar7 = local_898 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*local_898 + 0x10))();
      }
    }
    if (iVar5 == 0) goto LAB_100091a06;
    plVar7 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar7 = (long *)plVar8[2];
    }
    pcVar2 = *(code **)(*plVar7 + 0x10);
    plVar4 = *(long **)(param_2 + 0x20);
    local_8a8 = (int *)*plVar4;
    if (*local_8a8 != -1) {
      if (*local_8a8 == 0) {
        QListData::detach((int)&local_8a8);
        iVar1 = local_8a8[2];
        if (iVar1 != local_8a8[3]) {
          lVar6 = *plVar4;
          puVar10 = (undefined8 *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8);
          piVar11 = local_8a8 + (long)iVar1 * 2 + 4;
          lVar6 = (long)local_8a8[3] * 8 + (long)iVar1 * -8;
          do {
            piVar3 = (int *)*puVar10;
            *(int **)piVar11 = piVar3;
            if (1 < *piVar3 + 1U) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              local_31 = *piVar3 != 0;
              UNLOCK();
            }
            piVar11 = piVar11 + 2;
            puVar10 = puVar10 + 1;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
        }
      }
      else {
        LOCK();
        *local_8a8 = *local_8a8 + 1;
        local_31 = *local_8a8 != 0;
        UNLOCK();
      }
    }
    FUN_10008ff00(&local_8a0,&local_8a8,0);
    (*pcVar2)(plVar7,iVar5,&local_8a0);
    if (*local_8a0 != -1) {
      if (*local_8a0 != 0) {
        LOCK();
        *local_8a0 = *local_8a0 + -1;
        local_31 = *local_8a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000919fa;
      }
      FUN_10003cda0(&local_8a0,local_8a0);
    }
LAB_1000919fa:
    FUN_100039a80(&local_8a8);
LAB_100091a06:
    if (plVar8 == (long *)0x0) {
      return;
    }
    LOCK();
    plVar7 = plVar8 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) {
      return;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
    return;
  }
  pcVar2 = *(code **)(*param_1 + 0x60);
  local_888 = (int *)*plVar7;
  if (*local_888 != -1) {
    if (*local_888 == 0) {
      QListData::detach((int)&local_888);
      iVar5 = local_888[2];
      if (iVar5 != local_888[3]) {
        puVar10 = (undefined8 *)(*plVar7 + 0x10 + (long)*(int *)(*plVar7 + 8) * 8);
        piVar11 = local_888 + (long)iVar5 * 2 + 4;
        lVar6 = (long)local_888[3] * 8 + (long)iVar5 * -8;
        do {
          piVar3 = (int *)*puVar10;
          *(int **)piVar11 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
            UNLOCK();
          }
          piVar11 = piVar11 + 2;
          puVar10 = puVar10 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
    else {
      LOCK();
      *local_888 = *local_888 + 1;
      local_31 = *local_888 != 0;
      UNLOCK();
    }
  }
  FUN_10008ff00(&local_880,&local_888,0);
  uVar9 = *(undefined8 *)(param_2 + 8);
  local_890 = (QArrayData *)**(undefined8 **)(param_2 + 0x18);
  if (1 < *(int *)local_890 + 1U) {
    LOCK();
    *(int *)local_890 = *(int *)local_890 + 1;
    local_31 = *(int *)local_890 != 0;
    UNLOCK();
  }
  (*pcVar2)(param_1,0,1,&local_880,uVar9,&local_890);
  if (*(int *)local_890 != -1) {
    if (*(int *)local_890 != 0) {
      LOCK();
      *(int *)local_890 = *(int *)local_890 + -1;
      local_31 = *(int *)local_890 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000917f5;
    }
    QArrayData::deallocate(local_890,2,8);
  }
LAB_1000917f5:
  if (*local_880 != -1) {
    if (*local_880 != 0) {
      LOCK();
      *local_880 = *local_880 + -1;
      local_31 = *local_880 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100091828;
    }
    FUN_10003cda0(&local_880,local_880);
  }
LAB_100091828:
  FUN_100039a80(&local_888);
  return;
}

