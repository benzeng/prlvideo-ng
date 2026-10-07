
undefined1 FUN_1004a5f70(long param_1,long *param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long ****pppplVar4;
  char cVar5;
  long ***ppplVar6;
  long *plVar7;
  long *plVar8;
  uint *puVar9;
  undefined8 uVar10;
  Data *pDVar11;
  Data *pDVar12;
  long ****pppplVar13;
  long lVar14;
  QArrayData *pQVar15;
  undefined1 uVar16;
  long lVar17;
  long lVar18;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  undefined4 local_88;
  long local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_5c;
  Data *local_58;
  long ***local_50;
  long ***local_48;
  long local_40;
  char local_33;
  char local_32;
  undefined1 local_31;
  
  local_40 = 0;
  local_50 = (long ***)&local_50;
  local_48 = (long ***)&local_50;
  local_50 = operator_new(0x18);
  *(undefined4 *)(local_50 + 2) = 0x17;
  local_50[1] = (long **)&local_50;
  *local_50 = (long **)&local_50;
  local_40 = 1;
  plVar7 = *(long **)(param_1 + 0x90);
  local_48 = local_50;
  if (((plVar7 != (long *)0x0) &&
      ((**(code **)(*plVar7 + 0x38))(plVar7,&local_32,&local_33), local_32 != '\0')) &&
     (local_33 != '\0')) {
    ppplVar6 = operator_new(0x18);
    lVar18 = local_40;
    *(undefined4 *)(ppplVar6 + 2) = 0x15;
    ppplVar6[1] = (long **)&local_50;
    *ppplVar6 = (long **)local_50;
    local_50[1] = (long **)ppplVar6;
    local_40 = local_40 + 1;
    local_50 = ppplVar6;
    local_50 = operator_new(0x18);
    *(undefined4 *)(local_50 + 2) = 0x16;
    local_50[1] = (long **)&local_50;
    *local_50 = (long **)ppplVar6;
    ppplVar6[1] = (long **)local_50;
    local_40 = lVar18 + 2;
  }
  local_58 = (Data *)PTR_shared_null_100ba2188;
  local_5c = 0;
  plVar7 = operator_new(0x28);
  *(undefined4 *)(plVar7 + 1) = 1;
  *plVar7 = (long)&PTR_FUN_100bc2458;
  plVar7[2] = param_1;
  plVar7[3] = (long)&local_58;
  plVar7[4] = (long)&local_5c;
  local_78 = &local_70;
  local_68 = 0;
  local_70 = 0;
  if ((long ****)local_48 != &local_50) {
    pppplVar13 = (long ****)local_48;
    do {
      plVar8 = (long *)FUN_1004a8250(&local_78,pppplVar13 + 2);
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      plVar2 = (long *)*plVar8;
      *plVar8 = (long)plVar7;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar8 = plVar2 + 1;
        lVar18 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      pppplVar13 = (long ****)pppplVar13[1];
    } while (pppplVar13 != &local_50);
  }
  lVar18 = *param_2;
  lVar17 = *(long *)(lVar18 + 0x10) + lVar18;
  lVar18 = (long)*(int *)(lVar18 + 4);
  cVar5 = FUN_1004a99d0(lVar17,lVar18,&local_78);
  if (cVar5 == '\0') {
    uVar16 = 0;
  }
  else {
    lVar14 = (long)local_5c;
    QByteArray::resize((int)param_4);
    puVar9 = (uint *)*param_4;
    if ((1 < *puVar9) || (*(long *)(puVar9 + 4) != 0x18)) {
      QByteArray::reallocData(param_4,puVar9[1] + 1,puVar9[2] >> 0x1f);
      puVar9 = (uint *)*param_4;
    }
    local_80 = param_3 + *(long *)(puVar9 + 4) + (long)puVar9;
    cVar5 = FUN_1004a9a00(lVar17,lVar18,&local_50,&local_80,lVar14 + lVar18);
    if (cVar5 == '\0') {
      uVar16 = 0;
    }
    else {
      local_a0 = local_58;
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 == 0) {
          QListData::detach((int)&local_a0);
          iVar1 = *(int *)(local_a0 + 8);
          if (iVar1 != *(int *)(local_a0 + 0xc)) {
            pDVar11 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
            pDVar12 = local_a0 + (long)iVar1 * 8 + 0x10;
            lVar18 = (long)*(int *)(local_a0 + 0xc) * 8 + (long)iVar1 * -8;
            do {
              piVar3 = *(int **)pDVar11;
              *(int **)pDVar12 = piVar3;
              if (1 < *piVar3 + 1U) {
                LOCK();
                *piVar3 = *piVar3 + 1;
                local_31 = *piVar3 != 0;
                UNLOCK();
              }
              pDVar12 = pDVar12 + 8;
              pDVar11 = pDVar11 + 8;
              lVar18 = lVar18 + -8;
            } while (lVar18 != 0);
          }
        }
        else {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + 1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
        }
      }
      pDVar11 = local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10;
      local_90 = local_a0 + (long)*(int *)(local_a0 + 0xc) * 8 + 0x10;
      local_98 = pDVar11;
      if (*(int *)(local_a0 + 8) != *(int *)(local_a0 + 0xc)) {
        do {
          local_88 = 1;
          local_98 = pDVar11;
          uVar10 = QString::utf16();
          FUN_1004a9c30(0x18,uVar10,*(int *)(*(long *)pDVar11 + 4) * 2,&local_80);
          pDVar11 = local_98 + 8;
          local_98 = pDVar11;
        } while (pDVar11 != local_90);
      }
      pDVar11 = local_a0;
      local_88 = 1;
      uVar16 = 1;
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004a6485;
        }
        iVar1 = *(int *)(local_a0 + 0xc);
        if (iVar1 != *(int *)(local_a0 + 8)) {
          lVar18 = (long)*(int *)(local_a0 + 8) * 8 + (long)iVar1 * -8;
          pDVar12 = local_a0 + (long)iVar1 * 8 + 8;
          do {
            pQVar15 = *(QArrayData **)pDVar12;
            if (*(int *)pQVar15 == 0) {
LAB_1004a6460:
              QArrayData::deallocate(pQVar15,2,8);
            }
            else if (*(int *)pQVar15 != -1) {
              LOCK();
              *(int *)pQVar15 = *(int *)pQVar15 + -1;
              local_31 = *(int *)pQVar15 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar15 = *(QArrayData **)pDVar12;
                goto LAB_1004a6460;
              }
            }
            pDVar12 = pDVar12 + -8;
            lVar18 = lVar18 + 8;
          } while (lVar18 != 0);
        }
        QListData::dispose(pDVar11);
      }
    }
  }
