
void FUN_1000aec00(long param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long *local_b8;
  long *local_b0;
  QArrayData *local_a8;
  long *local_a0;
  undefined1 local_98 [8];
  QArrayData *local_90;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar7 = *param_3;
  if (0x70 < iVar7) {
    switch(iVar7) {
    case 0x71:
      FUN_1008e3970("","vm",0,"Memory dump creation on vcpu #%u...",param_2);
      FUN_1000ae340(local_98,param_1);
      FUN_1000f8e80(*(undefined8 *)(param_1 + 0x107d8),local_98);
      FUN_1000ae250(param_1);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_49 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_49) break;
        }
        QArrayData::deallocate(local_90,2,8);
      }
      break;
    case 0x72:
      FUN_1007d6bd0(local_48);
      FUN_1007d6bb0(&local_a8,local_48);
      FUN_100118af0(&local_a0,0x3f0,&local_a8,0);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_49 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1000aefd6;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1000aefd6:
      local_b8 = (long *)0x0;
      FUN_1000b4be0(&local_b0,0x3f0,&local_a0,&local_b8,0,0);
      if (local_b8 != (long *)0x0) {
        LOCK();
        plVar4 = local_b8 + 1;
        lVar8 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)(*local_b8 + 0x10))();
        }
      }
      FUN_10008fa90(param_1,0x3f0,&local_b0,0,0);
      if (local_b0 != (long *)0x0) {
        LOCK();
        plVar4 = local_b0 + 1;
        lVar8 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)(*local_b0 + 0x10))();
        }
      }
      if (local_a0 != (long *)0x0) {
        LOCK();
        plVar4 = local_a0 + 1;
        lVar8 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)(*local_a0 + 0x10))();
        }
      }
      break;
    case 0x73:
    case 0x74:
switchD_1000aec5d_caseD_9:
      uVar11 = *(uint *)(param_1 + 0x5c0);
      uVar10 = 0;
      if (((uVar11 != 0x8ff) && (0x80d < uVar11)) && ((uVar11 & 0xffffff00) == 0x800)) {
        if (iVar7 == 9) {
LAB_1000af106:
          lVar8 = FUN_1000a1c30(param_1,uVar10);
          if (lVar8 == 0) {
            FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pToolsHostAgent",
                          "VirtualPC.cpp",0xa84,"GetShutdownTypeFromCmd");
            uVar10 = 2;
          }
          else {
            uVar10 = 3;
            if (*(char *)(lVar8 + 0x28) == '\0') {
              uVar10 = 2;
            }
          }
        }
        else {
          uVar10 = 1;
          if (iVar7 != 0x73) {
            if (iVar7 == 0x74) goto LAB_1000af106;
            uVar10 = 0;
          }
        }
      }
      FUN_100088bf0(param_1 + 0x140,uVar10);
      FUN_1008e3970("","vm",0,"SHUTDOWN: type 0x%x VCPU=%u",*param_3,param_2);
      *(undefined4 *)(param_1 + 0x1948) = 1;
      FUN_100062ab0(DAT_1011c3650);
      if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
        uVar10 = 0x4e28;
