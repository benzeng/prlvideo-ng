
undefined8 FUN_1000b7880(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  Data *pDVar9;
  char *pcVar10;
  QArrayData *pQVar11;
  long lVar12;
  long lVar13;
  Data *local_98;
  long *local_90;
  Data *local_88;
  long *local_80;
  Data *local_78;
  long *local_70;
  Data *local_68;
  long *local_60;
  Data *local_58;
  long *local_50;
  Data *local_48;
  long *local_40;
  undefined1 local_31;
  
  lVar12 = *(long *)(param_1 + 0x48);
  iVar4 = *(int *)(lVar12 + 0x14);
  iVar5 = -0x7ffffd8b;
  uVar7 = 0;
  if (iVar4 < 0x4e22) {
    if (iVar4 < 0xfa9) {
      if (iVar4 < 0x3f4) {
        if ((iVar4 != 0x3f0) && (iVar4 != 0x3f3)) {
          return 0;
        }
        iVar4 = FUN_1000b3f60(param_1);
        iVar5 = 0;
        if (iVar4 != 0) goto LAB_1000b795b;
        goto switchD_1000b7905_caseD_4e4a;
      }
      if (iVar4 != 0x3f4) {
        if (iVar4 != 0x40f) {
          return 0;
        }
        if (*(long *)(param_1 + 0x108) == 0) {
          cVar3 = FUN_1000b1ee0(param_1);
          iVar5 = 0;
          if (cVar3 == '\0') {
            iVar5 = FUN_1000b1d10(param_1);
            if (iVar5 < 0) {
              iVar5 = 0;
              FUN_1002a47a0(*(undefined8 *)(param_1 + 0x1a20),0);
              uVar6 = *(undefined4 *)(param_1 + 0x100);
              uVar7 = 4;
            }
            else {
              uVar6 = *(undefined4 *)(param_1 + 0x100);
              uVar7 = 3;
            }
            FUN_10008f1c0(param_1,uVar7,uVar6,1,1);
          }
          *(undefined1 *)(param_1 + 0x104) = 0;
          lVar12 = *(long *)(param_1 + 0x48);
          goto joined_r0x0001000b8474;
        }
        goto switchD_1000b7905_caseD_4e4a;
      }
LAB_1000b795b:
      if (*(long *)(param_1 + 0x1a30) == 0) {
LAB_1000b7a82:
        FUN_1000a7ae0(param_1,1,0);
        goto switchD_1000b7905_caseD_4e2c;
      }
      iVar4 = *(int *)(*(long *)(param_1 + 0x48) + 0x14);
      if (iVar4 == 0x3f0) {
        ___bzero(*(undefined8 *)(param_1 + 0x1928),
                 *(undefined4 *)(*(long *)(param_1 + 0x109c8) + 0x338));
        cVar3 = FUN_100533db0(*(undefined8 *)(param_1 + 0x1a30));
        pcVar10 = "vm.suspend.ballooning.timeout";
        uVar7 = 2000;
      }
      else {
        if (iVar4 != 0x3f3) goto LAB_1000b7a82;
        ___bzero(*(undefined8 *)(param_1 + 0x1928),
                 *(undefined4 *)(*(long *)(param_1 + 0x109c8) + 0x338));
        cVar3 = FUN_100533e80(*(undefined8 *)(param_1 + 0x1a30));
        pcVar10 = "vm.snapshot.ballooning.timeout";
        uVar7 = 60000;
      }
      uVar6 = FUN_1007da300(pcVar10,uVar7);
      if (cVar3 == '\0') goto LAB_1000b7a82;
      FUN_10008f440(param_1);
      FUN_10008f1c0(param_1,7,uVar6,1,1);
      uVar7 = 0xf;
      goto LAB_1000b7acf;
    }
    if (iVar4 != 0xfa9) {
      return 0;
    }
    iVar5 = FUN_1000b3a90(param_1);
    if (iVar5 < 0) goto switchD_1000b7905_caseD_4e4a;
    FUN_10008f440(param_1);
    uVar7 = 300000;
    goto LAB_1000b7baf;
  }
  switch(iVar4) {
  case 0x4e22:
  case 0x4e38:
    goto switchD_1000b7905_caseD_4e22;
  case 0x4e23:
    FUN_1000a7860(param_1);
    FUN_10008f440(param_1);
    goto LAB_1000b7aad;
  default:
    goto switchD_1000b7905_caseD_4e24;
  case 0x4e29:
    if (*(long *)(param_1 + 0x108) == 0) {
      iVar5 = FUN_1000b1d10(param_1);
      if (iVar5 < 0) {
        iVar5 = 0;
        FUN_1002a47a0(*(undefined8 *)(param_1 + 0x1a20),0);
        uVar6 = *(undefined4 *)(param_1 + 0x100);
        uVar7 = 4;
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 0x100);
        uVar7 = 3;
      }
      FUN_10008f1c0(param_1,uVar7,uVar6,1,1);
      lVar12 = *(long *)(param_1 + 0x48);
      if (*(int *)(lVar12 + 0x28) == 0) {
        *(undefined1 *)(param_1 + 0x104) = 0;
joined_r0x0001000b8474:
        if (lVar12 == 0) {
          FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pCurCmd",
                        "VirtualPCStates.cpp",0x66a,"stateSaveCurrentAsShutdownCmd");
        }
      }
      else {
        *(bool *)(param_1 + 0x104) = **(long **)(lVar12 + 0x30) != 0;
      }
      if (*(long *)(param_1 + 0x108) != 0) {
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL == m_pShutdownCmd",
                      "VirtualPCStates.cpp",0x66b,"stateSaveCurrentAsShutdownCmd");
      }
      *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    break;
  case 0x4e2a:
    if (*(long *)(param_1 + 0x108) == 0) {
      FUN_1002a47a0(*(undefined8 *)(param_1 + 0x1a20),0);
      FUN_10008f1c0(param_1,4,*(undefined4 *)(param_1 + 0x100),1,1);
      lVar12 = *(long *)(param_1 + 0x48);
      if (*(int *)(lVar12 + 0x28) == 0) {
        *(undefined1 *)(param_1 + 0x104) = 0;
        if (lVar12 == 0) {
          FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pCurCmd",
                        "VirtualPCStates.cpp",0x66a,"stateSaveCurrentAsShutdownCmd");
        }
      }
      else {
        *(bool *)(param_1 + 0x104) = **(long **)(lVar12 + 0x30) != 0;
      }
      if (*(long *)(param_1 + 0x108) != 0) {
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL == m_pShutdownCmd",
                      "VirtualPCStates.cpp",0x66b,"stateSaveCurrentAsShutdownCmd");
      }
      *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
      goto LAB_1000b7ad7;
    }
    break;
  case 0x4e2c:
  case 0x4e2e:
  case 0x4e3b:
