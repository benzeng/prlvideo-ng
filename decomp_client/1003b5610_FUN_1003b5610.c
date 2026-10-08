
undefined1 FUN_1003b5610(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  Data *pDVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  Data *pDVar8;
  long *local_170;
  Data *local_168;
  Data *local_160;
  Data *local_158;
  undefined4 local_150;
  long *local_148;
  Data *local_140;
  Data *local_138;
  Data *local_130;
  undefined4 local_128;
  long *local_120;
  Data *local_118;
  Data *local_110;
  Data *local_108;
  undefined4 local_100;
  long *local_f8;
  Data *local_f0;
  Data *local_e8;
  Data *local_e0;
  undefined4 local_d8;
  long *local_d0;
  Data *local_c8;
  Data *local_c0;
  Data *local_b8;
  undefined4 local_b0;
  long *local_a8;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  undefined4 local_88;
  long *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  long *local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  lVar2 = CVmConfiguration::getVmHardwareList();
  switch(param_2) {
  case 3:
    if (*(int *)(*(long *)(lVar2 + 0x1a0) + 0xc) == *(int *)(*(long *)(lVar2 + 0x1a0) + 8)) {
      return 0;
    }
    plVar3 = (long *)FUN_1003bc4a0(lVar2 + 0x1a0,0);
    if ((long *)*plVar3 != (long *)0x0) {
      (**(code **)(*(long *)*plVar3 + 0x20))();
    }
    FUN_1003bc550(lVar2 + 0x1a0);
    return 1;
  default:
    goto switchD_1003b564c_caseD_4;
  case 5:
    local_50 = *(Data **)(lVar2 + 0x1a8);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 == 0) {
        QListData::detach((int)&local_50);
        lVar5 = (long)*(int *)(local_50 + 8);
        lVar7 = *(long *)(lVar2 + 0x1a8);
        if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_50 + lVar5 * 8) &&
           (lVar6 = *(int *)(local_50 + 0xc) - lVar5,
           lVar6 != 0 && lVar5 <= *(int *)(local_50 + 0xc))) {
          _memcpy(local_50 + lVar5 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8)
                  ,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + 1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
      }
    }
    lVar7 = (long)*(int *)(local_50 + 8);
    iVar1 = *(int *)(local_50 + 0xc);
    local_40 = local_50 + (long)iVar1 * 8 + 0x10;
    local_48 = local_50 + lVar7 * 8 + 0x10;
    if (*(int *)(local_50 + 8) != iVar1) {
      lVar5 = (long)iVar1 * 8 + lVar7 * -8;
      pDVar8 = local_50 + lVar7 * 8 + 0x18;
      do {
        pDVar4 = pDVar8;
        local_38 = 1;
        plVar3 = *(long **)(pDVar4 + -8);
        local_58 = plVar3;
        if ((plVar3 != (long *)0x0) && ((int)plVar3[0xd] == param_3)) {
          FUN_1003bc5e0((long *)(lVar2 + 0x1a8),&local_58);
          (**(code **)(*plVar3 + 0x20))(plVar3);
          if (*(int *)local_50 == -1) {
            return 1;
          }
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            UNLOCK();
            if (*(int *)local_50 != 0) {
              return 1;
            }
            local_29 = 0;
          }
          QListData::dispose(local_50);
          return 1;
        }
        lVar5 = lVar5 + -8;
        pDVar8 = pDVar4 + 8;
        local_48 = pDVar4;
      } while (lVar5 != 0);
    }
    local_38 = 1;
    if (*(int *)local_50 == -1) {
      return 0;
    }
    pDVar8 = local_50;
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    break;
  case 6:
    local_78 = *(Data **)(lVar2 + 0x1b0);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 == 0) {
        QListData::detach((int)&local_78);
        lVar5 = (long)*(int *)(local_78 + 8);
        lVar7 = *(long *)(lVar2 + 0x1b0);
        if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_78 + lVar5 * 8) &&
           (lVar6 = *(int *)(local_78 + 0xc) - lVar5,
           lVar6 != 0 && lVar5 <= *(int *)(local_78 + 0xc))) {
          _memcpy(local_78 + lVar5 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8)
                  ,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_29 = *(int *)local_78 != 0;
        UNLOCK();
      }
    }
    lVar7 = (long)*(int *)(local_78 + 8);
    iVar1 = *(int *)(local_78 + 0xc);
    local_68 = local_78 + (long)iVar1 * 8 + 0x10;
    local_70 = local_78 + lVar7 * 8 + 0x10;
    if (*(int *)(local_78 + 8) != iVar1) {
      lVar5 = (long)iVar1 * 8 + lVar7 * -8;
      pDVar8 = local_78 + lVar7 * 8 + 0x18;
      do {
        pDVar4 = pDVar8;
        local_60 = 1;
        plVar3 = *(long **)(pDVar4 + -8);
        local_80 = plVar3;
        if ((plVar3 != (long *)0x0) && ((int)plVar3[0xd] == param_3)) {
          FUN_1003bc730((long *)(lVar2 + 0x1b0),&local_80);
          (**(code **)(*plVar3 + 0x20))(plVar3);
          if (*(int *)local_78 == -1) {
            return 1;
          }
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            UNLOCK();
            if (*(int *)local_78 != 0) {
              return 1;
            }
            local_29 = 0;
          }
          QListData::dispose(local_78);
          return 1;
        }
        lVar5 = lVar5 + -8;
        pDVar8 = pDVar4 + 8;
        local_70 = pDVar4;
      } while (lVar5 != 0);
    }
    local_60 = 1;
    if (*(int *)local_78 == -1) {
      return 0;
    }
    pDVar8 = local_78;
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    break;
  case 8:
    local_f0 = *(Data **)(lVar2 + 0x1d0);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 == 0) {
        QListData::detach((int)&local_f0);
        lVar5 = (long)*(int *)(local_f0 + 8);
        lVar7 = *(long *)(lVar2 + 0x1d0);
        if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_f0 + lVar5 * 8) &&
           (lVar6 = *(int *)(local_f0 + 0xc) - lVar5,
           lVar6 != 0 && lVar5 <= *(int *)(local_f0 + 0xc))) {
          _memcpy(local_f0 + lVar5 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8)
                  ,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + 1;
        local_29 = *(int *)local_f0 != 0;
        UNLOCK();
      }
    }
    lVar7 = (long)*(int *)(local_f0 + 8);
    iVar1 = *(int *)(local_f0 + 0xc);
    local_e0 = local_f0 + (long)iVar1 * 8 + 0x10;
    local_e8 = local_f0 + lVar7 * 8 + 0x10;
    if (*(int *)(local_f0 + 8) != iVar1) {
      lVar5 = (long)iVar1 * 8 + lVar7 * -8;
      pDVar8 = local_f0 + lVar7 * 8 + 0x18;
      do {
        pDVar4 = pDVar8;
        local_d8 = 1;
        plVar3 = *(long **)(pDVar4 + -8);
        local_f8 = plVar3;
        if ((plVar3 != (long *)0x0) && ((int)plVar3[0xd] == param_3)) {
          FUN_1003bcb20((long *)(lVar2 + 0x1d0),&local_f8);
          (**(code **)(*plVar3 + 0x20))(plVar3);
          if (*(int *)local_f0 == -1) {
            return 1;
          }
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            UNLOCK();
            if (*(int *)local_f0 != 0) {
              return 1;
            }
            local_29 = 0;
          }
          QListData::dispose(local_f0);
          return 1;
        }
        lVar5 = lVar5 + -8;
        pDVar8 = pDVar4 + 8;
        local_e8 = pDVar4;
      } while (lVar5 != 0);
    }
    local_d8 = 1;
    if (*(int *)local_f0 == -1) {
      return 0;
    }
    pDVar8 = local_f0;
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      UNLOCK();
      if (*(int *)local_f0 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    break;
  case 10:
    local_a0 = *(Data **)(lVar2 + 0x1b8);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 == 0) {
        QListData::detach((int)&local_a0);
        lVar5 = (long)*(int *)(local_a0 + 8);
        lVar7 = *(long *)(lVar2 + 0x1b8);
        if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_a0 + lVar5 * 8) &&
           (lVar6 = *(int *)(local_a0 + 0xc) - lVar5,
           lVar6 != 0 && lVar5 <= *(int *)(local_a0 + 0xc))) {
          _memcpy(local_a0 + lVar5 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8)
                  ,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + 1;
        local_29 = *(int *)local_a0 != 0;
        UNLOCK();
      }
    }
    lVar7 = (long)*(int *)(local_a0 + 8);
    iVar1 = *(int *)(local_a0 + 0xc);
    local_90 = local_a0 + (long)iVar1 * 8 + 0x10;
    local_98 = local_a0 + lVar7 * 8 + 0x10;
    if (*(int *)(local_a0 + 8) != iVar1) {
      lVar5 = (long)iVar1 * 8 + lVar7 * -8;
      pDVar8 = local_a0 + lVar7 * 8 + 0x18;
      do {
        pDVar4 = pDVar8;
        local_88 = 1;
        plVar3 = *(long **)(pDVar4 + -8);
        local_a8 = plVar3;
        if ((plVar3 != (long *)0x0) && ((int)plVar3[0xd] == param_3)) {
          FUN_1003bc880((long *)(lVar2 + 0x1b8),&local_a8);
          (**(code **)(*plVar3 + 0x20))(plVar3);
          if (*(int *)local_a0 == -1) {
            return 1;
          }
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            UNLOCK();
            if (*(int *)local_a0 != 0) {
              return 1;
            }
            local_29 = 0;
          }
          QListData::dispose(local_a0);
          return 1;
        }
        lVar5 = lVar5 + -8;
        pDVar8 = pDVar4 + 8;
        local_98 = pDVar4;
      } while (lVar5 != 0);
    }
    local_88 = 1;
    if (*(int *)local_a0 == -1) {
      return 0;
    }
    pDVar8 = local_a0;
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      UNLOCK();
      if (*(int *)local_a0 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    break;
  case 0xb:
    local_c8 = *(Data **)(lVar2 + 0x1c8);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 == 0) {
        QListData::detach((int)&local_c8);
        lVar5 = (long)*(int *)(local_c8 + 8);
        lVar7 = *(long *)(lVar2 + 0x1c8);
        if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_c8 + lVar5 * 8) &&
           (lVar6 = *(int *)(local_c8 + 0xc) - lVar5,
           lVar6 != 0 && lVar5 <= *(int *)(local_c8 + 0xc))) {
          _memcpy(local_c8 + lVar5 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8)
                  ,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + 1;
        local_29 = *(int *)local_c8 != 0;
        UNLOCK();
      }
    }
    lVar7 = (long)*(int *)(local_c8 + 8);
    iVar1 = *(int *)(local_c8 + 0xc);
    local_b8 = local_c8 + (long)iVar1 * 8 + 0x10;
    local_c0 = local_c8 + lVar7 * 8 + 0x10;
    if (*(int *)(local_c8 + 8) != iVar1) {
      lVar5 = (long)iVar1 * 8 + lVar7 * -8;
      pDVar8 = local_c8 + lVar7 * 8 + 0x18;
      do {
        pDVar4 = pDVar8;
        local_b0 = 1;
        plVar3 = *(long **)(pDVar4 + -8);
        local_d0 = plVar3;
        if ((plVar3 != (long *)0x0) && ((int)plVar3[0xd] == param_3)) {
          FUN_1003bc9d0((long *)(lVar2 + 0x1c8),&local_d0);
          (**(code **)(*plVar3 + 0x20))(plVar3);
          if (*(int *)local_c8 == -1) {
            return 1;
          }
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            UNLOCK();
            if (*(int *)local_c8 != 0) {
              return 1;
            }
            local_29 = 0;
          }
          QListData::dispose(local_c8);
          return 1;
        }
        lVar5 = lVar5 + -8;
        pDVar8 = pDVar4 + 8;
        local_c0 = pDVar4;
      } while (lVar5 != 0);
    }
    local_b0 = 1;
    if (*(int *)local_c8 == -1) {
      return 0;
    }
    pDVar8 = local_c8;
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      UNLOCK();
      if (*(int *)local_c8 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    break;
  case 0xc:
    if (*(int *)(*(long *)(lVar2 + 0x1d8) + 0xc) == *(int *)(*(long *)(lVar2 + 0x1d8) + 8)) {
      return 0;
    }
    plVar3 = (long *)FUN_100190e70(lVar2 + 0x1d8,0);
    if ((long *)*plVar3 != (long *)0x0) {
      (**(code **)(*(long *)*plVar3 + 0x20))();
    }
    FUN_1003bcc70(lVar2 + 0x1d8);
    return 1;
  case 0xf:
    if (*(int *)(*(long *)(lVar2 + 0x1e0) + 0xc) == *(int *)(*(long *)(lVar2 + 0x1e0) + 8)) {
      return 0;
    }
    plVar3 = (long *)FUN_100190dc0(lVar2 + 0x1e0,0);
    if ((long *)*plVar3 != (long *)0x0) {
      (**(code **)(*(long *)*plVar3 + 0x20))();
    }
    FUN_1003bcd00(lVar2 + 0x1e0);
    return 1;
  case 0x11:
    local_140 = *(Data **)(lVar2 + 0x1f8);
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 == 0) {
        QListData::detach((int)&local_140);
        lVar5 = (long)*(int *)(local_140 + 8);
        lVar7 = *(long *)(lVar2 + 0x1f8);
        if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_140 + lVar5 * 8) &&
           (lVar6 = *(int *)(local_140 + 0xc) - lVar5,
           lVar6 != 0 && lVar5 <= *(int *)(local_140 + 0xc))) {
          _memcpy(local_140 + lVar5 * 8 + 0x10,
                  (void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + 1;
        local_29 = *(int *)local_140 != 0;
        UNLOCK();
      }
    }
    lVar7 = (long)*(int *)(local_140 + 8);
    iVar1 = *(int *)(local_140 + 0xc);
    local_130 = local_140 + (long)iVar1 * 8 + 0x10;
    local_138 = local_140 + lVar7 * 8 + 0x10;
    if (*(int *)(local_140 + 8) != iVar1) {
      lVar5 = (long)iVar1 * 8 + lVar7 * -8;
      pDVar8 = local_140 + lVar7 * 8 + 0x18;
      do {
        pDVar4 = pDVar8;
        local_128 = 1;
        plVar3 = *(long **)(pDVar4 + -8);
        local_148 = plVar3;
        if ((plVar3 != (long *)0x0) && ((int)plVar3[0xd] == param_3)) {
          FUN_1003bcee0((long *)(lVar2 + 0x1f8),&local_148);
          (**(code **)(*plVar3 + 0x20))(plVar3);
          if (*(int *)local_140 == -1) {
            return 1;
          }
          if (*(int *)local_140 != 0) {
            LOCK();
            *(int *)local_140 = *(int *)local_140 + -1;
            UNLOCK();
            if (*(int *)local_140 != 0) {
              return 1;
            }
            local_29 = 0;
          }
          QListData::dispose(local_140);
          return 1;
        }
        lVar5 = lVar5 + -8;
        pDVar8 = pDVar4 + 8;
        local_138 = pDVar4;
      } while (lVar5 != 0);
    }
    local_128 = 1;
    if (*(int *)local_140 == -1) {
      return 0;
    }
    pDVar8 = local_140;
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      UNLOCK();
      if (*(int *)local_140 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    break;
  case 0x12:
    local_168 = *(Data **)(lVar2 + 0x200);
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 == 0) {
        QListData::detach((int)&local_168);
        lVar5 = (long)*(int *)(local_168 + 8);
        lVar7 = *(long *)(lVar2 + 0x200);
        if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_168 + lVar5 * 8) &&
           (lVar6 = *(int *)(local_168 + 0xc) - lVar5,
           lVar6 != 0 && lVar5 <= *(int *)(local_168 + 0xc))) {
          _memcpy(local_168 + lVar5 * 8 + 0x10,
                  (void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + 1;
        local_29 = *(int *)local_168 != 0;
        UNLOCK();
      }
    }
    lVar7 = (long)*(int *)(local_168 + 8);
    iVar1 = *(int *)(local_168 + 0xc);
    local_158 = local_168 + (long)iVar1 * 8 + 0x10;
    local_160 = local_168 + lVar7 * 8 + 0x10;
    if (*(int *)(local_168 + 8) != iVar1) {
      lVar5 = (long)iVar1 * 8 + lVar7 * -8;
      pDVar8 = local_168 + lVar7 * 8 + 0x18;
      do {
        pDVar4 = pDVar8;
        local_150 = 1;
        plVar3 = *(long **)(pDVar4 + -8);
        local_170 = plVar3;
        if ((plVar3 != (long *)0x0) && ((int)plVar3[0xd] == param_3)) {
          FUN_1003bd030((long *)(lVar2 + 0x200),&local_170);
          (**(code **)(*plVar3 + 0x20))(plVar3);
          if (*(int *)local_168 == -1) {
            return 1;
          }
          if (*(int *)local_168 != 0) {
            LOCK();
            *(int *)local_168 = *(int *)local_168 + -1;
            UNLOCK();
            if (*(int *)local_168 != 0) {
              return 1;
            }
            local_29 = 0;
          }
          QListData::dispose(local_168);
          return 1;
        }
        lVar5 = lVar5 + -8;
        pDVar8 = pDVar4 + 8;
        local_160 = pDVar4;
      } while (lVar5 != 0);
    }
    local_150 = 1;
    if (*(int *)local_168 == -1) {
      return 0;
    }
    pDVar8 = local_168;
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      UNLOCK();
      if (*(int *)local_168 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    break;
  case 0x14:
    local_118 = *(Data **)(lVar2 + 0x1e8);
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 == 0) {
        QListData::detach((int)&local_118);
        lVar5 = (long)*(int *)(local_118 + 8);
        lVar7 = *(long *)(lVar2 + 0x1e8);
        if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_118 + lVar5 * 8) &&
           (lVar6 = *(int *)(local_118 + 0xc) - lVar5,
           lVar6 != 0 && lVar5 <= *(int *)(local_118 + 0xc))) {
          _memcpy(local_118 + lVar5 * 8 + 0x10,
                  (void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + 1;
        local_29 = *(int *)local_118 != 0;
        UNLOCK();
      }
    }
    lVar7 = (long)*(int *)(local_118 + 8);
    iVar1 = *(int *)(local_118 + 0xc);
    local_108 = local_118 + (long)iVar1 * 8 + 0x10;
    local_110 = local_118 + lVar7 * 8 + 0x10;
    if (*(int *)(local_118 + 8) != iVar1) {
      lVar5 = (long)iVar1 * 8 + lVar7 * -8;
      pDVar8 = local_118 + lVar7 * 8 + 0x18;
      do {
        pDVar4 = pDVar8;
        local_100 = 1;
        plVar3 = *(long **)(pDVar4 + -8);
        local_120 = plVar3;
        if ((plVar3 != (long *)0x0) && ((int)plVar3[0xd] == param_3)) {
          FUN_1003bcd90((long *)(lVar2 + 0x1e8),&local_120);
          (**(code **)(*plVar3 + 0x20))(plVar3);
          if (*(int *)local_118 == -1) {
            return 1;
          }
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            UNLOCK();
            if (*(int *)local_118 != 0) {
              return 1;
            }
            local_29 = 0;
          }
          QListData::dispose(local_118);
          return 1;
        }
        lVar5 = lVar5 + -8;
        pDVar8 = pDVar4 + 8;
        local_110 = pDVar4;
      } while (lVar5 != 0);
    }
    local_100 = 1;
    if (*(int *)local_118 == -1) {
      return 0;
    }
    pDVar8 = local_118;
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      UNLOCK();
      if (*(int *)local_118 != 0) {
        return 0;
      }
      local_29 = 0;
    }
  }
  QListData::dispose(pDVar8);
switchD_1003b564c_caseD_4:
  return 0;
}

