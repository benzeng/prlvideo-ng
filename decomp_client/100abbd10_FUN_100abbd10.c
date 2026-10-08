
void FUN_100abbd10(long *param_1,int *param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  QArrayData *pQVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  int *piVar11;
  bool bVar12;
  QArrayData *local_68;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  puVar4 = PTR__objc_msgSend_1021e1c68;
  if (*param_1 == 0) {
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(PTR_QLResponder_10226aae0,PTR_s_alloc_102268b58);
    lVar7 = (*(code *)puVar4)(uVar6,PTR_s_initWithEventForwarder__10226a500,param_1[1]);
    (*(code *)puVar4)(*(undefined8 *)PTR__NSApp_1021e1070,PTR_s_setNextResponder__10226a4f8,lVar7);
    *param_1 = lVar7;
  }
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSMutableArray_10226a840,PTR_s_arrayWithCapacity__102269950,
                     (long)*(int *)(*param_3 + 0xc) - (long)*(int *)(*param_3 + 8));
  local_58 = (int *)*param_3;
  if (*local_58 != -1) {
    if (*local_58 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = local_58[2];
      if (iVar1 != local_58[3]) {
        puVar10 = (undefined8 *)(*param_3 + 0x10 + (long)*(int *)(*param_3 + 8) * 8);
        piVar11 = local_58 + (long)iVar1 * 2 + 4;
        lVar7 = (long)local_58[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar10;
          *(int **)piVar11 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar11 = piVar11 + 2;
          puVar10 = puVar10 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_58 = *local_58 + 1;
      local_31 = *local_58 != 0;
      UNLOCK();
    }
  }
  puVar4 = PTR_s_addObject__1022692e8;
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  if (local_58[2] != local_58[3]) {
    do {
      pQVar3 = *(QArrayData **)local_50;
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
      }
      puVar5 = PTR_PreviewItem_10226aad0;
      if (local_40 != 0) {
        QString::toUtf8();
        uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (puVar5,PTR_s_itemWithFilePath__10226a508,
                           local_68 + *(long *)(local_68 + 0x10));
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,puVar4,uVar8);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100abbef8;
          }
          QArrayData::deallocate(local_68,1,8);
        }
LAB_100abbef8:
        local_40 = 0;
      }
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100abbf2f;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_100abbf2f:
      local_50 = local_50 + 2;
      uVar9 = local_40 ^ 1;
      bVar12 = local_40 != 1;
      local_40 = uVar9;
    } while ((bVar12) && (local_50 != local_48));
  }
  FUN_100036370(&local_58);
  (*(code *)PTR__objc_msgSend_1021e1c68)(*param_1,PTR_s_setItemArray__10226a4b0,uVar6);
  if (param_2[2] == *param_2) {
    lVar7 = *param_1;
  }
  else {
    lVar7 = *param_1;
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(lVar7,PTR_s_setFocusRect__10226a4a8);
  return;
}

