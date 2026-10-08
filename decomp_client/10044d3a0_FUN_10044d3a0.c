
void FUN_10044d3a0(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  Data *pDVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  uint *puVar14;
  long local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  int local_38;
  undefined1 local_31;
  
  uVar5 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x28));
  iVar3 = FUN_10018a9d0(uVar5);
  if (iVar3 != 0x30000004) {
    uVar5 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x28));
    iVar3 = FUN_10018a9d0(uVar5);
    if (iVar3 != 0x30000005) {
LAB_10044d526:
      uVar5 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x28));
      cVar2 = FUN_10018d9f0(uVar5,&local_38);
      if ((cVar2 != '\0') && (local_38 == 1)) {
        plVar7 = (long *)(param_1 + 0x40);
        puVar14 = *(uint **)(param_1 + 0x40);
        if (1 < *puVar14) {
          uVar4 = puVar14[2];
          pDVar6 = (Data *)QListData::detach((int)plVar7);
          lVar11 = *plVar7;
          lVar10 = (long)*(int *)(lVar11 + 8);
          if ((puVar14 + (long)(int)uVar4 * 2 != (uint *)(lVar11 + lVar10 * 8)) &&
             (lVar12 = *(int *)(lVar11 + 0xc) - lVar10,
             lVar12 != 0 && lVar10 <= *(int *)(lVar11 + 0xc))) {
            _memcpy((void *)(lVar11 + 0x10 + lVar10 * 8),puVar14 + (long)(int)uVar4 * 2 + 4,
                    lVar12 * 8);
          }
          if (*(int *)pDVar6 != -1) {
            if (*(int *)pDVar6 != 0) {
              LOCK();
              *(int *)pDVar6 = *(int *)pDVar6 + -1;
              local_31 = *(int *)pDVar6 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10044d5c8;
            }
            QListData::dispose(pDVar6);
          }
        }
LAB_10044d5c8:
        puVar13 = (uint *)*plVar7;
        puVar14 = puVar13 + (long)(int)puVar13[2] * 2 + 4;
        do {
          if (1 < *puVar13) {
            uVar4 = puVar13[2];
            pDVar6 = (Data *)QListData::detach((int)plVar7);
            lVar11 = *plVar7;
            lVar10 = (long)*(int *)(lVar11 + 8);
            if ((puVar13 + (long)(int)uVar4 * 2 != (uint *)(lVar11 + lVar10 * 8)) &&
               (lVar12 = *(int *)(lVar11 + 0xc) - lVar10,
               lVar12 != 0 && lVar10 <= *(int *)(lVar11 + 0xc))) {
              _memcpy((void *)(lVar11 + 0x10 + lVar10 * 8),puVar13 + (long)(int)uVar4 * 2 + 4,
                      lVar12 * 8);
            }
            if (*(int *)pDVar6 != -1) {
              if (*(int *)pDVar6 != 0) {
                LOCK();
                *(int *)pDVar6 = *(int *)pDVar6 + -1;
                local_31 = *(int *)pDVar6 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10044d670;
              }
              QListData::dispose(pDVar6);
            }
          }
LAB_10044d670:
          if (puVar14 == (uint *)(*plVar7 + 0x10 + (long)*(int *)(*plVar7 + 0xc) * 8)) break;
          QWidget::setDisabled(SUB81(*(undefined8 *)puVar14,0));
          puVar14 = puVar14 + 2;
          puVar13 = (uint *)*plVar7;
        } while( true );
      }
      uVar5 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x28));
      uVar5 = FUN_10018c280(uVar5);
      uVar4 = FUN_100319ae0(uVar5);
      FUN_10044ed90(&local_60,param_1 + 0x48);
      local_58 = local_60;
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 == 0) {
          QListData::detach((int)&local_58);
          lVar11 = (long)*(int *)(local_58 + 8);
          if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar11 * 8) &&
             (lVar10 = *(int *)(local_58 + 0xc) - lVar11,
             lVar10 != 0 && lVar11 <= *(int *)(local_58 + 0xc))) {
            _memcpy(local_58 + lVar11 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                    lVar10 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + 1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
        }
      }
      local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
      local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
      local_40 = 1;
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 == 0) {
LAB_10044d75e:
          QListData::dispose(local_60);
        }
        else {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if (!(bool)local_31) goto LAB_10044d75e;
        }
        if (local_40 == 0) goto LAB_10044d80d;
      }
      if (local_50 != local_48) {
        do {
          lVar11 = *(long *)local_50;
          local_68 = lVar11;
          if (lVar11 != 0) {
            plVar7 = (long *)FUN_10044eec0(param_1 + 0x48,&local_68);
            puVar1 = (undefined8 *)*plVar7;
            if (*(uint *)(puVar1 + 4) != 0) {
              uVar9 = *(uint *)((long)puVar1 + 0x24) ^ uVar4;
              for (puVar8 = *(undefined8 **)
                             (puVar1[1] + ((ulong)uVar9 % (ulong)*(uint *)(puVar1 + 4)) * 8);
                  puVar8 != puVar1; puVar8 = (undefined8 *)*puVar8) {
                if ((*(uint *)(puVar8 + 1) == uVar9) && (uVar4 == *(uint *)((long)puVar8 + 0xc))) {
                  if (puVar8 != puVar1) {
                    QWidget::setDisabled(SUB81(lVar11,0));
                  }
                  break;
                }
              }
            }
          }
          local_50 = local_50 + 8;
          local_40 = 1;
        } while (local_50 != local_48);
      }