LAB_1004a6485:
  FUN_1004a8350(&local_78,local_70);
  LOCK();
  plVar2 = plVar7 + 1;
  lVar18 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar18 == 1) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  pDVar11 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a6541;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar18 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar12 = local_58 + (long)iVar1 * 8 + 8;
      do {
        pQVar15 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar15 == 0) {
LAB_1004a6520:
          QArrayData::deallocate(pQVar15,2,8);
        }
        else if (*(int *)pQVar15 != -1) {
          LOCK();
          *(int *)pQVar15 = *(int *)pQVar15 + -1;
          local_31 = *(int *)pQVar15 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar15 = *(QArrayData **)pDVar12;
            goto LAB_1004a6520;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar18 = lVar18 + 8;
      } while (lVar18 != 0);
    }
    QListData::dispose(pDVar11);
  }
LAB_1004a6541:
  if (local_40 != 0) {
    ppplVar6 = (long ***)*local_48;
    ppplVar6[1] = local_50[1];
    *local_50[1] = (long *)ppplVar6;
    local_40 = 0;
    pppplVar13 = (long ****)local_48;
    while (pppplVar13 != &local_50) {
      pppplVar4 = (long ****)pppplVar13[1];
      operator_delete(pppplVar13);
      pppplVar13 = pppplVar4;
    }
  }
  return uVar16;
}

