
undefined8
FUN_1002f99b0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  int *piVar1;
  uint *puVar2;
  void *pvVar3;
  uint uVar4;
  Data *pDVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  int iVar10;
  void **ppvVar11;
  
  lVar6 = param_1 + 0x120;
  QMutex::lock();
  if (*(char *)(param_2 + 0xca) == -0x7e) {
    lVar7 = *(long *)(param_1 + 0xa8);
    if (lVar7 != 0) {
      if (*(int *)(param_1 + 0x5c) == 2) {
        if ((DAT_1011c568c < 0) ||
           (FUN_1008e3970("","USB",0,"CCID cannot cancel current transaction",param_5,param_6,lVar6)
           , *(long *)(param_1 + 0xa8) != 0)) goto LAB_1002f9cce;
      }
      else {
        *(undefined4 *)(lVar7 + 0x468) = 5;
        if ((1 < DAT_1011c568c) && (*(int *)(lVar7 + 0x450) == 0x69)) {
          FUN_1002da980(2,lVar7);
        }
        uVar4 = *(uint *)(lVar7 + 0x470);
        *(undefined4 *)(lVar7 + 0x464) = 1;
        LOCK();
        piVar1 = (int *)(*(long *)(param_2 + 0xc0) + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        LOCK();
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
        UNLOCK();
        if ((uVar4 & 4) != 0) {
          FUN_1002c9070(lVar7);
        }
        *(undefined8 *)(param_1 + 0xa8) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  else if (*(char *)(param_2 + 0xca) == -0x7d) {
    puVar9 = *(uint **)(param_1 + 0x40);
    uVar4 = puVar9[2];
    if (puVar9[3] != uVar4) {
      ppvVar11 = (void **)(param_1 + 0x40);
      do {
        iVar10 = (int)ppvVar11;
        if (1 < *puVar9) {
          pDVar5 = (Data *)QListData::detach(iVar10);
          pvVar3 = *ppvVar11;
          lVar6 = (long)*(int *)((long)pvVar3 + 8);
          if ((puVar9 + (long)(int)uVar4 * 2 != (uint *)((long)pvVar3 + lVar6 * 8)) &&
             (lVar7 = *(int *)((long)pvVar3 + 0xc) - lVar6,
             lVar7 != 0 && lVar6 <= *(int *)((long)pvVar3 + 0xc))) {
            _memcpy((void *)((long)pvVar3 + lVar6 * 8 + 0x10),puVar9 + (long)(int)uVar4 * 2 + 4,
                    lVar7 * 8);
          }
          if (*(int *)pDVar5 != -1) {
            if (*(int *)pDVar5 != 0) {
              LOCK();
              *(int *)pDVar5 = *(int *)pDVar5 + -1;
              UNLOCK();
              if (*(int *)pDVar5 != 0) goto LAB_1002f9ae0;
            }
            QListData::dispose(pDVar5);
          }
        }
LAB_1002f9ae0:
        puVar9 = *ppvVar11;
        uVar4 = puVar9[2];
        lVar6 = *(long *)(puVar9 + (long)(int)uVar4 * 2 + 4);
        *(undefined4 *)(lVar6 + 0x468) = 5;
        if (1 < *puVar9) {
          pDVar5 = (Data *)QListData::detach(iVar10);
          pvVar3 = *ppvVar11;
          lVar7 = (long)*(int *)((long)pvVar3 + 8);
          puVar2 = (uint *)((long)pvVar3 + lVar7 * 8 + 0x10);
          if ((puVar9 + (long)(int)uVar4 * 2 + 4 != puVar2) &&
             (lVar8 = *(int *)((long)pvVar3 + 0xc) - lVar7,
             lVar8 != 0 && lVar7 <= *(int *)((long)pvVar3 + 0xc))) {
            _memcpy(puVar2,puVar9 + (long)(int)uVar4 * 2 + 4,lVar8 * 8);
          }
          if (*(int *)pDVar5 != -1) {
            if (*(int *)pDVar5 != 0) {
              LOCK();
              *(int *)pDVar5 = *(int *)pDVar5 + -1;
              UNLOCK();
              if (*(int *)pDVar5 != 0) goto LAB_1002f9b60;
            }
            QListData::dispose(pDVar5);
          }
        }
LAB_1002f9b60:
        puVar9 = *ppvVar11;
        uVar4 = puVar9[2];
        if (1 < *puVar9) {
          pDVar5 = (Data *)QListData::detach(iVar10);
          pvVar3 = *ppvVar11;
          lVar7 = (long)*(int *)((long)pvVar3 + 8);
          puVar2 = (uint *)((long)pvVar3 + lVar7 * 8 + 0x10);
          if ((puVar9 + (long)(int)uVar4 * 2 + 4 != puVar2) &&
             (lVar8 = *(int *)((long)pvVar3 + 0xc) - lVar7,
             lVar8 != 0 && lVar7 <= *(int *)((long)pvVar3 + 0xc))) {
            _memcpy(puVar2,puVar9 + (long)(int)uVar4 * 2 + 4,lVar8 * 8);
          }
          if (*(int *)pDVar5 != -1) {
            if (*(int *)pDVar5 != 0) {
              LOCK();
              *(int *)pDVar5 = *(int *)pDVar5 + -1;
              UNLOCK();
              if (*(int *)pDVar5 != 0) goto LAB_1002f9bd9;
            }
            QListData::dispose(pDVar5);
          }
        }
LAB_1002f9bd9:
        QListData::erase(ppvVar11);
        if ((1 < DAT_1011c568c) && (*(int *)(lVar6 + 0x450) == 0x69)) {
          FUN_1002da980(2,lVar6);
        }
        uVar4 = *(uint *)(lVar6 + 0x470);
        *(undefined4 *)(lVar6 + 0x464) = 1;
        LOCK();
        piVar1 = (int *)(*(long *)(param_2 + 0xc0) + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        LOCK();
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
        UNLOCK();
        if ((uVar4 & 4) != 0) {
          FUN_1002c9070(lVar6);
        }
        puVar9 = *ppvVar11;
        uVar4 = puVar9[2];
      } while (puVar9[3] != uVar4);
    }
  }
LAB_1002f9cce:
  QMutex::unlock();
  return 1;
}

