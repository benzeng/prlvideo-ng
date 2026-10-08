
void FUN_10071fbc0(long param_1,QKeySequence *param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  uint *puVar5;
  char cVar6;
  Data *pDVar7;
  void *pvVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint *puVar14;
  bool bVar15;
  void *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  uint local_40;
  undefined1 local_31;
  
  plVar1 = (long *)(param_1 + 0x28);
  local_58 = *(Data **)(param_1 + 0x28);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar10 = (long)*(int *)(local_58 + 8);
      lVar12 = *plVar1;
      if (((Data *)(lVar12 + (long)*(int *)(lVar12 + 8) * 8) != local_58 + lVar10 * 8) &&
         (lVar11 = *(int *)(local_58 + 0xc) - lVar10,
         lVar11 != 0 && lVar10 <= *(int *)(local_58 + 0xc))) {
        _memcpy(local_58 + lVar10 * 8 + 0x10,
                (void *)(lVar12 + 0x10 + (long)*(int *)(lVar12 + 8) * 8),lVar11 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      if (local_40 != 0) {
        plVar4 = *(long **)local_50;
        if ((plVar4 == (long *)0x0) ||
           (cVar6 = QKeySequence::operator==((QKeySequence *)(plVar4 + 6),param_2), cVar6 == '\0'))
        {
          local_40 = 0;
        }
        else {
          puVar5 = (uint *)*plVar1;
          uVar9 = puVar5[3];
          uVar3 = puVar5[2];
          lVar12 = (long)(int)uVar3;
          if ((int)uVar3 < (int)uVar9) {
            puVar14 = puVar5 + lVar12 * 2 + 2;
            lVar10 = (long)(int)uVar9 * 8 + lVar12 * -8;
            do {
              if (lVar10 == 0) goto LAB_10071fd98;
              lVar10 = lVar10 + -8;
              puVar2 = puVar14 + 2;
              puVar14 = puVar14 + 2;
            } while (*(long **)puVar2 != plVar4);
            puVar2 = puVar5 + lVar12 * 2 + 4;
            iVar13 = (int)((ulong)((long)puVar14 - (long)puVar2) >> 3);
            if (((iVar13 != -1) && (-1 < iVar13)) && (iVar13 < (int)(uVar9 - uVar3))) {
              if (1 < *puVar5) {
                pDVar7 = (Data *)QListData::detach((int)plVar1);
                lVar12 = *plVar1;
                lVar10 = (long)*(int *)(lVar12 + 8);
                puVar5 = (uint *)(lVar12 + 0x10 + lVar10 * 8);
                if ((puVar2 != puVar5) &&
                   (lVar11 = *(int *)(lVar12 + 0xc) - lVar10,
                   lVar11 != 0 && lVar10 <= *(int *)(lVar12 + 0xc))) {
                  _memcpy(puVar5,puVar2,lVar11 * 8);
                }
                if (*(int *)pDVar7 != -1) {
                  if (*(int *)pDVar7 != 0) {
                    LOCK();
                    *(int *)pDVar7 = *(int *)pDVar7 + -1;
                    local_31 = *(int *)pDVar7 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10071fd8c;
                  }
                  QListData::dispose(pDVar7);
                }
              }
LAB_10071fd8c:
              QListData::remove((int)plVar1);
            }
          }
LAB_10071fd98:
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
      local_50 = local_50 + 8;
      uVar9 = local_40 ^ 1;
      bVar15 = local_40 != 1;
      local_40 = uVar9;
    } while ((bVar15) && (local_50 != local_48));
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10071fe03;
    }
    QListData::dispose(local_58);
  }
LAB_10071fe03:
  pvVar8 = operator_new(0x78);
  FUN_100723b70(pvVar8,0,param_1,param_5,param_2,param_3,param_4);
  local_60 = pvVar8;
  FUN_100721a40(plVar1,&local_60);
  return;
}

