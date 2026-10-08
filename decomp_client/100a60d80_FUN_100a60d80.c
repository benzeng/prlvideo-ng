
QByteArray * FUN_100a60d80(QByteArray *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  QArrayData *pQVar10;
  long *plVar11;
  long lVar12;
  undefined **ppuVar13;
  bool bVar14;
  undefined1 local_d0 [16];
  long local_c0;
  long local_b8;
  undefined1 local_b0 [16];
  long local_a0;
  long local_98;
  long local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  undefined1 local_78 [16];
  char *local_68;
  int local_60;
  undefined1 local_58 [16];
  char *local_48;
  int local_40;
  undefined1 local_31;
  
  lVar9 = FUN_100a60450(param_2);
  puVar4 = PTR_shared_null_1021e1288;
  local_80 = (QArrayData *)PTR_shared_null_1021e1288;
  if (lVar9 != 0) {
    cVar6 = FUN_100a602a0(lVar9,"macln",5,local_78);
    if (cVar6 == '\0') {
      local_88 = (QArrayData *)puVar4;
    }
    else {
      QByteArray::QByteArray((QByteArray *)&local_88,local_68,local_60);
    }
    QByteArray::operator=((QByteArray *)&local_80,(QByteArray *)&local_88);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a60e21;
      }
      QArrayData::deallocate(local_88,1,8);
    }
  }
LAB_100a60e21:
  FUN_100a61250(&local_90);
  pQVar10 = local_80;
  iVar8 = *(int *)(local_90 + 0xc);
  iVar7 = *(int *)(local_90 + 8);
  if (iVar8 == iVar7) {
    *(QArrayData **)param_1 = local_80;
    if (1 < *(int *)local_80 + 1U) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
  }
  else {
    plVar11 = (long *)(local_90 + 0x10 + (long)iVar7 * 8);
    lVar9 = local_90 + 0x10;
    iVar2 = *(int *)(local_80 + 4);
    lVar12 = (long)iVar8 * 8 + (long)iVar7 * -8;
    do {
      lVar3 = *plVar11;
      if ((*(int *)(lVar3 + 4) == iVar2) &&
         (iVar7 = _memcmp((void *)(lVar3 + *(long *)(lVar3 + 0x10)),
                          pQVar10 + *(long *)(pQVar10 + 0x10),(long)iVar2), iVar7 == 0)) {
        if (plVar11 != (long *)(lVar9 + (long)iVar8 * 8)) {
          *(QArrayData **)param_1 = pQVar10;
          if (1 < *(int *)pQVar10 + 1U) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + 1;
            local_31 = *(int *)pQVar10 != 0;
            UNLOCK();
          }
          goto LAB_100a61170;
        }
        break;
      }
      plVar11 = plVar11 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
    cVar6 = FUN_100a602a0(param_2,"winln",5,local_b0);
    if (cVar6 == '\0') {
      *(QArrayData **)param_1 = local_80;
      if (1 < *(int *)local_80 + 1U) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
      }
    }
    else if (local_98 == 8) {
      ppuVar13 = &PTR_s_winln_a0000401__windll_KbdPrlAR__102238ae0;
      puVar4 = PTR_s_winln_a0000401__windll_KbdPrlAR__102238ae0;
      while (puVar4 != (undefined *)0x0) {
        cVar6 = FUN_100a602a0(puVar4,"winln",5,local_d0);
        if (cVar6 != '\0') {
          if (local_b8 != 8) {
            *(QArrayData **)param_1 = local_80;
            if (1 < *(int *)local_80 + 1U) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + 1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
            }
            goto LAB_100a61170;
          }
          iVar8 = _strncasecmp((char *)(local_a0 + 4),(char *)(local_c0 + 4),4);
          if (iVar8 != 0) goto LAB_100a61100;
          cVar6 = FUN_100a602a0(*ppuVar13,"macln",5,local_58);
          if (cVar6 == '\0') {
            *(undefined **)param_1 = PTR_shared_null_1021e1288;
          }
          else {
            QByteArray::QByteArray(param_1,local_48,local_40);
          }
          lVar9 = local_90;
          iVar8 = *(int *)(local_90 + 8);
          plVar11 = (long *)(local_90 + 0x10 + (long)iVar8 * 8);
          iVar7 = *(int *)(local_90 + 0xc);
          if (iVar8 == iVar7) {
LAB_100a6107b:
            bVar14 = plVar11 == (long *)(lVar9 + 0x10 + (long)iVar7 * 8);
            bVar5 = !bVar14;
            if (bVar14) {
              pQVar10 = *(QArrayData **)param_1;
              goto LAB_100a610a0;
            }
          }
          else {
            pQVar10 = *(QArrayData **)param_1;
            iVar2 = *(int *)(pQVar10 + 4);
            lVar12 = (long)iVar7 * 8 + (long)iVar8 * -8;
            do {
              lVar3 = *plVar11;
              if ((*(int *)(lVar3 + 4) == iVar2) &&
                 (iVar8 = _memcmp((void *)(lVar3 + *(long *)(lVar3 + 0x10)),
                                  pQVar10 + *(long *)(pQVar10 + 0x10),(long)iVar2), iVar8 == 0))
              goto LAB_100a6107b;
              plVar11 = plVar11 + 1;
              bVar5 = false;
              lVar12 = lVar12 + -8;
            } while (lVar12 != 0);
LAB_100a610a0:
            if (*(int *)pQVar10 != -1) {
              if (*(int *)pQVar10 != 0) {
                LOCK();
                *(int *)pQVar10 = *(int *)pQVar10 + -1;
                local_31 = *(int *)pQVar10 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100a610ef;
                pQVar10 = *(QArrayData **)param_1;
              }
              QArrayData::deallocate(pQVar10,1,8);
            }
          }
LAB_100a610ef:
          if (bVar5) goto LAB_100a61170;
        }
LAB_100a61100:
        ppuVar1 = ppuVar13 + 1;
        ppuVar13 = ppuVar13 + 1;
        puVar4 = *ppuVar1;
      }
      *(undefined **)param_1 = PTR_shared_null_1021e1288;
    }
    else {
      *(QArrayData **)param_1 = local_80;
      if (1 < *(int *)local_80 + 1U) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
      }
    }
  }
LAB_100a61170:
  FUN_1000ee530(&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_80,1,8);
  }
  return param_1;
}

