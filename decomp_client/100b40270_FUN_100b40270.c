
ulong FUN_100b40270(void)

{
  uint uVar1;
  QString QVar2;
  undefined1 uVar3;
  bool bVar4;
  QArrayData *pQVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 unaff_R15B;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_70;
  long *local_68;
  undefined *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  uVar8 = FUN_100d7e9e0();
  if ((int)uVar8 != 0) {
    unaff_R15B = 0;
    goto LAB_100b405f4;
  }
  lVar9 = CParallelsNetworkConfig::getVirtualNetworks();
  if (lVar9 == 0) {
    unaff_R15B = 0;
    uVar8 = 0;
    goto LAB_100b405f4;
  }
  local_58 = *(Data **)(lVar9 + 0x98);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar10 = (long)*(int *)(local_58 + 8);
      lVar9 = *(long *)(lVar9 + 0x98);
      if (((Data *)(lVar9 + (long)*(int *)(lVar9 + 8) * 8) != local_58 + lVar10 * 8) &&
         (lVar11 = *(int *)(local_58 + 0xc) - lVar10,
         lVar11 != 0 && lVar10 <= *(int *)(local_58 + 0xc))) {
        _memcpy(local_58 + lVar10 * 8 + 0x10,(void *)(lVar9 + 0x10 + (long)*(int *)(lVar9 + 8) * 8),
                lVar11 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  if (*(int *)(local_58 + 8) == *(int *)(local_58 + 0xc)) {
    iVar7 = 2;
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      local_40 = 1;
      QVar2.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_50;
      iVar7 = CVirtualNetwork::getNetworkType();
      if ((iVar7 == 0) && (cVar6 = FUN_100b461b0(QVar2.field0_0x0), cVar6 != '\0')) {
        local_60 = PTR_shared_null_1021e15e8;
        iVar7 = FUN_100b3cb60(&local_60,1,0);
        if (iVar7 < 0) {
          FUN_100df99c0("","prl_net",0,"Failed to create list of host network adapters: 0x%08x",
                        iVar7);
LAB_100b4057f:
          bVar4 = true;
          unaff_R15B = uVar3;
        }
        else {
          local_68 = (long *)0x0;
          iVar7 = FUN_100b3d2a0(&local_60,&local_68);
          if ((iVar7 < 0) && (iVar7 = FUN_100b3d210(&local_60,&local_68), iVar7 < 0)) {
            FUN_100df99c0("","prl_net",0,"Failed to determine default adapter: 0x%08x",iVar7);
            goto LAB_100b4057f;
          }
          FUN_100b3f3a0(&local_70,*local_68 + 0x2a);
          pQVar5 = local_70;
          if (1 < *(int *)local_70 + 1U) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + 1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
          }
          CVirtualNetwork::setBoundCardMac(QVar2);
          if (*(int *)pQVar5 != -1) {
            if (*(int *)pQVar5 != 0) {
              LOCK();
              *(int *)pQVar5 = *(int *)pQVar5 + -1;
              local_31 = *(int *)pQVar5 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b4043e;
            }
            QArrayData::deallocate(pQVar5,2,8);
          }
LAB_100b4043e:
          CVirtualNetwork::setVLANTag((ushort)QVar2.field0_0x0);
          if (1 < DAT_10230ffd0) {
            CVirtualNetwork::getNetworkID();
            QString::toUtf8();
            FUN_100df99c0("","prl_net",2,
                          "Virtual Network \"%s\" assignment to default adapter fixed.",
                          local_80 + *(long *)(local_80 + 0x10));
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_31 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100b404d3;
              }
              QArrayData::deallocate(local_80,1,8);
            }
LAB_100b404d3:
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                local_31 = *(int *)local_88 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100b40503;
              }
              QArrayData::deallocate(local_88,2,8);
            }
          }
LAB_100b40503:
          uVar3 = 1;
          bVar4 = false;
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              bVar4 = false;
              if ((bool)local_31) goto LAB_100b4058c;
            }
            QArrayData::deallocate(local_70,2,8);
            bVar4 = false;
          }
        }
LAB_100b4058c:
        FUN_100af7aa0(&local_60);
        iVar7 = 1;
        if (bVar4) break;
      }
      local_50 = local_50 + 8;
      local_40 = 1;
      iVar7 = 2;
    } while (local_50 != local_48);
  }
  uVar1 = *(uint *)local_58;
  uVar8 = (ulong)uVar1;
  if (uVar1 != 0xffffffff) {
    if (uVar1 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) goto LAB_100b405e8;
      local_31 = 0;
    }
    uVar8 = QListData::dispose(local_58);
  }
LAB_100b405e8:
  if (iVar7 == 2) {
    unaff_R15B = uVar3;
  }
LAB_100b405f4:
  return CONCAT71((int7)(uVar8 >> 8),unaff_R15B) & 0xffffffffffffff01;
}

