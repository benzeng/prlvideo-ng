
undefined8 FUN_100d63580(long param_1,long *param_2,uint *param_3,uint param_4)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  undefined8 uVar9;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_4c [2];
  undefined1 local_4a [2];
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("\\",1);
  QString::split(&local_40,param_2,&local_48,0,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d635fa;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d635fa:
  if (*(long *)(param_1 + 8) != 0) {
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_100df99c0("","WinRegistry",0,"OA00004.10:");
    }
    else {
      puVar8 = (uint *)*puVar2;
      if ((1 < *puVar8) || (*(long *)(puVar8 + 4) != 0x18)) {
        QByteArray::reallocData(puVar2,puVar8[1] + 1,puVar8[2] >> 0x1f);
        puVar8 = (uint *)*puVar2;
      }
      lVar7 = *(long *)(puVar8 + 4);
      if ((long)puVar8 + lVar7 != 0) {
        if (*(int *)(*param_2 + 4) == 0) {
          uVar9 = 0x815800d;
          FUN_100df99c0("","WinRegistry",0,"OA00002.03:");
        }
        else {
          if (param_4 == 0xffffffff) {
            iVar3 = FUN_100d694e0(*(undefined8 *)(param_1 + 8));
            param_4 = iVar3 + 0x1004;
          }
          uVar6 = 0;
          if (*(int *)(local_40 + 8) < *(int *)(local_40 + 0xc)) {
            uVar6 = 0;
            do {
              lVar1 = (ulong)param_4 + lVar7;
              if (*(short *)((long)puVar8 + lVar1) != 0x6b6e) {
                QString::toLatin1();
                if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
                  QByteArray::reallocData
                            (&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f);
                }
                FUN_100df99c0("","WinRegistry",0,"OA00002.04:\t%d;\t%s",uVar6 & 0xffffffff,
                              local_58 + *(long *)(local_58 + 0x10));
                uVar9 = 0x8158009;
                if (*(int *)local_58 == -1) goto LAB_100d637ba;
                if (*(int *)local_58 != 0) {
                  LOCK();
                  *(int *)local_58 = *(int *)local_58 + -1;
                  local_31 = *(int *)local_58 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d637ba;
                }
                QArrayData::deallocate(local_58,1,8);
                goto LAB_100d637ba;
              }
              if (*(int *)((long)puVar8 + (ulong)param_4 + lVar7 + 0x14) == 0) {
                param_4 = 0xffffffff;
                break;
              }
              QString::toLatin1();
              if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
                QByteArray::reallocData
                          (&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f);
              }
              param_4 = FUN_100d63180(param_1,lVar1 + (long)puVar8,
                                      local_60 + *(long *)(local_60 + 0x10),local_4a,local_4c);
              if (*(int *)local_60 != -1) {
                if (*(int *)local_60 != 0) {
                  LOCK();
                  *(int *)local_60 = *(int *)local_60 + -1;
                  local_31 = *(int *)local_60 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d6374e;
                }
                QArrayData::deallocate(local_60,1,8);
              }
LAB_100d6374e:
              if (param_4 == 0xffffffff) {
                param_4 = 0xffffffff;
                break;
              }
              uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)*(int *)(local_40 + 0xc) - (long)*(int *)(local_40 + 8));
          }
          if ((param_4 == 0) || ((int)uVar6 != *(int *)(local_40 + 0xc) - *(int *)(local_40 + 8))) {
            *param_3 = 0xffffffff;
            uVar9 = 0x815800d;
          }
          else {
            *param_3 = param_4;
            uVar9 = 0x8000000;
          }
        }
        goto LAB_100d637ba;
      }
    }
  }
  uVar9 = 0x8158002;
  FUN_100df99c0("","WinRegistry",0,"OA00002.02:");
LAB_100d637ba:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar9;
      }
      local_31 = 0;
    }
    iVar3 = *(int *)(local_40 + 0xc);
    if (iVar3 != *(int *)(local_40 + 8)) {
      lVar7 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar3 * -8;
      pDVar4 = local_40 + (long)iVar3 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_100d63830:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_31 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_100d63830;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(local_40);
  }
  return uVar9;
}

