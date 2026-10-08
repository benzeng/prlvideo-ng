
undefined4 FUN_100d4fe90(char *param_1,char *param_2,ulong param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  QArrayData *pQVar4;
  size_t sVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *pQVar9;
  undefined4 local_94;
  QArrayData *local_88;
  QArrayData *local_80;
  QFileInfo local_78 [8];
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100dba330(&local_40,1);
  if (*(int *)local_40 == 0) {
    if ((int)*(uint *)(local_40 + 8) < 0) {
      pQVar4 = (QArrayData *)QArrayData::allocate(0x878,8,*(uint *)(local_40 + 8) & 0x7fffffff,0);
      local_48 = pQVar4;
      if (pQVar4 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      pQVar4[0xb] = (QArrayData)((byte)pQVar4[0xb] | 0x80);
      pQVar4 = local_48;
    }
    else {
      local_48 = (QArrayData *)QArrayData::allocate(0x878,8,(long)*(int *)(local_40 + 4),0);
      pQVar4 = local_48;
      if (local_48 == (QArrayData *)0x0) {
        qBadAlloc();
        pQVar4 = (QArrayData *)0x0;
      }
    }
    pQVar7 = local_40;
    if ((*(uint *)(pQVar4 + 8) & 0x7fffffff) != 0) {
      lVar8 = (long)*(int *)(local_40 + 4) * 0x878;
      if (lVar8 != 0) {
        pQVar6 = pQVar4 + *(long *)(pQVar4 + 0x10);
        pQVar9 = local_40 + *(long *)(local_40 + 0x10);
        do {
          _memcpy(pQVar6,pQVar9,0x878);
          lVar8 = lVar8 + -0x878;
          pQVar6 = pQVar6 + 0x878;
          pQVar9 = pQVar9 + 0x878;
        } while (lVar8 != 0);
      }
      *(int *)(pQVar4 + 4) = *(int *)(pQVar7 + 4);
    }
  }
  else {
    if (*(int *)local_40 != -1) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
    local_48 = local_40;
    pQVar4 = local_40;
  }
  if ((long)*(int *)(pQVar4 + 4) * 0x878 == 0) {
    iVar3 = 2;
    local_94 = 0;
  }
  else {
    pQVar7 = pQVar4 + *(long *)(pQVar4 + 0x10);
    pQVar4 = pQVar7 + (long)*(int *)(pQVar4 + 4) * 0x878;
    local_94 = SUB84(pQVar4,0);
    do {
      pQVar6 = pQVar7 + 0x58;
      bVar2 = false;
      while (!bVar2) {
        local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        iVar3 = FUN_100d50540(pQVar6,&local_50);
        bVar1 = false;
        if (iVar3 == 0) {
          local_68 = (QArrayData *)QString::fromAscii_helper("%1.%2/",6);
          QFileInfo::QFileInfo(local_78,&local_50);
          QFileInfo::fileName();
          QString::arg(&local_60,&local_68,&local_70,0,0x20);
          local_80 = (QArrayData *)QString::fromAscii_helper("download",8);
          QString::arg(&local_58,&local_60,&local_80,0,0x20);
          QString::remove(&local_50,&local_58,1);
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d500e2;
            }
            QArrayData::deallocate(local_58,2,8);
          }
LAB_100d500e2:
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d50112;
            }
            QArrayData::deallocate(local_80,2,8);
          }
LAB_100d50112:
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d50142;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_100d50142:
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d50172;
            }
            QArrayData::deallocate(local_70,2,8);
          }
LAB_100d50172:
          QFileInfo::~QFileInfo(local_78);
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d501aa;
            }
            QArrayData::deallocate(local_68,2,8);
          }
LAB_100d501aa:
          QString::toUtf8();
          iVar3 = _strcmp(param_1,(char *)(local_88 + *(long *)(local_88 + 0x10)));
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d50200;
            }
            QArrayData::deallocate(local_88,1,8);
          }
LAB_100d50200:
          if (iVar3 == 0) {
            sVar5 = _strlen((char *)pQVar6);
            if (sVar5 < param_3) {
              _strncpy(param_2,(char *)pQVar6,param_3);
              local_94 = 0;
            }
            else {
              FUN_100df99c0("DetectOS","DetectOS",0,
                            "[%s] target buffer too small (size %ld, requires %ld)",
                            "get_mount_point",param_3,sVar5);
              local_94 = 0xffffffff;
            }
            bVar1 = true;
          }
        }
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d502a0;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
LAB_100d502a0:
        iVar3 = 1;
        bVar2 = true;
        if (bVar1) goto LAB_100d502f0;
      }
      pQVar7 = pQVar7 + 0x878;
    } while (pQVar7 != pQVar4);
    iVar3 = 2;
  }
LAB_100d502f0:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d5031c;
    }
    QArrayData::deallocate(local_48,0x878,8);
  }
LAB_100d5031c:
  if (iVar3 == 2) {
    local_94 = 0xffffffff;
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return local_94;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,0x878,8);
  }
  return local_94;
}