switchD_1000b7905_caseD_4e2c:
    DAT_1011c36a0 = 0;
    FUN_10008f440(param_1);
    FUN_1000a78a0(param_1,1);
LAB_1000b7aad:
    FUN_10008f1c0(param_1,2,60000,1,1);
    uVar7 = 0x11;
LAB_1000b7acf:
    FUN_10008ec80(param_1,uVar7);
    goto LAB_1000b7ad7;
  case 0x4e30:
    DAT_1011c36a0 = 0;
    goto switchD_1000b7905_caseD_4e22;
  case 0x4e31:
    FUN_10011a560(&local_40,lVar12 + 0x18);
    lVar12 = 0;
    if (local_40 != (long *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      lVar12 = local_40[2];
      LOCK();
      plVar1 = local_40 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    FUN_10012bbb0(&local_48,lVar12);
    iVar5 = FUN_1000ad350(param_1,&local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b7cc9;
      }
      iVar4 = *(int *)(local_48 + 0xc);
      if (iVar4 != *(int *)(local_48 + 8)) {
        lVar12 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar4 * -8;
        pDVar9 = local_48 + (long)iVar4 * 8 + 8;
        do {
          pQVar11 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar11 == 0) {
LAB_1000b7ca8:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar11 = *(QArrayData **)pDVar9;
              goto LAB_1000b7ca8;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar12 = lVar12 + 8;
        } while (lVar12 != 0);
      }
      QListData::dispose(local_48);
    }
LAB_1000b7cc9:
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      iVar4 = (int)*plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      local_90 = local_40;
LAB_1000b838f:
      if (iVar4 == 1) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    break;
  case 0x4e32:
    FUN_10011a560(&local_50,lVar12 + 0x18);
    lVar12 = 0;
    if (local_50 != (long *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      lVar12 = local_50[2];
      LOCK();
      plVar1 = local_50 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
    FUN_10012bbb0(&local_58,lVar12);
    iVar5 = FUN_1000afe90(param_1,&local_58);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b7dc3;
      }
      iVar4 = *(int *)(local_58 + 0xc);
      if (iVar4 != *(int *)(local_58 + 8)) {
        lVar12 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar4 * -8;
        pDVar9 = local_58 + (long)iVar4 * 8 + 8;
        do {
          pQVar11 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar11 == 0) {
LAB_1000b7da2:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar11 = *(QArrayData **)pDVar9;
              goto LAB_1000b7da2;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar12 = lVar12 + 8;
        } while (lVar12 != 0);
      }
      QListData::dispose(local_58);
    }
LAB_1000b7dc3:
    if (local_50 != (long *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      iVar4 = (int)*plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      local_90 = local_50;
      goto LAB_1000b838f;
    }
    break;
  case 0x4e33:
    FUN_10011a560(&local_60,lVar12 + 0x18);
    lVar12 = 0;
    if (local_60 != (long *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
      lVar12 = local_60[2];
      LOCK();
      plVar1 = local_60 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)(*local_60 + 0x10))();
      }
    }
    FUN_10012bbb0(&local_68,lVar12);
    iVar5 = FUN_1000b2c40(param_1,&local_68);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b7ebd;
      }
      iVar4 = *(int *)(local_68 + 0xc);
      if (iVar4 != *(int *)(local_68 + 8)) {
        lVar12 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar4 * -8;
        pDVar9 = local_68 + (long)iVar4 * 8 + 8;
        do {
          pQVar11 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar11 == 0) {
LAB_1000b7e9c:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar11 = *(QArrayData **)pDVar9;
              goto LAB_1000b7e9c;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar12 = lVar12 + 8;
        } while (lVar12 != 0);
      }
      QListData::dispose(local_68);
    }
