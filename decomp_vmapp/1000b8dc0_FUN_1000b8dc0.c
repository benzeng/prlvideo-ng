
undefined1 FUN_1000b8dc0(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined1 uVar6;
  Data *pDVar7;
  undefined8 uVar8;
  QArrayData *pQVar9;
  long lVar10;
  long *local_70;
  void *local_68;
  void *pvStack_60;
  undefined8 local_58;
  Data *local_48;
  long *local_40;
  undefined1 local_31;
  
  lVar10 = *(long *)(param_1 + 0x48);
  iVar3 = *(int *)(lVar10 + 0x14);
  uVar6 = 0;
  if (iVar3 < 0x4e21) {
    if (iVar3 == 0x3ee) {
      return 0;
    }
switchD_1000b8e18_caseD_4e22:
    uVar8 = 0x80000009;
LAB_1000b900c:
    FUN_10008f910(param_1,uVar8);
  }
  else {
    if (0x4e2f < iVar3) {
      if (iVar3 < 0x4e4c) {
        if (iVar3 == 0x4e30) {
          lVar10 = *(long *)(param_1 + 0x50);
          if ((lVar10 == 0) || (*(int *)(lVar10 + 0x14) != 0x4e30)) {
            FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]",
                          "m_pPendingCmd && m_pPendingCmd->cmdId == VmLocalCmdStartDbgdump",
                          "VirtualPCStates.cpp",0x833,"stateVmDbgdumpCreating");
            lVar10 = *(long *)(param_1 + 0x50);
          }
          FUN_10011a560(&local_40,lVar10 + 0x18);
          lVar10 = 0;
          if (local_40 != (long *)0x0) {
            LOCK();
            *(int *)(local_40 + 1) = (int)local_40[1] + 1;
            UNLOCK();
            lVar10 = local_40[2];
            LOCK();
            plVar5 = local_40 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)(*local_40 + 0x10))();
            }
          }
          FUN_10012bbb0(&local_48,lVar10);
          iVar3 = FUN_1000ad600(param_1,&local_48);
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000b8f81;
            }
            iVar1 = *(int *)(local_48 + 0xc);
            if (iVar1 != *(int *)(local_48 + 8)) {
              lVar10 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
              pDVar7 = local_48 + (long)iVar1 * 8 + 8;
              do {
                pQVar9 = *(QArrayData **)pDVar7;
                if (*(int *)pQVar9 == 0) {
LAB_1000b8f60:
                  QArrayData::deallocate(pQVar9,2,8);
                }
                else if (*(int *)pQVar9 != -1) {
                  LOCK();
                  *(int *)pQVar9 = *(int *)pQVar9 + -1;
                  local_31 = *(int *)pQVar9 != 0;
                  UNLOCK();
                  if (!(bool)local_31) {
                    pQVar9 = *(QArrayData **)pDVar7;
                    goto LAB_1000b8f60;
                  }
                }
                pDVar7 = pDVar7 + -8;
                lVar10 = lVar10 + 8;
              } while (lVar10 != 0);
            }
            QListData::dispose(local_48);
          }
LAB_1000b8f81:
          if (iVar3 < 0) {
            FUN_10008f760(param_1,iVar3);
          }
          else {
            uVar8 = *(undefined8 *)(param_1 + 0x107d8);
            uVar4 = FUN_1000a7060(param_1);
            FUN_1000f8920(uVar8,uVar4);
          }
          FUN_10008f910(param_1,0);
          if (local_40 == (long *)0x0) {
            return 1;
          }
          LOCK();
          plVar5 = local_40 + 1;
          lVar10 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar10 != 1) {
            return 1;
          }
          (**(code **)(*local_40 + 0x10))();
          return 1;
        }
        if (iVar3 == 0x4e3f) {
          return 0;
        }
        goto switchD_1000b8e18_caseD_4e22;
      }
      if (iVar3 == 0x4e4c) {
        FUN_1000ae250(param_1);
        if (DAT_1011c36a0 == '\0') {
          FUN_1000a78a0(param_1,0);
          FUN_1000a7ae0(param_1,0,0);
          uVar8 = DAT_1011c3650;
          local_68 = (void *)0x0;
          pvStack_60 = (void *)0x0;
          local_58 = 0;
          plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
          local_70 = (long *)0x0;
          if (plVar5 != (long *)0x0) {
            *(undefined4 *)(plVar5 + 1) = 1;
            plVar5[2] = 0;
            *plVar5 = (long)&PTR_FUN_100bef0d0;
            local_70 = plVar5;
          }
          FUN_100063770(uVar8,0x186b4,0,&local_68,0xbbb,&local_70);
          if (local_70 != (long *)0x0) {
            LOCK();
            plVar5 = local_70 + 1;
            lVar10 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)(*local_70 + 0x10))();
            }
          }
          if (local_68 != (void *)0x0) {
            if (pvStack_60 != local_68) {
              pvStack_60 = (void *)((~((long)pvStack_60 + (-8 - (long)local_68)) &
                                    0xfffffffffffffff8U) + (long)pvStack_60);
            }
            operator_delete(local_68);
          }
          uVar8 = 0xe;
        }
        else {
          FUN_10008fa70(param_1,0x4e4a);
          uVar8 = 4;
        }
        FUN_10008ec80(param_1,uVar8);
        uVar4 = 0;
        if (*(int *)(*(long *)(param_1 + 0x48) + 0x28) != 0) {
          uVar4 = **(undefined4 **)(*(long *)(param_1 + 0x48) + 0x30);
        }
        FUN_10008f760(param_1,uVar4);
        uVar8 = 0;
      }
      else {
        if (iVar3 != 0x4e4e) goto switchD_1000b8e18_caseD_4e22;
        uVar4 = 0;
        if (*(int *)(lVar10 + 0x28) != 0) {
          uVar4 = **(undefined4 **)(lVar10 + 0x30);
        }
        FUN_1000f8c80(*(undefined8 *)(param_1 + 0x107d8),uVar4);
        uVar8 = 0;
      }
      goto LAB_1000b900c;
    }
    switch(iVar3) {
    case 0x4e21:
    case 0x4e26:
    case 0x4e28:
      FUN_10008f4d0(param_1);
      break;
    default:
      goto switchD_1000b8e18_caseD_4e22;
    case 0x4e27:
      goto switchD_1000b8e18_caseD_4e27;
    }
  }
  uVar6 = 1;
switchD_1000b8e18_caseD_4e27:
  return uVar6;
}

