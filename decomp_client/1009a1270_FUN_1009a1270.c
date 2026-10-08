
QString * FUN_1009a1270(QString *param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  Data *pDVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  ulong uVar9;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_58 = (Data *)*param_2;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = *(int *)(local_58 + 8);
      if (iVar1 != *(int *)(local_58 + 0xc)) {
        puVar5 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        pDVar6 = local_58 + (long)iVar1 * 8 + 0x10;
        lVar3 = (long)*(int *)(local_58 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar5;
          *(int **)pDVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
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
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  pDVar6 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_50 = pDVar6;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    uVar9 = 0;
    do {
      local_40 = 1;
      local_50 = pDVar6;
      uVar4 = FUN_100db9d70(pDVar6);
      if ((uVar4 != 0xffffffffffffffff) && (uVar9 < uVar4)) {
        QString::operator=(param_1,(QString *)pDVar6);
        uVar9 = uVar4;
      }
      pDVar6 = local_50 + 8;
      local_50 = pDVar6;
    } while (pDVar6 != local_48);
  }
  pDVar6 = local_58;
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar3 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_58 + (long)iVar1 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_1009a13f0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_1009a13f0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar6);
  }
  return param_1;
}