LAB_1000af38d:
        FUN_10008fa70(param_1,uVar10);
        return;
      }
      goto LAB_1000af424;
    case 0x75:
      *(undefined1 *)(param_1 + 0x109ec) = 1;
      break;
    default:
      goto switchD_1000aec5d_caseD_3;
    }
    goto switchD_1000aec5d_caseD_0;
  }
  if (iVar7 < 0x11) {
    switch(iVar7) {
    case 0:
    case 1:
    case 7:
      break;
    case 2:
      if (((*(uint *)(param_1 + 0x5c0) & 0xffffff00) == 0x800) &&
         ((*(uint *)(param_1 + 0x117c) & 3) == 1)) {
        FUN_1000ae990(param_1);
      }
      FUN_100088bf0(param_1 + 0x140,0);
      if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) goto LAB_1000af424;
      uVar10 = 0x4e26;
      goto LAB_1000af38d;
    default:
      goto switchD_1000aec5d_caseD_3;
    case 4:
      if (param_3[1] == 4) {
        if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
          FUN_1000cb9d0(*(undefined8 *)(param_1 + 0x109c8),param_3[2]);
          return;
        }
        goto LAB_1000af424;
      }
      iVar7 = FUN_1008e38f0(&DAT_100befa68);
      if (iVar7 != 0) {
        if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
          FUN_1008e3970("","vm",0,"Invalid data size for the copy page request (%u != %u)",
                        param_3[1],4);
          return;
        }
        goto LAB_1000af424;
      }
      break;
    case 9:
      goto switchD_1000aec5d_caseD_9;
    }
  }
  else {
    if (iVar7 < 0x60) {
      if (0x30 < iVar7) {
        if (iVar7 == 0x31) {
          FUN_1000ab820(param_1,param_3 + 2);
          cVar5 = FUN_100409070(param_1 + 0x10b0);
          if (cVar5 != '\0') {
            *(undefined4 *)(param_1 + 0x1948) = 3;
            FUN_100062ab0(DAT_1011c3650);
            FUN_10008fa70(param_1,0x4e27);
            uVar9 = 0;
            while( true ) {
              uVar11 = *(uint *)(param_1 + 0x1164);
              if (uVar11 == 0) {
                uVar11 = *(uint *)(param_1 + 0x5d8);
                *(uint *)(param_1 + 0x1164) = uVar11;
              }
              if (uVar11 <= (uint)uVar9) break;
              FUN_10008fa70(*(undefined8 *)(param_1 + 0x1810 + uVar9 * 8),4);
              uVar9 = (ulong)((uint)uVar9 + 1);
            }
          }
        }
        else {
          if (iVar7 != 0x40) goto switchD_1000aec5d_caseD_3;
          plVar4 = *(long **)(param_1 + 0x107e8);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0xa0))(plVar4,param_3);
          }
          plVar4 = *(long **)(param_1 + 0x107f0);
          if (plVar4 != (long *)0x0) {
            if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0001000af192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar4 + 0xa0))(plVar4,param_3);
              return;
            }
            goto LAB_1000af424;
          }
        }
        goto switchD_1000aec5d_caseD_0;
      }
      if (iVar7 == 0x11) {
        FUN_100258820();
        return;
      }
      if (iVar7 == 0x21) goto switchD_1000aec5d_caseD_9;
    }
    else if (iVar7 == 0x60) {
      if (*(uint *)((long)param_3 + 9) != 0) {
        bVar2 = *(byte *)(param_3 + 2);
        uVar12 = 0;
        uVar11 = *(uint *)((long)param_3 + 9);
        do {
          uVar6 = *(uint *)(param_1 + 0x1164);
          if (uVar6 == 0) {
            uVar6 = *(uint *)(param_1 + 0x5d8);
            *(uint *)(param_1 + 0x1164) = uVar6;
          }
          if (uVar6 <= uVar12) {
            if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
              FUN_1008e3970("","vm",0,"Error! Wrong Vcpu in the bitmask.");
              return;
            }
            goto LAB_1000af424;
          }
          if ((uVar11 & 1) != 0) {
            if ((bVar2 < 4) && (bVar2 != 1)) {
              bVar3 = *(byte *)(*(long *)(param_1 + 0x109c8) + 499);
              lVar8 = *(long *)(param_1 + 0x1938);
              if (lVar8 == 0) {
                FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pAsyncMem",
                              "VirtualPC.cpp",0xbd1,"SetActiveVcpuMask");
                lVar8 = *(long *)(param_1 + 0x1938);
              }
              uVar6 = *(uint *)(lVar8 + 0x3eb70);
              do {
                LOCK();
                uVar1 = *(uint *)(lVar8 + 0x3eb70);
                bVar13 = uVar6 == uVar1;
                if (bVar13) {
                  *(uint *)(lVar8 + 0x3eb70) = 1 << ((byte)uVar12 & 0x1f) | uVar6;
                  uVar1 = uVar6;
                }
                uVar6 = uVar1;
                UNLOCK();
              } while (!bVar13);
              FUN_10008fa70(*(undefined8 *)(param_1 + 0x1810 + (ulong)uVar12 * 8),(bVar3 & 10) == 0)
              ;
            }
            else {
              FUN_10008fe30(*(undefined8 *)(param_1 + 0x1810 + (ulong)uVar12 * 8));
            }
          }
          uVar12 = uVar12 + 1;
          uVar6 = uVar11 >> 1;
          uVar11 = uVar11 >> 1;
        } while (uVar6 != 0);
      }
      goto switchD_1000aec5d_caseD_0;
    }
switchD_1000aec5d_caseD_3:
    uVar9 = 0;
    FUN_1008e3970("","vm",0,"Invalid command (%d) detected - terminating");
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    FUN_100408ff0(param_1 + 0x10b0,0x80000201,&local_d8);
    FUN_10002d9d0(&local_d8);
    *(undefined4 *)(param_1 + 0x1948) = 3;
    FUN_100062ab0(DAT_1011c3650);
    FUN_10008fa70(param_1,0x4e27);
    while( true ) {
      uVar11 = *(uint *)(param_1 + 0x1164);
      if (uVar11 == 0) {
        uVar11 = *(uint *)(param_1 + 0x5d8);
        *(uint *)(param_1 + 0x1164) = uVar11;
      }
      if (uVar11 <= (uint)uVar9) break;
      FUN_10008fa70(*(undefined8 *)(param_1 + 0x1810 + uVar9 * 8),4);
      uVar9 = (ulong)((uint)uVar9 + 1);
    }
  }
switchD_1000aec5d_caseD_0:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
LAB_1000af424:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

