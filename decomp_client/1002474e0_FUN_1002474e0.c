
int FUN_1002474e0(int param_1,undefined8 param_2,bool *param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  uint local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  uint local_50;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  uint local_30;
  undefined1 local_21;
  
  if (param_1 < -0x7ffd8ff0) {
    if (param_1 + 0x7ffd9000U < 5) {
      return 1;
    }
    if (1 < param_1 + 0x7ffd8ff9U) {
      if (param_1 != -0x7ffd8ff7) {
        return 0;
      }
LAB_10024769f:
      return 0xd;
    }
LAB_10024769f:
    return 0x13;
  }
  if (param_1 < -0x7ffd8fdf) {
    switch(param_1) {
    case -0x7ffd8ff0:
    case -0x7ffd8fef:
    case -0x7ffd8fee:
    case -0x7ffd8fed:
      goto LAB_10024769f;
    case -0x7ffd8fec:
    case -0x7ffd8feb:
      goto LAB_10024769f;
    case -0x7ffd8fea:
      return 7;
    default:
      return 0;
    case -0x7ffd8fe7:
      return 0x13;
    }
  }
  if (param_1 < 0x6a75) {
    if (param_1 < -0x7ffd8eb0) {
      if (param_1 + 0x7ffd8fb0U < 3) {
        return 2;
      }
      if (param_1 != -0x7ffd8fdf) {
        if (param_1 == -0x7ffd8fd0) {
          return 0x13;
        }
        return 0;
      }
      return 0x13;
    }
    if (param_1 < -0x7ffd8e00) {
      if (param_1 + 0x7ffd8eb0U < 4) {
        return 4;
      }
      return 0;
    }
    if (-0x7ffd8d01 < param_1) {
      if (param_1 < -0x7ffd8c00) {
        if (param_1 + 0x7ffd8cb0U < 4) {
          return 0xb;
        }
        if (param_1 == -0x7ffd8d00) {
          return 10;
        }
        if (param_1 == -0x7ffd8cfe) {
          return 10;
        }
        return 0;
      }
      if (param_1 < -0x7ffd8bb0) {
        if (5 < param_1 + 0x7ffd8c00U) {
          return 0;
        }
        if (param_1 + 0x7ffd8c00U != 3) {
          return 0xc;
        }
        return 0;
      }
      if (param_1 < -0x7ffd8ba0) {
        if (param_1 + 0x7ffd8bb0U < 4) {
          return 0xd;
        }
        return 0;
      }
      if (param_1 < -0x7ffd8a00) {
        if (param_1 < -0x7ffd8b00) {
          if (param_1 + 0x7ffd8ba0U < 2) {
            return 0xd;
          }
          return 0;
        }
        if ((9 < param_1 + 0x7ffd8b00U) && (3 < param_1 + 0x7ffd8af0U)) {
          if (param_1 + 0x7ffd8ab0U < 2) {
            return 0x11;
          }
          return 0;
        }
        return 0x10;
      }
      if (param_1 < -0x7ffd8900) {
        if (param_1 + 0x7ffd8a00U < 2) {
          return 0xe;
        }
        if (param_1 + 0x7ffd89b0U < 2) {
          return 0xf;
        }
        return 0;
      }
      if (param_1 == -0x7ffd8900) {
        lVar5 = CVmConfiguration::getVmHardwareList();
        local_48 = *(Data **)(lVar5 + 0x160);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 == 0) {
            QListData::detach((int)&local_48);
            lVar7 = (long)*(int *)(local_48 + 8);
            lVar5 = *(long *)(lVar5 + 0x160);
            if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_48 + lVar7 * 8) &&
               (lVar8 = *(int *)(local_48 + 0xc) - lVar7,
               lVar8 != 0 && lVar7 <= *(int *)(local_48 + 0xc))) {
              _memcpy(local_48 + lVar7 * 8 + 0x10,
                      (void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),lVar8 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + 1;
            local_21 = *(int *)local_48 != 0;
            UNLOCK();
          }
        }
        local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
        local_38 = local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10;
        local_30 = 1;
        iVar2 = 0;
        if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
          iVar3 = 0;
          do {
            iVar2 = iVar3;
            if (local_30 != 0) {
              plVar1 = *(long **)local_40;
              iVar2 = CVmDevice::getEnabled();
              if ((iVar2 == 1) && (iVar2 = CVmDevice::getConnected(), iVar2 == 1)) {
                iVar4 = (**(code **)(*plVar1 + 0x68))(plVar1);
                iVar2 = 0xd;
                if (iVar4 != 6) {
                  iVar4 = (**(code **)(*plVar1 + 0x68))(plVar1);
                  iVar2 = 0xc;
                  if (iVar4 != 5) goto LAB_100247a3d;
                }
              }
              else {
LAB_100247a3d:
                local_30 = 0;
                iVar2 = iVar3;
              }
            }
            local_40 = local_40 + 8;
            uVar6 = local_30 ^ 1;
            bVar9 = local_30 != 1;
            local_30 = uVar6;
          } while ((bVar9) && (iVar3 = iVar2, local_40 != local_38));
        }
        if (*(int *)local_48 == -1) {
          return iVar2;
        }
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          UNLOCK();
          if (*(int *)local_48 != 0) {
            return iVar2;
          }
          local_21 = 0;
        }
        QListData::dispose(local_48);
        return iVar2;
      }
      if (param_1 != -0x7ffd88b0) {
        if (param_1 == -0x7ffd889f) {
          iVar2 = QVariant::toInt(param_3);
          return (uint)(iVar2 == 0) << 4;
        }
        return 0;
      }
      lVar5 = CVmConfiguration::getVmHardwareList();
      local_68 = *(Data **)(lVar5 + 0x1b0);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 == 0) {
          QListData::detach((int)&local_68);
          lVar7 = (long)*(int *)(local_68 + 8);
          lVar5 = *(long *)(lVar5 + 0x1b0);
          if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_68 + lVar7 * 8) &&
             (lVar8 = *(int *)(local_68 + 0xc) - lVar7,
             lVar8 != 0 && lVar7 <= *(int *)(local_68 + 0xc))) {
            _memcpy(local_68 + lVar7 * 8 + 0x10,
                    (void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),lVar8 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + 1;
          local_21 = *(int *)local_68 != 0;
          UNLOCK();
        }
      }
      local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
      local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
      local_50 = 1;
      iVar2 = 0;
      if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
        iVar2 = 0;
        do {
          if ((((local_50 == 0) || (iVar3 = CVmDevice::getEnabled(), iVar3 != 1)) ||
              (iVar3 = CVmDevice::getConnected(), iVar3 != 1)) ||
             (iVar3 = CVmClusteredDevice::getInterfaceType(), iVar3 != 1)) {
            local_60 = local_60 + 8;
            local_50 = 1;
          }
          else {
            local_60 = local_60 + 8;
            uVar6 = local_50 ^ 1;
            iVar2 = 0xd;
            bVar9 = local_50 == 1;
            local_50 = uVar6;
            if (bVar9) break;
          }
        } while (local_60 != local_58);
      }
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_21 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10024792b;
        }
        QListData::dispose(local_68);
      }
