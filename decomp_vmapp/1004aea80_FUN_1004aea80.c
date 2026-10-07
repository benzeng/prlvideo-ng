
void FUN_1004aea80(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  long lVar5;
  Data *pDVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  int iVar11;
  
  QMutex::lock();
  bVar10 = true;
  lVar5 = FUN_1004b3f20(param_1 + 0xb8);
  if ((lVar5 == 0) || (lVar5 != param_2)) {
    lVar5 = FUN_1004b3f20(param_1 + 0x98);
    if ((lVar5 == 0) || (lVar5 != param_2)) {
      if ((*(long *)(param_1 + 0xd8) == 0) || (*(long *)(param_1 + 0xd8) != param_2)) {
        puVar4 = *(uint **)(param_1 + 0xe8);
        uVar2 = puVar4[2];
        if ((int)uVar2 < (int)puVar4[3]) {
          puVar1 = puVar4 + (long)(int)uVar2 * 2 + 4;
          lVar5 = 0;
          do {
            if (*(long *)(puVar1 + lVar5 * 2) == param_2) {
              if (-1 < (int)lVar5) {
                iVar11 = (int)(long *)(param_1 + 0xe8);
                if (1 < *puVar4) {
                  pDVar6 = (Data *)QListData::detach(iVar11);
                  lVar5 = *(long *)(param_1 + 0xe8);
                  lVar9 = (long)*(int *)(lVar5 + 8);
                  puVar4 = (uint *)(lVar5 + 0x10 + lVar9 * 8);
                  if ((puVar1 != puVar4) &&
                     (lVar8 = *(int *)(lVar5 + 0xc) - lVar9,
                     lVar8 != 0 && lVar9 <= *(int *)(lVar5 + 0xc))) {
                    _memcpy(puVar4,puVar1,lVar8 * 8);
                  }
                  if (*(int *)pDVar6 != -1) {
                    if (*(int *)pDVar6 != 0) {
                      LOCK();
                      *(int *)pDVar6 = *(int *)pDVar6 + -1;
                      UNLOCK();
                      if (*(int *)pDVar6 != 0) goto LAB_1004aecba;
                    }
                    QListData::dispose(pDVar6);
                  }
                }
LAB_1004aecba:
                QListData::remove(iVar11);
              }
              if (param_2 != 0) {
                lVar5 = FUN_1002a6010(param_2);
                uVar3 = *(undefined4 *)(lVar5 + 4);
                FUN_1004c07d0(param_1 + 0x10,param_2,0xf0000000);
                if ((*(uint *)(param_1 + 0x88) & 0xfffffffe) == 2) {
                  FUN_1004b6c40(*(undefined8 *)(param_1 + 0xf0),uVar3);
                  bVar10 = false;
                  QMutex::unlock();
                  uVar7 = FUN_100097250(*(undefined8 *)(param_1 + 0x78));
                  FUN_1002af2c0(uVar7,0);
                }
              }
              goto LAB_1004aec34;
            }
            lVar5 = lVar5 + 1;
          } while (lVar5 < (int)(puVar4[3] - uVar2));
        }
        FUN_1004b6cb0(*(undefined8 *)(param_1 + 0xf0),param_2);
      }
      else {
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                        "Canceling ServerStateRequest (0x%p) - service stopped",param_2);
        }
        FUN_1004ad400(param_1);
        FUN_1004c07d0(param_1 + 0x10,param_2,0xf0000000);
      }
    }
    else {
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                      "Rejecting ServiceWaitCommand request (0x%p) from CancelRequestLocked()",
                      param_2);
      }
      FUN_1004b3f30(param_1 + 0x98,0);
      FUN_1004c07d0(param_1 + 0x10,param_2,0xf0000000);
    }
  }
  else {
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                    "Rejecting AgentWaitCommand request (0x%p) from CancelRequestLocked()",param_2);
    }
    FUN_1004b3f30(param_1 + 0xb8,0);
    FUN_1004c07d0(param_1 + 0x10,param_2,0xf0000000);
  }
LAB_1004aec34:
  if (bVar10) {
    QMutex::unlock();
  }
  return;
}

