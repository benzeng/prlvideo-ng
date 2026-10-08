
undefined8 FUN_100118820(undefined8 param_1,int param_2,long param_3)

{
  int iVar1;
  Data *pDVar2;
  long lVar3;
  Data *pDVar4;
  undefined4 local_194;
  Data *local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  Data *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  Data *local_168;
  undefined4 local_15c;
  Data *local_158;
  undefined4 local_14c;
  Data *local_148;
  undefined4 local_13c;
  Data *local_138;
  undefined4 local_12c;
  Data *local_128;
  undefined4 local_11c;
  Data *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  Data *local_108;
  undefined4 local_fc;
  Data *local_f8;
  undefined4 local_ec;
  Data *local_e8;
  undefined4 local_dc;
  Data *local_d8;
  undefined4 local_cc;
  Data *local_c8;
  undefined4 local_bc;
  Data *local_b8;
  undefined4 local_ac;
  Data *local_a8;
  undefined4 local_9c;
  Data *local_98;
  undefined4 local_8c;
  Data *local_88;
  undefined4 local_7c;
  Data *local_78;
  undefined4 local_6c;
  Data *local_68;
  undefined4 local_5c;
  Data *local_58;
  undefined4 local_4c;
  Data *local_48;
  undefined4 local_3c;
  Data *local_38;
  undefined1 local_29;
  
  if (param_2 < 0x94) {
    switch(param_2) {
    case 0x13:
      local_178 = (Data *)PTR_shared_null_1021e15e8;
      local_17c = 0x2d;
      FUN_10012b680(&local_178,&local_17c);
      local_180 = 0x2e;
      FUN_10012b680(&local_178,&local_180);
      local_184 = 0x2f;
      FUN_10012b680(&local_178,&local_184);
      local_188 = 0x30;
      FUN_10012b680(&local_178,&local_188);
      FUN_10012b980(param_1,&local_178);
      pDVar4 = local_178;
      if (*(int *)local_178 == -1) {
        return param_1;
      }
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        UNLOCK();
        if (*(int *)local_178 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_178 + 0xc);
      if (iVar1 != *(int *)(local_178 + 8)) {
        lVar3 = (long)*(int *)(local_178 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_178 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      break;
    default:
      goto switchD_10011885b_caseD_14;
    case 0x15:
      local_38 = (Data *)PTR_shared_null_1021e15e8;
      local_3c = 0x2c;
      FUN_10012b680(&local_38,&local_3c);
      FUN_10012b980(param_1,&local_38);
      pDVar4 = local_38;
      if (*(int *)local_38 == -1) {
        return param_1;
      }
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_38 + 0xc);
      if (iVar1 != *(int *)(local_38 + 8)) {
        lVar3 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_38 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      break;
    case 0x18:
      local_48 = (Data *)PTR_shared_null_1021e15e8;
      local_4c = 0x18;
      FUN_10012b680(&local_48,&local_4c);
      FUN_10012b980(param_1,&local_48);
      pDVar4 = local_48;
      if (*(int *)local_48 == -1) {
        return param_1;
      }
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_48 + 0xc);
      if (iVar1 != *(int *)(local_48 + 8)) {
        lVar3 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_48 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      break;
    case 0x1d:
      local_58 = (Data *)PTR_shared_null_1021e15e8;
      local_5c = 8;
      FUN_10012b680(&local_58,&local_5c);
      FUN_10012b980(param_1,&local_58);
      pDVar4 = local_58;
      if (*(int *)local_58 == -1) {
        return param_1;
      }
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        UNLOCK();
        if (*(int *)local_58 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_58 + 0xc);
      if (iVar1 != *(int *)(local_58 + 8)) {
        lVar3 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_58 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      break;
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
      local_68 = (Data *)PTR_shared_null_1021e15e8;
      local_6c = 7;
      FUN_10012b680(&local_68,&local_6c);
      FUN_10012b980(param_1,&local_68);
      pDVar4 = local_68;
      if (*(int *)local_68 == -1) {
        return param_1;
      }
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        UNLOCK();
        if (*(int *)local_68 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_68 + 0xc);
      if (iVar1 != *(int *)(local_68 + 8)) {
        lVar3 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_68 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      break;
    case 0x25:
      local_78 = (Data *)PTR_shared_null_1021e15e8;
      local_7c = 0x31;
      FUN_10012b680(&local_78,&local_7c);
      FUN_10012b980(param_1,&local_78);
      pDVar4 = local_78;
      if (*(int *)local_78 == -1) {
        return param_1;
      }
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        UNLOCK();
        if (*(int *)local_78 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_78 + 0xc);
      if (iVar1 != *(int *)(local_78 + 8)) {
        lVar3 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_78 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      break;
    case 0x2f:
      if ((param_3 == 0) || (iVar1 = FUN_10018a9d0(param_3), iVar1 != 0x30000009)) {
        local_e8 = (Data *)PTR_shared_null_1021e15e8;
        local_ec = 0;
        FUN_10012b680(&local_e8,&local_ec);
        FUN_10012b980(param_1,&local_e8);
        pDVar4 = local_e8;
        if (*(int *)local_e8 == -1) {
          return param_1;
        }
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          UNLOCK();
          if (*(int *)local_e8 != 0) {
            return param_1;
          }
          local_29 = 0;
        }
        iVar1 = *(int *)(local_e8 + 0xc);
        if (iVar1 != *(int *)(local_e8 + 8)) {
          lVar3 = (long)*(int *)(local_e8 + 8) * 8 + (long)iVar1 * -8;
          pDVar2 = local_e8 + (long)iVar1 * 8 + 8;
          do {
            if (*(void **)pDVar2 != (void *)0x0) {
              operator_delete(*(void **)pDVar2);
            }
            pDVar2 = pDVar2 + -8;
            lVar3 = lVar3 + 8;
          } while (lVar3 != 0);
        }
      }
      else {
        local_d8 = (Data *)PTR_shared_null_1021e15e8;
        local_dc = 5;
        FUN_10012b680(&local_d8,&local_dc);
        FUN_10012b980(param_1,&local_d8);
        pDVar4 = local_d8;
        if (*(int *)local_d8 == -1) {
          return param_1;
        }
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          UNLOCK();
          if (*(int *)local_d8 != 0) {
            return param_1;
          }
          local_29 = 0;
        }
        iVar1 = *(int *)(local_d8 + 0xc);
        if (iVar1 != *(int *)(local_d8 + 8)) {
          lVar3 = (long)*(int *)(local_d8 + 8) * 8 + (long)iVar1 * -8;
          pDVar2 = local_d8 + (long)iVar1 * 8 + 8;
          do {
            if (*(void **)pDVar2 != (void *)0x0) {
              operator_delete(*(void **)pDVar2);
            }
            pDVar2 = pDVar2 + -8;
            lVar3 = lVar3 + 8;
          } while (lVar3 != 0);
        }
      }
      break;
    case 0x30:
      local_148 = (Data *)PTR_shared_null_1021e15e8;
      local_14c = 4;
      FUN_10012b680(&local_148,&local_14c);
      FUN_10012b980(param_1,&local_148);
      pDVar4 = local_148;
      if (*(int *)local_148 == -1) {
        return param_1;
      }
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        UNLOCK();
        if (*(int *)local_148 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_148 + 0xc);
      if (iVar1 != *(int *)(local_148 + 8)) {
        lVar3 = (long)*(int *)(local_148 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_148 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      break;
    case 0x32:
      local_f8 = (Data *)PTR_shared_null_1021e15e8;
      local_fc = 0x26;
      FUN_10012b680(&local_f8,&local_fc);
      FUN_10012b980(param_1,&local_f8);
      pDVar4 = local_f8;
      if (*(int *)local_f8 == -1) {
        return param_1;
      }
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        UNLOCK();
        if (*(int *)local_f8 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_f8 + 0xc);
      if (iVar1 != *(int *)(local_f8 + 8)) {
        lVar3 = (long)*(int *)(local_f8 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_f8 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      break;
    case 0x33:
      local_108 = (Data *)PTR_shared_null_1021e15e8;
      local_10c = 0;
      FUN_10012b680(&local_108,&local_10c);
      local_110 = 4;
      FUN_10012b680(&local_108,&local_110);
      FUN_10012b980(param_1,&local_108);
      pDVar4 = local_108;
      if (*(int *)local_108 == -1) {
        return param_1;
      }
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        UNLOCK();
        if (*(int *)local_108 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_108 + 0xc);
      if (iVar1 != *(int *)(local_108 + 8)) {
        lVar3 = (long)*(int *)(local_108 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_108 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      break;
    case 0x34:
      local_128 = (Data *)PTR_shared_null_1021e15e8;
      local_12c = 2;
      FUN_10012b680(&local_128,&local_12c);
      FUN_10012b980(param_1,&local_128);
      pDVar4 = local_128;
      if (*(int *)local_128 == -1) {
        return param_1;
      }
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        UNLOCK();
        if (*(int *)local_128 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_128 + 0xc);
      if (iVar1 != *(int *)(local_128 + 8)) {
        lVar3 = (long)*(int *)(local_128 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_128 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      break;
    case 0x35:
      local_118 = (Data *)PTR_shared_null_1021e15e8;
      local_11c = 1;
      FUN_10012b680(&local_118,&local_11c);
      FUN_10012b980(param_1,&local_118);
      pDVar4 = local_118;
      if (*(int *)local_118 == -1) {
        return param_1;
      }
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        UNLOCK();
        if (*(int *)local_118 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_118 + 0xc);
      if (iVar1 != *(int *)(local_118 + 8)) {
        lVar3 = (long)*(int *)(local_118 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_118 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      break;
    case 0x36:
      local_138 = (Data *)PTR_shared_null_1021e15e8;
      local_13c = 3;
      FUN_10012b680(&local_138,&local_13c);
      FUN_10012b980(param_1,&local_138);
      pDVar4 = local_138;
      if (*(int *)local_138 == -1) {
        return param_1;
      }
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        UNLOCK();
        if (*(int *)local_138 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_138 + 0xc);
      if (iVar1 != *(int *)(local_138 + 8)) {
        lVar3 = (long)*(int *)(local_138 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_138 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      break;
    case 0x37:
      local_88 = (Data *)PTR_shared_null_1021e15e8;
      local_8c = 0x21;
      FUN_10012b680(&local_88,&local_8c);
      FUN_10012b980(param_1,&local_88);
      pDVar4 = local_88;
      if (*(int *)local_88 == -1) {
        return param_1;
      }
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        UNLOCK();
        if (*(int *)local_88 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_88 + 0xc);
      if (iVar1 != *(int *)(local_88 + 8)) {
        lVar3 = (long)*(int *)(local_88 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_88 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      break;
    case 0x38:
      local_98 = (Data *)PTR_shared_null_1021e15e8;
      local_9c = 0x22;
      FUN_10012b680(&local_98,&local_9c);
      FUN_10012b980(param_1,&local_98);
      pDVar4 = local_98;
      if (*(int *)local_98 == -1) {
        return param_1;
      }
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        UNLOCK();
        if (*(int *)local_98 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_98 + 0xc);
      if (iVar1 != *(int *)(local_98 + 8)) {
        lVar3 = (long)*(int *)(local_98 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_98 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      break;
    case 0x39:
      local_a8 = (Data *)PTR_shared_null_1021e15e8;
      local_ac = 0x23;
      FUN_10012b680(&local_a8,&local_ac);
      FUN_10012b980(param_1,&local_a8);
      pDVar4 = local_a8;
      if (*(int *)local_a8 == -1) {
        return param_1;
      }
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        UNLOCK();
        if (*(int *)local_a8 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_a8 + 0xc);
      if (iVar1 != *(int *)(local_a8 + 8)) {
        lVar3 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_a8 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      break;
    case 0x3b:
      local_b8 = (Data *)PTR_shared_null_1021e15e8;
      local_bc = 0x14;
      FUN_10012b680(&local_b8,&local_bc);
      FUN_10012b980(param_1,&local_b8);
      pDVar4 = local_b8;
      if (*(int *)local_b8 == -1) {
        return param_1;
      }
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        UNLOCK();
        if (*(int *)local_b8 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_b8 + 0xc);
      if (iVar1 != *(int *)(local_b8 + 8)) {
        lVar3 = (long)*(int *)(local_b8 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_b8 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      break;
    case 0x3c:
      local_c8 = (Data *)PTR_shared_null_1021e15e8;
      local_cc = 0x27;
      FUN_10012b680(&local_c8,&local_cc);
      FUN_10012b980(param_1,&local_c8);
      pDVar4 = local_c8;
      if (*(int *)local_c8 == -1) {
        return param_1;
      }
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        UNLOCK();
        if (*(int *)local_c8 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_c8 + 0xc);
      if (iVar1 != *(int *)(local_c8 + 8)) {
        lVar3 = (long)*(int *)(local_c8 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_c8 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      break;
    case 0x3e:
      local_168 = (Data *)PTR_shared_null_1021e15e8;
      local_16c = 0xe;
      FUN_10012b680(&local_168,&local_16c);
      local_170 = 0x32;
      FUN_10012b680(&local_168,&local_170);
      FUN_10012b980(param_1,&local_168);
      pDVar4 = local_168;
      if (*(int *)local_168 == -1) {
        return param_1;
      }
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        UNLOCK();
        if (*(int *)local_168 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_168 + 0xc);
      if (iVar1 != *(int *)(local_168 + 8)) {
        lVar3 = (long)*(int *)(local_168 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_168 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
    }
  }
  else {
    if (param_2 == 0x94) {
      local_158 = (Data *)PTR_shared_null_1021e15e8;
      local_15c = 0x3b;
      FUN_10012b680(&local_158,&local_15c);
      FUN_10012b980(param_1,&local_158);
      pDVar4 = local_158;
      if (*(int *)local_158 == -1) {
        return param_1;
      }
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        UNLOCK();
        if (*(int *)local_158 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_158 + 0xc);
      if (iVar1 != *(int *)(local_158 + 8)) {
        lVar3 = (long)*(int *)(local_158 + 8) * 8 + (long)iVar1 * -8;
        pDVar2 = local_158 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar2 != (void *)0x0) {
            operator_delete(*(void **)pDVar2);
          }
          pDVar2 = pDVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      goto LAB_100119769;
    }
switchD_10011885b_caseD_14:
    local_190 = (Data *)PTR_shared_null_1021e15e8;
    local_194 = 0x47;
    FUN_10012b680(&local_190,&local_194);
    FUN_10012b980(param_1,&local_190);
    pDVar4 = local_190;
    if (*(int *)local_190 == -1) {
      return param_1;
    }
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      UNLOCK();
      if (*(int *)local_190 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_190 + 0xc);
    if (iVar1 != *(int *)(local_190 + 8)) {
      lVar3 = (long)*(int *)(local_190 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = local_190 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar2 != (void *)0x0) {
          operator_delete(*(void **)pDVar2);
        }
        pDVar2 = pDVar2 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
  }
LAB_100119769:
  QListData::dispose(pDVar4);
  return param_1;
}

