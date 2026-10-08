
void FUN_100557410(long param_1)

{
  QString *pQVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  Data *pDVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  undefined1 local_68 [16];
  long local_58;
  QString local_50;
  QString local_48;
  Data *local_40;
  undefined1 local_31;
  
  uVar8 = FUN_100152280();
  pQVar1 = (QString *)(param_1 + 0x58);
  lVar9 = FUN_1001548f0(uVar8,pQVar1);
  if (lVar9 != 0) {
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    plVar2 = (long *)(param_1 + 0x68);
    puVar11 = *(uint **)(param_1 + 0x68);
    uVar10 = (ulong)puVar11[2];
    lVar12 = 0;
    if ((int)puVar11[2] < (int)puVar11[3]) {
      do {
        cVar6 = operator==(*(QString **)(puVar11 + ((int)uVar10 + lVar12) * 2 + 4),pQVar1);
        puVar11 = (uint *)*plVar2;
        if (cVar6 != '\0') {
          if (1 < *puVar11) {
            FUN_1001c4bd0(plVar2,puVar11[1]);
            puVar11 = (uint *)*plVar2;
          }
          lVar4 = *(long *)(puVar11 + ((int)puVar11[2] + lVar12) * 2 + 4);
          uVar7 = FUN_10018f860(lVar9);
          FUN_100719ad0(&local_50,pQVar1,uVar7,1);
          QString::operator=((QString *)(lVar4 + 8),&local_50);
          if (*(int *)local_50.field0_0x0 != -1) {
            if (*(int *)local_50.field0_0x0 != 0) {
              LOCK();
              *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
              local_31 = *(int *)local_50.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100557520;
            }
            QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
          }
LAB_100557520:
          QString::operator=(&local_48,
                             (QString *)
                             (*(long *)(*plVar2 + 0x10 + (*(int *)(*plVar2 + 8) + lVar12) * 8) + 8))
          ;
          break;
        }
        lVar12 = lVar12 + 1;
        uVar10 = (ulong)(int)puVar11[2];
      } while (lVar12 < (long)((long)(int)puVar11[3] - uVar10));
    }
    puVar3 = (undefined8 *)(param_1 + 0x60);
    puVar11 = *(uint **)(param_1 + 0x60);
    uVar10 = (ulong)puVar11[2];
    lVar9 = 0;
    if ((int)puVar11[2] < (int)puVar11[3]) {
      do {
        cVar6 = operator==(*(QString **)(puVar11 + ((int)uVar10 + lVar9) * 2 + 4),&local_48);
        puVar11 = (uint *)*puVar3;
        if (cVar6 != '\0') {
          if (1 < *puVar11) {
            FUN_10055a380(puVar3,puVar11[1]);
            puVar11 = (uint *)*puVar3;
          }
          lVar9 = *(long *)(puVar11 + ((int)puVar11[2] + lVar9) * 2 + 4);
          FUN_100710060(local_68,&local_48);
          if (*(long *)(lVar9 + 0x10) != local_58) {
            FUN_1000ff290(&local_40,&local_58);
            pDVar5 = *(Data **)(lVar9 + 0x10);
            *(Data **)(lVar9 + 0x10) = local_40;
            local_40 = pDVar5;
            if (*(int *)pDVar5 != -1) {
              if (*(int *)pDVar5 != 0) {
                LOCK();
                *(int *)pDVar5 = *(int *)pDVar5 + -1;
                local_31 = *(int *)pDVar5 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10055762a;
              }
              FUN_1005596c0(&local_40,pDVar5 + (long)*(int *)(pDVar5 + 8) * 8 + 0x10,
                            pDVar5 + (long)*(int *)(pDVar5 + 0xc) * 8 + 0x10);
              QListData::dispose(pDVar5);
            }
          }
LAB_10055762a:
          FUN_1000fec30(local_68);
          break;
        }
        lVar9 = lVar9 + 1;
        uVar10 = (ulong)(int)puVar11[2];
      } while (lVar9 < (long)((long)(int)puVar11[3] - uVar10));
    }
    FUN_100554f80(param_1,puVar3,plVar2);
    FUN_10083d2c0(*(undefined8 *)(param_1 + 0x10));
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_48.field0_0x0 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
  return;
}

