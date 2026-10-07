
undefined8 FUN_100071890(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 in_stack_fffffffffffffec8;
  long *local_108;
  long *local_100;
  long *local_f8;
  QArrayData *local_f0;
  long *local_e8;
  QArrayData *local_e0;
  long *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  long *local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  long *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  undefined1 local_31;
  
  uVar5 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  local_68 = (long *)*param_2;
  iVar4 = *(int *)(local_68[2] + 0x40);
  if (iVar4 < 0x30e08) {
    if (iVar4 == 0xfb0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      if (local_68 != (long *)0x0) {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
      }
      iVar4 = FUN_1000a1890(uVar2,&local_68);
      if (local_68 != (long *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
      if (-1 < iVar4) {
        return 1;
      }
      piVar7 = (int *)___cxa_allocate_exception(4);
      *piVar7 = iVar4;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(piVar7,PTR_typeinfo_100ba22d8,0);
    }
  }
  else {
    switch(iVar4) {
    case 0x30e08:
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      if (local_68 != (long *)0x0) {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
      }
      local_40 = local_68;
      iVar4 = FUN_1000a0e30(uVar2,&local_40);
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
      if (-1 < iVar4) {
        return 1;
      }
      piVar7 = (int *)___cxa_allocate_exception(4);
      *piVar7 = iVar4;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(piVar7,PTR_typeinfo_100ba22d8,0);
    case 0x30e0b:
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      if (local_68 != (long *)0x0) {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
      }
      local_50 = local_68;
      iVar4 = FUN_1000a0f70(uVar2,&local_50,param_3);
      if (local_50 != (long *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)(*local_50 + 0x10))();
        }
      }
      if (-1 < iVar4) {
        return 1;
      }
      piVar7 = (int *)___cxa_allocate_exception(4);
      *piVar7 = iVar4;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(piVar7,PTR_typeinfo_100ba22d8,0);
    case 0x30e0d:
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      if (local_68 != (long *)0x0) {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
      }
      local_60 = local_68;
      iVar4 = FUN_1000a1070(uVar2,&local_60);
      if (local_60 != (long *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)(*local_60 + 0x10))();
        }
      }
      if (-1 < iVar4) {
        return 1;
      }
      piVar7 = (int *)___cxa_allocate_exception(4);
      *piVar7 = iVar4;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(piVar7,PTR_typeinfo_100ba22d8,0);
    case 0x30e0f:
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      if (local_68 != (long *)0x0) {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
      }
      local_58 = local_68;
      iVar4 = FUN_1000a1160(uVar2,&local_58);
      if (local_58 != (long *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)(*local_58 + 0x10))();
        }
      }
      if (-1 < iVar4) {
        return 1;
      }
      piVar7 = (int *)___cxa_allocate_exception(4);
      *piVar7 = iVar4;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(piVar7,PTR_typeinfo_100ba22d8,0);
    case 0x30e10:
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      if (local_68 != (long *)0x0) {
        LOCK();
        *(int *)(local_68 + 1) = (int)local_68[1] + 1;
        UNLOCK();
      }
      local_48 = local_68;
      iVar4 = FUN_1000a0d10(uVar2,&local_48);
      if (local_48 != (long *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      if (-1 < iVar4) {
        return 1;
      }
      piVar7 = (int *)___cxa_allocate_exception(4);
      *piVar7 = iVar4;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(piVar7,PTR_typeinfo_100ba22d8,0);
    }
  }
  FUN_10011a560(&local_70,param_2);
  iVar4 = *(int *)(local_70[2] + 0x10);
  if (0x413 < iVar4) {
    switch(iVar4) {
    case 0x414:
      if (local_70 == (long *)0x0) {
LAB_100071c43:
        lVar9 = 0;
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pVmGuestCmd",
                      "CVmCommandsHandler.cpp",CONCAT44(uVar5,0xa6b),"vmCmdProcessGuestOsSessionCmd"
                     );
      }
      else {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
        lVar9 = local_70[2];
        LOCK();
        plVar1 = local_70 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*local_70 + 0x10))();
        }
        if (lVar9 == 0) goto LAB_100071c43;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      FUN_10012e460(&local_e0,lVar9);
      local_e8 = (long *)*param_2;
      if (local_e8 != (long *)0x0) {
        LOCK();
        *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
        UNLOCK();
      }
      iVar4 = FUN_1000a1580(uVar2,&local_e0,&local_e8);
      if (local_e8 != (long *)0x0) {
        LOCK();
        plVar1 = local_e8 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)(*local_e8 + 0x10))();
        }
      }
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100071d27;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_100071d27:
      if (iVar4 < 0) {
        piVar7 = (int *)___cxa_allocate_exception(4);
        *piVar7 = iVar4;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(piVar7,PTR_typeinfo_100ba22d8,0);
      }
      break;
    default:
