
void FUN_10047d9d0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  uint uVar7;
  Data *pDVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  char *pcVar13;
  long *plVar14;
  bool bVar15;
  QArrayData *local_40;
  
  puVar12 = *(uint **)(param_1 + 0x18);
  uVar7 = puVar12[2];
  if (puVar12[3] != uVar7) {
    plVar1 = (long *)(param_1 + 0x18);
    do {
      if (1 < *puVar12) {
        pDVar8 = (Data *)QListData::detach((int)plVar1);
        lVar4 = *plVar1;
        lVar10 = (long)*(int *)(lVar4 + 8);
        if ((puVar12 + (long)(int)uVar7 * 2 != (uint *)(lVar4 + lVar10 * 8)) &&
           (lVar11 = *(int *)(lVar4 + 0xc) - lVar10, lVar11 != 0 && lVar10 <= *(int *)(lVar4 + 0xc))
           ) {
          _memcpy((void *)(lVar4 + 0x10 + lVar10 * 8),puVar12 + (long)(int)uVar7 * 2 + 4,lVar11 * 8)
          ;
        }
        if (*(int *)pDVar8 != -1) {
          if (*(int *)pDVar8 != 0) {
            LOCK();
            *(int *)pDVar8 = *(int *)pDVar8 + -1;
            UNLOCK();
            if (*(int *)pDVar8 != 0) goto LAB_10047da80;
          }
          QListData::dispose(pDVar8);
        }
      }
LAB_10047da80:
      lVar4 = *plVar1;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8);
      plVar14 = *(long **)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8);
      if (*plVar14 == DAT_1011ccb98) {
LAB_10047db30:
        pcVar13 = "Null";
        if (*plVar14 != DAT_1011ccb98) {
          pcVar13 = "NULl";
        }
        FUN_1008e3970("TCHOST","ToolsCenterHost",0,"%s m_DspRequest in command list (m_id=%u)",
                      pcVar13,(int)plVar14[2]);
        uVar3 = *(undefined4 *)(param_1 + 0xc);
        QString::toUtf8();
        FUN_1008e3970("TCHOST","ToolsCenterHost",0,"CGuestSession m_iState=%u uuid=%s",uVar3,
                      local_40 + *(long *)(local_40 + 0x10));
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            UNLOCK();
            if (*(int *)local_40 != 0) goto LAB_10047dbe2;
          }
          QArrayData::deallocate(local_40,1,8);
        }
      }
      else {
        plVar9 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
        if (plVar9 == (long *)0x0) {
          bVar15 = *plVar14 == 0;
LAB_10047db05:
          plVar14 = (long *)*puVar2;
          if (bVar15) goto LAB_10047db30;
        }
        else {
          *(undefined4 *)(plVar9 + 1) = 1;
          plVar9[2] = 0;
          *plVar9 = (long)&PTR_FUN_100bef0d0;
          plVar5 = (long *)*plVar14;
          LOCK();
          plVar14 = plVar9 + 1;
          lVar4 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            bVar15 = plVar5 == plVar9;
            goto LAB_10047db05;
          }
          plVar14 = (long *)*puVar2;
          if (plVar5 == plVar9) goto LAB_10047db30;
        }
        FUN_100484e00(plVar14,0x80000275);
      }
LAB_10047dbe2:
      pvVar6 = (void *)*puVar2;
      if (pvVar6 != (void *)0x0) {
        FUN_10047e3d0(pvVar6);
        operator_delete(pvVar6);
      }
      FUN_100495e90(plVar1,puVar2);
      puVar12 = (uint *)*plVar1;
      uVar7 = puVar12[2];
    } while (puVar12[3] != uVar7);
  }
  return;
}

