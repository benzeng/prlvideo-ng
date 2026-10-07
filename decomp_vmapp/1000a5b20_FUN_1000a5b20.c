
void FUN_1000a5b20(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  lVar1 = FUN_1000e9a40(*(undefined8 *)(param_1 + 0x1158),param_2,param_3 & 0xffff);
  if (lVar1 != 0) {
    if ((*(long *)(lVar1 + 0x28) == 0) && (*(long *)(lVar1 + 0x30) == 0)) {
      return;
    }
    FUN_1000a6580(param_1,lVar1);
    if ((*(byte *)(lVar1 + 0xc) & 2) == 0) {
      if (*(short *)(lVar1 + 4) == 0) {
        uVar3 = *(uint *)(lVar1 + 0x14);
        if (*(uint *)(lVar1 + 0x14) < *(uint *)(lVar1 + 0x10)) {
          uVar3 = *(uint *)(lVar1 + 0x10);
        }
        FUN_100544ef0(*(undefined8 *)(lVar1 + 0x30),uVar3 + 0xfff & 0xfffff000);
      }
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x1950) + 0x88))(*(long **)(param_1 + 0x1950),lVar1);
      *(undefined8 *)(lVar1 + 0x28) = 0;
    }
    *(undefined8 *)(lVar1 + 0x30) = 0;
    return;
  }
  iVar4 = (int)param_2;
  if (iVar4 < 500) {
    if (0xa9 < iVar4) {
      switch(iVar4) {
      case 0xaa:
        pcVar2 = "PRFL_MEMORY";
        break;
      case 0xab:
        pcVar2 = "DIRTY_PAGES_IDXS";
        break;
      case 0xac:
        pcVar2 = "APP_MESSAGE_MEMORY";
        break;
      case 0xad:
        pcVar2 = "IDE_REQUEST_MEMORY";
        break;
      case 0xae:
        pcVar2 = "LSI_SCSI_DEV_MEMORY";
        break;
      case 0xaf:
        pcVar2 = "LSI_SCSI_IOC_MEMORY";
        break;
      default:
        goto switchD_1000a5be3_caseD_69;
      }
      goto switchD_1000a5be3_caseD_67;
    }
    if (iVar4 < 0x72) {
      pcVar2 = "VGA_STATE_MEMORY";
      switch(iVar4) {
      case 0x67:
        break;
      case 0x68:
        pcVar2 = "VGA_MEMORY";
        break;
      default:
        goto switchD_1000a5be3_caseD_69;
      case 0x6a:
        pcVar2 = "MON_MESSAGE_MEMORY";
        break;
      case 0x6b:
        pcVar2 = "HYPERSWITCH_CONFIG_BUFFER";
      }
      goto switchD_1000a5be3_caseD_67;
    }
    if (0x83 < iVar4) {
      switch(iVar4) {
      case 0x84:
        pcVar2 = "PHY_MEM_MAN_MEMORY";
        break;
      default:
        goto switchD_1000a5be3_caseD_69;
      case 0x86:
        pcVar2 = "PHY_PAGE_INFO_MEMORY";
        break;
      case 0x87:
        pcVar2 = "SWAP_PAGE_DESCR_MEMORY";
        break;
      case 0x88:
        pcVar2 = "PHY_PAGES_HVT_MEMORY";
        break;
      case 0x89:
        pcVar2 = "DYN_MON_MEMORY";
        break;
      case 0x8a:
        pcVar2 = "MONITOR_STACK_MEMORY";
        break;
      case 0x8d:
        pcVar2 = "DMM_DESC_MEMORY";
        break;
      case 0x8e:
        pcVar2 = "PHY_MEM_IDX";
        break;
      case 0x96:
        pcVar2 = "NET_BUFF_MEMORY";
        break;
      case 0x97:
        pcVar2 = "NET_STATE_MEMORY";
      }
      goto switchD_1000a5be3_caseD_67;
    }
    if (iVar4 < 0x76) {
      if (iVar4 == 0x72) {
        pcVar2 = "SPACE_SWITCHER_MEMORY";
        goto switchD_1000a5be3_caseD_67;
      }
      if (iVar4 == 0x74) {
        pcVar2 = "DESCR_TAB_MEMORY";
        goto switchD_1000a5be3_caseD_67;
      }
    }
    else {
      if (iVar4 == 0x76) {
        pcVar2 = "TSS_MEMORY";
        goto switchD_1000a5be3_caseD_67;
      }
      if (iVar4 == 0x7d) {
        pcVar2 = "ASYNC_MEMORY";
        goto switchD_1000a5be3_caseD_67;
      }
    }
  }
  else {
    if (iVar4 < 10000) {
      switch(iVar4) {
      case 500:
        pcVar2 = "APIC_PHYSICAL_MEMORY";
        break;
      default:
        goto switchD_1000a5be3_caseD_69;
      case 0x1f7:
        pcVar2 = "SCSI_PHYSICAL_MEMORY";
        break;
      case 0x1fd:
        pcVar2 = "VTD_API_MEMORY";
        break;
      case 0x1fe:
        pcVar2 = "VTD_PMI_MEMORY";
        break;
      case 0x200:
        pcVar2 = "RAM_INDX_MEMORY";
        break;
      case 0x201:
        pcVar2 = "DYN_MON_L4GB_MEMORY";
        break;
      case 0x202:
        pcVar2 = "HYPMON_DATA_TYPE";
        break;
      case 0x203:
        pcVar2 = "SHADOW_APIC_MEMORY";
        break;
      case 0x204:
        pcVar2 = "MSR_BITMAPS";
        break;
      case 0x205:
        pcVar2 = "PCIE_CONTROL_MEMORY";
        break;
      case 0x206:
        pcVar2 = "RING_LOG_BUFF_STATE";
        break;
      case 0x207:
        pcVar2 = "PERF_COUNTERS_BUFFER";
        break;
      case 0x208:
        pcVar2 = "SARE_DATA_BUF";
        break;
      case 0x209:
        pcVar2 = "PMM_REQ_SYNC_DATA";
        break;
      case 0x20a:
        pcVar2 = "NPT_PAGETABLE";
        break;
      case 0x20b:
        pcVar2 = "MAP_BRIGHT_SUNNY";
        break;
      case 0x20c:
        pcVar2 = "VTD_PCI_CONFIG";
        break;
      case 0x20d:
        pcVar2 = "PHY_PAGE_CACHE_MEM";
        break;
      case 0x20e:
        pcVar2 = "HOST_APIC_MEM";
        break;
      case 0x20f:
        pcVar2 = "HVT_IOPM_MEM";
        break;
      case 0x210:
        pcVar2 = "HVT_MSR_MEM";
        break;
      case 0x211:
        pcVar2 = "DEBUGGER_BUFFER";
        break;
      case 0x212:
        pcVar2 = "VGA_BIOS_ROM";
        break;
      case 0x21c:
        pcVar2 = "RE_FRAME_MEMORY";
        break;
      case 0x21d:
        pcVar2 = "RE_IBCACHE_MEMORY";
        break;
      case 0x21e:
        pcVar2 = "RE_RECOV_TABLE_MEMORY";
        break;
      case 0x226:
        pcVar2 = "E1000_BUFF_MEMORY";
        break;
      case 0x236:
        pcVar2 = "ETRACE_MEMORY";
        break;
      case 0x239:
        pcVar2 = "SWAP_RMAP_MEMORY";
        break;
      case 0x23a:
        pcVar2 = "MON_DBG_MEMORY";
        break;
      case 0x23b:
        pcVar2 = "STATS_INSTR_HASH";
        break;
      case 0x23c:
        pcVar2 = "MON_DYN_PHY_IDX_BUF";
        break;
      case 0x245:
        pcVar2 = "PV_SHARE_MEMORY";
        break;
      case 0x246:
        pcVar2 = "NATIVE_DESCR_MEMORY";
        break;
      case 0x248:
        pcVar2 = "TRACK_VESA_PAGES_BITMAP_MEMORY";
        break;
      case 0x249:
        pcVar2 = "WS_BITMAP_BUF";
        break;
      case 0x24a:
        pcVar2 = "CPU_STATE_BUF";
        break;
      case 600:
        pcVar2 = "SOUND_BUFF_MEMORY";
        break;
      case 0x25b:
        pcVar2 = "ASYNCDEV_SHAREDINFO_BUFFER";
        break;
      case 0x25c:
        pcVar2 = "PROTECTION_BITMAP_MEMORY";
        break;
      case 0x25d:
        pcVar2 = "DIRTY_PROTECTED_PAGES_RBUF";
        break;
      case 0x25e:
        pcVar2 = "VIRTIO_RING_MEMORY";
        break;
      case 0x260:
        pcVar2 = "NESTED_HVT_PAGES";
        break;
      case 0x261:
        pcVar2 = "MONEVENT_SHAREDINFO_BUFFER";
        break;
      case 0x262:
        pcVar2 = "POSTED_DESCR_MEMORY";
        break;
      case 0x263:
        pcVar2 = "VGPU_PMI_MEMORY";
      }
      goto switchD_1000a5be3_caseD_67;
    }
    if (iVar4 == 10000) {
      pcVar2 = "STATS_PER_CPU_MEMORY";
      goto switchD_1000a5be3_caseD_67;
    }
    if (iVar4 == 0x2711) {
      pcVar2 = "STATS_GLOBAL_MEMORY";
      goto switchD_1000a5be3_caseD_67;
    }
    if (iVar4 == 0x2712) {
      pcVar2 = "STATS_PER_CPU_PREEMPT_MEMORY";
      goto switchD_1000a5be3_caseD_67;
    }
  }
switchD_1000a5be3_caseD_69:
  pcVar2 = "unknown memory type";
switchD_1000a5be3_caseD_67:
  FUN_1008e3970("","vm",0,"Free mon buf: failed to find %u,%u(%s)",param_2 & 0xffffffff,param_3,
                pcVar2);
  return;
}

