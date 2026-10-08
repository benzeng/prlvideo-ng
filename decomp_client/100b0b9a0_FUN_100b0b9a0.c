
int FUN_100b0b9a0(int *param_1,long param_2,uint *param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  uint local_34;
  bool bVar3;
  bool bVar4;
  
  if (*param_1 == -1) {
    FUN_100df99c0("","ioctl",0,"VmDrv::Ioctl invalid state");
    return -1;
  }
  local_34 = 0;
  iVar7 = _IOConnectTrap3(*param_1,0,param_2,param_3,(long)param_4);
  if (iVar7 != 0) {
    FUN_100df99c0("","ioctl",0,"vm_drv_ioctl failed with error %x",iVar7);
    pcVar14 = "<undefined>";
    bVar5 = true;
    bVar4 = true;
    bVar2 = true;
    bVar3 = true;
    bVar6 = true;
    if (0x7845 < param_2) {
      if (param_2 < 0x60047804) {
        if (param_2 < 0x20107840) {
          if (param_2 < 0x20047802) {
            if (param_2 == 0x7846) {
              pcVar14 = "HOST_IOCTL_HYPAPI_CHECK_VERSION";
              pcVar9 = "HOST_IOCTL_HYPAPI_CHECK_VERSION";
              goto LAB_100b0c45f;
            }
            if (param_2 == 0x7847) {
              pcVar14 = "HOST_IOCTL_HYPAPI_GET_EVENTAPI";
              pcVar9 = "HOST_IOCTL_HYPAPI_GET_EVENTAPI";
              goto LAB_100b0c45f;
            }
          }
          else {
            if (param_2 == 0x20047802) {
              pcVar14 = "HOST_IOCTL_VM_ACTIVATE_MONITOR";
              pcVar9 = "HOST_IOCTL_VM_ACTIVATE_MONITOR";
              goto LAB_100b0c45f;
            }
            if (param_2 == 0x20087803) {
              pcVar14 = "HOST_IOCTL_KICK_VCPU";
              pcVar9 = "HOST_IOCTL_KICK_VCPU";
              goto LAB_100b0c45f;
            }
          }
        }
        else if (param_2 == 0x20107840) {
          pcVar14 = "HOST_IOCTL_INIT_HYPERVISOR";
          pcVar9 = "HOST_IOCTL_INIT_HYPERVISOR";
          goto LAB_100b0c45f;
        }
        goto switchD_100b0bb50_caseD_804;
      }
      if (param_2 < 0x6008781e) {
        if (param_2 < 0x6004781a) {
          pcVar10 = "HOST_IOCTL_SET_CPU_AFFINITY";
          pcVar8 = "HOST_IOCTL_GET_LPT_PORT_INFO";
          pcVar9 = "HOST_IOCTL_UNLOCK_LPT_PORT";
          pcVar11 = "HOST_IOCTL_LOCK_LPT_PORT";
          bVar6 = bVar2;
          switch(param_2) {
          case 0x60047804:
            goto switchD_100b0c0f8_caseD_60047804;
          case 0x60047805:
            goto switchD_100b0c0f8_caseD_60047805;
          case 0x60047806:
            goto switchD_100b0c0f8_caseD_60047806;
          default:
            goto switchD_100b0bb50_caseD_804;
          case 0x6004780c:
            goto switchD_100b0c0f8_caseD_6004780c;
          }
        }
        if (param_2 != 0x6004781a) goto switchD_100b0bb50_caseD_804;
        pcVar8 = "HOST_IOCTL_VERIFY_CPU_SYMMETRY";
        bVar6 = bVar3;
LAB_100b0c198:
        pcVar14 = "HOST_IOCTL_VERIFY_CPU_SYMMETRY";
        pcVar9 = pcVar8;
        goto LAB_100b0c45f;
      }
      if (param_2 < 0x6014780b) {
        if (0x600c781e < param_2) {
          if (param_2 != 0x600c781f) {
            if (param_2 != 0x60107819) goto switchD_100b0bb50_caseD_804;
            pcVar8 = "HOST_IOCTL_UPDATE_TSC_BUS_HZ";
            bVar6 = bVar3;
LAB_100b0c43b:
            pcVar14 = "HOST_IOCTL_UPDATE_TSC_BUS_HZ";
            pcVar9 = pcVar8;
            goto LAB_100b0c45f;
          }
          pcVar8 = "HOST_IOCTL_POST_INTERRUPT";
          bVar6 = bVar3;
LAB_100b0c20c:
          pcVar14 = "HOST_IOCTL_POST_INTERRUPT";
          pcVar9 = pcVar8;
          goto LAB_100b0c45f;
        }
        if (param_2 != 0x6008781e) {
          if (param_2 != 0x600c7813) goto switchD_100b0bb50_caseD_804;
          pcVar8 = "HOST_IOCTL_SET_ASYNC3_EVENT";
          bVar6 = bVar3;
LAB_100b0c419:
          pcVar14 = "HOST_IOCTL_SET_ASYNC3_EVENT";
          pcVar9 = pcVar8;
          goto LAB_100b0c45f;
        }
        pcVar8 = "HOST_IOCTL_GET_HVT_FEATURES";
        bVar6 = bVar3;
LAB_100b0c156:
        pcVar14 = "HOST_IOCTL_GET_HVT_FEATURES";
        pcVar9 = pcVar8;
        goto LAB_100b0c45f;
      }
      if (param_2 != 0x6014780b) {
        if (param_2 == 0x6020780e) {
          pcVar14 = "HOST_IOCTL_SET_KERNEL_SYMBOLS";
          pcVar9 = "HOST_IOCTL_SET_KERNEL_SYMBOLS";
          goto LAB_100b0c45f;
        }
        if (param_2 == 0x601c7801) goto LAB_100b0bd9d;
        goto switchD_100b0bb50_caseD_804;
      }
      pcVar8 = "HOST_IOCTL_SET_KERNEL_VARIABLE";
      bVar6 = bVar3;
LAB_100b0c1ca:
      pcVar14 = "HOST_IOCTL_SET_KERNEL_VARIABLE";
      pcVar9 = pcVar8;
      goto LAB_100b0c45f;
    }
    local_b0 = "IOCTL_VGPU_INIT";
    local_a8 = "IOCTL_DUMP_MONITOR";
    local_a0 = "IOCTL_PMM_WS_RECLAIM";
    local_98 = "IOCTL_PMM_WS_GET_STAT";
    local_90 = "IOCTL_GET_SMBIOS";
    local_88 = "IOCTL_POWER_SOURCE_SWITCHED";
    local_80 = "IOCTL_FREE_KERNELBUFF";
    local_78 = "IOCTL_ALLOC_KERNELBUFF";
    local_70 = "IOCTL_PMM_GET_MMSH_BASE";
    local_68 = "IOCTL_PMM_GET_BALLOON_SIZE";
    local_60 = "IOCTL_PMM_SET_BALLOON_SIZE";
    local_58 = "IOCTL_PMM_SET_QUOTA";
    pcVar8 = "IOCTL_PMM_GET_STAT";
    local_c8 = "IOCTL_QUIT";
    local_c0 = "IOCTL_STOP_LOOP";
    local_b8 = "IOCTL_INIT_MONITOR";
    pcVar10 = "IOCTL_PMM_GET_QUOTA";
    pcVar11 = "IOCTL_PMM_LOCK_PAGE";
    pcVar12 = "IOCTL_PMM_INIT";
    pcVar13 = "IOCTL_LOAD_MONITOR";
    pcVar15 = "IOCTL_PMM_UNINIT";
    pcVar16 = "IOCTL_PMM_UNLOCK_PAGE";
    pcVar9 = "IOCTL_VGPU_PIN_PAGES";
    pcVar17 = "IOCTL_PMM_SET_MAX_MEMORY_FOR_VM";
    bVar6 = bVar2;
    switch(param_2) {
    case 0x802:
      goto switchD_100b0bb50_caseD_802;
    case 0x803:
      goto switchD_100b0bb50_caseD_803;
    default:
      goto switchD_100b0bb50_caseD_804;
    case 0x80d:
      goto switchD_100b0bb50_caseD_80d;
    case 0x80e:
      goto switchD_100b0bb50_caseD_80e;
    case 0x80f:
      goto switchD_100b0bb50_caseD_80f;
    case 0x810:
      goto switchD_100b0bb50_caseD_810;
    case 0x812:
      goto switchD_100b0bb50_caseD_812;
    case 0x813:
      goto switchD_100b0bb50_caseD_813;
    case 0x814:
      goto switchD_100b0bb50_caseD_814;
    case 0x81b:
      goto switchD_100b0bb50_caseD_81b;
    case 0x827:
      goto switchD_100b0bb50_caseD_827;
    case 0x828:
      goto switchD_100b0bb50_caseD_828;
    case 0x829:
      goto switchD_100b0bb50_caseD_829;
    case 0x82a:
      goto switchD_100b0bb50_caseD_82a;
    case 0x82b:
      goto switchD_100b0bb50_caseD_82b;
    case 0x831:
      goto switchD_100b0bb50_caseD_831;
    case 0x832:
      goto switchD_100b0bb50_caseD_832;
    case 0x833:
      goto switchD_100b0bb50_caseD_833;
    case 0x834:
      goto switchD_100b0bb50_caseD_834;
    case 0x835:
      goto switchD_100b0bb50_caseD_835;
    case 0x836:
      goto switchD_100b0bb50_caseD_836;
    case 0x837:
      goto switchD_100b0bb50_caseD_837;
    case 0x838:
      goto switchD_100b0bb50_caseD_838;
    case 0x83a:
      goto switchD_100b0bb50_caseD_83a;
    }
  }
  if (param_2 != 0x601c7801) {
    return 0;
  }
  bVar5 = false;
  if (param_3[6] == 0) {
    return 0;
  }
LAB_100b0bd9d:
  uVar1 = *param_3;
  if (uVar1 < 0x7846) {
    switch(uVar1) {
    case 0x802:
      pcVar14 = "IOCTL_QUIT";
      break;
    case 0x803:
      pcVar14 = "IOCTL_INIT_MONITOR";
      break;
    default:
      goto switchD_100b0bdcb_caseD_804;
    case 0x80d:
      pcVar14 = "IOCTL_PMM_INIT";
      break;
    case 0x80e:
      pcVar14 = "IOCTL_PMM_UNINIT";
      break;
    case 0x80f:
      pcVar14 = "IOCTL_PMM_LOCK_PAGE";
      break;
    case 0x810:
      pcVar14 = "IOCTL_PMM_UNLOCK_PAGE";
      break;
    case 0x812:
      pcVar14 = "IOCTL_PMM_SET_MAX_MEMORY_FOR_VM";
      break;
    case 0x813:
      pcVar14 = "IOCTL_ALLOC_KERNELBUFF";
      break;
    case 0x814:
      pcVar14 = "IOCTL_FREE_KERNELBUFF";
      break;
    case 0x81b:
      pcVar14 = "IOCTL_LOAD_MONITOR";
      break;
    case 0x827:
      pcVar14 = "IOCTL_PMM_GET_STAT";
      break;
    case 0x828:
      pcVar14 = "IOCTL_STOP_LOOP";
      break;
    case 0x829:
      pcVar14 = "IOCTL_PMM_SET_QUOTA";
      break;
    case 0x82a:
      pcVar14 = "IOCTL_POWER_SOURCE_SWITCHED";
      break;
    case 0x82b:
      pcVar14 = "IOCTL_GET_SMBIOS";
      break;
    case 0x831:
      pcVar14 = "IOCTL_PMM_GET_QUOTA";
      break;
    case 0x832:
      pcVar14 = "IOCTL_PMM_SET_BALLOON_SIZE";
      break;
    case 0x833:
      pcVar14 = "IOCTL_PMM_GET_BALLOON_SIZE";
      break;
    case 0x834:
      pcVar14 = "IOCTL_PMM_GET_MMSH_BASE";
      break;
    case 0x835:
      pcVar14 = "IOCTL_PMM_WS_GET_STAT";
      break;
    case 0x836:
      pcVar14 = "IOCTL_PMM_WS_RECLAIM";
      break;
    case 0x837:
      pcVar14 = "IOCTL_DUMP_MONITOR";
      break;
    case 0x838:
      pcVar14 = "IOCTL_VGPU_INIT";
      break;
    case 0x83a:
      pcVar14 = "IOCTL_VGPU_PIN_PAGES";
    }
  }
  else if (uVar1 < 0x60047804) {
    if (uVar1 < 0x20107840) {
      if (uVar1 < 0x20047802) {
        if (uVar1 == 0x7846) {
          pcVar14 = "HOST_IOCTL_HYPAPI_CHECK_VERSION";
        }
        else {
          if (uVar1 != 0x7847) goto switchD_100b0bdcb_caseD_804;
          pcVar14 = "HOST_IOCTL_HYPAPI_GET_EVENTAPI";
        }
      }
      else if (uVar1 == 0x20047802) {
        pcVar14 = "HOST_IOCTL_VM_ACTIVATE_MONITOR";
      }
      else {
        if (uVar1 != 0x20087803) goto switchD_100b0bdcb_caseD_804;
        pcVar14 = "HOST_IOCTL_KICK_VCPU";
      }
    }
    else {
      if (uVar1 != 0x20107840) goto switchD_100b0bdcb_caseD_804;
      pcVar14 = "HOST_IOCTL_INIT_HYPERVISOR";
    }
  }
  else if (uVar1 < 0x6008781e) {
    if (uVar1 < 0x6004781a) {
      switch(uVar1) {
      case 0x60047804:
        pcVar14 = "HOST_IOCTL_LOCK_LPT_PORT";
        break;
      case 0x60047805:
        pcVar14 = "HOST_IOCTL_UNLOCK_LPT_PORT";
        break;
      case 0x60047806:
        pcVar14 = "HOST_IOCTL_GET_LPT_PORT_INFO";
        break;
      default:
switchD_100b0bdcb_caseD_804:
        pcVar14 = "<undefined>";
        break;
      case 0x6004780c:
        pcVar14 = "HOST_IOCTL_SET_CPU_AFFINITY";
      }
    }
    else {
      if (uVar1 != 0x6004781a) goto switchD_100b0bdcb_caseD_804;
      pcVar14 = "HOST_IOCTL_VERIFY_CPU_SYMMETRY";
    }
  }
  else if (uVar1 < 0x6014780b) {
    if (uVar1 < 0x600c781f) {
      if (uVar1 == 0x6008781e) {
        pcVar14 = "HOST_IOCTL_GET_HVT_FEATURES";
      }
      else {
        if (uVar1 != 0x600c7813) goto switchD_100b0bdcb_caseD_804;
        pcVar14 = "HOST_IOCTL_SET_ASYNC3_EVENT";
      }
    }
    else if (uVar1 == 0x600c781f) {
      pcVar14 = "HOST_IOCTL_POST_INTERRUPT";
    }
    else {
      if (uVar1 != 0x60107819) goto switchD_100b0bdcb_caseD_804;
      pcVar14 = "HOST_IOCTL_UPDATE_TSC_BUS_HZ";
    }
  }
  else if (uVar1 == 0x6014780b) {
    pcVar14 = "HOST_IOCTL_SET_KERNEL_VARIABLE";
  }
  else if (uVar1 == 0x601c7801) {
    pcVar14 = "HOST_IOCTL_VM_MAIN_REQUEST";
  }
  else {
    if (uVar1 != 0x6020780e) goto switchD_100b0bdcb_caseD_804;
    pcVar14 = "HOST_IOCTL_SET_KERNEL_SYMBOLS";
  }
  local_34 = param_3[6];
  bVar4 = bVar5;
switchD_100b0bb50_caseD_804:
  bVar6 = bVar4;
  pcVar8 = pcVar14;
  pcVar9 = pcVar8;
  if (param_2 < 0x7846) {
    pcVar10 = pcVar8;
    pcVar11 = pcVar8;
    pcVar12 = pcVar8;
    pcVar13 = pcVar8;
    pcVar15 = pcVar8;
    pcVar16 = pcVar8;
    pcVar17 = pcVar8;
    local_c8 = pcVar8;
    local_c0 = pcVar8;
    local_b8 = pcVar8;
    local_b0 = pcVar8;
    local_a8 = pcVar8;
    local_a0 = pcVar8;
    local_98 = pcVar8;
    local_90 = pcVar8;
    local_88 = pcVar8;
    local_80 = pcVar8;
    local_78 = pcVar8;
    local_70 = pcVar8;
    local_68 = pcVar8;
    local_60 = pcVar8;
    local_58 = pcVar8;
    switch(param_2) {
    case 0x802:
      goto switchD_100b0bb50_caseD_802;
    case 0x803:
switchD_100b0bb50_caseD_803:
      pcVar14 = "IOCTL_INIT_MONITOR";
      pcVar9 = local_b8;
      goto LAB_100b0c45f;
    case 0x80d:
switchD_100b0bb50_caseD_80d:
      pcVar14 = "IOCTL_PMM_INIT";
      pcVar9 = pcVar12;
      goto LAB_100b0c45f;
    case 0x80e:
switchD_100b0bb50_caseD_80e:
      pcVar14 = "IOCTL_PMM_UNINIT";
      pcVar9 = pcVar15;
      goto LAB_100b0c45f;
    case 0x80f:
switchD_100b0bb50_caseD_80f:
      pcVar14 = "IOCTL_PMM_LOCK_PAGE";
      pcVar9 = pcVar11;
      goto LAB_100b0c45f;
    case 0x810:
switchD_100b0bb50_caseD_810:
      pcVar14 = "IOCTL_PMM_UNLOCK_PAGE";
      pcVar9 = pcVar16;
      goto LAB_100b0c45f;
    case 0x812:
switchD_100b0bb50_caseD_812:
      pcVar14 = "IOCTL_PMM_SET_MAX_MEMORY_FOR_VM";
      pcVar9 = pcVar17;
      goto LAB_100b0c45f;
    case 0x813:
switchD_100b0bb50_caseD_813:
      pcVar14 = "IOCTL_ALLOC_KERNELBUFF";
      pcVar9 = local_78;
      goto LAB_100b0c45f;
    case 0x814:
switchD_100b0bb50_caseD_814:
      pcVar14 = "IOCTL_FREE_KERNELBUFF";
      pcVar9 = local_80;
      goto LAB_100b0c45f;
    case 0x81b:
switchD_100b0bb50_caseD_81b:
      pcVar14 = "IOCTL_LOAD_MONITOR";
      pcVar9 = pcVar13;
      goto LAB_100b0c45f;
    case 0x827:
switchD_100b0bb50_caseD_827:
      pcVar14 = "IOCTL_PMM_GET_STAT";
      pcVar9 = pcVar8;
      goto LAB_100b0c45f;
    case 0x828:
switchD_100b0bb50_caseD_828:
      pcVar14 = "IOCTL_STOP_LOOP";
      pcVar9 = local_c0;
      goto LAB_100b0c45f;
    case 0x829:
switchD_100b0bb50_caseD_829:
      pcVar14 = "IOCTL_PMM_SET_QUOTA";
      pcVar9 = local_58;
      goto LAB_100b0c45f;
    case 0x82a:
switchD_100b0bb50_caseD_82a:
      pcVar14 = "IOCTL_POWER_SOURCE_SWITCHED";
      pcVar9 = local_88;
      goto LAB_100b0c45f;
    case 0x82b:
switchD_100b0bb50_caseD_82b:
      pcVar14 = "IOCTL_GET_SMBIOS";
      pcVar9 = local_90;
      goto LAB_100b0c45f;
    case 0x831:
switchD_100b0bb50_caseD_831:
      pcVar14 = "IOCTL_PMM_GET_QUOTA";
      pcVar9 = pcVar10;
      goto LAB_100b0c45f;
    case 0x832:
switchD_100b0bb50_caseD_832:
      pcVar14 = "IOCTL_PMM_SET_BALLOON_SIZE";
      pcVar9 = local_60;
      goto LAB_100b0c45f;
    case 0x833:
switchD_100b0bb50_caseD_833:
      pcVar14 = "IOCTL_PMM_GET_BALLOON_SIZE";
      pcVar9 = local_68;
      goto LAB_100b0c45f;
    case 0x834:
switchD_100b0bb50_caseD_834:
      pcVar14 = "IOCTL_PMM_GET_MMSH_BASE";
      pcVar9 = local_70;
      goto LAB_100b0c45f;
    case 0x835:
switchD_100b0bb50_caseD_835:
      pcVar14 = "IOCTL_PMM_WS_GET_STAT";
      pcVar9 = local_98;
      goto LAB_100b0c45f;
    case 0x836:
switchD_100b0bb50_caseD_836:
      pcVar14 = "IOCTL_PMM_WS_RECLAIM";
      pcVar9 = local_a0;
      goto LAB_100b0c45f;
    case 0x837:
switchD_100b0bb50_caseD_837:
      pcVar14 = "IOCTL_DUMP_MONITOR";
      pcVar9 = local_a8;
      goto LAB_100b0c45f;
    case 0x838:
switchD_100b0bb50_caseD_838:
      pcVar14 = "IOCTL_VGPU_INIT";
      pcVar9 = local_b0;
      goto LAB_100b0c45f;
    case 0x83a:
switchD_100b0bb50_caseD_83a:
      pcVar14 = "IOCTL_VGPU_PIN_PAGES";
      goto LAB_100b0c45f;
    }
  }
  else if (param_2 < 0x60047804) {
    if (param_2 < 0x20107840) {
      if (param_2 < 0x20047802) {
        if (param_2 == 0x7846) {
          pcVar14 = "HOST_IOCTL_HYPAPI_CHECK_VERSION";
          goto LAB_100b0c45f;
        }
        if (param_2 == 0x7847) {
          pcVar14 = "HOST_IOCTL_HYPAPI_GET_EVENTAPI";
          goto LAB_100b0c45f;
        }
      }
      else {
        if (param_2 == 0x20047802) {
          pcVar14 = "HOST_IOCTL_VM_ACTIVATE_MONITOR";
          goto LAB_100b0c45f;
        }
        if (param_2 == 0x20087803) {
          pcVar14 = "HOST_IOCTL_KICK_VCPU";
          goto LAB_100b0c45f;
        }
      }
    }
    else if (param_2 == 0x20107840) {
      pcVar14 = "HOST_IOCTL_INIT_HYPERVISOR";
      goto LAB_100b0c45f;
    }
  }
  else if (param_2 < 0x6008781e) {
    if (param_2 < 0x6004781a) {
      pcVar10 = pcVar8;
      pcVar11 = pcVar8;
      switch(param_2) {
      case 0x60047804:
        goto switchD_100b0c0f8_caseD_60047804;
      case 0x60047805:
switchD_100b0c0f8_caseD_60047805:
        pcVar14 = "HOST_IOCTL_UNLOCK_LPT_PORT";
        goto LAB_100b0c45f;
      case 0x60047806:
switchD_100b0c0f8_caseD_60047806:
        pcVar14 = "HOST_IOCTL_GET_LPT_PORT_INFO";
        pcVar9 = pcVar8;
        goto LAB_100b0c45f;
      case 0x6004780c:
switchD_100b0c0f8_caseD_6004780c:
        pcVar14 = "HOST_IOCTL_SET_CPU_AFFINITY";
        pcVar9 = pcVar10;
        goto LAB_100b0c45f;
      }
    }
    else if (param_2 == 0x6004781a) goto LAB_100b0c198;
  }
  else if (param_2 < 0x6014780b) {
    if (param_2 < 0x600c781f) {
      if (param_2 == 0x6008781e) goto LAB_100b0c156;
      if (param_2 == 0x600c7813) goto LAB_100b0c419;
    }
    else {
      if (param_2 == 0x600c781f) goto LAB_100b0c20c;
      if (param_2 == 0x60107819) goto LAB_100b0c43b;
    }
  }
  else {
    if (param_2 == 0x6014780b) goto LAB_100b0c1ca;
    if (param_2 == 0x601c7801) {
      pcVar14 = "HOST_IOCTL_VM_MAIN_REQUEST";
      goto LAB_100b0c45f;
    }
    if (param_2 == 0x6020780e) {
      pcVar14 = "HOST_IOCTL_SET_KERNEL_SYMBOLS";
      goto LAB_100b0c45f;
    }
  }
  pcVar14 = "<undefined>";
LAB_100b0c45f:
  pcVar8 = "SUCCESS";
  if (bVar6) {
    pcVar8 = "FAILURE";
  }
  FUN_100df99c0("","ioctl",0,"   %s %s %s(code %d,%x) ptr=%p  size=0x%016x vcpu=%u",pcVar14,pcVar9,
                pcVar8,iVar7,local_34,param_3,param_4,param_5);
  return iVar7;
switchD_100b0c0f8_caseD_60047804:
  pcVar9 = pcVar11;
  pcVar14 = "HOST_IOCTL_LOCK_LPT_PORT";
  goto LAB_100b0c45f;
switchD_100b0bb50_caseD_802:
  pcVar14 = "IOCTL_QUIT";
  pcVar9 = local_c8;
  goto LAB_100b0c45f;
}

