
undefined8 FUN_1000a4cd0(long param_1,ulong param_2,uint param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  int iVar4;
  
  lVar1 = FUN_1000e9a40(*(undefined8 *)(param_1 + 0x1158),param_2,param_3 & 0xffff);
  if (lVar1 != 0) {
    if (param_4 != 0) {
      *(int *)(lVar1 + 0x10) = param_4;
    }
    uVar2 = FUN_1000a53c0(param_1,lVar1);
    return uVar2;
  }
  iVar4 = (int)param_2;
  if (iVar4 < 500) {
    if (0xa9 < iVar4) {
      switch(iVar4) {
      case 0xaa:
        pcVar3 = "PRFL_MEMORY";
        break;
      case 0xab:
        pcVar3 = "DIRTY_PAGES_IDXS";
        break;
      case 0xac:
        pcVar3 = "APP_MESSAGE_MEMORY";
        break;
      case 0xad:
        pcVar3 = "IDE_REQUEST_MEMORY";
        break;
      case 0xae:
        pcVar3 = "LSI_SCSI_DEV_MEMORY";
        break;
      case 0xaf:
        pcVar3 = "LSI_SCSI_IOC_MEMORY";
        break;
      default:
        goto switchD_1000a4d5e_caseD_69;
      }
      goto switchD_1000a4d5e_caseD_67;
    }
    if (iVar4 < 0x72) {
      pcVar3 = "VGA_STATE_MEMORY";
      switch(iVar4) {
      case 0x67:
        break;
      case 0x68:
        pcVar3 = "VGA_MEMORY";
        break;
      default:
        goto switchD_1000a4d5e_caseD_69;
      case 0x6a:
        pcVar3 = "MON_MESSAGE_MEMORY";
        break;
      case 0x6b:
        pcVar3 = "HYPERSWITCH_CONFIG_BUFFER";
      }
      goto switchD_1000a4d5e_caseD_67;
    }
    if (0x83 < iVar4) {
      switch(iVar4) {
      case 0x84:
        pcVar3 = "PHY_MEM_MAN_MEMORY";
        break;
      default:
        goto switchD_1000a4d5e_caseD_69;
      case 0x86:
        pcVar3 = "PHY_PAGE_INFO_MEMORY";
        break;
      case 0x87:
        pcVar3 = "SWAP_PAGE_DESCR_MEMORY";
        break;
      case 0x88:
        pcVar3 = "PHY_PAGES_HVT_MEMORY";
        break;
      case 0x89:
        pcVar3 = "DYN_MON_MEMORY";
        break;
      case 0x8a:
        pcVar3 = "MONITOR_STACK_MEMORY";
        break;
      case 0x8d:
        pcVar3 = "DMM_DESC_MEMORY";
        break;
      case 0x8e:
        pcVar3 = "PHY_MEM_IDX";
        break;
      case 0x96:
        pcVar3 = "NET_BUFF_MEMORY";
        break;
      case 0x97:
        pcVar3 = "NET_STATE_MEMORY";
      }
      goto switchD_1000a4d5e_caseD_67;
    }
    if (iVar4 < 0x76) {
      if (iVar4 == 0x72) {
        pcVar3 = "SPACE_SWITCHER_MEMORY";
        goto switchD_1000a4d5e_caseD_67;
      }
      if (iVar4 == 0x74) {
        pcVar3 = "DESCR_TAB_MEMORY";
        goto switchD_1000a4d5e_caseD_67;
      }
    }
    else {
      if (iVar4 == 0x76) {
        pcVar3 = "TSS_MEMORY";
        goto switchD_1000a4d5e_caseD_67;
      }
      if (iVar4 == 0x7d) {
        pcVar3 = "ASYNC_MEMORY";
        goto switchD_1000a4d5e_caseD_67;
      }
    }
  }
  else {
    if (iVar4 < 10000) {
      switch(iVar4) {
      case 500:
        pcVar3 = "APIC_PHYSICAL_MEMORY";
        break;
      default:
        goto switchD_1000a4d5e_caseD_69;
      case 0x1f7:
        pcVar3 = "SCSI_PHYSICAL_MEMORY";
        break;
      case 0x1fd:
        pcVar3 = "VTD_API_MEMORY";
        break;
      case 0x1fe:
        pcVar3 = "VTD_PMI_MEMORY";
        break;
      case 0x200:
        pcVar3 = "RAM_INDX_MEMORY";
        break;
      case 0x201:
        pcVar3 = "DYN_MON_L4GB_MEMORY";
        break;
      case 0x202:
        pcVar3 = "HYPMON_DATA_TYPE";
        break;
      case 0x203:
        pcVar3 = "SHADOW_APIC_MEMORY";
        break;
      case 0x204:
        pcVar3 = "MSR_BITMAPS";
        break;
      case 0x205:
        pcVar3 = "PCIE_CONTROL_MEMORY";
        break;
      case 0x206:
        pcVar3 = "RING_LOG_BUFF_STATE";
        break;
      case 0x207:
        pcVar3 = "PERF_COUNTERS_BUFFER";
        break;
      case 0x208:
        pcVar3 = "SARE_DATA_BUF";
        break;
      case 0x209:
        pcVar3 = "PMM_REQ_SYNC_DATA";
        break;
      case 0x20a:
        pcVar3 = "NPT_PAGETABLE";
        break;
      case 0x20b:
        pcVar3 = "MAP_BRIGHT_SUNNY";
        break;
      case 0x20c:
        pcVar3 = "VTD_PCI_CONFIG";
        break;
      case 0x20d:
        pcVar3 = "PHY_PAGE_CACHE_MEM";
        break;
      case 0x20e:
        pcVar3 = "HOST_APIC_MEM";
        break;
      case 0x20f:
        pcVar3 = "HVT_IOPM_MEM";
        break;
      case 0x210:
        pcVar3 = "HVT_MSR_MEM";
        break;
      case 0x211:
        pcVar3 = "DEBUGGER_BUFFER";
        break;
      case 0x212:
        pcVar3 = "VGA_BIOS_ROM";
        break;
      case 0x21c:
        pcVar3 = "RE_FRAME_MEMORY";
        break;
      case 0x21d:
        pcVar3 = "RE_IBCACHE_MEMORY";
        break;
      case 0x21e:
        pcVar3 = "RE_RECOV_TABLE_MEMORY";
        break;
      case 0x226:
        pcVar3 = "E1000_BUFF_MEMORY";
        break;
      case 0x236:
        pcVar3 = "ETRACE_MEMORY";
        break;
      case 0x239:
        pcVar3 = "SWAP_RMAP_MEMORY";
        break;
      case 0x23a:
        pcVar3 = "MON_DBG_MEMORY";
        break;
      case 0x23b:
        pcVar3 = "STATS_INSTR_HASH";
        break;
      case 0x23c:
        pcVar3 = "MON_DYN_PHY_IDX_BUF";
        break;
      case 0x245:
        pcVar3 = "PV_SHARE_MEMORY";
        break;
      case 0x246:
        pcVar3 = "NATIVE_DESCR_MEMORY";
        break;
      case 0x248:
        pcVar3 = "TRACK_VESA_PAGES_BITMAP_MEMORY";
        break;
      case 0x249:
        pcVar3 = "WS_BITMAP_BUF";
        break;
      case 0x24a:
        pcVar3 = "CPU_STATE_BUF";
        break;
      case 600:
        pcVar3 = "SOUND_BUFF_MEMORY";
        break;
      case 0x25b:
        pcVar3 = "ASYNCDEV_SHAREDINFO_BUFFER";
        break;
      case 0x25c:
        pcVar3 = "PROTECTION_BITMAP_MEMORY";
        break;
      case 0x25d:
        pcVar3 = "DIRTY_PROTECTED_PAGES_RBUF";
        break;
      case 0x25e:
        pcVar3 = "VIRTIO_RING_MEMORY";
        break;
      case 0x260:
        pcVar3 = "NESTED_HVT_PAGES";
        break;
      case 0x261:
        pcVar3 = "MONEVENT_SHAREDINFO_BUFFER";
        break;
      case 0x262:
        pcVar3 = "POSTED_DESCR_MEMORY";
        break;
      case 0x263:
        pcVar3 = "VGPU_PMI_MEMORY";
      }
      goto switchD_1000a4d5e_caseD_67;
    }
    if (iVar4 == 10000) {
      pcVar3 = "STATS_PER_CPU_MEMORY";
      goto switchD_1000a4d5e_caseD_67;
    }
    if (iVar4 == 0x2711) {
      pcVar3 = "STATS_GLOBAL_MEMORY";
      goto switchD_1000a4d5e_caseD_67;
    }
    if (iVar4 == 0x2712) {
      pcVar3 = "STATS_PER_CPU_PREEMPT_MEMORY";
      goto switchD_1000a4d5e_caseD_67;
    }
  }
switchD_1000a4d5e_caseD_69:
  pcVar3 = "unknown memory type";
switchD_1000a4d5e_caseD_67:
  FUN_1008e3970("","vm",0,"Alloc mon buf: failed to find %u,%u(%s)",param_2 & 0xffffffff,param_3,
                pcVar3);
  return 0;
}