switchD_100071c11_caseD_415:
      puVar8 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar8 = 0x80000008;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar8,PTR_typeinfo_100ba22d8,0);
    case 0x416:
      if (local_70 == (long *)0x0) {
LAB_100072382:
        lVar9 = 0;
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pVmGuestCmd",
                      "CVmCommandsHandler.cpp",CONCAT44(uVar5,0xa5b),"vmCmdProcessGuestOsSessionCmd"
                     );
      }
      else {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
        lVar9 = local_70[2];
        LOCK();
        plVar1 = local_70 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*local_70 + 0x10))();
        }
        if (lVar9 == 0) goto LAB_100072382;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      FUN_10012e460(&local_c0,lVar9);
      FUN_10012ef20(&local_c8,lVar9);
      FUN_10012efe0(&local_d0,lVar9);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmCommonOptions();
      uVar5 = CVmCommonOptions::getOsType();
      uVar6 = FUN_10011d660(lVar9);
      local_d8 = (long *)*param_2;
      if (local_d8 != (long *)0x0) {
        LOCK();
        *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
        UNLOCK();
      }
      iVar4 = FUN_1000a1460(uVar2,&local_c0,&local_c8,&local_d0,uVar5,uVar6,&local_d8);
      if (local_d8 != (long *)0x0) {
        LOCK();
        plVar1 = local_d8 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)(*local_d8 + 0x10))();
        }
      }
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000724c1;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_1000724c1:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000724f7;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_1000724f7:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10007252d;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_10007252d:
      if (iVar4 < 0) {
        piVar7 = (int *)___cxa_allocate_exception(4);
        *piVar7 = iVar4;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(piVar7,PTR_typeinfo_100ba22d8,0);
      }
      break;
    case 0x418:
      if (local_70 == (long *)0x0) {
LAB_100072587:
        lVar9 = 0;
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pVmGuestCmd",
                      "CVmCommandsHandler.cpp",CONCAT44(uVar5,0xa77),"vmCmdProcessGuestOsSessionCmd"
                     );
      }
      else {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
        lVar9 = local_70[2];
        LOCK();
        plVar1 = local_70 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*local_70 + 0x10))();
        }
        if (lVar9 == 0) goto LAB_100072587;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      FUN_10012e460(&local_f0,lVar9);
      local_f8 = (long *)*param_2;
      if (local_f8 != (long *)0x0) {
        LOCK();
        *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
        UNLOCK();
      }
      iVar4 = FUN_1000a1680(uVar2,&local_f0,&local_f8);
      if (local_f8 != (long *)0x0) {
        LOCK();
        plVar1 = local_f8 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)(*local_f8 + 0x10))();
        }
      }
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10007266b;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_10007266b:
      if (iVar4 < 0) {
        piVar7 = (int *)___cxa_allocate_exception(4);
        *piVar7 = iVar4;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(piVar7,PTR_typeinfo_100ba22d8,0);
      }
      break;
    case 0x41c:
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      local_100 = (long *)*param_2;
      if (local_100 != (long *)0x0) {
        LOCK();
        *(int *)(local_100 + 1) = (int)local_100[1] + 1;
        UNLOCK();
      }
      iVar4 = FUN_1000a1360(uVar2,1,&local_100);
      if (local_100 != (long *)0x0) {
        LOCK();
        plVar1 = local_100 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)(*local_100 + 0x10))();
        }
      }
      if (iVar4 < 0) {
        piVar7 = (int *)___cxa_allocate_exception(4);
        *piVar7 = iVar4;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(piVar7,PTR_typeinfo_100ba22d8,0);
      }
      break;
    case 0x41d:
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      local_108 = (long *)*param_2;
      if (local_108 != (long *)0x0) {
        LOCK();
        *(int *)(local_108 + 1) = (int)local_108[1] + 1;
        UNLOCK();
      }
      iVar4 = FUN_1000a1360(uVar2,0,&local_108);
      if (local_108 != (long *)0x0) {
        LOCK();
        plVar1 = local_108 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)(*local_108 + 0x10))();
        }
      }
      if (iVar4 < 0) {
        piVar7 = (int *)___cxa_allocate_exception(4);
        *piVar7 = iVar4;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(piVar7,PTR_typeinfo_100ba22d8,0);
      }
    }
    goto LAB_100072766;
  }
  if (iVar4 != 0x403) {
    if (iVar4 != 0x404) {
      if (iVar4 != 0x40d) goto switchD_100071c11_caseD_415;
      if (local_70 == (long *)0x0) {
LAB_100071e75:
        lVar9 = 0;
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pLoginInGuestCmd",
                      "CVmCommandsHandler.cpp",CONCAT44(uVar5,0xa2c),"vmCmdProcessGuestOsSessionCmd"
                     );
      }
      else {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
        lVar9 = local_70[2];
        LOCK();
        plVar1 = local_70 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*local_70 + 0x10))();
        }
        if (lVar9 == 0) goto LAB_100071e75;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      FUN_10012e110(&local_78,lVar9);
      FUN_10012e1d0(&local_80,lVar9);
      uVar5 = FUN_10011d660(lVar9);
      local_88 = (long *)*param_2;
      if (local_88 != (long *)0x0) {
        LOCK();
        *(int *)(local_88 + 1) = (int)local_88[1] + 1;
        UNLOCK();
      }
      iVar4 = FUN_1000a0ad0(uVar2,&local_78,&local_80,uVar5,&local_88);
      if (local_88 != (long *)0x0) {
        LOCK();
        plVar1 = local_88 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100071f5d;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100071f5d:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100071f8d;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100071f8d:
      if (iVar4 < 0) {
        piVar7 = (int *)___cxa_allocate_exception(4);
        *piVar7 = iVar4;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(piVar7,PTR_typeinfo_100ba22d8,0);
      }
      goto LAB_100072766;
    }
    if (local_70 == (long *)0x0) {
LAB_100071a43:
      lVar9 = 0;
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pVmGuestRunAppCmd",
                    "CVmCommandsHandler.cpp",CONCAT44(uVar5,0xa4b),"vmCmdProcessGuestOsSessionCmd");
    }
    else {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
      lVar9 = local_70[2];
      LOCK();
      plVar1 = local_70 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_70 + 0x10))();
      }
      if (lVar9 == 0) goto LAB_100071a43;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_10012e460(&local_98,lVar9);
    FUN_10012e9e0(&local_a0,lVar9);
    FUN_10012eaa0(local_a8,lVar9);
    FUN_10012eb60(local_b0,lVar9);
    uVar5 = FUN_10011d660(lVar9);
    local_b8 = (long *)*param_2;
    if (local_b8 != (long *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    iVar4 = FUN_1000a0be0(uVar2,&local_98,&local_a0,local_a8,local_b0,uVar5,&local_b8,param_3);
    if (local_b8 != (long *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)(*local_b8 + 0x10))();
      }
    }
    FUN_100013180(local_b0);
    FUN_100013180(local_a8);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100071b95;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100071b95:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100071bcb;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100071bcb:
    if (iVar4 < 0) {
      piVar7 = (int *)___cxa_allocate_exception(4);
      *piVar7 = iVar4;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(piVar7,PTR_typeinfo_100ba22d8,0);
    }
    goto LAB_100072766;
  }
  if (local_70 == (long *)0x0) {
LAB_100071d81:
    lVar9 = 0;
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pVmGuestCmd",
                  "CVmCommandsHandler.cpp",CONCAT44(uVar5,0xa3c),"vmCmdProcessGuestOsSessionCmd");
  }
  else {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
    lVar9 = local_70[2];
    LOCK();
    plVar1 = local_70 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_70 + 0x10))();
    }
    if (lVar9 == 0) goto LAB_100071d81;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10012e460(&local_90,lVar9);
  iVar4 = FUN_1000a1780(uVar2,&local_90);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100071e20;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100071e20:
  if (iVar4 < 0) {
    piVar7 = (int *)___cxa_allocate_exception(4);
    *piVar7 = iVar4;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(piVar7,PTR_typeinfo_100ba22d8,0);
  }
  FUN_10006b4e0(param_1,param_2,0);
LAB_100072766:
  if (local_70 != (long *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  return 1;
}

