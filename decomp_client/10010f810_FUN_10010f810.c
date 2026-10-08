
int FUN_10010f810(long *param_1,QFont *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  int extraout_EDX;
  Data *pDVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  int iVar9;
  bool bVar10;
  undefined8 local_78;
  undefined8 local_70;
  QArrayData *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  uint local_48;
  QFontMetrics local_40 [15];
  undefined1 local_31;
  
  QFontMetrics::QFontMetrics(local_40,param_2);
  local_60 = (Data *)*param_1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      iVar9 = *(int *)(local_60 + 8);
      if (iVar9 != *(int *)(local_60 + 0xc)) {
        puVar5 = (undefined8 *)(*param_1 + 0x10 + (long)*(int *)(*param_1 + 8) * 8);
        pDVar6 = local_60 + (long)iVar9 * 8 + 0x10;
        lVar3 = (long)*(int *)(local_60 + 0xc) * 8 + (long)iVar9 * -8;
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
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  iVar9 = 0;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    iVar9 = 0;
    do {
      local_68 = *(QArrayData **)local_58;
      if (1 < *(int *)local_68 + 1U) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
      if (local_48 != 0) {
        local_78 = 0;
        local_70 = 0xffffffffffffffff;
        iVar2 = QFontMetrics::boundingRect
                          ((QRect *)local_40,(int)&local_78,(QString *)0x100,(int)&local_68,
                           (int *)0x0);
        iVar2 = (extraout_EDX + 1) - iVar2;
        if (iVar2 <= iVar9) {
          iVar2 = iVar9;
        }
        iVar9 = iVar2;
        local_48 = 0;
      }
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10010f98d;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10010f98d:
      local_58 = local_58 + 8;
      uVar4 = local_48 ^ 1;
      bVar10 = local_48 != 1;
      local_48 = uVar4;
    } while ((bVar10) && (local_58 != local_50));
  }
  pDVar6 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10010fa41;
    }
    iVar2 = *(int *)(local_60 + 0xc);
    if (iVar2 != *(int *)(local_60 + 8)) {
      lVar3 = (long)*(int *)(local_60 + 8) * 8 + (long)iVar2 * -8;
      pDVar7 = local_60 + (long)iVar2 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_10010fa20:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_10010fa20;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_10010fa41:
  QFontMetrics::~QFontMetrics(local_40);
  return iVar9 + 10;
}