LAB_10024792b:
      if (iVar2 != 0) {
        return iVar2;
      }
      lVar5 = CVmConfiguration::getVmHardwareList();
      local_88 = *(Data **)(lVar5 + 0x1a8);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 == 0) {
          QListData::detach((int)&local_88);
          lVar7 = (long)*(int *)(local_88 + 8);
          lVar5 = *(long *)(lVar5 + 0x1a8);
          if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_88 + lVar7 * 8) &&
             (lVar8 = *(int *)(local_88 + 0xc) - lVar7,
             lVar8 != 0 && lVar7 <= *(int *)(local_88 + 0xc))) {
            _memcpy(local_88 + lVar7 * 8 + 0x10,
                    (void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),lVar8 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + 1;
          local_21 = *(int *)local_88 != 0;
          UNLOCK();
        }
      }
      local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
      local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
      local_70 = 1;
      iVar2 = 0;
      if (*(int *)(local_88 + 8) != *(int *)(local_88 + 0xc)) {
        iVar2 = 0;
        do {
          if (((local_70 == 0) || (iVar3 = CVmDevice::getEnabled(), iVar3 != 1)) ||
             ((iVar3 = CVmDevice::getConnected(), iVar3 != 1 ||
              (iVar3 = CVmClusteredDevice::getInterfaceType(), iVar3 != 1)))) {
            local_80 = local_80 + 8;
            local_70 = 1;
          }
          else {
            local_80 = local_80 + 8;
            uVar6 = local_70 ^ 1;
            iVar2 = 0xc;
            bVar9 = local_70 == 1;
            local_70 = uVar6;
            if (bVar9) break;
          }
        } while (local_80 != local_78);
      }
      if (*(int *)local_88 == -1) {
        return iVar2;
      }
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        UNLOCK();
        if (*(int *)local_88 != 0) {
          return iVar2;
        }
        local_21 = 0;
      }
      QListData::dispose(local_88);
      return iVar2;
    }
    if (((2 < param_1 + 0x7ffd8e00U) && (2 < param_1 + 0x7ffd8db0U)) && (param_1 != -0x7ffd8da0)) {
      return 0;
    }
  }
  else if (param_1 != 0x6a75) {
    if (param_1 == 0x6aa5) {
      return 10;
    }
    return 0;
  }
  return 0x17;
}

