
void FUN_100111b30(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int *local_3c;
  undefined4 local_34;
  uint local_30;
  int local_28;
  uint local_24;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = *param_2;
  local_24 = (uint)*(ushort *)((long)param_2 + 6);
  local_34 = 0;
  local_30 = 0xffffffff;
  local_48 = 0x814;
  local_3c = &local_28;
  local_44 = 8;
  local_40 = 0;
  local_20 = lVar1;
  iVar2 = FUN_100683330(param_1 + 0xc,0x601c7801,&local_48,0x1c,0);
  uVar3 = ~-(uint)(iVar2 == 0) | local_30;
  if (uVar3 == 0) goto LAB_100111d6f;
  iVar2 = *param_2;
  if (iVar2 < 500) {
    if (iVar2 < 0xaa) {
      if (iVar2 < 0x72) {
        pcVar4 = "VGA_STATE_MEMORY";
        switch(iVar2) {
        case 0x67:
          break;
        case 0x68:
          pcVar4 = "VGA_MEMORY";
          break;
        default:
          goto switchD_100111bee_caseD_69;
        case 0x6a:
          pcVar4 = "MON_MESSAGE_MEMORY";
          break;
        case 0x6b:
          pcVar4 = "HYPERSWITCH_CONFIG_BUFFER";
        }
      }
      else if (iVar2 < 0x84) {
        if (iVar2 < 0x76) {
          if (iVar2 == 0x72) {
            pcVar4 = "SPACE_SWITCHER_MEMORY";
          }
          else {
            if (iVar2 != 0x74) goto switchD_100111bee_caseD_69;
            pcVar4 = "DESCR_TAB_MEMORY";
          }
        }
        else if (iVar2 == 0x76) {
          pcVar4 = "TSS_MEMORY";
        }
        else {
          if (iVar2 != 0x7d) goto switchD_100111bee_caseD_69;
          pcVar4 = "ASYNC_MEMORY";
        }
      }
      else {
        switch(iVar2) {
        case 0x84:
          pcVar4 = "PHY_MEM_MAN_MEMORY";
          break;
        default:
          goto switchD_100111bee_caseD_69;
        case 0x86:
          pcVar4 = "PHY_PAGE_INFO_MEMORY";
          break;
        case 0x87:
          pcVar4 = "SWAP_PAGE_DESCR_MEMORY";
          break;
        case 0x88:
          pcVar4 = "PHY_PAGES_HVT_MEMORY";
          break;
        case 0x89:
          pcVar4 = "DYN_MON_MEMORY";
          break;
        case 0x8a:
          pcVar4 = "MONITOR_STACK_MEMORY";
          break;
        case 0x8d:
          pcVar4 = "DMM_DESC_MEMORY";
          break;
        case 0x8e:
          pcVar4 = "PHY_MEM_IDX";
          break;
        case 0x96:
          pcVar4 = "NET_BUFF_MEMORY";
          break;
        case 0x97:
          pcVar4 = "NET_STATE_MEMORY";
        }
      }
    }
    else {
      switch(iVar2) {
      case 0xaa:
        pcVar4 = "PRFL_MEMORY";
        break;
      case 0xab:
        pcVar4 = "DIRTY_PAGES_IDXS";
        break;
      case 0xac:
        pcVar4 = "APP_MESSAGE_MEMORY";
        break;
      case 0xad:
        pcVar4 = "IDE_REQUEST_MEMORY";
        break;
      case 0xae:
        pcVar4 = "LSI_SCSI_DEV_MEMORY";
        break;
      case 0xaf:
        pcVar4 = "LSI_SCSI_IOC_MEMORY";
        break;
      default:
switchD_100111bee_caseD_69:
        pcVar4 = "unknown memory type";
      }
    }
  }
  else if (iVar2 < 10000) {
    switch(iVar2) {
    case 500:
      pcVar4 = "APIC_PHYSICAL_MEMORY";
      break;
    default:
      goto switchD_100111bee_caseD_69;
    case 0x1f7:
      pcVar4 = "SCSI_PHYSICAL_MEMORY";
      break;
    case 0x1fd:
      pcVar4 = "VTD_API_MEMORY";
      break;
    case 0x1fe:
      pcVar4 = "VTD_PMI_MEMORY";
      break;
    case 0x200:
      pcVar4 = "RAM_INDX_MEMORY";
      break;
    case 0x201:
      pcVar4 = "DYN_MON_L4GB_MEMORY";
      break;
    case 0x202:
      pcVar4 = "HYPMON_DATA_TYPE";
      break;
    case 0x203:
      pcVar4 = "SHADOW_APIC_MEMORY";
      break;
    case 0x204:
      pcVar4 = "MSR_BITMAPS";
      break;
    case 0x205:
      pcVar4 = "PCIE_CONTROL_MEMORY";
      break;
    case 0x206:
      pcVar4 = "RING_LOG_BUFF_STATE";
      break;
    case 0x207:
      pcVar4 = "PERF_COUNTERS_BUFFER";
      break;
    case 0x208:
      pcVar4 = "SARE_DATA_BUF";
      break;
    case 0x209:
      pcVar4 = "PMM_REQ_SYNC_DATA";
      break;
    case 0x20a:
      pcVar4 = "NPT_PAGETABLE";
      break;
    case 0x20b:
      pcVar4 = "MAP_BRIGHT_SUNNY";
      break;
    case 0x20c:
      pcVar4 = "VTD_PCI_CONFIG";
      break;
    case 0x20d:
      pcVar4 = "PHY_PAGE_CACHE_MEM";
      break;
    case 0x20e:
      pcVar4 = "HOST_APIC_MEM";
      break;
    case 0x20f:
      pcVar4 = "HVT_IOPM_MEM";
      break;
    case 0x210:
      pcVar4 = "HVT_MSR_MEM";
      break;
    case 0x211:
      pcVar4 = "DEBUGGER_BUFFER";
      break;
    case 0x212:
      pcVar4 = "VGA_BIOS_ROM";
      break;
    case 0x21c:
      pcVar4 = "RE_FRAME_MEMORY";
      break;
    case 0x21d:
      pcVar4 = "RE_IBCACHE_MEMORY";
      break;
    case 0x21e:
      pcVar4 = "RE_RECOV_TABLE_MEMORY";
      break;
    case 0x226:
      pcVar4 = "E1000_BUFF_MEMORY";
      break;
    case 0x236:
      pcVar4 = "ETRACE_MEMORY";
      break;
    case 0x239:
      pcVar4 = "SWAP_RMAP_MEMORY";
      break;
    case 0x23a:
      pcVar4 = "MON_DBG_MEMORY";
      break;
    case 0x23b:
      pcVar4 = "STATS_INSTR_HASH";
      break;
    case 0x23c:
      pcVar4 = "MON_DYN_PHY_IDX_BUF";
      break;
    case 0x245:
      pcVar4 = "PV_SHARE_MEMORY";
      break;
    case 0x246:
      pcVar4 = "NATIVE_DESCR_MEMORY";
      break;
    case 0x248:
      pcVar4 = "TRACK_VESA_PAGES_BITMAP_MEMORY";
      break;
    case 0x249:
      pcVar4 = "WS_BITMAP_BUF";
      break;
    case 0x24a:
      pcVar4 = "CPU_STATE_BUF";
      break;
    case 600:
      pcVar4 = "SOUND_BUFF_MEMORY";
      break;
    case 0x25b:
      pcVar4 = "ASYNCDEV_SHAREDINFO_BUFFER";
      break;
    case 0x25c:
      pcVar4 = "PROTECTION_BITMAP_MEMORY";
      break;
    case 0x25d:
      pcVar4 = "DIRTY_PROTECTED_PAGES_RBUF";
      break;
    case 0x25e:
      pcVar4 = "VIRTIO_RING_MEMORY";
      break;
    case 0x260:
      pcVar4 = "NESTED_HVT_PAGES";
      break;
    case 0x261:
      pcVar4 = "MONEVENT_SHAREDINFO_BUFFER";
      break;
    case 0x262:
      pcVar4 = "POSTED_DESCR_MEMORY";
      break;
    case 0x263:
      pcVar4 = "VGPU_PMI_MEMORY";
    }
  }
  else if (iVar2 == 10000) {
    pcVar4 = "STATS_PER_CPU_MEMORY";
  }
  else if (iVar2 == 0x2711) {
    pcVar4 = "STATS_GLOBAL_MEMORY";
  }
  else {
    if (iVar2 != 0x2712) goto switchD_100111bee_caseD_69;
    pcVar4 = "STATS_PER_CPU_PREEMPT_MEMORY";
  }
  FUN_1008e3970("","vm",0,"IOCTL_ALLOC_KERNELBUFF failed(%u,%s) %x",iVar2,pcVar4,uVar3);
LAB_100111d6f:
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

