
undefined8 FUN_1002de560(long *param_1,long param_2)

{
  void **ppvVar1;
  void **ppvVar2;
  int *piVar3;
  uint *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  Data *pDVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  char cVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  
  lVar16 = *(long *)(param_1[1] + 0x40 + (ulong)*(byte *)(*(long *)(param_2 + 8) + 2) * 8);
  lVar13 = param_2 + 0x20;
  QMutex::lock();
  puVar18 = *(uint **)(param_2 + 0x10);
  ppvVar1 = (void **)(param_2 + 0x18);
  ppvVar2 = (void **)(param_2 + 0x10);
  uVar20 = puVar18[2];
  uVar21 = puVar18[3];
  iVar9 = (int)ppvVar2;
  iVar19 = (int)ppvVar1;
  uVar11 = uVar21;
  if (uVar21 != uVar20) {
    do {
      uVar11 = uVar20;
      if (*(int *)((long)*ppvVar1 + 0xc) == *(int *)((long)*ppvVar1 + 8)) break;
      if (1 < *puVar18) {
        pDVar10 = (Data *)QListData::detach(iVar9);
        pvVar6 = *ppvVar2;
        lVar12 = (long)*(int *)((long)pvVar6 + 8);
        if ((puVar18 + (long)(int)uVar20 * 2 != (uint *)((long)pvVar6 + lVar12 * 8)) &&
           (lVar14 = *(int *)((long)pvVar6 + 0xc) - lVar12,
           lVar14 != 0 && lVar12 <= *(int *)((long)pvVar6 + 0xc))) {
          _memcpy((void *)((long)pvVar6 + lVar12 * 8 + 0x10),puVar18 + (long)(int)uVar20 * 2 + 4,
                  lVar14 * 8);
        }
        if (*(int *)pDVar10 != -1) {
          if (*(int *)pDVar10 != 0) {
            LOCK();
            *(int *)pDVar10 = *(int *)pDVar10 + -1;
            UNLOCK();
            if (*(int *)pDVar10 != 0) goto LAB_1002de650;
          }
          QListData::dispose(pDVar10);
        }
      }
LAB_1002de650:
      puVar18 = *ppvVar2;
      uVar20 = puVar18[2];
      uVar5 = *(undefined8 *)(puVar18 + (long)(int)uVar20 * 2 + 4);
      if (1 < *puVar18) {
        pDVar10 = (Data *)QListData::detach(iVar9);
        pvVar6 = *ppvVar2;
        lVar12 = (long)*(int *)((long)pvVar6 + 8);
        puVar4 = (uint *)((long)pvVar6 + lVar12 * 8 + 0x10);
        if ((puVar18 + (long)(int)uVar20 * 2 + 4 != puVar4) &&
           (lVar14 = *(int *)((long)pvVar6 + 0xc) - lVar12,
           lVar14 != 0 && lVar12 <= *(int *)((long)pvVar6 + 0xc))) {
          _memcpy(puVar4,puVar18 + (long)(int)uVar20 * 2 + 4,lVar14 * 8);
        }
        if (*(int *)pDVar10 != -1) {
          if (*(int *)pDVar10 != 0) {
            LOCK();
            *(int *)pDVar10 = *(int *)pDVar10 + -1;
            UNLOCK();
            if (*(int *)pDVar10 != 0) goto LAB_1002de6d0;
          }
          QListData::dispose(pDVar10);
        }
      }
LAB_1002de6d0:
      puVar18 = *ppvVar2;
      uVar20 = puVar18[2];
      if (1 < *puVar18) {
        pDVar10 = (Data *)QListData::detach(iVar9);
        pvVar6 = *ppvVar2;
        lVar12 = (long)*(int *)((long)pvVar6 + 8);
        puVar4 = (uint *)((long)pvVar6 + lVar12 * 8 + 0x10);
        if ((puVar18 + (long)(int)uVar20 * 2 + 4 != puVar4) &&
           (lVar14 = *(int *)((long)pvVar6 + 0xc) - lVar12,
           lVar14 != 0 && lVar12 <= *(int *)((long)pvVar6 + 0xc))) {
          _memcpy(puVar4,puVar18 + (long)(int)uVar20 * 2 + 4,lVar14 * 8);
        }
        if (*(int *)pDVar10 != -1) {
          if (*(int *)pDVar10 != 0) {
            LOCK();
            *(int *)pDVar10 = *(int *)pDVar10 + -1;
            UNLOCK();
            if (*(int *)pDVar10 != 0) goto LAB_1002de744;
          }
          QListData::dispose(pDVar10);
        }
      }
LAB_1002de744:
      QListData::erase(ppvVar2);
      puVar18 = *ppvVar1;
      if (1 < *puVar18) {
        uVar20 = puVar18[2];
        pDVar10 = (Data *)QListData::detach(iVar19);
        pvVar6 = *ppvVar1;
        lVar12 = (long)*(int *)((long)pvVar6 + 8);
        if ((puVar18 + (long)(int)uVar20 * 2 != (uint *)((long)pvVar6 + lVar12 * 8)) &&
           (lVar14 = *(int *)((long)pvVar6 + 0xc) - lVar12,
           lVar14 != 0 && lVar12 <= *(int *)((long)pvVar6 + 0xc))) {
          _memcpy((void *)((long)pvVar6 + lVar12 * 8 + 0x10),puVar18 + (long)(int)uVar20 * 2 + 4,
                  lVar14 * 8);
        }
        if (*(int *)pDVar10 != -1) {
          if (*(int *)pDVar10 != 0) {
            LOCK();
            *(int *)pDVar10 = *(int *)pDVar10 + -1;
            UNLOCK();
            if (*(int *)pDVar10 != 0) goto LAB_1002de7d0;
          }
          QListData::dispose(pDVar10);
        }
      }
LAB_1002de7d0:
      iVar8 = FUN_1002df010(param_1,uVar5,
                            *(undefined8 *)
                             ((long)*ppvVar1 + (long)*(int *)((long)*ppvVar1 + 8) * 8 + 0x10));
      if (iVar8 != 0) {
        puVar18 = *ppvVar1;
        if (1 < *puVar18) {
          uVar20 = puVar18[2];
          pDVar10 = (Data *)QListData::detach(iVar19);
          pvVar6 = *ppvVar1;
          lVar12 = (long)*(int *)((long)pvVar6 + 8);
          if ((puVar18 + (long)(int)uVar20 * 2 != (uint *)((long)pvVar6 + lVar12 * 8)) &&
             (lVar14 = *(int *)((long)pvVar6 + 0xc) - lVar12,
             lVar14 != 0 && lVar12 <= *(int *)((long)pvVar6 + 0xc))) {
            _memcpy((void *)((long)pvVar6 + lVar12 * 8 + 0x10),puVar18 + (long)(int)uVar20 * 2 + 4,
                    lVar14 * 8);
          }
          if (*(int *)pDVar10 != -1) {
            if (*(int *)pDVar10 != 0) {
              LOCK();
              *(int *)pDVar10 = *(int *)pDVar10 + -1;
              UNLOCK();
              if (*(int *)pDVar10 != 0) goto LAB_1002de860;
            }
            QListData::dispose(pDVar10);
          }
        }
LAB_1002de860:
        puVar18 = *ppvVar1;
        uVar20 = puVar18[2];
        if (1 < *puVar18) {
          pDVar10 = (Data *)QListData::detach(iVar19);
          pvVar6 = *ppvVar1;
          lVar12 = (long)*(int *)((long)pvVar6 + 8);
          puVar4 = (uint *)((long)pvVar6 + lVar12 * 8 + 0x10);
          if ((puVar18 + (long)(int)uVar20 * 2 + 4 != puVar4) &&
             (lVar14 = *(int *)((long)pvVar6 + 0xc) - lVar12,
             lVar14 != 0 && lVar12 <= *(int *)((long)pvVar6 + 0xc))) {
            _memcpy(puVar4,puVar18 + (long)(int)uVar20 * 2 + 4,lVar14 * 8);
          }
          if (*(int *)pDVar10 != -1) {
            if (*(int *)pDVar10 != 0) {
              LOCK();
              *(int *)pDVar10 = *(int *)pDVar10 + -1;
              UNLOCK();
              if (*(int *)pDVar10 != 0) goto LAB_1002de8d4;
            }
            QListData::dispose(pDVar10);
          }
        }
LAB_1002de8d4:
        QListData::erase(ppvVar1);
      }
      puVar18 = *ppvVar2;
      uVar20 = puVar18[2];
      uVar21 = puVar18[3];
      uVar11 = uVar21;
    } while (uVar21 != uVar20);
  }
  uVar21 = uVar21 - uVar11;
  if (uVar21 < 0x81) {
    cVar17 = '\0';
  }
  else {
    if ((-1 < DAT_1011c568c) && (iVar8 = FUN_1008e38f0(&DAT_101116c18), iVar8 != 0)) {
      FUN_1008e3970("","USB",0,"[%s] io-packet queue full -> drop %d of %d items",lVar16 + 0xcf,
                    uVar21 - 0x80,uVar21,lVar13);
    }
    do {
      puVar18 = *ppvVar2;
      if (1 < *puVar18) {
        uVar20 = puVar18[2];
        pDVar10 = (Data *)QListData::detach(iVar9);
        pvVar6 = *ppvVar2;
        lVar12 = (long)*(int *)((long)pvVar6 + 8);
        if ((puVar18 + (long)(int)uVar20 * 2 != (uint *)((long)pvVar6 + lVar12 * 8)) &&
           (lVar14 = *(int *)((long)pvVar6 + 0xc) - lVar12,
           lVar14 != 0 && lVar12 <= *(int *)((long)pvVar6 + 0xc))) {
          _memcpy((void *)((long)pvVar6 + lVar12 * 8 + 0x10),puVar18 + (long)(int)uVar20 * 2 + 4,
                  lVar14 * 8);
        }
        if (*(int *)pDVar10 != -1) {
          if (*(int *)pDVar10 != 0) {
            LOCK();
            *(int *)pDVar10 = *(int *)pDVar10 + -1;
            UNLOCK();
            if (*(int *)pDVar10 != 0) goto LAB_1002de9f0;
          }
          QListData::dispose(pDVar10);
        }
      }
LAB_1002de9f0:
      puVar18 = *ppvVar2;
      uVar20 = puVar18[2];
      lVar12 = *(long *)(puVar18 + (long)(int)uVar20 * 2 + 4);
      *(undefined4 *)(lVar12 + 0x468) = 5;
      if (1 < *puVar18) {
        pDVar10 = (Data *)QListData::detach(iVar9);
        pvVar6 = *ppvVar2;
        lVar14 = (long)*(int *)((long)pvVar6 + 8);
        puVar4 = (uint *)((long)pvVar6 + lVar14 * 8 + 0x10);
        if ((puVar18 + (long)(int)uVar20 * 2 + 4 != puVar4) &&
           (lVar15 = *(int *)((long)pvVar6 + 0xc) - lVar14,
           lVar15 != 0 && lVar14 <= *(int *)((long)pvVar6 + 0xc))) {
          _memcpy(puVar4,puVar18 + (long)(int)uVar20 * 2 + 4,lVar15 * 8);
        }
        if (*(int *)pDVar10 != -1) {
          if (*(int *)pDVar10 != 0) {
            LOCK();
            *(int *)pDVar10 = *(int *)pDVar10 + -1;
            UNLOCK();
            if (*(int *)pDVar10 != 0) goto LAB_1002dea70;
          }
          QListData::dispose(pDVar10);
        }
      }
LAB_1002dea70:
      puVar18 = *ppvVar2;
      uVar20 = puVar18[2];
      if (1 < *puVar18) {
        pDVar10 = (Data *)QListData::detach(iVar9);
        pvVar6 = *ppvVar2;
        lVar14 = (long)*(int *)((long)pvVar6 + 8);
        puVar4 = (uint *)((long)pvVar6 + lVar14 * 8 + 0x10);
        if ((puVar18 + (long)(int)uVar20 * 2 + 4 != puVar4) &&
           (lVar15 = *(int *)((long)pvVar6 + 0xc) - lVar14,
           lVar15 != 0 && lVar14 <= *(int *)((long)pvVar6 + 0xc))) {
          _memcpy(puVar4,puVar18 + (long)(int)uVar20 * 2 + 4,lVar15 * 8);
        }
        if (*(int *)pDVar10 != -1) {
          if (*(int *)pDVar10 != 0) {
            LOCK();
            *(int *)pDVar10 = *(int *)pDVar10 + -1;
            UNLOCK();
            if (*(int *)pDVar10 != 0) goto LAB_1002deae4;
          }
          QListData::dispose(pDVar10);
        }
      }
LAB_1002deae4:
      QListData::erase(ppvVar2);
      if ((1 < DAT_1011c568c) && (*(int *)(lVar12 + 0x450) == 0x69)) {
        FUN_1002da980(2,lVar12);
      }
      uVar20 = *(uint *)(lVar12 + 0x470);
      *(undefined4 *)(lVar12 + 0x464) = 1;
      LOCK();
      piVar3 = (int *)(*(long *)(lVar16 + 0xc0) + 8);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      LOCK();
      *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + -1;
      UNLOCK();
      if ((uVar20 & 4) != 0) {
        FUN_1002c9070(lVar12);
      }
      uVar21 = uVar21 - 1;
      cVar17 = '\x01';
    } while (0x80 < uVar21);
  }
  uVar20 = *(int *)((long)*ppvVar1 + 0xc) - *(int *)((long)*ppvVar1 + 8);
  if (uVar20 < 0x81) {
    bVar22 = cVar17 == '\0';
    if ((bVar22) && ((char)param_1[7] != '\0')) {
      (**(code **)(*param_1 + 0x70))();
      cVar17 = '\0';
      goto LAB_1002dedc4;
    }
  }
  else {
    if ((-1 < DAT_1011c568c) && (iVar9 = FUN_1008e38f0(&DAT_101116c20), iVar9 != 0)) {
      FUN_1008e3970("","USB",0,"[%s] data queue full -> drop %d of %d items",lVar16 + 0xcf,
                    uVar20 - 0x80,uVar20,lVar13);
    }
    do {
      puVar18 = *ppvVar1;
      if (1 < *puVar18) {
        uVar21 = puVar18[2];
        pDVar10 = (Data *)QListData::detach(iVar19);
        pvVar6 = *ppvVar1;
        lVar13 = (long)*(int *)((long)pvVar6 + 8);
        if ((puVar18 + (long)(int)uVar21 * 2 != (uint *)((long)pvVar6 + lVar13 * 8)) &&
           (lVar16 = *(int *)((long)pvVar6 + 0xc) - lVar13,
           lVar16 != 0 && lVar13 <= *(int *)((long)pvVar6 + 0xc))) {
          _memcpy((void *)((long)pvVar6 + lVar13 * 8 + 0x10),puVar18 + (long)(int)uVar21 * 2 + 4,
                  lVar16 * 8);
        }
        if (*(int *)pDVar10 != -1) {
          if (*(int *)pDVar10 != 0) {
            LOCK();
            *(int *)pDVar10 = *(int *)pDVar10 + -1;
            UNLOCK();
            if (*(int *)pDVar10 != 0) goto LAB_1002dec60;
          }
          QListData::dispose(pDVar10);
        }
      }
LAB_1002dec60:
      puVar18 = *ppvVar1;
      uVar21 = puVar18[2];
      pvVar6 = *(void **)(puVar18 + (long)(int)uVar21 * 2 + 4);
      if (1 < *puVar18) {
        pDVar10 = (Data *)QListData::detach(iVar19);
        pvVar7 = *ppvVar1;
        lVar13 = (long)*(int *)((long)pvVar7 + 8);
        puVar4 = (uint *)((long)pvVar7 + lVar13 * 8 + 0x10);
        if ((puVar18 + (long)(int)uVar21 * 2 + 4 != puVar4) &&
           (lVar16 = *(int *)((long)pvVar7 + 0xc) - lVar13,
           lVar16 != 0 && lVar13 <= *(int *)((long)pvVar7 + 0xc))) {
          _memcpy(puVar4,puVar18 + (long)(int)uVar21 * 2 + 4,lVar16 * 8);
        }
        if (*(int *)pDVar10 != -1) {
          if (*(int *)pDVar10 != 0) {
            LOCK();
            *(int *)pDVar10 = *(int *)pDVar10 + -1;
            UNLOCK();
            if (*(int *)pDVar10 != 0) goto LAB_1002decd0;
          }
          QListData::dispose(pDVar10);
        }
      }
LAB_1002decd0:
      puVar18 = *ppvVar1;
      uVar21 = puVar18[2];
      if (1 < *puVar18) {
        pDVar10 = (Data *)QListData::detach(iVar19);
        pvVar7 = *ppvVar1;
        lVar13 = (long)*(int *)((long)pvVar7 + 8);
        puVar4 = (uint *)((long)pvVar7 + lVar13 * 8 + 0x10);
        if ((puVar18 + (long)(int)uVar21 * 2 + 4 != puVar4) &&
           (lVar16 = *(int *)((long)pvVar7 + 0xc) - lVar13,
           lVar16 != 0 && lVar13 <= *(int *)((long)pvVar7 + 0xc))) {
          _memcpy(puVar4,puVar18 + (long)(int)uVar21 * 2 + 4,lVar16 * 8);
        }
        if (*(int *)pDVar10 != -1) {
          if (*(int *)pDVar10 != 0) {
            LOCK();
            *(int *)pDVar10 = *(int *)pDVar10 + -1;
            UNLOCK();
            if (*(int *)pDVar10 != 0) goto LAB_1002ded47;
          }
          QListData::dispose(pDVar10);
        }
      }
LAB_1002ded47:
      QListData::erase(ppvVar1);
      *(undefined4 *)((long)pvVar6 + 4) = 2;
      if (*(code **)((long)pvVar6 + 0x18) == (code *)0x0) {
        operator_delete(pvVar6);
      }
      else {
        (**(code **)((long)pvVar6 + 0x18))();
      }
      uVar20 = uVar20 - 1;
    } while (0x80 < uVar20);
    cVar17 = '\x01';
    bVar22 = false;
  }
  if ((!bVar22) && ((char)param_1[7] == '\0')) {
    (**(code **)(*param_1 + 0x68))();
  }
LAB_1002dedc4:
  *(char *)(param_1 + 7) = cVar17;
  QMutex::unlock();
  return 1;
}

