
void FUN_10046b410(undefined8 param_1,long *param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  Data *pDVar6;
  Data *pDVar7;
  int iVar8;
  uint uVar9;
  QArrayData *pQVar10;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)*param_2;
  if (*(uint *)local_40 != 0xffffffff) {
    if (*(uint *)local_40 == 0) {
      QListData::detach((int)&local_40);
      uVar4 = *(uint *)(local_40 + 8);
      if (uVar4 != *(uint *)(local_40 + 0xc)) {
        puVar5 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        pDVar6 = local_40 + (long)(int)uVar4 * 8 + 0x10;
        lVar3 = (long)(int)*(uint *)(local_40 + 0xc) * 8 + (long)(int)uVar4 * -8;
        do {
          piVar1 = (int *)*puVar5;
          *(int **)pDVar6 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          pDVar6 = pDVar6 + 8;
          puVar5 = puVar5 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *(uint *)local_40 = *(uint *)local_40 + 1;
      local_31 = *(uint *)local_40 != 0;
      UNLOCK();
    }
  }
  uVar4 = *(uint *)(local_40 + 8);
  uVar9 = *(uint *)(local_40 + 0xc);
  if (0 < (int)(uVar9 - uVar4)) {
    lVar3 = (long)(int)(uVar9 - uVar4) + 1;
    iVar8 = (uVar9 - 1) - uVar4;
    do {
      if (1 < *(uint *)local_40) {
        FUN_100022c80(&local_40,*(uint *)(local_40 + 4));
      }
      pDVar6 = local_40 + ((int)*(uint *)(local_40 + 8) + lVar3) * 8;
      iVar2 = QString::compare(pDVar6,&DAT_1011bbf80,1);
      if (((iVar2 != 0) && (iVar2 = QString::compare(pDVar6,&DAT_1011bbf88,1), iVar2 != 0)) &&
         (iVar2 = QString::compare(pDVar6,&DAT_1011bbf90,1), iVar2 != 0)) {
        FUN_10046b9a0(&local_40,iVar8);
      }
      lVar3 = lVar3 + -1;
      iVar8 = iVar8 + -1;
    } while (1 < lVar3);
    uVar4 = *(uint *)(local_40 + 8);
    uVar9 = *(uint *)(local_40 + 0xc);
  }
  if (uVar9 != uVar4) {
    local_48 = local_40;
    if (*(uint *)local_40 != 0xffffffff) {
      if (*(uint *)local_40 == 0) {
        QListData::detach((int)&local_48);
        uVar4 = *(uint *)(local_48 + 8);
        if (uVar4 != *(uint *)(local_48 + 0xc)) {
          pDVar6 = local_40 + (long)(int)*(uint *)(local_40 + 8) * 8 + 0x10;
          pDVar7 = local_48 + (long)(int)uVar4 * 8 + 0x10;
          lVar3 = (long)(int)*(uint *)(local_48 + 0xc) * 8 + (long)(int)uVar4 * -8;
          do {
            piVar1 = *(int **)pDVar6;
            *(int **)pDVar7 = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_31 = *piVar1 != 0;
              UNLOCK();
            }
            pDVar7 = pDVar7 + 8;
            pDVar6 = pDVar6 + 8;
            lVar3 = lVar3 + -8;
          } while (lVar3 != 0);
        }
      }
      else {
        LOCK();
        *(uint *)local_40 = *(uint *)local_40 + 1;
        local_31 = *(uint *)local_40 != 0;
        UNLOCK();
      }
    }
    FUN_10047c2f0(param_1,&local_48,param_3);
    pDVar6 = local_48;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10046b731;
      }
      iVar8 = *(int *)(local_48 + 0xc);
      if (iVar8 != *(int *)(local_48 + 8)) {
        lVar3 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar8 * -8;
        pDVar7 = local_48 + (long)iVar8 * 8 + 8;
        do {
          pQVar10 = *(QArrayData **)pDVar7;
          if (*(int *)pQVar10 == 0) {
LAB_10046b710:
            QArrayData::deallocate(pQVar10,2,8);
          }
          else if (*(int *)pQVar10 != -1) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_31 = *(int *)pQVar10 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar10 = *(QArrayData **)pDVar7;
              goto LAB_10046b710;
            }
          }
          pDVar7 = pDVar7 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_10046b731:
  pDVar6 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar8 = *(int *)(local_40 + 0xc);
    if (iVar8 != *(int *)(local_40 + 8)) {
      lVar3 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar8 * -8;
      pDVar7 = local_40 + (long)iVar8 * 8 + 8;
      do {
        pQVar10 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar10 == 0) {
LAB_10046b7a0:
          QArrayData::deallocate(pQVar10,2,8);
        }
        else if (*(int *)pQVar10 != -1) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_31 = *(int *)pQVar10 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar10 = *(QArrayData **)pDVar7;
            goto LAB_10046b7a0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar6);
  }
  return;
}

