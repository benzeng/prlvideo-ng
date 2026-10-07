
undefined8 FUN_1000a53c0(long param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulong)in_RAX >> 0x20);
  if ((*(byte *)(param_2 + 3) & 2) == 0) {
    if (*param_2 == 0x207) {
      uVar3 = FUN_10070e6e0();
      *(undefined8 *)(param_2 + 0xc) = uVar3;
      goto LAB_1000a5466;
    }
    if (((short)param_2[1] != 0) || (*(long *)(param_2 + 0xc) != 0)) goto LAB_1000a5466;
    uVar2 = param_2[5];
    if ((uint)param_2[5] < (uint)param_2[4]) {
      uVar2 = param_2[4];
    }
    lVar4 = FUN_100544e90(uVar2 + 0xfff & 0xfffff000);
    *(long *)(param_2 + 0xc) = lVar4;
    uVar2 = (uint)(lVar4 != 0);
    if ((lVar4 != 0) && ((*(byte *)(param_2 + 3) & 4) == 0)) {
      ___bzero(lVar4,param_2[4] + 0xfffU & 0xfffff000);
    }
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x1950) + 0x80))
                      (*(long **)(param_1 + 0x1950),param_2);
  }
  if (uVar2 != 0) {
LAB_1000a5466:
    FUN_1000a62f0(param_1,param_2);
    return 1;
  }
  iVar1 = *param_2;
  if (iVar1 < 500) {
    if (0xa9 < iVar1) {
      switch(iVar1) {
      case 0xaa:
        pcVar5 = "PRFL_MEMORY";
        break;
      case 0xab:
        pcVar5 = "DIRTY_PAGES_IDXS";
        break;
      case 0xac:
        pcVar5 = "APP_MESSAGE_MEMORY";
        break;
      case 0xad:
        pcVar5 = "IDE_REQUEST_MEMORY";
        break;
      case 0xae:
        pcVar5 = "LSI_SCSI_DEV_MEMORY";
        break;
      case 0xaf:
        pcVar5 = "LSI_SCSI_IOC_MEMORY";
        break;
      default:
        goto switchD_1000a5445_caseD_69;
      }
      goto switchD_1000a5445_caseD_67;
    }
    if (iVar1 < 0x72) {
      pcVar5 = "VGA_STATE_MEMORY";
      switch(iVar1) {
      case 0x67:
        break;
      case 0x68:
        pcVar5 = "VGA_MEMORY";
        break;
      default:
        goto switchD_1000a5445_caseD_69;
      case 0x6a:
        pcVar5 = "MON_MESSAGE_MEMORY";
        break;
      case 0x6b:
        pcVar5 = "HYPERSWITCH_CONFIG_BUFFER";
      }
      goto switchD_1000a5445_caseD_67;
    }
    if (0x83 < iVar1) {
      switch(iVar1) {
      case 0x84:
        pcVar5 = "PHY_MEM_MAN_MEMORY";
        break;
      default:
        goto switchD_1000a5445_caseD_69;
      case 0x86:
        pcVar5 = "PHY_PAGE_INFO_MEMORY";
        break;
      case 0x87:
        pcVar5 = "SWAP_PAGE_DESCR_MEMORY";
        break;
      case 0x88:
        pcVar5 = "PHY_PAGES_HVT_MEMORY";
        break;
      case 0x89:
        pcVar5 = "DYN_MON_MEMORY";
        break;
      case 0x8a:
        pcVar5 = "MONITOR_STACK_MEMORY";
        break;
      case 0x8d:
        pcVar5 = "DMM_DESC_MEMORY";
        break;
      case 0x8e:
        pcVar5 = "PHY_MEM_IDX";
        break;
      case 0x96:
        pcVar5 = "NET_BUFF_MEMORY";
        break;
      case 0x97:
        pcVar5 = "NET_STATE_MEMORY";
      }
      goto switchD_1000a5445_caseD_67;
    }
    if (iVar1 < 0x76) {
      if (iVar1 == 0x72) {
        pcVar5 = "SPACE_SWITCHER_MEMORY";
        goto switchD_1000a5445_caseD_67;
      }
      if (iVar1 == 0x74) {
        pcVar5 = "DESCR_TAB_MEMORY";
        goto switchD_1000a5445_caseD_67;
      }
    }
    else {
      if (iVar1 == 0x76) {
        pcVar5 = "TSS_MEMORY";
        goto switchD_1000a5445_caseD_67;
      }
      if (iVar1 == 0x7d) {
        pcVar5 = "ASYNC_MEMORY";
        goto switchD_1000a5445_caseD_67;
      }
    }
  }
  else {
    if (iVar1 < 10000) {
      switch(iVar1) {
      case 500:
        pcVar5 = "APIC_PHYSICAL_MEMORY";
        break;
      default:
        goto switchD_1000a5445_caseD_69;
      case 0x1f7:
        pcVar5 = "SCSI_PHYSICAL_MEMORY";
        break;
      case 0x1fd:
        pcVar5 = "VTD_API_MEMORY";
        break;
      case 0x1fe:
        pcVar5 = "VTD_PMI_MEMORY";
        break;
      case 0x200:
        pcVar5 = "RAM_INDX_MEMORY";
        break;
      case 0x201:
        pcVar5 = "DYN_MON_L4GB_MEMORY";
        break;
      case 0x202:
        pcVar5 = "HYPMON_DATA_TYPE";
        break;
      case 0x203:
        pcVar5 = "SHADOW_APIC_MEMORY";
        break;
      case 0x204:
        pcVar5 = "MSR_BITMAPS";
        break;
      case 0x205:
        pcVar5 = "PCIE_CONTROL_MEMORY";
        break;
      case 0x206:
        pcVar5 = "RING_LOG_BUFF_STATE";
        break;
      case 0x207:
        pcVar5 = "PERF_COUNTERS_BUFFER";
        break;
      case 0x208:
        pcVar5 = "SARE_DATA_BUF";
        break;
      case 0x209:
        pcVar5 = "PMM_REQ_SYNC_DATA";
        break;
      case 0x20a:
        pcVar5 = "NPT_PAGETABLE";
        break;
      case 0x20b:
        pcVar5 = "MAP_BRIGHT_SUNNY";
        break;
      case 0x20c:
        pcVar5 = "VTD_PCI_CONFIG";
        break;
      case 0x20d:
        pcVar5 = "PHY_PAGE_CACHE_MEM";
        break;
      case 0x20e:
        pcVar5 = "HOST_APIC_MEM";
        break;
      case 0x20f:
        pcVar5 = "HVT_IOPM_MEM";
        break;
      case 0x210:
        pcVar5 = "HVT_MSR_MEM";
        break;
      case 0x211:
        pcVar5 = "DEBUGGER_BUFFER";
        break;
      case 0x212:
        pcVar5 = "VGA_BIOS_ROM";
        break;
      case 0x21c:
        pcVar5 = "RE_FRAME_MEMORY";
        break;
      case 0x21d:
        pcVar5 = "RE_IBCACHE_MEMORY";
        break;
      case 0x21e:
        pcVar5 = "RE_RECOV_TABLE_MEMORY";
        break;
      case 0x226:
        pcVar5 = "E1000_BUFF_MEMORY";
        break;
      case 0x236:
        pcVar5 = "ETRACE_MEMORY";
        break;
      case 0x239:
        pcVar5 = "SWAP_RMAP_MEMORY";
        break;
      case 0x23a:
        pcVar5 = "MON_DBG_MEMORY";
        break;
      case 0x23b:
        pcVar5 = "STATS_INSTR_HASH";
        break;
      case 0x23c:
        pcVar5 = "MON_DYN_PHY_IDX_BUF";
        break;
      case 0x245:
        pcVar5 = "PV_SHARE_MEMORY";
        break;
      case 0x246:
        pcVar5 = "NATIVE_DESCR_MEMORY";
        break;
      case 0x248:
        pcVar5 = "TRACK_VESA_PAGES_BITMAP_MEMORY";
        break;
      case 0x249:
        pcVar5 = "WS_BITMAP_BUF";
        break;
      case 0x24a:
        pcVar5 = "CPU_STATE_BUF";
        break;
      case 600:
        pcVar5 = "SOUND_BUFF_MEMORY";
        break;
      case 0x25b:
        pcVar5 = "ASYNCDEV_SHAREDINFO_BUFFER";
        break;
      case 0x25c:
        pcVar5 = "PROTECTION_BITMAP_MEMORY";
        break;
      case 0x25d:
        pcVar5 = "DIRTY_PROTECTED_PAGES_RBUF";
        break;
      case 0x25e:
        pcVar5 = "VIRTIO_RING_MEMORY";
        break;
      case 0x260:
        pcVar5 = "NESTED_HVT_PAGES";
        break;
      case 0x261:
        pcVar5 = "MONEVENT_SHAREDINFO_BUFFER";
        break;
      case 0x262:
        pcVar5 = "POSTED_DESCR_MEMORY";
        break;
      case 0x263:
        pcVar5 = "VGPU_PMI_MEMORY";
      }
      goto switchD_1000a5445_caseD_67;
    }
    if (iVar1 == 10000) {
      pcVar5 = "STATS_PER_CPU_MEMORY";
      goto switchD_1000a5445_caseD_67;
    }
    if (iVar1 == 0x2711) {
      pcVar5 = "STATS_GLOBAL_MEMORY";
      goto switchD_1000a5445_caseD_67;
    }
    if (iVar1 == 0x2712) {
      pcVar5 = "STATS_PER_CPU_PREEMPT_MEMORY";
      goto switchD_1000a5445_caseD_67;
    }
  }
switchD_1000a5445_caseD_69:
  pcVar5 = "unknown memory type";
switchD_1000a5445_caseD_67:
  FUN_1008e3970("","vm",0,"(%s) m_pMemPtr == NULL, size=%u flg=%x",pcVar5,param_2[4],
                CONCAT44(uVar6,param_2[3]));
  return 0;
}