LAB_10044d80d:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          UNLOCK();
          if (*(int *)local_58 != 0) {
            return;
          }
          local_31 = 0;
        }
        QListData::dispose(local_58);
      }
      return;
    }
  }
  plVar7 = (long *)(param_1 + 0x38);
  puVar14 = *(uint **)(param_1 + 0x38);
  if (1 < *puVar14) {
    uVar4 = puVar14[2];
    pDVar6 = (Data *)QListData::detach((int)plVar7);
    lVar11 = *plVar7;
    lVar10 = (long)*(int *)(lVar11 + 8);
    if ((puVar14 + (long)(int)uVar4 * 2 != (uint *)(lVar11 + lVar10 * 8)) &&
       (lVar12 = *(int *)(lVar11 + 0xc) - lVar10, lVar12 != 0 && lVar10 <= *(int *)(lVar11 + 0xc)))
    {
      _memcpy((void *)(lVar11 + 0x10 + lVar10 * 8),puVar14 + (long)(int)uVar4 * 2 + 4,lVar12 * 8);
    }
    if (*(int *)pDVar6 != -1) {
      if (*(int *)pDVar6 != 0) {
        LOCK();
        *(int *)pDVar6 = *(int *)pDVar6 + -1;
        local_31 = *(int *)pDVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10044d464;
      }
      QListData::dispose(pDVar6);
    }
  }
LAB_10044d464:
  puVar13 = (uint *)*plVar7;
  puVar14 = puVar13 + (long)(int)puVar13[2] * 2 + 4;
  do {
    if (1 < *puVar13) {
      uVar4 = puVar13[2];
      pDVar6 = (Data *)QListData::detach((int)plVar7);
      lVar11 = *plVar7;
      lVar10 = (long)*(int *)(lVar11 + 8);
      if ((puVar13 + (long)(int)uVar4 * 2 != (uint *)(lVar11 + lVar10 * 8)) &&
         (lVar12 = *(int *)(lVar11 + 0xc) - lVar10, lVar12 != 0 && lVar10 <= *(int *)(lVar11 + 0xc))
         ) {
        _memcpy((void *)(lVar11 + 0x10 + lVar10 * 8),puVar13 + (long)(int)uVar4 * 2 + 4,lVar12 * 8);
      }
      if (*(int *)pDVar6 != -1) {
        if (*(int *)pDVar6 != 0) {
          LOCK();
          *(int *)pDVar6 = *(int *)pDVar6 + -1;
          local_31 = *(int *)pDVar6 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10044d510;
        }
        QListData::dispose(pDVar6);
      }
    }
LAB_10044d510:
    if (puVar14 == (uint *)(*plVar7 + 0x10 + (long)*(int *)(*plVar7 + 0xc) * 8)) goto LAB_10044d526;
    QWidget::setDisabled(SUB81(*(undefined8 *)puVar14,0));
    puVar14 = puVar14 + 2;
    puVar13 = (uint *)*plVar7;
  } while( true );
}

