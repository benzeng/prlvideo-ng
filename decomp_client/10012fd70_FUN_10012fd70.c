
undefined8 * FUN_10012fd70(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  short sVar1;
  QArrayData *pQVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;
  long lVar9;
  bool bVar10;
  QArrayData *local_60;
  int *local_58;
  long *local_50;
  long *local_48;
  uint local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  lVar5 = *param_3;
  uVar7 = (ulong)*(uint *)(lVar5 + 8);
  if ((int)*(uint *)(lVar5 + 8) < *(int *)(lVar5 + 0xc)) {
    lVar9 = 0;
    do {
      if (*(int *)(*(long *)(lVar5 + 0x10 + ((int)uVar7 + lVar9) * 8) + 0x18) == 0) {
        FUN_100131a30(&local_58,param_2);
        local_50 = (long *)(local_58 + (long)local_58[2] * 2 + 4);
        local_48 = (long *)(local_58 + (long)local_58[3] * 2 + 4);
        local_40 = 1;
        bVar8 = true;
        if (local_58[2] != local_58[3]) {
          bVar8 = true;
          do {
            pQVar2 = *(QArrayData **)(*local_50 + 8);
            if (1 < *(int *)pQVar2 + 1U) {
              LOCK();
              *(int *)pQVar2 = *(int *)pQVar2 + 1;
              local_31 = *(int *)pQVar2 != 0;
              UNLOCK();
            }
            if (local_40 != 0) {
              iVar4 = CVirtualNetwork::getNetworkType();
              if (iVar4 == 0) {
                lVar5 = *(long *)(*param_3 + 0x10 + (*(int *)(*param_3 + 8) + lVar9) * 8);
                CVirtualNetwork::getBoundCardMac();
                iVar4 = QString::compare(lVar5 + 0x10,&local_60,0);
                if (iVar4 == 0) {
                  sVar1 = *(short *)(*(long *)(*param_3 + 0x10 +
                                              (*(int *)(*param_3 + 8) + lVar9) * 8) + 0x1c);
                  sVar3 = CVirtualNetwork::getVLANTag();
                  bVar10 = sVar1 == sVar3;
                }
                else {
                  bVar10 = false;
                }
                if (*(int *)local_60 != -1) {
                  if (*(int *)local_60 != 0) {
                    LOCK();
                    *(int *)local_60 = *(int *)local_60 + -1;
                    local_31 = *(int *)local_60 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10012fedb;
                  }
                  QArrayData::deallocate(local_60,2,8);
                }
LAB_10012fedb:
                if (bVar10) {
                  bVar8 = false;
                  goto LAB_10012fef7;
                }
              }
              local_40 = 0;
            }
LAB_10012fef7:
            if (*(int *)pQVar2 != -1) {
              if (*(int *)pQVar2 != 0) {
                LOCK();
                *(int *)pQVar2 = *(int *)pQVar2 + -1;
                local_31 = *(int *)pQVar2 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10012ff24;
              }
              QArrayData::deallocate(pQVar2,2,8);
            }
LAB_10012ff24:
            local_50 = local_50 + 1;
            uVar6 = local_40 ^ 1;
            bVar10 = local_40 != 1;
            local_40 = uVar6;
          } while ((bVar10) && (local_50 != local_48));
        }
        if (*local_58 != -1) {
          if (*local_58 != 0) {
            LOCK();
            *local_58 = *local_58 + -1;
            local_31 = *local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10012ff74;
          }
          FUN_100131840(&local_58,local_58);
        }
LAB_10012ff74:
        if (bVar8) {
          FUN_1001315d0(param_1,*(undefined8 *)
                                 (*param_3 + 0x10 + (*(int *)(*param_3 + 8) + lVar9) * 8));
        }
      }
      lVar9 = lVar9 + 1;
      lVar5 = *param_3;
      uVar7 = (ulong)*(int *)(lVar5 + 8);
    } while (lVar9 < (long)((long)*(int *)(lVar5 + 0xc) - uVar7));
  }
  return param_1;
}

