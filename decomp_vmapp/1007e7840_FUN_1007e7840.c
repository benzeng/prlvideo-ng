
char * FUN_1007e7840(int param_1)

{
  char *pcVar1;
  
  if (param_1 < 0x310c4) {
    if (param_1 < 0x18768) {
      pcVar1 = "PET_VM_INF_UNINITIALIZED_EVENT_CODE";
      switch(param_1) {
      case 100000:
        goto switchD_1007e7878_caseD_186a0;
      case 0x186a1:
        return "PET_DSP_EVT_VM_STATE_CHANGED";
      case 0x186a2:
        return "PET_DSP_EVT_VM_CONFIG_CHANGED";
      case 0x186a3:
        return "PET_DSP_EVT_VM_DEV_STATE_CHANGED";
      case 0x186a4:
        return "PET_DSP_EVT_VM_CREATED";
      case 0x186a5:
        return "PET_DSP_EVT_VM_ADDED";
      case 0x186a6:
        return "PET_DSP_EVT_VM_DELETED";
      case 0x186a7:
        return "PET_DSP_EVT_VM_STARTED";
      case 0x186a8:
        return "PET_DSP_EVT_VM_STOPPED";
      case 0x186a9:
        return "PET_DSP_EVT_VM_ABORTED";
      case 0x186aa:
        return "PET_DSP_EVT_VM_RESETED";
      case 0x186ab:
        return "PET_DSP_EVT_VM_SUSPENDING";
      case 0x186ac:
        return "PET_DSP_EVT_VM_SUSPENDED";
      case 0x186ad:
        return "PET_DSP_EVT_VM_RESUMING";
      case 0x186ae:
        return "PET_DSP_EVT_VM_RESUMED";
      case 0x186af:
        return "PET_DSP_EVT_VM_START_IO_FLOW";
      case 0x186b0:
        return "PET_DSP_EVT_VM_SNAPSHOTED";
      case 0x186b1:
        return "PET_DSP_EVT_VM_RESTORED";
      case 0x186b2:
        return "PET_DSP_EVT_VM_NET_RECONNECTED";
      case 0x186b3:
        return "PET_DSP_EVT_VM_PAUSED";
      case 0x186b4:
        return "PET_DSP_EVT_VM_CONTINUED";
      case 0x186b5:
        return "PET_DSP_EVT_VM_CONFIG_APPLIED";
      case 0x186b6:
        return "PET_DSP_EVT_VM_STATISTICS_UPDATED";
      case 0x186b7:
        return "PET_DSP_EVT_VM_PROBLEM_REPORT_CREATED";
      case 0x186b8:
        return "PET_DSP_EVT_VM_ABOUT_TO_RESET";
      case 0x186b9:
        return "PET_DSP_EVT_VM_SECURITY_CHANGED";
      case 0x186ba:
        return "PET_DSP_EVT_VM_UNREGISTERED";
      case 0x186bb:
        return "PET_DSP_EVT_VM_REMOTE_DEV_READY_TO_START";
      case 0x186bc:
        return "PET_VM_EVT_VM_CONFIG_CHANGED";
      case 0x186bd:
        return "PET_VM_EVT_REQUEST_FILE_OPEN";
      case 0x186be:
        return "PET_DSP_EVT_VM_MIGRATE_STARTED";
      case 0x186bf:
        return "PET_DSP_EVT_VM_MIGRATE_CANCELLED";
      case 0x186c0:
        return "PET_DSP_EVT_VM_MIGRATE_FINISHED";
      case 0x186c1:
        return "PET_DSP_EVT_VM_MIGRATE_PROGRESS_CHANGED";
      case 0x186c2:
        return "PET_DSP_EVT_VM_SNAPSHOTING";
      case 0x186c3:
        return "PET_DSP_EVT_VM_RESTORING";
      case 0x186c4:
        return "PET_DSP_EVT_VM_SNAPSHOTS_TREE_CHANGED";
      case 0x186c5:
        return "PET_DSP_EVT_VM_DELETING_STATE";
      case 0x186c6:
        return "PET_DSP_EVT_VM_STATE_DELETED";
      case 0x186c7:
        return "PET_DSP_EVT_VM_ABOUT_TO_START_DEINIT";
      case 0x186c8:
        return "PET_DSP_EVT_VM_ABOUT_TO_START_INIT";
      case 0x186c9:
        return "PET_DSP_EVT_VM_MEMORY_SWAPPING_STARTED";
      case 0x186ca:
        return "PET_DSP_EVT_VM_MEMORY_SWAPPING_FINISHED";
      case 0x186cb:
        return "PET_VM_EVT_UNMOUNT";
      case 0x186cc:
        return "PET_VM_EVT_MOUNT";
      case 0x186cd:
        return "PET_DSP_EVT_REBOOT_HOST";
      case 0x186ce:
        return "PET_DSP_EVT_REBOOT_HOST_MANUAL_TO_INIT_VTD_DEVICES";
      case 0x186cf:
        return "PET_DSP_EVT_BACKUP_STARTED";
      case 0x186d0:
        return "PET_DSP_EVT_BACKUP_CANCELLED";
      case 0x186d1:
        return "PET_DSP_EVT_CREATE_BACKUP_FINISHED";
      case 0x186d2:
        return "PET_DSP_EVT_BACKUP_PROGRESS_CHANGED";
      case 0x186d3:
        return "PET_DSP_EVT_JOB_PROGRESS_CHANGED";
      case 0x186d4:
        return "PET_DSP_EVT_RESTORE_PROGRESS_CHANGED";
      case 0x186d5:
        return "PET_DSP_EVT_DISK_RESIZE_STARTED";
      case 0x186d6:
        return "PET_DSP_EVT_DISK_RESIZE_FINISHED";
      case 0x186d7:
        return "PET_DSP_EVT_DISK_RESIZE_PROGRESS_CHANGED";
      case 0x186d8:
        return "PET_DSP_EVT_VM_ADDITION_STATE_CHANGED";
      case 0x186d9:
        return "PET_DSP_EVT_RESTORE_BACKUP_FINISHED";
      case 0x186da:
        return "PET_DSP_EVT_REMOVE_BACKUP_FINISHED";
      case 0x186db:
        return "PET_DSP_EVT_VM_MIGRATE_CANCELLED_DISP";
      case 0x186dc:
        return "PET_DSP_EVT_VM_MIGRATE_FINISHED_DISP";
      case 0x186dd:
        return "PET_DSP_EVT_TIME_MACHINE_BACKUP_IS_OVER";
      case 0x186de:
        return "PET_DSP_EVT_CONVERSION_DISKS_PROGRESS_CHANGED";
      case 0x186df:
        return "PET_DSP_EVT_CONVERSION_DISKS_PROGRESS_FINISHED";
      case 0x186e0:
        return "PET_DSP_EVT_CONVERT_THIRD_PARTY_PROGRESS_CHANGED";
      case 0x186e1:
        return "PET_DSP_EVT_CONNECTED_TO_PROXY";
      case 0x186e2:
        return "PET_DSP_EVT_DISCONNECTED_FROM_PROXY";
      case 0x186e3:
        return "PET_DSP_EVT_CONNECTING_TO_PROXY";
      case 0x186e4:
        return "PET_DSP_EVT_RECONFIG_VM_PROGRESS_CHANGED";
      case 0x186e5:
        return "PET_DSP_EVT_VM_MIGRATE_WAIT_REMOUNT";
      case 0x186e6:
        return "PET_DSP_EVT_VM_CONFIG_APPLY_FINISHED";
      case 0x186e7:
        return "PET_DSP_EVT_VM_IO_CLIENT_STATISTICTS";
      case 0x186e8:
        return "PET_DSP_EVT_VM_SET_HOST_TIME";
      case 0x186e9:
        return "PET_DSP_EVT_VM_LOW_HOST_MEMORY";
      case 0x186ea:
        return "PET_DSP_EVT_VM_MAC_OS_VER";
      case 0x186eb:
        return "PET_DSP_EVT_VM_PAUSED_BY_HOST_SLEEP";
      case 0x186ec:
        return "PET_DSP_EVT_VM_CONTINUED_BY_HOST_WAKEUP";
      case 0x186ed:
        return "PET_DSP_EVT_VM_FROZEN";
      case 0x186ee:
        return "PET_DSP_EVT_VM_UNFROZEN";
      case 0x186ef:
        return "PET_DSP_EVT_CONNECTION_CLIENT_INFO_WAS_SET";
      case 0x186f0:
        return "PET_DSP_EVT_CONNECTION_WAS_CLOSED";
      case 0x186f1:
        return "PET_DSP_EVT_HOST_CLEANUP";
      case 0x186f2:
        return "PET_DSP_EVT_HTTP_PROXY_AUTH_REQUIRED";
      case 0x186f3:
        return "PET_DSP_EVT_VM_DEBUGGER_EVENT";
      case 0x186f4:
        return "PET_DSP_EVT_VM_OS_CHANGED";
      case 0x18704:
        return "PET_DSP_EVT_OP_ACCEPTED";
      case 0x18705:
        return "PET_DSP_EVT_OP_REJECTED";
      case 0x18706:
        return "PET_DSP_EVT_OP_RESULT";
      }
    }
    else if (param_1 < 200000) {
      if (param_1 < 0x188f8) {
        if (param_1 < 0x18894) {
          if (param_1 < 0x18830) {
            if (param_1 < 0x18769) {
              return "PET_DSP_EVT_DIR_STATE_CHANGED";
            }
            if (param_1 < 0x1876a) {
              return "PET_DSP_EVT_HOST_STATISTICS_UPDATED";
            }
            if (param_1 < 0x187cd) {
              if (param_1 == 0x1876a) {
                return "PET_DSP_EVT_HW_CONFIG_CHANGED";
              }
              if (param_1 == 0x187cc) {
                return "PET_DSP_EVT_CLIENT_CONNECTED";
              }
            }
            else {
              if (param_1 == 0x187cd) {
                return "PET_DSP_EVT_CLIENT_DISCONNECTED";
              }
              if (param_1 == 0x187ce) {
                return "PET_DSP_EVT_CLIENT_REJECTED";
              }
            }
          }
          else {
            switch(param_1) {
            case 0x18830:
              return "PET_DSP_EVT_FOUND_LOST_VM_CONFIG";
            case 0x18831:
              return "PET_DSP_EVT_HAS_EVENT";
            case 0x18832:
              return "PET_DSP_EVT_RECONNECT";
            case 0x18833:
              return "PET_DSP_EVT_DISP_CONNECTION_CLOSED";
            case 0x18834:
              return "PET_DSP_EVT_DISP_SHUTDOWN";
            }
          }
        }
        else {
          switch(param_1) {
          case 0x18894:
            return "PET_DSP_EVT_USER_PROFILE_CHANGED";
          case 0x18895:
            return "PET_DSP_EVT_COMMON_PREFS_CHANGED";
          case 0x18896:
            return "PET_DSP_EVT_VM_MESSAGE";
          case 0x18897:
            return "PET_DSP_EVT_VM_QUESTION";
          case 0x18898:
            return "PET_JOB_DELETE_VM_PROGRESS_CHANGED";
          case 0x18899:
            return "PET_VM_INF_START_FILE_COPYING";
          case 0x1889a:
            return "PET_VM_INF_END_FILE_COPYING";
          case 0x1889b:
            return "PET_DSP_EVT_ERROR_MESSAGE";
          case 0x1889c:
            return "PET_DSP_EVT_WARNING_MESSAGE";
          case 0x1889d:
            return "PET_JOB_HDD_CREATE_PROGRESS_CHANGED";
          case 0x1889e:
            return "PET_JOB_FILE_COPY_PROGRESS_CHANGED";
          case 0x1889f:
            return "PET_JOB_SUSPEND_PROGRESS_CHANGED";
          case 0x188a0:
            return "PET_JOB_RESUME_PROGRESS_CHANGED";
          case 0x188a1:
            return "PET_DSP_EVT_ANSWER_TO_VM_WAS_DONE";
          case 0x188a2:
            return "PET_DSP_EVT_LICENSE_CHANGED";
          case 0x188a3:
            return "PET_JOB_CREATE_SNAPSHOT_PROGRESS_CHANGED";
          case 0x188a4:
            return "PET_JOB_SWITCH_TO_SNAPSHOT_PROGRESS_CHANGED";
          case 0x188a5:
            return "PET_JOB_DELETE_SNAPSHOT_PROGRESS_CHANGED";
          case 0x188a6:
            return "PET_JOB_COMMIT_UNFINISHED_DISK_OP_PROGRESS_CHANGED";
          case 0x188a7:
            return "PET_DSP_EVT_COMMIT_UNFINISHED_DISK_OP_STARTED";
          case 0x188a8:
            return "PET_DSP_EVT_COMMIT_UNFINISHED_DISK_OP_FINISHED";
          case 0x188a9:
            return "PET_DSP_EVT_VM_ENCRYPT_PROGRESS_CHANGED";
          case 0x188aa:
            return "PET_DSP_EVT_VM_DECRYPT_PROGRESS_CHANGED";
          case 0x188ab:
            return "PET_JOB_STAGE_PROGRESS_CHANGED";
          case 0x188ac:
            return "PET_VM_INF_START_BUNCH_COPYING";
          case 0x188ad:
            return "PET_VM_INF_END_BUNCH_COPYING";
          case 0x188ae:
            return "PET_DSP_EVT_LICENSE_WAS_DEACTIVATED";
          case 0x188af:
            return "PET_DSP_EVT_VM_REQUEST";
          case 0x188b0:
            return "PET_DSP_EVT_SERVER_INFO_CHANGED";
          case 0x188b1:
            return "PET_DSP_EVT_FEATURE_MATRIX_CHANGED";
          case 0x188b2:
            return "PET_DSP_EVT_PWD_PROTECTION_STATE_CHANGED";
          }
        }
      }
      else if (param_1 < 0x189c0) {
        if (param_1 < 0x1895c) {
          if (param_1 == 0x188f8) {
            return "PET_DSP_EVT_SMC_USER_FORCE_DISCONNECTED";
          }
          if (param_1 == 0x188f9) {
            return "PET_DSP_EVT_SMC_CANCEL_USER_COMMAND";
          }
          if (param_1 == 0x188fa) {
            return "PET_DSP_EVT_SMC_DISPATCHER_SHUTDOWN";
          }
        }
        else {
          switch(param_1) {
          case 0x1895c:
            return "PET_IO_SCREEN_SIZE";
          case 0x1895e:
            return "PET_IO_SLIDING_MOUSE_FLAG";
          case 0x1895f:
            return "PET_IO_DEVICE_IS_IN_USE";
          case 0x18960:
            return "PET_IO_KEYBOARD_LEDS";
          case 0x18961:
            return "PET_IO_STATE";
          case 0x18962:
            return "PET_IO_SCREEN_CAPTURED";
          case 0x18963:
            return "PET_IO_BEFORE_SCREEN_SIZE";
          case 0x18964:
            return "PET_IO_REMOTE_COMMAND";
          case 0x18965:
            return "PET_IO_MOUSE_CURSOR_CHANGED";
          case 0x18966:
            return "PET_IO_MOUSE_CURSOR_HID";
          case 0x18967:
            return "PET_IO_MOUSE_CURSOR_SET";
          case 0x18968:
            return "PET_IO_DYNRES_TOOL_STATUS";
          case 0x18969:
            return "PET_IO_TOOLS_UTILITY_COMMAND";
          case 0x1896a:
            return "PET_IO_TOOLS_VM_SHUTDOWN";
          case 0x1896b:
            return "PET_IO_TOOLS_CLIPBOARD_DATA";
          case 0x1896c:
            return "PET_IO_SCREEN_SURFACE_DETACHED";
          case 0x1896d:
            return "PET_IO_TOOLS_SIA_DATA";
          case 0x1896e:
            return "PET_IO_TOOLS_VMCTG_COMMAND";
          case 0x1896f:
            return "PET_IO_TOOLS_DRAGDROP_DATA";
          case 0x18970:
            return "PET_IO_TOOLS_GENERAL_COMMAND";
          case 0x18971:
            return "PET_IO_TOOLS_DESKTOP_UTILITY_STATE";
          case 0x18972:
            return "PET_IO_DISPLAY_SCREEN_SIZE";
          case 0x18973:
            return "PET_IO_DISPLAY_BEFORE_SCREEN_SIZE";
          case 0x18974:
            return "PET_IO_DISPLAY_SCREEN_CAPTURED";
          case 0x18975:
            return "PET_IO_SWITCH_VESA_MODE";
          case 0x18976:
            return "PET_IO_TOOLS_LANGUAGE_HOTKEY_CHANGED";
          case 0x18977:
            return "PET_IO_AVAILABLE_DISPLAYS";
          case 0x18978:
            return "PET_IO_SCREEN_SURFACE_ATTACHED";
          case 0x18979:
            return "PET_IO_UIEMU_ELEMENT_AT_POS";
          case 0x1897a:
            return "PET_IO_AUDIO_OUTPUT_DATA";
          case 0x1897b:
            return "PET_IO_AUDIO_OUTPUT_ENCODING_SET";
          case 0x1897c:
            return "PET_IO_AUDIO_OUTPUT_STREAM_STARTED";
          case 0x1897e:
            return "PET_IO_AUDIO_OUTPUT_STOP";
          case 0x1897f:
            return "PET_IO_CVSRC_OPEN";
          case 0x18980:
            return "PET_IO_CVSRC_CLOSE";
          case 0x18981:
            return "PET_IO_SSO_GET_CREDENTIALS";
          case 0x18982:
            return "PET_IO_MOUSE_CURSOR_MOVED";
          case 0x18983:
            return "PET_IO_UIEMU_CARET_INFO";
          case 0x18984:
            return "PET_IO_DISPLAY_GAMMA_CHANGED";
          }
        }
      }
      else if (param_1 < 0x18a24) {
        switch(param_1) {
        case 0x189c0:
          return "PET_DSP_EVT_VM_TOOLS_STATE_CHANGED";
        case 0x189c1:
          return "PET_DSP_EVT_VM_COMPACT_PROCESSING";
        case 0x189c2:
          return "PET_DSP_EVT_VM_COMPACT_FINISHED";
        case 0x189c3:
          return "PET_DSP_EVT_VM_COMPRESSOR_FINISHED";
        case 0x189c4:
          return "PET_DSP_EVT_VM_COMPRESSOR_CONTINUED";
        case 0x189c5:
          return "PET_DSP_EVT_VM_SOFTWARE_INSTALLED";
        case 0x189c6:
          return "PET_DSP_EVT_VM_PIS_NOTIFICATION_ASK_TO_INSTALL";
        case 0x189c7:
          return "PET_DSP_EVT_VM_VIRTUAL_DEVICES_STATE_CHANGED";
        }
      }
      else if (param_1 < 0x18aec) {
        if (param_1 < 0x18a88) {
          if (param_1 == 0x18a24) {
            return "PET_DSP_EVT_PERFSTATS";
          }
          if (param_1 == 0x18a25) {
            return "PET_DSP_EVT_VM_PERFSTATS";
          }
        }
        else {
          switch(param_1) {
          case 0x18a88:
            return "PET_DSP_EVT_VM_UPGRADE_INIT";
          case 0x18a89:
            return "PET_DSP_EVT_VM_UPGRADE_INIT_TIMEOUT";
          case 0x18a8a:
            return "PET_DSP_EVT_VM_UPGRADE_STAGE_1";
          case 0x18a8b:
            return "PET_DSP_EVT_VM_UPGRADE_STAGE_2";
          case 0x18a8c:
            return "PET_DSP_EVT_VM_UPGRADE_STAGE_3";
          case 0x18a8d:
            return "PET_DSP_EVT_VM_UPGRADE_COMPLETED";
          case 0x18a8e:
            return "PET_DSP_EVT_VM_UPGRADE_UNKNOWN_ERROR";
          case 0x18a8f:
            return "PET_DSP_EVT_VM_UPGRADE_INIT_VMW";
          case 0x18a90:
            return "PET_DSP_EVT_VM_UPGRADE_INIT_PHY";
          }
        }
      }
      else if (param_1 < 0x18bb4) {
        if (param_1 < 0x18b50) {
          if (param_1 == 0x18aec) {
            return "PET_IO_READY_TO_ACCEPT_STDIN_PKGS";
          }
        }
        else {
          switch(param_1) {
          case 0x18b50:
            return "PET_VM_READY_TO_BOOT";
          case 0x18b51:
            return "PET_VM_READY_TO_PRINT";
          case 0x18b52:
            return "PET_VM_DEFAULT_SOUND_RECONNECTED";
          case 0x18b53:
            return "PET_VM_EVT_UNMOUNT_USB_MEDIA";
          case 0x18b54:
            return "PET_VM_EVT_UNMOUNT_DVD_MEDIA";
          case 0x18b55:
            return "PET_VM_EVT_GET_PRINT_SETTINGS";
          }
        }
      }
      else if (param_1 < 0x18c18) {
        switch(param_1) {
        case 0x18bb4:
          return "PET_DSP_EVT_APPLIANCE_DOWNLOAD_PROGRESS_CHANGED";
        case 0x18bb5:
          return "PET_DSP_EVT_APPLIANCE_DOWNLOAD_FINISHED";
        case 0x18bb6:
          return "PET_DSP_EVT_APPLIANCE_ARCHIVE_UNPACK_STARTED";
        case 0x18bb7:
          return "PET_DSP_EVT_APPLIANCE_ARCHIVE_UNPACK_FINISHED";
        case 0x18bb8:
          return "PET_DSP_EVT_APPLIANCE_REGISTER_VM_STARTED";
        case 0x18bb9:
          return "PET_DSP_EVT_APPLIANCE_REGISTER_VM_FINISHED";
        case 0x18bba:
          return "PET_DSP_EVT_APPLIANCE_RECONNECTING";
        }
      }
      else if (param_1 < 0x18ce0) {
        if (param_1 < 0x18c7c) {
          if (param_1 == 0x18c18) {
            return "PET_DSP_EVT_CEP_WRITE_STRING";
          }
          if (param_1 == 0x18c19) {
            return "PET_DSP_COHERENCE_FAKE_STUB_NOTIFICATION";
          }
        }
        else {
          switch(param_1) {
          case 0x18c7c:
            return "PET_DSP_EVT_VM_WAS_ENCRYPTED";
          case 0x18c7d:
            return "PET_DSP_EVT_VM_WAS_DECRYPTED";
          case 0x18c7e:
            return "PET_DSP_EVT_ENCRYPTED_VM_PASSWORD_CHANGED";
          case 0x18c7f:
            return "PET_DSP_EVT_ENCRYPTED_VM_NEED_AUTH_AGAIN";
          case 0x18c80:
            return "PET_DSP_EVT_VM_WAS_PROTECTED";
          case 0x18c81:
            return "PET_DSP_EVT_VM_WAS_UNPROTECTED";
          }
        }
      }
      else if (param_1 < 0x18e0c) {
        if (param_1 < 0x18da8) {
          if (param_1 == 0x18ce0) {
            return "PET_VM_EVT_TIS_BACKUP_WRITE";
          }
          if (param_1 == 0x18ce1) {
            return "PET_VM_EVT_CEP_ENGINE_WRITE";
          }
          if (param_1 == 0x18d44) {
            return "PET_IO_EVT_DISCONNECT_WITH_REASON";
          }
        }
        else {
          switch(param_1) {
          case 0x18da8:
            return "PET_VIDEO_RECEIVER_FORMAT";
          case 0x18da9:
            return "PET_VIDEO_RECEIVER_FRAME";
          case 0x18daa:
            return "PET_VIDEO_RECEIVER_CLOSED";
          case 0x18dab:
            return "PET_VIDEO_CAPTURE_GEOMETRY";
          case 0x18dac:
            return "PET_VIDEO_RECEIVER_CONNECTION_STATE";
          }
        }
      }
      else if (param_1 < 0x18e70) {
        switch(param_1) {
        case 0x18e0c:
          return "PET_PTM_EVT_PROPERTY_CHANGED";
        case 0x18e0d:
          return "PET_PTM_EVT_OBJECT_DELETED";
        case 0x18e0e:
          return "PET_PTM_EVT_OBJECT_CREATED";
        case 0x18e0f:
          return "PET_PTM_EVT_SUBSCRIBED";
        case 0x18e10:
          return "PET_PTM_EVT_RPC_COMPLETED";
        }
      }
      else {
        if (param_1 == 0x18e70) {
          return "PET_DSP_EVT_SHARED_ITEM_CHANGED";
        }
        if (param_1 == 0x18e71) {
          return "PET_DSP_EVT_SHARED_ITEM_REMOVED";
        }
        if (param_1 == 0x18ed4) {
          return "PET_DSP_EVT_BACKUP_PROGRESS_INFO";
        }
      }
    }
    else if (param_1 < 0x30da4) {
      switch(param_1) {
      case 200000:
        return "PET_IO_DISPLAY_PALETTE_CHANGED";
      case 0x30d41:
        return "PET_IO_TOOLS_TIS_QUERY";
      case 0x30d42:
        return "PET_IO_SCREEN_UPDATED";
      case 0x30d43:
        return "PET_IO_AUTH_RESPONSE";
      case 0x30d44:
        return "PET_IO_ATTACH_RESPONSE";
      case 0x30d45:
        return "PET_IO_ENCODING_RESPONSE";
      case 0x30d46:
        return "PET_IO_MEMORY_INFO";
      case 0x30d47:
        return "PET_IO_SCREEN_CAPTURED_BUFFER";
      case 0x30d48:
        return "PET_IO_TOOLS_TIS_SUBSCRIBE";
      case 0x30d49:
        return "PET_IO_TOOLS_TIS_UNSUBSCRIBE";
      }
    }
    else if (param_1 < 0x30e08) {
      switch(param_1) {
      case 0x30da4:
        return "PET_IO_CLI_AUTHENTICATE_SESSION";
      case 0x30da5:
        return "PET_IO_CLI_ATTACH_TO_VM";
      case 0x30da6:
        return "PET_IO_CLI_ENCODING_REQUEST";
      case 0x30da7:
        return "PET_IO_CLI_SCREEN_WATCH_UPDATES";
      case 0x30da8:
        return "PET_IO_CLI_SCREEN_CAPTURE_BUFFER";
      case 0x30da9:
        return "PET_IO_CLI_SCREEN_SIZE";
      case 0x30daa:
        return "PET_IO_CLI_KEYBOARD_SCANCODE";
      case 0x30dab:
        return "PET_IO_CLI_MOUSE_SETPOS";
      case 0x30dac:
        return "PET_IO_CLI_MOUSE_MOVE";
      case 0x30dad:
        return "PET_IO_CLI_MOUSE_NEED_CURSOR";
      case 0x30dae:
        return "PET_IO_CLI_GRACEFUL_SHUTDOWN";
      case 0x30daf:
        return "PET_IO_CLI_SCREEN_SET_SURFACE";
      case 0x30db0:
        return "PET_IO_CLI_REMOTE_COMMAND";
      case 0x30db1:
        return "PET_IO_CLI_TOOLS_UTILITY_COMMAND";
      case 0x30db2:
        return "PET_IO_CLI_TOOLS_TIS_QUERY";
      case 0x30db3:
        return "PET_IO_CLI_TOOLS_CLIPBOARD_DATA";
      case 0x30db4:
        return "PET_IO_CLI_TOOLS_SIA_DATA";
      case 0x30db5:
        return "PET_IO_CLI_TOOLS_VMCTG_COMMAND";
      case 0x30db6:
        return "PET_IO_CLI_TOOLS_GENERAL_COMMAND";
      case 0x30db7:
        return "PET_IO_CLI_TOOLS_EMPTY_RECYCLE_BIN";
      case 0x30db8:
        return "PET_IO_CLI_TOOLS_SET_TASKBAR_VISIBILITY";
      case 0x30db9:
        return "PET_IO_CLI_TOOLS_TOGGLE_DESKTOP";
      case 0x30dba:
        return "PET_IO_CLI_TOOLS_MOVE_TASKBAR";
      case 0x30dbb:
        return "PET_IO_CLI_TOOLS_SHOW_RECYCLE_BIN";
      case 0x30dbc:
        return "PET_IO_CLI_TOOLS_NOTIFY_COHERENCE_STATE";
      case 0x30dbd:
        return "PET_IO_CLI_TOOLS_ADJUST_WORKING_AREA";
      case 0x30dbe:
        return "PET_IO_CLI_KEYBOARD_KEY";
      case 0x30dbf:
        return "PET_IO_CLI_TOOLS_UIEMU";
      case 0x30dc0:
        return "DEPRECATED_PET_IO_CLI_AUDIO_OUTPUT_STREAM_START";
      case 0x30dc1:
        return "DEPRECATED_PET_IO_CLI_AUDIO_OUTPUT_STREAM_STOP";
      case 0x30dc2:
        return "DEPRECATED_PET_IO_CLI_AUDIO_OUTPUT_SET_ENCODING";
      case 0x30dc3:
        return "PET_IO_CLI_CVSRC_CONNECT";
      case 0x30dc4:
        return "PET_IO_CLI_CVSRC_DISCONNECT";
      case 0x30dc5:
        return "PET_IO_CLI_AUTHENTICATE_EXEC_SESSION";
      case 0x30dc6:
        return "PET_IO_CLI_SWITCH_SLIDING_MOUSE";
      case 0x30dc7:
        return "PET_IO_CLI_SSO_SET_CREDENTIALS";
      case 0x30dc8:
        return "PET_IO_CLI_SSO_SET_CREDENTIALS_ASYNC";
      case 0x30dc9:
        return "PET_IO_CLI_SSO_LOCKED";
      case 0x30dca:
        return "PET_IO_CLI_SSO_UNLOCKED";
      case 0x30dcb:
        return "PET_IO_CLI_DPI_SCREEN_SIZE";
      case 0x30dcc:
        return "PET_IO_CLI_TOOLS_SET_INDENTS";
      case 0x30dcd:
        return "PET_IO_CLI_AUDIO_RECORDING_STREAM_START";
      case 0x30dce:
        return "PET_IO_CLI_AUDIO_RECORDING_STREAM_STOP";
      case 0x30dcf:
        return "PET_IO_CLI_AUDIO_PLAYOUT_STREAM_START";
      case 0x30dd0:
        return "PET_IO_CLI_AUDIO_PLAYOUT_STREAM_STOP";
      case 0x30dd1:
        return "PET_IO_CLI_TOOLS_OPEN_FILE_BROWSER";
      case 0x30dd2:
        return "PET_IO_CLI_GET_AUDIO_SWITCH_SETTINGS";
      case 0x30dd3:
        return "PET_IO_CLI_GET_AUDIO_SWITCH_SETTINGS_RESPONSE";
      case 0x30dd4:
        return "PET_IO_CLI_SET_AUDIO_SWITCH_SETTINGS";
      case 0x30dd5:
        return "PET_IO_CLI_TOOLS_SET_POWER_SCHEME_SLEEP_ABILITY";
      case 0x30dd6:
        return "PET_IO_CLI_SCREEN_ENABLE_UPDATES";
      }
    }
    else if (param_1 < 0x30e6c) {
      switch(param_1) {
      case 0x30e08:
        return "PET_IO_STDIN_PORTION";
      case 0x30e09:
        return "PET_IO_STDOUT_PORTION";
      case 0x30e0a:
        return "PET_IO_STDERR_PORTION";
      case 0x30e0b:
        return "PET_IO_READY_TO_ACCEPT_STDOUT_STDERR_PKGS";
      case 0x30e0c:
        return "PET_IO_FIN_TO_TRANSMIT_STDOUT_STDERR";
      case 0x30e0d:
        return "PET_IO_CLIENT_PROCESSED_ALL_DESCS_DATA";
      case 0x30e0e:
        return "PET_IO_TTY_SETTINGS_REQUIRED";
      case 0x30e0f:
        return "PET_IO_TTY_SETTINGS_PROVIDED";
      case 0x30e10:
        return "PET_IO_STDIN_WAS_CLOSED";
      }
    }
    else if (param_1 < 0x30ed0) {
      switch(param_1) {
      case 0x30e6c:
        return "PET_IT_RECONFIG_BOOTCAMP_START";
      case 0x30e6d:
        return "PET_IT_VALIDATE_BOOTCAMP_START";
      case 0x30e6e:
        return "PET_IT_CONVERT_TO_OLD_START";
      case 0x30e6f:
        return "PET_IT_CONVERT_TO_CURRENT_START";
      case 0x30e70:
        return "PET_IT_RECONFIG_START";
      case 0x30e71:
        return "PET_IT_MERGE_SNAPSHOTS_START";
      case 0x30e72:
        return "PET_IT_MAKE_PLAIN_START";
      case 0x30e73:
        return "PET_IT_MAKE_EXPANDING_START";
      case 0x30e74:
        return "PET_IT_MAKE_SPLIT_START";
      case 0x30e75:
        return "PET_IT_MAKE_NON_SPLIT_START";
      case 0x30e76:
        return "PET_IT_GET_RESIZE_INFORMATION_START";
      case 0x30e77:
        return "PET_IT_INCREASE_LAST_VOLUME_START";
      case 0x30e78:
        return "PET_IT_RESIZING_START";
      case 0x30e79:
        return "PET_IT_DECREASING_START";
      case 0x30e7a:
        return "PET_IT_COMPACTING_START";
      case 0x30e7b:
        return "PET_IT_FIX_CONSISTENCY_START";
      case 0x30e7c:
        return "PET_IT_CONVERT_TO_EXTEND_START";
      }
    }
    else if (param_1 < 0x30f34) {
      switch(param_1) {
      case 0x30ed0:
        return "PET_DESKCTL_SESSION_AUTH";
      case 0x30ed1:
        return "PET_DESKCTL_SESSION_AUTH_FIN";
      case 0x30ed2:
        return "PET_DESKCTL_ATTACH";
      case 0x30ed3:
        return "PET_DESKCTL_ATTACH_FIN";
      case 0x30ed4:
        return "PET_DESKCTL_LOCAL_AUTH";
      case 0x30ed5:
        return "PET_DESKCTL_LOCAL_AUTH_QUEST";
      case 0x30ed6:
        return "PET_DESKCTL_LOCAL_AUTH_ANSWER";
      case 0x30ed7:
        return "PET_DESKCTL_LOCAL_AUTH_FIN";
      case 0x30ed8:
        return "PET_DESKCTL_ACCEPT_CLIENTS";
      case 0x30ed9:
        return "PET_DESKCTL_REJECT_CLIENTS";
      case 0x30eda:
        return "PET_DESKCTL_CONFIG";
      case 0x30edb:
        return "PET_DESKCTL_CONFIG_QUERY";
      case 0x30edc:
        return "PET_DESKCTL_SEND_SAS";
      case 0x30edd:
        return "PET_DESKCTL_STATUS_CHANGE";
      case 0x30ede:
        return "PET_DESKCTL_ATTACH_WEB_CLIENT";
      case 0x30edf:
        return "PET_DESKCTL_SHARES_SHARE";
      case 0x30ee0:
        return "PET_DESKCTL_SHARES_UNSHARE";
      case 0x30ee1:
        return "PET_DESKCTL_SHARES_ENUMERATE";
      case 0x30ee2:
        return "PET_DESKCTL_GET_CEP_REPORT";
      case 0x30ee3:
        return "PET_DESKCTL_GET_CEP_REPORT_RESPONSE";
      }
    }
    else if (param_1 < 0x30ffc) {
      if (param_1 < 0x30f98) {
        if (param_1 == 0x30f34) {
          return "PET_IO_DISCONNECT_WITH_REASON";
        }
        if (param_1 == 0x30f3e) {
          return "PET_IO_DISPLAY_RESOLUTION_SET";
        }
      }
      else {
        switch(param_1) {
        case 0x30f98:
          return "PET_VIDEO_STREAM_START";
        case 0x30f99:
          return "PET_VIDEO_STREAM_CLOSE";
        case 0x30f9a:
          return "PET_VIDEO_STREAM_FORMAT";
        case 0x30f9b:
          return "PET_VIDEO_STREAM_DATA";
        case 0x30f9c:
          return "PET_VIDEO_STREAM_CLOSED";
        case 0x30f9d:
          return "PET_VIDEO_STREAM_ACK_FRAME";
        case 0x30f9e:
          return "PET_VIDEO_STREAM_OPEN";
        case 0x30f9f:
          return "PET_VIDEO_DATA_CHANNEL_CTL";
        case 0x30fa0:
          return "PET_VIDEO_STREAM_STOP";
        }
      }
    }
    else {
      if (param_1 == 0x30ffc) {
        return "PET_IO_PTM_PROTOCOL";
      }
      if (param_1 == 0x31060) {
        return "PET_IO_IOSERVICE_CHANNELS_PROTOCOL";
      }
    }
  }
  else {
    switch(param_1) {
    case 0x310c4:
      return "PET_IO_CLI_ADD_VHID_DEVICE";
    case 0x310c5:
      return "PET_IO_CLI_ADD_VHID_DEVICE_RESPONSE";
    case 0x310c6:
      return "PET_IO_CLI_REMOVE_VHID_DEVICE";
    case 0x310c7:
      return "PET_IO_CLI_VHID_EVENTS_PACKAGE";
    }
  }
  FUN_1008e3970("","Std",0,"Unknown PRL_EVENT_TYPE value %p",param_1);
  pcVar1 = "Unknown";
switchD_1007e7878_caseD_186a0:
  return pcVar1;
}

