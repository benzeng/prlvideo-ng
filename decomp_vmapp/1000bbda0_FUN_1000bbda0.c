
undefined1 FUN_1000bbda0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long *local_58;
  long *local_50;
  QArrayData *local_48;
  long *local_40;
  long *local_38;
  undefined1 local_29;
  
  lVar6 = *(long *)(param_1 + 0x48);
  iVar4 = *(int *)(lVar6 + 0x14);
  uVar8 = 0;
  iVar5 = 0;
  if (iVar4 < 0x4e3e) {
    if (iVar4 == 0x4e27) {
      return 0;
    }
switchD_1000bbdeb_caseD_4e40:
    FUN_10008f4d0(param_1);
  }
  else {
    switch(iVar4) {
    case 0x4e3e:
      uVar10 = 0;
      if (*(int *)(lVar6 + 0x28) != 0) {
        uVar10 = **(undefined8 **)(lVar6 + 0x30);
      }
      FUN_1000af840(param_1,uVar10);
      cVar3 = FUN_1000afac0(param_1);
      if (cVar3 == '\0') {
        cVar3 = FUN_1000afc00(param_1);
        if (cVar3 != '\0') {
          uVar10 = 0x4e4b;
          goto LAB_1000bbe67;
        }
      }
      else {
        uVar10 = 0x4e4a;
LAB_1000bbe67:
        FUN_10008fa70(param_1,uVar10);
      }
      iVar4 = FUN_1000a8ed0(param_1);
      iVar5 = 0;
      if (iVar4 == 0) {
        FUN_1008e3970("","vm",0,"All the VCPUs were stopped, the problem report might be incomplete"
                     );
        FUN_10008f640(param_1,10,1);
        (**(code **)(**(long **)(param_1 + 0x1950) + 0x128))(*(long **)(param_1 + 0x1950),4);
        goto switchD_1000bbdeb_caseD_4e43;
      }
      break;
    case 0x4e3f:
    case 0x4e41:
    case 0x4e42:
    case 0x4e4b:
      goto switchD_1000bbdeb_caseD_4e3f;
    default:
      goto switchD_1000bbdeb_caseD_4e40;
    case 0x4e43:
switchD_1000bbdeb_caseD_4e43:
      lVar6 = *(long *)(param_1 + 0x50);
      if (lVar6 == 0) {
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pPendingCmd",
                      "VirtualPCStates.cpp",0x894,"stateVmProblemReport");
        lVar6 = *(long *)(param_1 + 0x50);
      }
      if ((*(long *)(lVar6 + 0x18) == 0) || (*(long *)(*(long *)(lVar6 + 0x18) + 0x10) == 0)) {
        FUN_100118af0(&local_38,0x41e,DAT_1011c3650 + 0x18,0);
        lVar6 = *(long *)(param_1 + 0x50);
        puVar7 = (undefined4 *)&DAT_00000010;
        if (local_38 != (long *)0x0) {
          puVar7 = (undefined4 *)(local_38[2] + 0x10);
        }
        uVar9 = *puVar7;
        FUN_10011cf50(&local_50);
        cVar3 = '\0';
        if (local_50 != (long *)0x0) {
          cVar3 = (char)local_50[2];
        }
        CBaseNode::toString(SUB81(&local_48,0),(bool)(cVar3 + '\b'));
        local_58 = (long *)0x0;
        FUN_100069140(&local_40,uVar9,&local_48,&local_58,0,1,0);
        if (local_40 != (long *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        plVar2 = *(long **)(lVar6 + 0x18);
        *(long **)(lVar6 + 0x18) = local_40;
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        if (local_40 != (long *)0x0) {
          LOCK();
          plVar2 = local_40 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
        if (local_58 != (long *)0x0) {
          LOCK();
          plVar2 = local_58 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*local_58 + 0x10))();
          }
        }
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_29 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1000bc066;
          }
          QArrayData::deallocate(local_48,2,8);
        }
LAB_1000bc066:
        if (local_50 != (long *)0x0) {
          LOCK();
          plVar2 = local_50 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*local_50 + 0x10))();
          }
        }
        if (local_38 != (long *)0x0) {
          LOCK();
          plVar2 = local_38 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*local_38 + 0x10))();
          }
        }
      }
      lVar6 = *(long *)(param_1 + 0x50);
      uVar9 = 0;
      if (*(int *)(lVar6 + 0x28) != 0) {
        uVar9 = **(undefined4 **)(lVar6 + 0x30);
      }
      iVar5 = FUN_1000ad200(param_1,lVar6 + 0x18,uVar9);
      if (iVar5 < 0) {
        FUN_10008ec80(param_1,0xe);
        FUN_10008f760(param_1,iVar5);
      }
      break;
    case 0x4e4c:
      break;
    case 0x4e4d:
      FUN_10008ec80(param_1,0xe);
      iVar5 = 0;
      uVar9 = 0;
      if (*(int *)(*(long *)(param_1 + 0x48) + 0x28) != 0) {
        uVar9 = **(undefined4 **)(*(long *)(param_1 + 0x48) + 0x30);
      }
      FUN_10008f760(param_1,uVar9);
    }
    FUN_10008f910(param_1,iVar5);
  }
  uVar8 = 1;
switchD_1000bbdeb_caseD_4e3f:
  return uVar8;
}

