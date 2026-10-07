
void FUN_1004a2320(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  QArrayData *pQVar9;
  undefined8 uVar10;
  byte *pbVar11;
  QArrayData *local_e8;
  undefined1 local_e0 [24];
  undefined8 local_c8;
  undefined1 local_c0 [24];
  long local_a8;
  undefined1 local_a0 [24];
  QArrayData *local_88;
  string local_80;
  undefined1 local_7f [15];
  undefined1 *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  uint *local_50;
  uint *local_48;
  uint *local_40;
  undefined1 local_31;
  
  if (3 < DAT_1011b55f8) {
    if ((*param_1 & 1) == 0) {
      pbVar11 = param_1 + 1;
    }
    else {
      pbVar11 = *(byte **)(param_1 + 0x10);
    }
    FUN_1008e3970("GETICONS","prl_iconextractor",4,"Extracting icon from %s",pbVar11);
  }
  local_48 = (uint *)PTR_shared_null_100ba2188;
  if ((*param_1 & 1) == 0) {
    param_1 = param_1 + 1;
LAB_1004a23a8:
    _strlen((char *)param_1);
    pbVar11 = param_1;
  }
  else {
    param_1 = *(byte **)(param_1 + 0x10);
    pbVar11 = (byte *)0x0;
    if (param_1 != (byte *)0x0) goto LAB_1004a23a8;
  }
  QString::fromUtf8_helper((char *)&local_60,(int)pbVar11);
  QString::normalized(&local_58,&local_60,1,0);
  local_68 = (QArrayData *)QString::fromAscii_helper("?",1);
  QString::split(&local_50,&local_58,&local_68,0,1);
  if (local_48 != local_50) {
    local_40 = local_50;
    if (*local_50 != 0xffffffff) {
      if (*local_50 == 0) {
        QListData::detach((int)&local_40);
        uVar1 = local_40[2];
        if (uVar1 != local_40[3]) {
          local_50 = local_50 + (long)(int)local_50[2] * 2 + 4;
          puVar8 = local_40 + (long)(int)uVar1 * 2 + 4;
          lVar6 = (long)(int)local_40[3] * 8 + (long)(int)uVar1 * -8;
          do {
            piVar2 = *(int **)local_50;
            *(int **)puVar8 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            puVar8 = puVar8 + 2;
            local_50 = local_50 + 2;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
        }
      }
      else {
        LOCK();
        *local_50 = *local_50 + 1;
        local_31 = *local_50 != 0;
        UNLOCK();
      }
    }
    puVar8 = local_40;
    local_40 = local_48;
    local_48 = puVar8;
    FUN_100013180(&local_40);
  }
  FUN_100013180(&local_50);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a24e1;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004a24e1:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a2511;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004a2511:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a2541;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004a2541:
  if ((int)(local_48[3] - local_48[2]) < 2) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("GETICONS","prl_iconextractor",1,"Malformed icon URL");
    }
    goto LAB_1004a2ab6;
  }
  if (1 < *local_48) {
    FUN_100022c80(&local_48,local_48[1]);
  }
  QString::toUtf8();
  pQVar9 = local_88 + *(long *)(local_88 + 0x10);
  _strlen((char *)pQVar9);
  std::string::__init((char *)&local_80,(ulong)pQVar9);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a25fa;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_1004a25fa:
  if (1 < *local_48) {
    FUN_100022c80(&local_48,local_48[1]);
  }
  lVar6 = *(long *)(local_48 + (long)(int)local_48[2] * 2 + 4);
  iVar5 = QString::compare_helper
                    (*(long *)(lVar6 + 0x10) + lVar6,*(undefined4 *)(lVar6 + 4),
                     PTR_s_file____10111c928,0xffffffff,1);
  if (iVar5 == 0) {
    cVar3 = FUN_1004a1230(&local_80,param_2,param_3,param_4,param_5);
    if (cVar3 == '\0') {
      uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
      if (((byte)local_80 & 1) == 0) {
        local_70 = local_7f;
      }
      lVar6 = _CFStringCreateWithCString(uVar10,local_70,0x8000100);
      lVar7 = _CFURLCreateWithFileSystemPath(uVar10,lVar6,0,0);
      FUN_1004a1d80(local_a0,lVar7,0);
      FUN_1004a2cd0(local_a0,param_2,param_3,param_4,param_5);
      FUN_1004a1e80(local_a0);
      if (lVar7 != 0) {
        _CFRelease(lVar7);
      }
      if (lVar6 != 0) {
        _CFRelease(lVar6);
      }
    }
  }
  else {
    if (1 < *local_48) {
      FUN_100022c80(&local_48,local_48[1]);
    }
    lVar6 = *(long *)(local_48 + (long)(int)local_48[2] * 2 + 4);
    iVar5 = QString::compare_helper
                      (*(long *)(lVar6 + 0x10) + lVar6,*(undefined4 *)(lVar6 + 4),
                       PTR_s_type____10111c938,0xffffffff,1);
    if (iVar5 == 0) {
      if (((byte)local_80 & 1) == 0) {
        local_70 = local_7f;
      }
      lVar6 = _CFStringCreateWithCString
                        (*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,local_70,0x8000100);
      local_a8 = 0;
      iVar5 = _LSGetApplicationForInfo(0,0,lVar6,0xffffffff,0,&local_a8);
      if (iVar5 == 0) {
        FUN_1004a1d80(local_c0,local_a8,lVar6);
        FUN_1004a2cd0(local_c0,param_2,param_3,param_4,param_5);
        FUN_1004a1e80(local_c0);
      }
      if (local_a8 != 0) {
        _CFRelease();
      }
      if (lVar6 != 0) {
        _CFRelease(lVar6);
      }
    }
    else {
      if (1 < *local_48) {
        FUN_100022c80(&local_48,local_48[1]);
      }
      lVar6 = *(long *)(local_48 + (long)(int)local_48[2] * 2 + 4);
      iVar5 = QString::compare_helper
                        (*(long *)(lVar6 + 0x10) + lVar6,*(undefined4 *)(lVar6 + 4),
                         PTR_s_sys____10111c940,0xffffffff,1);
      if (iVar5 == 0) {
        iVar5 = std::string::compare((char *)&local_80);
        uVar10 = 0x6465736b;
        if (iVar5 != 0) {
          iVar5 = std::string::compare((char *)&local_80);
          uVar10 = 0x666c6472;
          if (iVar5 != 0) {
            iVar5 = std::string::compare((char *)&local_80);
            uVar10 = 0x6f666c64;
            if (iVar5 != 0) {
              iVar5 = std::string::compare((char *)&local_80);
              uVar10 = 0x726f6f74;
              if ((iVar5 != 0) && (iVar5 = std::string::compare((char *)&local_80), iVar5 != 0)) {
                iVar5 = std::string::compare((char *)&local_80);
                uVar10 = 0x63646472;
                if (iVar5 != 0) {
                  iVar5 = std::string::compare((char *)&local_80);
                  uVar10 = 0x666c7079;
                  if (iVar5 != 0) {
                    iVar5 = std::string::compare((char *)&local_80);
                    uVar10 = 0x6864736b;
                    if ((iVar5 != 0) &&
                       (iVar5 = std::string::compare((char *)&local_80), iVar5 != 0)) {
                      iVar5 = std::string::compare((char *)&local_80);
                      uVar10 = 0x72616d64;
                      if (iVar5 != 0) {
                        iVar5 = std::string::compare((char *)&local_80);
                        uVar10 = 0x646f6375;
                        if (iVar5 != 0) {
                          iVar5 = std::string::compare((char *)&local_80);
                          uVar10 = 0x74727368;
                          if (iVar5 != 0) goto LAB_1004a2aad;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        sVar4 = _GetIconRef(0xffff8000,0x6d616373,uVar10,&local_c8);
        if (sVar4 == 0) {
          FUN_1004a1de0(local_e0,local_c8);
          FUN_1004a2cd0(local_e0,param_2,param_3,param_4,param_5);
          _ReleaseIconRef(local_c8);
          FUN_1004a1e80(local_e0);
        }
      }
      else {
        if (1 < *local_48) {
          FUN_100022c80(&local_48,local_48[1]);
        }
        QString::toUtf8();
        FUN_1008e3970("GETICONS","prl_iconextractor",0,"Unsupported URL schema %s",
                      local_e8 + *(long *)(local_e8 + 0x10));
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004a2aad;
          }
          QArrayData::deallocate(local_e8,1,8);
        }
      }
    }
  }
LAB_1004a2aad:
  std::string::~string(&local_80);
LAB_1004a2ab6:
  FUN_100013180(&local_48);
  return;
}