LAB_1000b7ebd:
    if (local_60 != (long *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      iVar4 = (int)*plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      local_90 = local_60;
      goto LAB_1000b838f;
    }
    break;
  case 0x4e34:
    FUN_10011a560(&local_70,lVar12 + 0x18);
    lVar12 = 0;
    if (local_70 != (long *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
      lVar12 = local_70[2];
      LOCK();
      plVar1 = local_70 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    FUN_10012bbb0(&local_78,lVar12);
    iVar5 = FUN_1000b35f0(param_1,&local_78,0);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b7fb9;
      }
      iVar4 = *(int *)(local_78 + 0xc);
      if (iVar4 != *(int *)(local_78 + 8)) {
        lVar12 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar4 * -8;
        pDVar9 = local_78 + (long)iVar4 * 8 + 8;
        do {
          pQVar11 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar11 == 0) {
LAB_1000b7f98:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar11 = *(QArrayData **)pDVar9;
              goto LAB_1000b7f98;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar12 = lVar12 + 8;
        } while (lVar12 != 0);
      }
      QListData::dispose(local_78);
    }
LAB_1000b7fb9:
    if (local_70 != (long *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    puVar2 = PTR_shared_null_100ba2188;
    if (*(int *)PTR_shared_null_100ba2188 != -1) {
      if (*(int *)PTR_shared_null_100ba2188 != 0) {
        LOCK();
        *(int *)PTR_shared_null_100ba2188 = *(int *)PTR_shared_null_100ba2188 + -1;
        local_31 = *(int *)puVar2 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      lVar12 = *(long *)(puVar2 + 8);
      if ((int)((ulong)lVar12 >> 0x20) != (int)lVar12) {
        lVar13 = (long)(int)lVar12 * 8 + (lVar12 >> 0x20) * -8;
        puVar8 = (undefined8 *)(puVar2 + (lVar12 >> 0x20) * 8 + 8);
        do {
          pQVar11 = (QArrayData *)*puVar8;
          if (*(int *)pQVar11 == 0) {
LAB_1000b8052:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar11 = (QArrayData *)*puVar8;
              goto LAB_1000b8052;
            }
          }
          puVar8 = puVar8 + -1;
          lVar13 = lVar13 + 8;
        } while (lVar13 != 0);
      }
LAB_1000b8201:
      QListData::dispose((Data *)PTR_shared_null_100ba2188);
    }
    break;
  case 0x4e35:
    FUN_10011a560(&local_80,lVar12 + 0x18);
    lVar12 = 0;
    if (local_80 != (long *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
      lVar12 = local_80[2];
      LOCK();
      plVar1 = local_80 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    FUN_10012bbb0(&local_88,lVar12);
    iVar5 = FUN_1000b35f0(param_1,&local_88,1);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b8153;
      }
      iVar4 = *(int *)(local_88 + 0xc);
      if (iVar4 != *(int *)(local_88 + 8)) {
        lVar12 = (long)*(int *)(local_88 + 8) * 8 + (long)iVar4 * -8;
        pDVar9 = local_88 + (long)iVar4 * 8 + 8;
        do {
          pQVar11 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar11 == 0) {
LAB_1000b8132:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar11 = *(QArrayData **)pDVar9;
              goto LAB_1000b8132;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar12 = lVar12 + 8;
        } while (lVar12 != 0);
      }
      QListData::dispose(local_88);
    }
LAB_1000b8153:
    if (local_80 != (long *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    puVar2 = PTR_shared_null_100ba2188;
    if (*(int *)PTR_shared_null_100ba2188 != -1) {
      if (*(int *)PTR_shared_null_100ba2188 != 0) {
        LOCK();
        *(int *)PTR_shared_null_100ba2188 = *(int *)PTR_shared_null_100ba2188 + -1;
        local_31 = *(int *)puVar2 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      lVar12 = *(long *)(puVar2 + 8);
      if ((int)((ulong)lVar12 >> 0x20) != (int)lVar12) {
        lVar13 = (long)(int)lVar12 * 8 + (lVar12 >> 0x20) * -8;
        puVar8 = (undefined8 *)(puVar2 + (lVar12 >> 0x20) * 8 + 8);
        do {
          pQVar11 = (QArrayData *)*puVar8;
          if (*(int *)pQVar11 == 0) {
LAB_1000b81e8:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar11 = (QArrayData *)*puVar8;
              goto LAB_1000b81e8;
            }
          }
          puVar8 = puVar8 + -1;
          lVar13 = lVar13 + 8;
        } while (lVar13 != 0);
      }
      goto LAB_1000b8201;
    }
    break;
  case 0x4e36:
    FUN_10009f780(param_1);
    goto LAB_1000b7ad7;
  case 0x4e37:
    FUN_1000b49a0(param_1);
    FUN_100109710(param_1);
    (**(code **)(**(long **)(param_1 + 0x1950) + 0x128))(*(long **)(param_1 + 0x1950),3);
    FUN_10008f440(param_1);
    *(undefined1 *)(param_1 + 0x1160) = 0;
    FUN_10008ec80(param_1,0x14);
    FUN_10008f1c0(param_1,10,1000,1,1);
LAB_1000b7ad7:
    iVar5 = 0;
    break;
  case 0x4e3a:
    FUN_10011a560(&local_90,lVar12 + 0x18);
    lVar12 = 0;
    if (local_90 != (long *)0x0) {
      LOCK();
      *(int *)(local_90 + 1) = (int)local_90[1] + 1;
      UNLOCK();
      lVar12 = local_90[2];
      LOCK();
      plVar1 = local_90 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    FUN_10012bbb0(&local_98,lVar12);
    iVar5 = FUN_1000b3940(param_1,&local_98);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b8375;
      }
      iVar4 = *(int *)(local_98 + 0xc);
      if (iVar4 != *(int *)(local_98 + 8)) {
        lVar12 = (long)*(int *)(local_98 + 8) * 8 + (long)iVar4 * -8;
        pDVar9 = local_98 + (long)iVar4 * 8 + 8;
        do {
          pQVar11 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar11 == 0) {
LAB_1000b8354:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar11 = *(QArrayData **)pDVar9;
              goto LAB_1000b8354;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar12 = lVar12 + 8;
        } while (lVar12 != 0);
      }
      QListData::dispose(local_98);
    }
LAB_1000b8375:
    if (local_90 != (long *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      iVar4 = (int)*plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      goto LAB_1000b838f;
    }
    break;
  case 0x4e48:
    if (((*(long *)(param_1 + 0x108) != 0) && (iVar5 = 0, *(int *)(lVar12 + 0x28) != 0)) &&
       (iVar5 = **(int **)(lVar12 + 0x30), iVar5 < 0)) {
      FUN_1008e3970("","vm",0,"Unable to shutdown VM via tools.");
      FUN_10008f640(param_1,3,1);
      FUN_1002a47a0(*(undefined8 *)(param_1 + 0x1a20),0);
      FUN_10008f1c0(param_1,4,*(undefined4 *)(param_1 + 0x100),1,1);
    }
    break;
  case 0x4e4a:
    break;
  }
switchD_1000b7905_caseD_4e4a:
  FUN_10008f910(param_1,iVar5);
  uVar7 = 1;
switchD_1000b7905_caseD_4e24:
  return uVar7;
switchD_1000b7905_caseD_4e22:
  iVar5 = 0;
  FUN_1000a7ae0(param_1,1,0);
  FUN_1000a78a0(param_1,1);
  FUN_10008f440(param_1);
  uVar7 = 60000;
LAB_1000b7baf:
  FUN_10008f1c0(param_1,2,uVar7,1,1);
  FUN_10008ec80(param_1,0x11);
  goto switchD_1000b7905_caseD_4e4a;
}

