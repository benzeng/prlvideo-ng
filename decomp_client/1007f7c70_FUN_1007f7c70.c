
void FUN_1007f7c70(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  Data *pDVar10;
  Data *pDVar11;
  QArrayData *pQVar12;
  undefined1 local_a8 [8];
  QArrayData *local_a0;
  Data *local_98;
  QArrayData *local_90;
  undefined1 local_88 [8];
  Data *local_80;
  QArrayData *local_78;
  undefined4 local_70;
  undefined1 local_6a;
  undefined1 local_69;
  void *local_68;
  QArrayData **local_60;
  undefined1 *local_58;
  undefined4 *local_50;
  void *local_48;
  Data **local_40;
  long local_30;
  
  lVar3 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar3;
  if (param_2 == 0xc) {
    if (((param_3 == 5) || (param_3 == 6)) && (*(int *)param_4[1] == 0)) {
      if (DAT_10226c7d8 == 0) {
        DAT_10226c7d8 = FUN_1000871d0("Actions::ActionType",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226c7d8;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
    goto switchD_1007f7d72_default;
  }
  if (param_2 == 10) {
    puVar4 = (undefined4 *)*param_4;
    plVar5 = (long *)param_4[1];
    pcVar8 = (code *)*plVar5;
    lVar7 = plVar5[1];
    if ((pcVar8 == FUN_1007f8840) && (lVar7 == 0)) {
      *puVar4 = 0;
      pcVar8 = (code *)*plVar5;
      lVar7 = plVar5[1];
    }
    if ((pcVar8 == FUN_1007f8860) && (lVar7 == 0)) {
      *puVar4 = 1;
      pcVar8 = (code *)*plVar5;
      lVar7 = plVar5[1];
    }
    if ((pcVar8 == FUN_1007f88c0) && (lVar7 == 0)) {
      *puVar4 = 2;
    }
    goto switchD_1007f7d72_default;
  }
  if (param_2 != 0) goto switchD_1007f7d72_default;
  switch(param_3) {
  case 0:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_1021f8e30,0,(void **)0x0);
    return;
  case 1:
    local_78 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_69 = *(int *)local_78 != 0;
      UNLOCK();
    }
    local_6a = *(undefined1 *)param_4[2];
    local_70 = *(undefined4 *)param_4[3];
    local_68 = (void *)0x0;
    local_60 = &local_78;
    local_58 = &local_6a;
    local_50 = &local_70;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_1021f8e30,1,&local_68);
    if (*(int *)local_78 == -1) goto switchD_1007f7d72_default;
    pQVar12 = local_78;
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      iVar1 = *(int *)local_78;
      UNLOCK();
joined_r0x0001007f83d7:
      local_69 = iVar1 != 0;
      if ((bool)local_69) goto switchD_1007f7d72_default;
    }
    break;
  case 2:
    plVar5 = (long *)param_4[1];
    local_80 = (Data *)*plVar5;
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 == 0) {
        QListData::detach((int)&local_80);
        iVar1 = *(int *)(local_80 + 8);
        if (iVar1 != *(int *)(local_80 + 0xc)) {
          lVar7 = *plVar5;
          puVar9 = (undefined8 *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8);
          pDVar10 = local_80 + (long)iVar1 * 8 + 0x10;
          lVar7 = (long)*(int *)(local_80 + 0xc) * 8 + (long)iVar1 * -8;
          do {
            piVar6 = (int *)*puVar9;
            *(int **)pDVar10 = piVar6;
            if (1 < *piVar6 + 1U) {
              LOCK();
              *piVar6 = *piVar6 + 1;
              local_69 = *piVar6 != 0;
              UNLOCK();
            }
            pDVar10 = pDVar10 + 8;
            puVar9 = puVar9 + 1;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_69 = *(int *)local_80 != 0;
        UNLOCK();
      }
    }
    local_48 = (void *)0x0;
    local_40 = &local_80;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_1021f8e30,2,&local_48);
    pDVar10 = local_80;
    if (*(int *)local_80 == -1) goto switchD_1007f7d72_default;
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_69 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_69) goto switchD_1007f7d72_default;
    }
    iVar1 = *(int *)(local_80 + 0xc);
    if (iVar1 != *(int *)(local_80 + 8)) {
      lVar7 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar1 * -8;
      pDVar11 = local_80 + (long)iVar1 * 8 + 8;
      do {
        pQVar12 = *(QArrayData **)pDVar11;
        if (*(int *)pQVar12 == 0) {
LAB_1007f84bc:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_69 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!(bool)local_69) {
            pQVar12 = *(QArrayData **)pDVar11;
            goto LAB_1007f84bc;
          }
        }
        pDVar11 = pDVar11 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    goto LAB_1007f857b;
  case 3:
    FUN_1000c4a60(param_1);
    return;
  case 4:
    FUN_1000c4aa0(param_1,*(undefined1 *)param_4[1]);
    return;
  case 5:
    FUN_1000c4b90(param_1,*(undefined4 *)param_4[1],param_4[2],param_4[3],param_4[4]);
    return;
  case 6:
    FUN_1000c4c80(param_1,*(undefined4 *)param_4[1]);
    return;
  case 7:
    FUN_1000c4d60(param_1);
    return;
  case 8:
    FUN_1000c5020(param_1,param_4[1]);
    return;
  case 9:
    FUN_1000c51d0(param_1);
    return;
  case 10:
    FUN_1000c4a80(param_1);
    return;
  case 0xb:
    FUN_1000d0210(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0xc:
    FUN_1000e0af0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 0xd:
                    /* WARNING: Could not recover jumptable at 0x0001007f80b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x60))
              (param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],*(undefined4 *)param_4[3]
              );
    return;
  case 0xe:
    FUN_1000b7180(local_88,param_4[1]);
    FUN_1000e2a90(param_1,local_88);
    FUN_1000b70d0(local_88);
    goto switchD_1007f7d72_default;
  case 0xf:
    FUN_1000c4ba0(param_1);
    return;
  case 0x10:
    local_90 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_90 + 1U) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_69 = *(int *)local_90 != 0;
      UNLOCK();
    }
    FUN_1000e3490(param_1,&local_90,*(undefined1 *)param_4[2],*(undefined4 *)param_4[3]);
    if (*(int *)local_90 == -1) goto switchD_1007f7d72_default;
    pQVar12 = local_90;
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      iVar1 = *(int *)local_90;
      UNLOCK();
      goto joined_r0x0001007f83d7;
    }
    break;
  case 0x11:
    FUN_1000e34b0(param_1);
    return;
  case 0x12:
    FUN_1000e3750(param_1);
    return;
  case 0x13:
    plVar5 = (long *)param_4[1];
    local_98 = (Data *)*plVar5;
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 == 0) {
        QListData::detach((int)&local_98);
        iVar1 = *(int *)(local_98 + 8);
        if (iVar1 != *(int *)(local_98 + 0xc)) {
          lVar7 = *plVar5;
          puVar9 = (undefined8 *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8);
          pDVar10 = local_98 + (long)iVar1 * 8 + 0x10;
          lVar7 = (long)*(int *)(local_98 + 0xc) * 8 + (long)iVar1 * -8;
          do {
            piVar6 = (int *)*puVar9;
            *(int **)pDVar10 = piVar6;
            if (1 < *piVar6 + 1U) {
              LOCK();
              *piVar6 = *piVar6 + 1;
              local_69 = *piVar6 != 0;
              UNLOCK();
            }
            pDVar10 = pDVar10 + 8;
            puVar9 = puVar9 + 1;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + 1;
        local_69 = *(int *)local_98 != 0;
        UNLOCK();
      }
    }
    FUN_1000e3a80(param_1,&local_98);
    pDVar10 = local_98;
    if (*(int *)local_98 == -1) goto switchD_1007f7d72_default;
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_69 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_69) goto switchD_1007f7d72_default;
    }
    iVar1 = *(int *)(local_98 + 0xc);
    if (iVar1 != *(int *)(local_98 + 8)) {
      lVar7 = (long)*(int *)(local_98 + 8) * 8 + (long)iVar1 * -8;
      pDVar11 = local_98 + (long)iVar1 * 8 + 8;
      do {
        pQVar12 = *(QArrayData **)pDVar11;
        if (*(int *)pQVar12 == 0) {
LAB_1007f8562:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_69 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!(bool)local_69) {
            pQVar12 = *(QArrayData **)pDVar11;
            goto LAB_1007f8562;
          }
        }
        pDVar11 = pDVar11 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
LAB_1007f857b:
    QListData::dispose(pDVar10);
    goto switchD_1007f7d72_default;
  case 0x14:
    FUN_1000e3d80(param_1);
    return;
  case 0x15:
    FUN_1000e41b0(param_1,*(undefined1 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  case 0x16:
    FUN_1000e45b0(param_1);
    return;
  case 0x17:
    FUN_1000c3790(param_1);
    return;
  case 0x18:
    FUN_1000dfa80(param_1);
    return;
  case 0x19:
    FUN_1000e3d30(param_1);
    return;
  case 0x1a:
    FUN_1000e46d0(param_1);
    return;
  case 0x1b:
    FUN_1000e4840(param_1);
    return;
  case 0x1c:
    uVar2 = *(undefined4 *)param_4[1];
    local_a0 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_a0 + 1U) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + 1;
      local_69 = *(int *)local_a0 != 0;
      UNLOCK();
    }
    FUN_100095510(local_a8,param_4[3]);
    FUN_1000cfa70(param_1,uVar2,&local_a0,local_a8);
    FUN_1000f1a40(local_a8);
    if (*(int *)local_a0 == -1) goto switchD_1007f7d72_default;
    pQVar12 = local_a0;
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      iVar1 = *(int *)local_a0;
      UNLOCK();
      goto joined_r0x0001007f83d7;
    }
    break;
  case 0x1d:
    FUN_1000c6e70(param_1,param_4[1]);
    return;
  default:
    goto switchD_1007f7d72_default;
  }
  QArrayData::deallocate(pQVar12,2,8);
switchD_1007f7d72_default:
  if (lVar3 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

