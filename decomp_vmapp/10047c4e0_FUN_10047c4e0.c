
void FUN_10047c4e0(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  Data *pDVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  int *local_38;
  undefined1 local_29;
  
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    local_38 = (int *)**(undefined8 **)(param_4 + 8);
    if (local_38 != (int *)0x0) {
      LOCK();
      *local_38 = *local_38 + 1;
      local_29 = *local_38 != 0;
      UNLOCK();
    }
    FUN_100473410(param_1,&local_38,**(undefined4 **)(param_4 + 0x10));
    piVar3 = local_38;
    if (local_38 != (int *)0x0) {
      LOCK();
      *local_38 = *local_38 + -1;
      local_29 = *local_38 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_38 != (int *)0x0)) {
        FUN_100031ed0(local_38);
        operator_delete(piVar3);
      }
    }
    break;
  case 1:
    plVar2 = *(long **)(param_4 + 8);
    local_40 = (Data *)*plVar2;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 == 0) {
        QListData::detach((int)&local_40);
        iVar1 = *(int *)(local_40 + 8);
        if (iVar1 != *(int *)(local_40 + 0xc)) {
          lVar4 = *plVar2;
          puVar5 = (undefined8 *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8);
          pDVar6 = local_40 + (long)iVar1 * 8 + 0x10;
          lVar4 = (long)*(int *)(local_40 + 0xc) * 8 + (long)iVar1 * -8;
          do {
            piVar3 = (int *)*puVar5;
            *(int **)pDVar6 = piVar3;
            if (1 < *piVar3 + 1U) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              local_29 = *piVar3 != 0;
              UNLOCK();
            }
            pDVar6 = pDVar6 + 8;
            puVar5 = puVar5 + 1;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
      }
    }
    FUN_100473430(param_1,&local_40,**(undefined1 **)(param_4 + 0x10));
    pDVar6 = local_40;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_40 + 0xc);
      if (iVar1 != *(int *)(local_40 + 8)) {
        lVar4 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
        pDVar7 = local_40 + (long)iVar1 * 8 + 8;
        do {
          pQVar8 = *(QArrayData **)pDVar7;
          if (*(int *)pQVar8 == 0) {
LAB_10047c76f:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_29 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar8 = *(QArrayData **)pDVar7;
              goto LAB_10047c76f;
            }
          }
          pDVar7 = pDVar7 + -8;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0);
      }
      QListData::dispose(pDVar6);
    }
    break;
  case 2:
    local_48 = (QArrayData *)**(undefined8 **)(param_4 + 8);
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
    }
    local_50 = (QArrayData *)**(undefined8 **)(param_4 + 0x10);
    if (1 < *(int *)local_50 + 1U) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
    }
    FUN_100473450(param_1,&local_48,&local_50);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10047c67f;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10047c67f:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_48,2,8);
    }
    break;
  case 3:
    FUN_100473460(param_1);
    return;
  case 4:
    FUN_100473470(param_1);
    return;
  }
  return;
}

