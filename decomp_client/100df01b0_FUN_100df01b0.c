
int FUN_100df01b0(long *param_1,uint param_2,void *param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  Data *pDVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  QArrayData *local_88;
  Data *local_80;
  QArrayData *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  uint local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  char local_32;
  undefined1 local_31;
  
  bVar10 = param_2 == 0;
  local_48 = (QArrayData *)*param_1;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  local_50 = (QArrayData *)QString::fromAscii_helper(",",1);
  QString::split(&local_40,&local_48,&local_50,0,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100df024c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100df024c:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100df027c;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100df027c:
  if (*(int *)(*param_1 + 4) == 0) {
    iVar9 = 0;
    if (param_3 != (void *)0x0) {
      _memset(param_3,0xff,(ulong)param_4);
    }
    goto LAB_100df0708;
  }
  if (param_3 != (void *)0x0) {
    ___bzero(param_3,(ulong)param_4);
  }
  local_70 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_70);
      iVar9 = *(int *)(local_70 + 8);
      if (iVar9 != *(int *)(local_70 + 0xc)) {
        pDVar5 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
        pDVar6 = local_70 + (long)iVar9 * 8 + 0x10;
        lVar4 = (long)*(int *)(local_70 + 0xc) * 8 + (long)iVar9 * -8;
        do {
          piVar1 = *(int **)pDVar5;
          *(int **)pDVar6 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          pDVar6 = pDVar6 + 8;
          pDVar5 = pDVar5 + 8;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  local_58 = 1;
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    do {
      local_78 = *(QArrayData **)local_68;
      if (1 < *(int *)local_78 + 1U) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
      }
      iVar8 = 5;
      if (local_58 != 0) {
        local_88 = (QArrayData *)QString::fromAscii_helper("-",1);
        QString::split(&local_80,&local_78,&local_88,0,1);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100df0407;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_100df0407:
        uVar2 = *(uint *)(local_80 + 8);
        iVar8 = 1;
        if (*(uint *)(local_80 + 0xc) - uVar2 == 1) {
          uVar2 = QString::toInt((bool *)&local_78,(int)&local_32);
          uVar3 = uVar2;
joined_r0x000100df04cc:
          if (local_32 != '\0') {
            bVar11 = true;
            if (param_2 <= uVar2) {
              bVar11 = bVar10;
            }
            bVar10 = bVar11;
            if (param_3 != (void *)0x0) {
              if ((param_4 << 3 <= uVar2) || (param_4 << 3 <= uVar3)) goto LAB_100df0530;
              for (; uVar2 <= uVar3; uVar2 = uVar2 + 1) {
                *(byte *)((long)param_3 + (ulong)(uVar2 >> 3)) =
                     *(byte *)((long)param_3 + (ulong)(uVar2 >> 3)) | (byte)(1 << ((byte)uVar2 & 7))
                ;
              }
            }
            iVar8 = 0;
          }
        }
        else if (*(uint *)(local_80 + 0xc) - uVar2 == 2) {
          if (1 < *(uint *)local_80) {
            FUN_100036c40(&local_80,*(uint *)(local_80 + 4));
            uVar2 = *(uint *)(local_80 + 8);
          }
          uVar2 = QString::toInt((bool *)(local_80 + (long)(int)uVar2 * 8 + 0x10),(int)&local_32);
          if (local_32 != '\0') {
            if (1 < *(uint *)local_80) {
              FUN_100036c40(&local_80,*(uint *)(local_80 + 4));
            }
            uVar3 = QString::toInt((bool *)(local_80 + (long)(int)*(uint *)(local_80 + 8) * 8 + 0x18
                                           ),(int)&local_32);
            if (uVar2 <= uVar3) goto joined_r0x000100df04cc;
          }
        }
LAB_100df0530:
        pDVar5 = local_80;
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100df05df;
          }
          iVar9 = *(int *)(local_80 + 0xc);
          if (iVar9 != *(int *)(local_80 + 8)) {
            lVar4 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar9 * -8;
            pDVar6 = local_80 + (long)iVar9 * 8 + 8;
            do {
              pQVar7 = *(QArrayData **)pDVar6;
              if (*(int *)pQVar7 == 0) {
LAB_100df05b0:
                QArrayData::deallocate(pQVar7,2,8);
              }
              else if (*(int *)pQVar7 != -1) {
                LOCK();
                *(int *)pQVar7 = *(int *)pQVar7 + -1;
                local_31 = *(int *)pQVar7 != 0;
                UNLOCK();
                if (!(bool)local_31) {
                  pQVar7 = *(QArrayData **)pDVar6;
                  goto LAB_100df05b0;
                }
              }
              pDVar6 = pDVar6 + -8;
              lVar4 = lVar4 + 8;
            } while (lVar4 != 0);
          }
          QListData::dispose(pDVar5);
        }
LAB_100df05df:
        if (iVar8 == 0) {
          local_58 = 0;
          iVar8 = 5;
        }
      }
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100df0621;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100df0621:
      if (iVar8 != 5) goto LAB_100df0657;
      local_68 = local_68 + 8;
      uVar2 = local_58 ^ 1;
      bVar11 = local_58 != 1;
      local_58 = uVar2;
    } while ((bVar11) && (local_68 != local_60));
  }
  iVar8 = 2;
LAB_100df0657:
  pDVar5 = local_70;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100df06f1;
    }
    iVar9 = *(int *)(local_70 + 0xc);
    if (iVar9 != *(int *)(local_70 + 8)) {
      lVar4 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar9 * -8;
      pDVar6 = local_70 + (long)iVar9 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100df06d0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100df06d0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_100df06f1:
  iVar9 = -1;
  if (iVar8 == 2) {
    iVar9 = (int)(char)(bVar10 + -1);
  }
LAB_100df0708:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return iVar9;
      }
      local_31 = 0;
    }
    iVar8 = *(int *)(local_40 + 0xc);
    if (iVar8 != *(int *)(local_40 + 8)) {
      lVar4 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar8 * -8;
      pDVar5 = local_40 + (long)iVar8 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_100df0770:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_100df0770;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_40);
  }
  return iVar9;
}

