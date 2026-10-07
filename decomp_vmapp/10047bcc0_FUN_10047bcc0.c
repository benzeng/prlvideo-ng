
void FUN_10047bcc0(QObject *param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  int iVar8;
  Data *pDVar9;
  Data *pDVar10;
  QArrayData *pQVar11;
  QArrayData *local_70;
  QArrayData *local_68;
  Data *local_60;
  QArrayData *local_58;
  undefined4 local_50;
  undefined1 local_4a;
  undefined1 local_49;
  void *local_48;
  QArrayData **local_40;
  QArrayData **local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar6 = (code *)*plVar3;
    lVar5 = plVar3[1];
    if ((pcVar6 == FUN_10047c290) && (lVar5 == 0)) {
      *puVar2 = 0;
      pcVar6 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar6 == FUN_10047c2f0) && (lVar5 == 0)) {
      *puVar2 = 1;
      pcVar6 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar6 == FUN_10047c350) && (lVar5 == 0)) {
      *puVar2 = 2;
      pcVar6 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar6 == FUN_10047c3a0) && (lVar5 == 0)) {
      *puVar2 = 3;
      pcVar6 = (code *)*plVar3;
      lVar5 = plVar3[1];
    }
    if ((pcVar6 == FUN_10047c3c0) && (lVar5 == 0)) {
      *puVar2 = 4;
    }
    goto switchD_10047bdf3_default;
  }
  if (param_2 != 0) goto switchD_10047bdf3_default;
  switch(param_3) {
  case 0:
    local_58 = *(QArrayData **)param_4[1];
    if (local_58 != (QArrayData *)0x0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
    }
    local_50 = *(undefined4 *)param_4[2];
    local_48 = (void *)0x0;
    local_40 = &local_58;
    local_38 = (QArrayData **)&local_50;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_100bc1cc0,0,&local_48);
    pQVar11 = local_58;
    if (local_58 != (QArrayData *)0x0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((!(bool)local_49) && (local_58 != (QArrayData *)0x0)) {
        FUN_100031ed0(local_58);
        operator_delete(pQVar11);
      }
    }
    break;
  case 1:
    plVar3 = (long *)param_4[1];
    local_60 = (Data *)*plVar3;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 == 0) {
        QListData::detach((int)&local_60);
        iVar8 = *(int *)(local_60 + 8);
        if (iVar8 != *(int *)(local_60 + 0xc)) {
          lVar5 = *plVar3;
          puVar7 = (undefined8 *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8);
          pDVar9 = local_60 + (long)iVar8 * 8 + 0x10;
          lVar5 = (long)*(int *)(local_60 + 0xc) * 8 + (long)iVar8 * -8;
          do {
            piVar4 = (int *)*puVar7;
            *(int **)pDVar9 = piVar4;
            if (1 < *piVar4 + 1U) {
              LOCK();
              *piVar4 = *piVar4 + 1;
              local_49 = *piVar4 != 0;
              UNLOCK();
            }
            pDVar9 = pDVar9 + 8;
            puVar7 = puVar7 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_49 = *(int *)local_60 != 0;
        UNLOCK();
      }
    }
    local_4a = *(undefined1 *)param_4[2];
    local_48 = (void *)0x0;
    local_40 = (QArrayData **)&local_60;
    local_38 = (QArrayData **)&local_4a;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_100bc1cc0,1,&local_48);
    pDVar9 = local_60;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_49 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_49) break;
      }
      iVar8 = *(int *)(local_60 + 0xc);
      if (iVar8 != *(int *)(local_60 + 8)) {
        lVar5 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar8 * -8;
        pDVar10 = local_60 + (long)iVar8 * 8 + 8;
        do {
          pQVar11 = *(QArrayData **)pDVar10;
          if (*(int *)pQVar11 == 0) {
LAB_10047c0c7:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_49 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_49) {
              pQVar11 = *(QArrayData **)pDVar10;
              goto LAB_10047c0c7;
            }
          }
          pDVar10 = pDVar10 + -8;
          lVar5 = lVar5 + 8;
        } while (lVar5 != 0);
      }
      QListData::dispose(pDVar9);
    }
    break;
  case 2:
    local_68 = *(QArrayData **)param_4[1];
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_49 = *(int *)local_68 != 0;
      UNLOCK();
    }
    local_70 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_70 + 1U) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_49 = *(int *)local_70 != 0;
      UNLOCK();
    }
    local_48 = (void *)0x0;
    local_40 = &local_68;
    local_38 = &local_70;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_100bc1cc0,2,&local_48);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_49 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10047bfa2;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_10047bfa2:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_49 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_49) break;
      }
      QArrayData::deallocate(local_68,2,8);
    }
    break;
  case 3:
    iVar8 = 3;
    goto LAB_10047c00d;
  case 4:
    iVar8 = 4;
LAB_10047c00d:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_PTR_100bc1cc0,iVar8,(void **)0x0);
    return;
  }
switchD_10047bdf3_default:
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

