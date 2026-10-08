
char * FUN_100dddcf0(int param_1)

{
  char *pcVar1;
  
  if (param_1 < 53000) {
    if (param_1 < -0x7ffff000) {
      if (param_1 < -0x7ffffa00) {
        if (param_1 + 0x7fffffffU < 0x597) {
                    /* WARNING: Could not recover jumptable at 0x000100dddd2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pcVar1 = (char *)(*(code *)(&DAT_100de6d94 +
                                     *(int *)(&DAT_100de6d94 + (ulong)(param_1 + 0x7fffffffU) * 4)))
                                     ();
          return pcVar1;
        }
      }
      else {
        switch(param_1) {
        case -0x7ffffa00:
          return "PRL_ERR_PPC_INVALID_CREDENTIALS";
        case -0x7ffff9ff:
          return "PRL_ERR_PPC_INVALID_CREDENTIALS_ON_RECONNECT";
        case -0x7ffff9fe:
          return "PRL_ERR_PPC_SERVER_BUSY";
        case -0x7ffff9fd:
          return "PRL_ERR_PPC_UNABLE_TO_CONNECT";
        case -0x7ffff9fc:
          return "PRL_ERR_PAX_HOST_LIMIT_WAS_EXCEEDED";
        case -0x7ffff9fb:
          return "PRL_ERR_CONN_UNABLE_TO_ESTABLISH_TRUSTED_CHANNEL";
        case -0x7ffff9fa:
          return "PRL_ERR_CONN_CLIENT_CERTIFICATE_INVALID";
        case -0x7ffff9f9:
          return "PRL_ERR_CONN_CLIENT_CERTIFICATE_EXPIRED";
        case -0x7ffff9f8:
          return "PRL_ERR_CONN_CLIENT_CERTIFICATE_REVOKED";
        case -0x7ffff9f7:
          return "PRL_ERR_CONN_SERVER_CERTIFICATE_INVALID";
        case -0x7ffff9f0:
          return "PRL_ERR_CONN_SERVER_CERTIFICATE_EXPIRED";
        case -0x7ffff9ef:
          return "PRL_ERR_CONN_SERVER_CERTIFICATE_REVOKED";
        case -0x7ffff9ee:
          return "PRL_ERR_PAX_ACCESS_FORBIDDEN";
        case -0x7ffff9ed:
          return "PRL_ERR_PAX_CONNECTION_LOST";
        case -0x7ffff9ec:
          return "PRL_ERR_PAX_PROXY_SSL_HANDSHAKE_FAILED";
        }
      }
    }
    else if (param_1 < -0x7fffe000) {
      switch(param_1) {
      case -0x7ffff000:
        return "PRL_ERR_DEV_FLOPPY_CONNECT_FAILED";
      case -0x7fffefff:
        return "PRL_ERR_INCORRECT_CDROM_PATH";
      case -0x7fffeffe:
        return "PRL_ERR_UNSUPPORTED_DEVICE_TYPE";
      case -0x7fffeffd:
        return "PRL_WARN_VM_PD3_COMPAT_MODE";
      case -0x7fffeffc:
        return "PRL_WARN_VM_BOOTCAMP_MODE";
      case -0x7fffeffb:
        return "PRL_WARN_VM_PD3_COMPAT_NO_MOUSE";
      }
    }
    else if (param_1 < -0x7fffc000) {
      switch(param_1) {
      case -0x7fffe000:
        return "PRL_ERR_INVALID_PARALLELS_DISK";
      case -0x7fffdfff:
        return "PRL_ERR_IMAGE_NEED_TO_CONVERT";
      case -0x7fffdffe:
        return "PRL_ERR_HARD_DISK_IMAGE_CORRUPTED";
      case -0x7fffdffd:
        return "PRL_ERR_CREATE_HARD_DISK_WITH_ZERO_SIZE";
      }
    }
    else if (param_1 < -0x7fffbe00) {
      switch(param_1) {
      case -0x7fffc000:
        return "PRL_NET_ETHLIST_CREATE_ERROR";
      case -0x7fffbfff:
        return "PRL_NET_SYSTEM_ERROR";
      case -0x7fffbffe:
        return "PRL_NET_WINSCM_OPEN_ERROR";
      case -0x7fffbffd:
        return "PRL_NET_SRV_NOTIFY_ERROR";
      case -0x7fffbffc:
        return "PRL_NET_ADAPTER_NOT_EXIST";
      case -0x7fffbffb:
        return "PRL_NET_ERR_ADAPTER_CONFIG";
      case -0x7fffbffa:
        return "PRL_NET_ERR_ETH_NO_BINDABLE_ADAPTER";
      case -0x7fffbff9:
        return "PRL_NET_ERR_PRL_NO_BINDABLE_ADAPTER";
      case -0x7fffbff8:
        return "PRL_NET_PRLNET_OPEN_FAILED";
      case -0x7fffbff7:
        return "PRL_NET_BIND_FAILED";
      case -0x7fffbff0:
        return "PRL_NET_CABLE_DISCONNECTED";
      case -0x7fffbfef:
        return "PRL_NET_RENAME_FAILED";
      case -0x7fffbfee:
        return "PRL_NET_INSTALL_TIMEOUT";
      case -0x7fffbfed:
        return "PRL_NET_INSTALL_FAILED";
      case -0x7fffbfec:
        return "PRL_NET_UNINSTALL_FAILED";
      case -0x7fffbfeb:
        return "PRL_NET_CONNECTION_SHARING_CONFLICT";
      case -0x7fffbfea:
        return "PRL_NET_RESTORE_DEFAULTS_PARTITIAL_SUCCESS";
      case -0x7fffbfe9:
        return "PRL_NET_VLAN_UNSUPPORTED_IN_THIS_VERSION";
      case -0x7fffbfe8:
        return "PRL_NET_VMDEVICE_VIRTUAL_NETWORK_NOT_EXIST";
      case -0x7fffbfe7:
        return "PRL_NET_VMDEVICE_VIRTUAL_NETWORK_NO_ADAPTER";
      case -0x7fffbfe0:
        return "PRL_NET_VMDEVICE_VIRTUAL_NETWORK_CONFIG_ERROR";
      case -0x7fffbfdf:
        return "PRL_NET_VMDEVICE_VIRTUAL_NETWORK_DISABLED";
      case -0x7fffbfdd:
        return "PRL_NET_PKTFILTER_ERROR";
      case -0x7fffbfdc:
        return "PRL_NET_DUPLICATE_VIRTUAL_NETWORK_ID";
      case -0x7fffbfdb:
        return "PRL_NET_VIRTUAL_NETWORK_ID_NOT_EXISTS";
      case -0x7fffbfda:
        return "PRL_NET_VIRTUAL_NETWORK_NOT_FOUND";
      case -0x7fffbfd9:
        return "PRL_NET_ADAPTER_ALREADY_USED";
      case -0x7fffbfd8:
        return "PRL_NET_VIRTUAL_NETWORK_SHARED_EXISTS";
      case -0x7fffbfd7:
        return "PRL_NET_OFFMGMT_ERROR";
      case -0x7fffbfd0:
        return "PRL_NET_VIRTUAL_NETWORK_SHARED_PROHIBITED";
      case -0x7fffbfcf:
        return "PRL_NET_DUPLICATE_IPPRIVATE_NETWORK_NAME";
      case -0x7fffbfce:
        return "PRL_NET_IPPRIVATE_NETWORK_DOES_NOT_EXIST";
      case -0x7fffbfcd:
        return "PRL_NET_IPPRIVATE_NETWORK_INVALID_IP";
      case -0x7fffbfcc:
        return "PRL_NET_VMDEVICE_ADAPTER_UNSUPPORTED";
      }
    }
    else if (param_1 < -0x7fffb000) {
      switch(param_1) {
      case -0x7fffbe00:
        return "PRL_NET_VALID_FAILURE";
      case -0x7fffbdff:
        return "PRL_NET_VALID_WRONG_NET_MASK";
      case -0x7fffbdfe:
        return "PRL_NET_VALID_WRONG_HOST_IP_ADDR";
      case -0x7fffbdfd:
        return "PRL_NET_VALID_WRONG_DHCP_IP_ADDR";
      case -0x7fffbdfc:
        return "PRL_NET_VALID_DHCP_RANGE_WRONG_IP_ADDRS";
      case -0x7fffbdfb:
        return "PRL_NET_VALID_MISMATCH_DHCP_SCOPE_MASK";
      case -0x7fffbdfa:
        return "PRL_NET_VALID_DHCP_SCOPE_RANGE_LESS_MIN";
      }
    }
    else if (param_1 < -0x7fffa000) {
      switch(param_1) {
      case -0x7fffb000:
        return "PRL_ERR_SOUND_DEVICE_WRITE_FAILED";
      case -0x7fffafff:
        return "PRL_ERR_SOUND_OUT_DEVICE_OPEN_FAILED";
      case -0x7fffaffe:
        return "PRL_ERR_SOUND_IN_DEVICE_OPEN_FAILED";
      case -0x7fffaffd:
        return "PRL_ERR_SOUND_BAD_EMULATION_TYPE";
      }
    }
    else if (param_1 < -0x7fff9000) {
      switch(param_1) {
      case -0x7fffa000:
        return "PRL_ERR_DEV_SERIAL_PORT_PHYSICAL_CONNECT_FAILED";
      case -0x7fff9fff:
        return "PRL_ERR_DEV_SERIAL_PORT_PIPE_CONNECT_FAILED";
      case -0x7fff9ffe:
        return "PRL_ERR_DEV_SERIAL_PORT_FILE_CONNECT_FAILED";
      case -0x7fff9ffd:
        return "PRL_ERR_DEV_SERIAL_PORT_REMOTE_CONNECT_FAILED";
      }
    }
    else if (param_1 < -0x7fff8000) {
      switch(param_1) {
      case -0x7fff9000:
        return "PRL_ERR_DEV_PARALLEL_PORT_PHYSICAL_CONNECT_FAILED";
      case -0x7fff8fff:
        return "PRL_ERR_DEV_PARALLEL_PORT_PRINTER_CONNECT_FAILED";
      case -0x7fff8ffe:
        return "PRL_ERR_DEV_PARALLEL_PORT_FILE_CONNECT_FAILED";
      case -0x7fff8ffd:
        return "PRL_ERR_DEV_PARALLEL_PORT_REMOTE_CONNECT_FAILED";
      }
    }
    else if (param_1 < -0x7fff7000) {
      switch(param_1) {
      case -0x7fff8000:
        return "PRL_ERR_DEV_USB_OPEN_MANAGER_FAILED";
      case -0x7fff7fff:
        return "PRL_ERR_DEV_USB_INSTALL_DRIVER_FAILED";
      case -0x7fff7ffe:
        return "PRL_ERR_DEV_USB_NO_FREE_PORTS";
      case -0x7fff7ffd:
        return "PRL_ERR_DEV_USB_HARD_DEVICE_INSERTED";
      case -0x7fff7ffc:
        return "PRL_ERR_DEV_USB_HARD_DEVICE_INSERTED2";
      case -0x7fff7ffb:
        return "PRL_ERR_DEV_USB_BUSY";
      case -0x7fff7ffa:
        return "PRL_ERR_DEV_USB_REUSE";
      case -0x7fff7ff9:
        return "PRL_ERR_DEV_USB_CHANGEPID";
      case -0x7fff7ff8:
        return "PRL_ERR_DEV_USB_NOT_CONFIGURED";
      }
    }
    else if (param_1 < -0x7fff0000) {
      switch(param_1) {
      case -0x7fff7000:
        return "PRL_ERR_DEV_ALREADY_CONNECTED";
      case -0x7fff6fff:
        return "PRL_ERR_DEV_ALREADY_DISCONNECTED";
      case -0x7fff6ffe:
        return "PRL_WARN_UNABLE_OPEN_DEVICE_ON_START_VM";
      case -0x7fff6ffd:
        return "PRL_ERR_DEV_PRINTER_OVERFLOW";
      }
    }
    else if (param_1 < -0x7ffef000) {
      switch(param_1) {
      case -0x7fff0000:
        return "PRL_ERR_DEV_MAX_NUMBER_EXCEEDED";
      case -0x7ffeffff:
        return "PRL_ERR_DEV_MAX_CD_HDD_EXCEEDED";
      case -0x7ffefffe:
        return "PRL_ERR_VTD_INITIALIZATION_FAILED";
      case -0x7ffefffd:
        return "PRL_ERR_VTD_ALREADY_HOOKED_FAILED";
      case -0x7ffefffc:
        return "PRL_ERR_VTD_HOOK_FAILED";
      case -0x7ffefffb:
        return "PRL_ERR_VTD_HOOK_NEED_REBOOT_FAILED";
      case -0x7ffefffa:
        return "PRL_ERR_VTD_WAIT_ASR";
      case -0x7ffefff9:
        return "PRL_ERR_VTD_HOOK_AFTER_INSTALL_NEED_REBOOT";
      case -0x7ffefff8:
        return "PRL_ERR_VTD_HOOK_AFTER_REVERT_NEED_REBOOT";
      case -0x7ffefff7:
        return "PRL_ERR_VTD_HOOK_INSTALLATION_FAILED";
      case -0x7ffefff0:
        return "PRL_ERR_VTD_HOOK_REVERT_FAILED";
      case -0x7ffeffef:
        return "PRL_ERR_VTD_HOOK_INVALID_CONFIG";
      case -0x7ffeffee:
        return "PRL_ERR_VTD_HOOK_DEVICE_CURRENTLY_IN_USE";
      case -0x7ffeffed:
        return "PRL_ERR_MEMORY_ALLOC_ERROR";
      case -0x7ffeffec:
        return "PRL_ERR_DEV_MAX_CD_EXCEEDED_WITH_DISABLED_CLIENT_SCSII";
      case -0x7ffeffeb:
        return "PRL_WNG_NO_OPERATION_SYSTEM_INSTALLED";
      case -0x7ffeffea:
        return "PRL_ERR_WIN_AERO_DISABLED";
      case -0x7ffeffe9:
        return "PRL_ERR_VTD_DEVICE_TROUBLESHOOT";
      case -0x7ffeffe8:
        return "PRL_ERR_INVALID_OS_TYPE";
      case -0x7ffeffe7:
        return "PRL_ERR_VTD_HOOK_UPDATE_SCRIPT_EXECUTE";
      case -0x7ffeffe0:
        return "PRL_ERR_CANNOT_CONVERT_PS_TO_PDF";
      case -0x7ffeffdf:
        return "PRL_ERR_DISP_ARCH_VM_COMMAND_CANT_BE_EXECUTED";
      }
    }
    else if (param_1 < -0x7ffee900) {
      switch(param_1) {
      case -0x7ffef000:
        return "PRL_ERR_LICENSE_NOT_VALID";
      case -0x7ffeefff:
        return "PRL_ERR_LICENSE_EXPIRED";
      case -0x7ffeeffe:
        return "PRL_ERR_LICENSE_WRONG_VERSION";
      case -0x7ffeeffd:
        return "PRL_ERR_LICENSE_WRONG_PRODUCT";
      case -0x7ffeeffc:
        return "PRL_ERR_LICENSE_WRONG_PLATFORM";
      case -0x7ffeeffb:
        return "PRL_ERR_LICENSE_WRONG_LANGUAGE";
      case -0x7ffeeffa:
        return "PRL_ERR_LICENSE_WRONG_DISTRIBUTOR";
      case -0x7ffeeff9:
        return "PRL_ERR_LICENSE_AUTH_FAILED";
      case -0x7ffeeff8:
        return "PRL_ERR_LICENSE_WRONG_ADVANCED_FIELD";
      case -0x7ffeeff7:
        return "PRL_ERR_LICENSE_UPGRADE_NO_ACCEPTABLE_LICENSE";
      case -0x7ffeeff0:
        return "PRL_ERR_LICENSE_FILE_WRITE_FAILED";
      case -0x7ffeefef:
        return "PRL_ERR_LICENSE_BETA_KEY_RELEASE_PRODUCT";
      case -0x7ffeefee:
        return "PRL_ERR_LICENSE_TOO_MANY_VCPUS";
      case -0x7ffeefed:
        return "PRL_ERR_LICENSE_RELEASE_KEY_BETA_PRODUCT";
      case -0x7ffeefec:
        return "PRL_ERR_LICENSE_NOT_STARTED";
      case -0x7ffeefeb:
        return "PRL_ERR_LICENSE_BLACKLISTED";
      case -0x7ffeefea:
        return "PRL_ERR_LICENSE_TOO_MANY_MEMORY";
      case -0x7ffeefe9:
        return "PRL_ERR_LICENSE_VM_HAS_VTD_DEVICES";
      case -0x7ffeefe8:
        return "PRL_ERR_VZLICENSE_TIMEOUT";
      case -0x7ffeefe7:
        return "PRL_ERR_VZLICENSE_CANCEL";
      case -0x7ffeefe0:
        return "PRL_ERR_VZLICENSE_PROXY_AUTH";
      case -0x7ffeefdf:
        return "PRL_ERR_VZLICENSE_PROXY";
      case -0x7ffeefde:
        return "PRL_ERR_VZLICENSE_NETWORK";
      case -0x7ffeefdd:
        return "PRL_ERR_VZLICENSE_NOTSUP";
      case -0x7ffeefdc:
        return "PRL_ERR_VZLICENSE_WRONG";
      case -0x7ffeefdb:
        return "PRL_ERR_VZLICENSE_NODATA";
      case -0x7ffeefda:
        return "PRL_ERR_VZLICENSE_ERR_KA";
      case -0x7ffeefd9:
        return "PRL_ERR_VZLICENSE_LOCK";
      case -0x7ffeefd8:
        return "PRL_ERR_VZLICENSE_EACCES";
      case -0x7ffeefd7:
        return "PRL_ERR_VZLICENSE_NOENT";
      case -0x7ffeefd0:
        return "PRL_ERR_VZLICENSE_NOINIT";
      case -0x7ffeefcf:
        return "PRL_ERR_VZLICENSE_EXIST";
      case -0x7ffeefce:
        return "PRL_ERR_VZLICENSE_IO";
      case -0x7ffeefcd:
        return "PRL_ERR_VZLICENSE_INVAL";
      case -0x7ffeefcc:
        return "PRL_ERR_VZLICENSE_NOMEM";
      case -0x7ffeefcb:
        return "PRL_ERR_VZLICENSE_FATAL";
      case -0x7ffeefca:
        return "PRL_ERR_VZLICENSE_INVALID_HWID";
      case -0x7ffeefc9:
        return "PRL_ERR_VZLICENSE_ACTIVATION_KEY";
      case -0x7ffeefc8:
        return "PRL_ERR_VZLICENSE_VMS_LIMIT_EXCEEDED";
      case -0x7ffeefc7:
        return "PRL_ERR_VZLICENSE_UNSUPPORTED_APP_MODE";
      case -0x7ffeefc0:
        return "PRL_ERR_VZLICENSE_TASK_ALREADY_RUN";
      case -0x7ffeefbf:
        return "PRL_ERR_LICENSE_RESTRICTED_GUEST_OS";
      case -0x7ffeefbe:
        return "PRL_ERR_LICENSE_RESTRICTED_TO_RUNNING_VMS_LIMIT";
      case -0x7ffeefbd:
        return "PRL_ERR_LICENSE_RESTRICTED_TO_CREATE_VM";
      case -0x7ffeefbc:
        return "PRL_ERR_LICENSE_RESTRICTED_TO_REGISTER_VM";
      case -0x7ffeefbb:
        return "PRL_ERR_LICENSE_RESTRICTED_TO_REGISTER_3RD_PARTY_VM";
      case -0x7ffeefba:
        return "PRL_ERR_LICENSE_RESTRICTED_TO_CLONE_VM";
      case -0x7ffeefb9:
        return "PRL_ERR_LICENSE_RESTRICTED_TO_CONVERT_TO_TEMPLATE";
      case -0x7ffeefb8:
        return "PRL_ERR_LICENSE_RESTRICTED_TO_CONVERT_FROM_TEMPLATE";
      case -0x7ffeefb7:
        return "PRL_ERR_LICENSE_RESTRICTED_TO_SUSPEND_VM";
      case -0x7ffeefb0:
        return "PRL_ERR_LICENSE_RESTRICTED_TO_PAUSE_VM";
      case -0x7ffeefaf:
        return "PRL_ERR_LICENSE_RESTRICTED_TO_SNAPSHOT_CREATE";
      case -0x7ffeefae:
        return "PRL_ERR_LICENSE_RESTRICTED_TO_SNAPSHOT_SWITCH";
      case -0x7ffeefad:
        return "PRL_ERR_LICENSE_RESTRICTED_TO_SNAPSHOT_DELETE";
      case -0x7ffeefac:
        return "PRL_ERR_LICENSE_RESTRICTED_TO_SNAPSHOT_SHOW_TREE";
      case -0x7ffeefab:
        return "PRL_ERR_LICENSE_RESTRICTED_TO_UNDODISK_FEATURE";
      case -0x7ffeefaa:
        return "PRL_ERR_LICENSE_RESTRICTED_TO_SAFEMODE_FEATURE";
      case -0x7ffeefa9:
        return "PRL_ERR_LICENSE_RESTRICTED_TO_SMARTGUARD_FEATURE";
      case -0x7ffeefa8:
        return "PRL_ERR_LICENSE_GRACED";
      case -0x7ffeefa7:
        return "PRL_ERR_LICENSE_RESTRICTED_CPU_COUNT";
      case -0x7ffeefa0:
        return "PRL_ERR_LICENSE_RESTRICTED_TO_RUNNING_VMS_LIMIT_PER_USER";
      case -0x7ffeef9f:
        return "PRL_ERR_LICENSE_BLACKLISTED_TO_VM_OPERATION";
      case -0x7ffeef9e:
        return "PRL_ERR_VOLUME_LICENSE_EXCEEDED_LIMIT";
      case -0x7ffeef9d:
        return "PRL_ERR_VZLICENSE_KA_LICENSE_IS_UP_TO_DATE";
      case -0x7ffeef9c:
        return "PRL_ERR_VZLICENSE_KA_LICENSE_IS_NOT_PROLONGATED_YET";
      case -0x7ffeef9b:
        return "PRL_ERR_VZLICENSE_KA_LICENSE_EXPIRED";
      case -0x7ffeef9a:
        return "PRL_ERR_VZLICENSE_KA_ACTIVATION_LIMIT_REACHED";
      case -0x7ffeef99:
        return "PRL_ERR_VZLICENSE_KA_HWID_DOES_NOT_MATCH";
      case -0x7ffeef98:
        return "PRL_ERR_VZLICENSE_KA_LICENSE_IS_TERMINATED";
      case -0x7ffeef97:
        return "PRL_WARN_LICENSE_RESTRICTED_RKU";
      case -0x7ffeef90:
        return "PRL_ERR_LICENSE_UNSUPPORTED_LICENSE_TYPE_TO_DEACTIVATION";
      case -0x7ffeef8f:
        return "PRL_ERR_LICENSE_DEFERRED_LICENSE_NOT_FOUND";
      case -0x7ffeef8e:
        return "PRL_ERR_VZLICENSE_UNSUPPORTED_UPDATE_OP";
      case -0x7ffeef8d:
        return "PRL_ERR_LICENSE_IS_NOT_VOLUME";
      case -0x7ffeef8c:
        return "PRL_ERR_LICENSE_SUBSCR_EXPIRED";
      case -0x7ffeef8b:
        return "PRL_ERR_LIC_GET_TRIAL_WRONG_VERSION";
      case -0x7ffeef8a:
        return "PRL_ERR_LIC_GET_TRIAL_EXPIRED";
      case -0x7ffeef89:
        return "PRL_ERR_LICENSE_VOLUME_EXPIRED";
      case -0x7ffeef88:
        return "PRL_ERR_LICENSE_RESTRICTED_GUEST_OS_TYPE";
      }
    }
    else if (param_1 < -0x7ffee000) {
      switch(param_1) {
      case -0x7ffee900:
        return "PRL_ERR_ACTIVATION_WRONG_CONFIRMATION_FORMAT";
      case -0x7ffee8ff:
        return "PRL_ERR_ACTIVATION_WRONG_CONFIRMATION_MESSAGE";
      case -0x7ffee8fe:
        return "PRL_ERR_ACTIVATION_WRONG_CONFIRMATION_SIGNATURE";
      case -0x7ffee8fd:
        return "PRL_ERR_ACTIVATE_WRONG_TYPE_OF_ACTIVE_LICENSE";
      case -0x7ffee8fc:
        return "PRL_ERR_ACTIVATE_NO_INSTALLED_LICENSE";
      case -0x7ffee8fb:
        return "PRL_ERR_ACTIVATE_TRIAL_LICENSE";
      case -0x7ffee8fa:
        return "PRL_ERR_ACTIVATION_SERVER_ERROR";
      case -0x7ffee8f9:
        return "PRL_ERR_ACTIVATION_SERVER_ACTIVATION_ID_IS_INVALID";
      case -0x7ffee8f8:
        return "PRL_ERR_ACTIVATION_SERVER_KEY_IS_INVALID";
      case -0x7ffee8f7:
        return "PRL_ERR_ACTIVATION_SERVER_KEY_IS_BLACKLISTED";
      case -0x7ffee8f0:
        return "PRL_ERR_ACTIVATION_SERVER_HWIDS_AMOUNT_REACHED";
      case -0x7ffee8ef:
        return "PRL_ERR_ACTIVATION_WRONG_SERVER_RESPONSE";
      case -0x7ffee8ee:
        return "PRL_ERR_ACTIVATION_UNABLE_TO_SEND_REQUEST";
      case -0x7ffee8ed:
        return "PRL_ERR_ACTIVATION_HTTP_REQUEST_FAILED";
      case -0x7ffee8ec:
        return "PRL_ERR_UNABLE_TO_SEND_REQUEST";
      case -0x7ffee8eb:
        return "PRL_ERR_HTTP_REQUEST_FAILED";
      case -0x7ffee8ea:
        return "PRL_ERR_ACTIVATION_UPDATE_FAILED";
      case -0x7ffee8e9:
        return "PRL_ERR_ACTIVATION_OFFLINE_PERIOD_EXPIRED";
      case -0x7ffee8e8:
        return "PRL_ERR_ACTIVATION_COMMON_SERVER_ERROR";
      case -0x7ffee8e7:
        return "PRL_ERR_DEACTIVATE_WRONG_TYPE_OF_ACTIVE_LICENSE";
      case -0x7ffee8e0:
        return "PRL_ERR_DEACTIVATE_NO_INSTALLED_LICENSE";
      case -0x7ffee8df:
        return "PRL_ERR_DEACTIVATE_TRIAL_LICENSE";
      case -0x7ffee8de:
        return "PRL_ERR_DEACTIVATION_SERVER_ERROR";
      case -0x7ffee8dd:
        return "PRL_ERR_DEACTIVATION_SERVER_ACTIVATION_ID_IS_INVALID";
      case -0x7ffee8dc:
        return "PRL_ERR_DEACTIVATION_SERVER_KEY_IS_INVALID";
      case -0x7ffee8db:
        return "PRL_ERR_DEACTIVATION_SERVER_KEY_IS_BLACKLISTED";
      case -0x7ffee8da:
        return "PRL_ERR_DEACTIVATION_WRONG_SERVER_RESPONSE";
      case -0x7ffee8d9:
        return "PRL_ERR_DEACTIVATION_UNABLE_TO_SEND_REQUEST";
      case -0x7ffee8d8:
        return "PRL_ERR_DEACTIVATION_HTTP_REQUEST_FAILED";
      case -0x7ffee8d7:
        return "PRL_ERR_DEACTIVATION_COMMON_SERVER_ERROR";
      case -0x7ffee8d0:
        return "PRL_ERR_DEACTIVATION_OLD_HWID_NOT_FOUND";
      case -0x7ffee8cf:
        return "PRL_ERR_LIC_REGISTRATION_COMMON_ERROR";
      case -0x7ffee8ce:
        return "PRL_ERR_LICENSE_IS_NOT_CONFIRMED";
      case -0x7ffee8cd:
        return "PRL_ERR_VZLICENSE_IS_NOT_SUPPORTED";
      }
    }
    else if (param_1 < 0) {
      if (param_1 < -0x7ffa9b00) {
        if (param_1 < -0x7ffaa000) {
          if (param_1 < -0x7ffab000) {
            if (param_1 < -0x7ffac000) {
              if (param_1 < -0x7ffae000) {
                if (param_1 < -0x7ffe9000) {
                  if (param_1 < -0x7ffeafe0) {
                    if (param_1 < -0x7ffecfca) {
                      if (param_1 == -0x7ffee000) {
                        return "PRL_ERR_VTD_DEVICE_NOT_MAPPED";
                      }
                      if (param_1 == -0x7ffecfcb) {
                        return "PET_QUESTION_BACKUP_RESTORE_NOT_ENOUGH_FREE_DISK_SPACE";
                      }
                    }
                    else {
                      if (param_1 == -0x7ffecfca) {
                        return "PET_QUESTION_BACKUP_CREATE_NOT_ENOUGH_FREE_DISK_SPACE";
                      }
                      if (param_1 == -0x7ffecfb8) {
                        return "PRL_WARN_VM_DISCONNECT_SATA_HDD";
                      }
                    }
                  }
                  else if (param_1 < -0x7ffeaaff) {
                    if (param_1 < -0x7ffeabfb) {
                      if (param_1 < -0x7ffead00) {
                        if (param_1 < -0x7ffeae00) {
                          if (param_1 < -0x7ffeae6e) {
                            if (param_1 < -0x7ffeae80) {
                              if (param_1 < -0x7ffeae90) {
                                if (param_1 < -0x7ffeaea0) {
                                  if (param_1 < -0x7ffeaf00) {
                                    if (param_1 < -0x7ffeaf87) {
                                      if (param_1 == -0x7ffeafe0) {
                                        return "GUI_ERR_WRONG_NUMBER_OF_CPU";
                                      }
                                      if (param_1 == -0x7ffeafbe) {
                                        return "GUI_ERR_CANT_SAVE_CONFIG_AS_VM_WAS_DELETED";
                                      }
                                    }
                                    else if (param_1 < -0x7ffeaf68) {
                                      if (param_1 == -0x7ffeaf87) {
                                        return "GUI_WRN_VM_HW_UPGRADING_IN_PROGRESS";
                                      }
                                      if (param_1 == -0x7ffeaf78) {
                                        return "GUI_WRN_VM_HW_UPGRADING_VMXPHY_IN_PROGRESS";
                                      }
                                    }
                                    else {
                                      if (param_1 == -0x7ffeaf68) {
                                        return "GUI_WRN_CANT_CLOSE_CONVERSION_IN_PROGRESS";
                                      }
                                      if (param_1 == -0x7ffeaf67) {
                                        return "GUI_WRN_CANT_CLOSE_SNAPSHOTING_IN_PROGRESS";
                                      }
                                    }
                                  }
                                  else if (param_1 < -0x7ffeaecf) {
                                    if (param_1 == -0x7ffeaf00) {
                                      return "GUI_WRN_CANT_CLOSE_REVERTING_IN_PROGRESS";
                                    }
                                    if (param_1 == -0x7ffeaeff) {
                                      return "GUI_WRN_CANT_CLOSE_DELETING_STATE_IN_PROGRESS";
                                    }
                                  }
                                  else {
                                    if (param_1 == -0x7ffeaecf) {
                                      return "GUI_ERR_ACTION_CANCELLED";
                                    }
                                    if (param_1 == -0x7ffeaebd) {
                                      return "GUI_WRN_INVALID_IPV6_ADDRESS";
                                    }
                                  }
                                }
                                else {
                                  switch(param_1) {
                                  case -0x7ffeaea0:
                                    return "GUI_ERR_PORT_FORWARD_OUT_OF_SCOPE";
                                  case -0x7ffeae9e:
                                    return "GUI_ERR_INVALID_ADAPTER_ADDRESS";
                                  case -0x7ffeae9d:
                                    return "GUI_WRN_BOOT_CAMP_NEEDS_FREE_SLOT";
                                  case -0x7ffeae9c:
                                    return "GUI_WRN_BOOT_CAMP_NEEDS_FREE_SLOT_IDE";
                                  case -0x7ffeae98:
                                    return "GUI_ERR_INSTALLATION_CD_IS_NOT_INSERTED";
                                  case -0x7ffeae97:
                                    return 
                                    "GUI_WRN_REGISTER_VM_WIZ_COMPLETE_PAGE_TITLE_CREATION_FAILED";
                                  }
                                }
                              }
                              else {
                                switch(param_1) {
                                case -0x7ffeae90:
                                  return "GUI_WRN_PARTITION_NOT_SPECIFIED";
                                case -0x7ffeae8f:
                                  return "GUI_WRN_PRODUCT_KEY_INCOMPLETE";
                                case -0x7ffeae8e:
                                  return "GUI_WRN_USER_NAME_NOT_SPECIFIED";
                                case -0x7ffeae8d:
                                  return "GUI_WRN_USER_NAME_ILLEGAL";
                                case -0x7ffeae8c:
                                  return "GUI_WRN_USER_PASS_NOT_SPECIFIED";
                                case -0x7ffeae8b:
                                  return "GUI_WRN_USER_PASS_DO_NOT_MATCH";
                                case -0x7ffeae8a:
                                  return "GUI_WRN_USER_PASS_TOO_SHORT";
                                case -0x7ffeae89:
                                  return "GUI_WRN_LOCAL_PATH_NOT_SPECIFIED";
                                case -0x7ffeae88:
                                  return "GUI_WRN_LOCAL_PATH_WRONG";
                                case -0x7ffeae87:
                                  return "GUI_WRN_SERVER_NAME_NOT_SPECIFIED";
                                }
                              }
                            }
                            else {
                              switch(param_1) {
                              case -0x7ffeae80:
                                return "GUI_WRN_SERVER_NAME_WRONG";
                              case -0x7ffeae7f:
                                return "GUI_WRN_SERVER_ALREADY_CONNECTED";
                              case -0x7ffeae7e:
                                return "GUI_WRN_HOST_IP_ADDRESS";
                              case -0x7ffeae7d:
                                return "GUI_WRN_SUBNET_MASK";
                              case -0x7ffeae7c:
                                return "GUI_WRN_DHCP_START_IP_ADDRESS";
                              case -0x7ffeae7b:
                                return "GUI_WRN_DHCP_END_IP_ADDRESS";
                              case -0x7ffeae7a:
                                return "GUI_WRN_DUPLICATE_VIRTUAL_NETWORK";
                              case -0x7ffeae79:
                                return "GUI_WRN_VIRTUAL_NETWORK_WRONG";
                              case -0x7ffeae78:
                                return "GUI_WRN_CANT_REVERT_ABSENT_SNAPSHOT";
                              case -0x7ffeae77:
                                return "GUI_WRN_PRODUCT_KEY_WRONG_LENGTH";
                              }
                            }
                          }
                          else {
                            switch(param_1) {
                            case -0x7ffeae6e:
                              return "GUI_WRN_DEVICE_ALREADY_EXIST";
                            case -0x7ffeae6c:
                              return "GUI_ERR_IVALID_VM_UUID_MISMATCH";
                            case -0x7ffeae6b:
                              return "GUI_WRN_INVALID_VM_BUNDLE";
                            case -0x7ffeae6a:
                              return "GUI_WRN_INVALID_VM_FOLDER";
                            case -0x7ffeae69:
                              return "GUI_ERR_CANT_START_UTW7_AGENT";
                            case -0x7ffeae67:
                              return "GUI_ERR_NET_ADAPTER_EXISTS";
                            }
                          }
                        }
                        else {
                          switch(param_1) {
                          case -0x7ffeae00:
                            return "GUI_ERR_NET_ADAPTER_NAME_EMPTY";
                          case -0x7ffeadff:
                            return "GUI_WRN_PORT_MAPPING_INC_PORT_INCORRECT";
                          case -0x7ffeadfe:
                            return "GUI_WRN_PORT_MAPPING_VM_PORT_INCORRECT";
                          case -0x7ffeadfd:
                            return "GUI_WRN_PORT_MAPPING_IP_INCORRECT";
                          case -0x7ffeadfc:
                            return "GUI_WRN_NO_USB_DEVICES_AVAILABLE";
                          case -0x7ffeadfa:
                            return "GUI_ERR_UPDATER_NO_FILE";
                          case -0x7ffeadf9:
                            return "GUI_ERR_UPDATER_NO_CONNECTION";
                          case -0x7ffeadf8:
                            return "GUI_ERR_NO_INSTALLER_FILE";
                          case -0x7ffeadf7:
                            return "GUI_ERR_UPDATE_INSTALL_FAILED";
                          case -0x7ffeadf0:
                            return "GUI_ERR_UPDATE_UNABLE_TO_CHECK";
                          case -0x7ffeadec:
                            return "GUI_ERR_WRONG_BACKUP_PATH";
                          case -0x7ffeade8:
                            return "GUI_ERR_CONVERT_FAILED";
                          case -0x7ffeaddf:
                            return "GUI_WRN_NO_BACKUP_FOLDER";
                          case -0x7ffeaddc:
                            return "GUI_INFO_COHERENCE_CANNOTSTART_LOWMEMORY";
                          case -0x7ffeaddb:
                            return "GUI_INFO_COHERENCE_STOPPED_LOWMEMORY";
                          case -0x7ffeadda:
                            return "GUI_INFO_COHERENCE_CANNOTSTART_SMOFF";
                          case -0x7ffeadd9:
                            return "GUI_INFO_COHERENCE_CANNOTSTART_SMDISABLED";
                          case -0x7ffeadd8:
                            return "GUI_INFO_COHERENCE_CANNOTSTART_DSPCFGERROR_GUEST";
                          case -0x7ffeadd7:
                            return "GUI_INFO_COHERENCE_CANNOTSTART_DSPCFGERROR_HOST";
                          case -0x7ffeadd0:
                            return "GUI_INFO_COHERENCE_STOPPED_DSPCFGERROR_GUEST";
                          case -0x7ffeadcf:
                            return "GUI_INFO_COHERENCE_CANNOTSTART_NOTENOUGHDISPLAYS";
                          case -0x7ffeadce:
                            return "GUI_INFO_COHERENCE_CANNOTSTART_SERVERBUSY";
                          case -0x7ffeadcd:
                            return "GUI_ERR_UNABLE_START_TRANSPORTER";
                          case -0x7ffeadcc:
                            return "GUI_ERR_UNABLE_START_LYM";
                          case -0x7ffeadca:
                            return "GUI_INFO_REMAP_VM_KEY_SEQUENCE_ALREADY_USED_BY_PD_SHORTCUT";
                          case -0x7ffeadc9:
                            return "GUI_INFO_REMAP_PD_KEY_SEQUENCE_ALREADY_USED_BY_VM_SHORTCUT";
                          case -0x7ffeadc8:
                            return "GUI_INFO_REMAP_PD_KEY_SEQUENCE_ALREADY_USED_BY_PD_SHORTCUT";
                          case -0x7ffeadc7:
                            return "GUI_ERR_REGISTRATION_PRODUCT_ERR_CONNECTION";
                          case -0x7ffeadc0:
                            return "GUI_ERR_REGISTRATION_PRODUCT_ERR_INVALID_EMAIL";
                          case -0x7ffeadbf:
                            return "GUI_ERR_REGISTRATION_PRODUCT_ERR_GENERAL_ERROR";
                          case -0x7ffeadbe:
                            return "GUI_ERR_REGISTRATION_PRODUCT_ERR_INVALID_KEY_ERROR";
                          case -0x7ffeadbc:
                            return "GUI_INFO_REGISTRATION_PRODUCT_ACTIVATED_OK_NO_SUPPORT_CODE";
                          case -0x7ffeadba:
                            return 
                            "GUI_INFO_REGISTRATION_PRODUCT_ALREADY_REGISTERED_NO_SUPPORT_CODE";
                          case -0x7ffeadb9:
                            return "GUI_ERR_REGISTRATION_PRODUCT_ALREADY_REGISTERED_ON_ANOTHER_USER"
                            ;
                          case -0x7ffeadb7:
                            return "GUI_WRN_NEW_PROFILE_NAME_EMPTY";
                          case -0x7ffeadb0:
                            return "GUI_WRN_PROFILE_NAME_ALREADY_IN_USE";
                          case -0x7ffeadae:
                            return "GUI_QUESTION_DESKTOP_IS_UNREGISTERED";
                          case -0x7ffeadad:
                            return "GUI_WRN_DESKTOP_IS_TRIAL";
                          case -0x7ffeadac:
                            return "GUI_ERR_DOWNLOADING_PIS_FAILED";
                          case -0x7ffeadab:
                            return "GUI_ERR_DOWNLOADING_HOST_ANTIVIRUS_FAILED";
                          case -0x7ffeadaa:
                            return "GUI_ERR_INSTALLING_HOST_ANTIVIRUS_FAILED";
                          case -0x7ffeada8:
                            return "GUI_ERR_UNINSTALLING_HOST_ANTIVIRUS_FAILED";
                          case -0x7ffeada7:
                            return "GUI_ERR_DOWNLOADING_NATIVE_LOOK_FAILED";
                          case -0x7ffeada0:
                            return "GUI_ERR_NATIVE_LOOK_ERR_TRANSFER_FAILED";
                          case -0x7ffead9f:
                            return "GUI_ERR_NATIVE_LOOK_ERR_INSTALL_FAILED";
                          case -0x7ffead9e:
                            return "GUI_ERRNATIVE_LOOK_ERR_CANNOT_START_INSTALL";
                          case -0x7ffead9d:
                            return "GUI_ERR_NATIVE_LOOK_ERR_NON_ADMIN";
                          case -0x7ffead9c:
                            return "GUI_ERR_NATIVE_LOOK_ERR_UNKNOWN";
                          case -0x7ffead9b:
                            return "GUI_ERR_CHECK_LICENSE_ERR_CONNECTION_FAILED";
                          case -0x7ffead9a:
                            return "GUI_ERR_CHECK_LICENSE_ERR_GENERAL_ERROR";
                          case -0x7ffead99:
                            return "GUI_ERR_CHECK_LICENSE_ERR_INVALID_KEY";
                          case -0x7ffead98:
                            return "GUI_ERR_CHECK_LICENSE_ERR_BETTA_KEY";
                          case -0x7ffead97:
                            return "GUI_ERR_CHECK_LICENSE_ERR_TRIAL_KEY";
                          case -0x7ffead90:
                            return "GUI_QUESTION_PRODUCT_UPGRADE_DOWNLOAD_FAILED";
                          case -0x7ffead8f:
                            return "GUI_ERR_PRODUCT_UPGRADE_PURCHASE_ORDER_FAILED";
                          case -0x7ffead8e:
                            return "GUI_ERR_PMC_INVALID_CREDENTIALS";
                          case -0x7ffead8d:
                            return "GUI_ERR_PMC_INVALID_CREDENTIALS_ON_RECONNECT";
                          case -0x7ffead8c:
                            return "GUI_ERR_PMC_SERVER_BUSY";
                          case -0x7ffead8b:
                            return "GUI_ERR_PMC_UNABLE_TO_CONNECT";
                          case -0x7ffead8a:
                            return "GUI_ERR_DHCP_UNKNOWN";
                          case -0x7ffead89:
                            return "GUI_ERR_NO_INSTALLATION_DISC";
                          case -0x7ffead88:
                            return "GUI_ERR_UNABLE_TO_RETRIEVE_PASSWORD";
                          case -0x7ffead87:
                            return "GUI_ERR_NO_EMAIL_ACCOUNT";
                          case -0x7ffead80:
                            return "GUI_WRN_UNABLE_OPEN_FEEDBACK_DLG";
                          case -0x7ffead7f:
                            return "GUI_WRN_UNABLE_REQUEST_TRIAL_KEY";
                          case -0x7ffead79:
                            return "GUI_INFO_REGISTRATION_ACCOUNT_ALREADY_USED";
                          case -0x7ffead77:
                            return "GUI_WRN_KEY_NOT_BE_AUTO_REGISTRED";
                          case -0x7ffead70:
                            return "GUI_WRN_ENCRYPTED_DISK_NOT_ADDED";
                          case -0x7ffead6f:
                            return "GUI_WRN_SOURCE_FOR_DEVICE_IS_USED";
                          case -0x7ffead6e:
                            return "GUI_WRN_UNATTENDED_LINUX_NO_IMAGE";
                          case -0x7ffead6d:
                            return "GUI_WRN_UNATTENDED_WINDOWS_NO_IMAGE";
                          case -0x7ffead6b:
                            return "GUI_INFO_REG_INVALID_KEY";
                          case -0x7ffead6a:
                            return "GUI_INFO_REG_INVALID_EMAIL";
                          case -0x7ffead69:
                            return "GUI_INFO_REG_ALREADY_REGISTERED";
                          case -0x7ffead68:
                            return "GUI_INFO_REG_REQUIRED_FIELDS";
                          case -0x7ffead67:
                            return "GUI_INFO_REG_INVALID_USER";
                          }
                        }
                      }
                      else {
                        switch(param_1) {
                        case -0x7ffead00:
                          return "GUI_INFO_REG_CONNECTION";
                        case -0x7ffeacff:
                          return "GUI_INFO_INVALID_LOGIN_OR_PASS";
                        case -0x7ffeacfe:
                          return "GUI_INFO_REG_GENERAL_ERROR";
                        case -0x7ffeacfd:
                          return "GUI_INFO_COHERENCE_CANNOTSTART_LINUX_3D";
                        case -0x7ffeacfc:
                          return "GUI_INFO_COHERENCE_STOPPED_LINUX_3D";
                        case -0x7ffeacec:
                          return "GUI_QUESTION_INVALID_VM_NOT_AVAILABLE";
                        case -0x7ffeaceb:
                          return "GUI_QUESTION_INVALID_VM_CORRUPTED";
                        case -0x7ffeacea:
                          return "GUI_ERR_CONTACT_ADMIN_FOR_ASSISTANCE";
                        case -0x7ffeacdf:
                          return "GUI_ERR_WEB_STORE_UNEXPECTED";
                        case -0x7ffeacde:
                          return "GUI_ERR_WEB_STORE_NO_CONNECTION";
                        case -0x7ffeacdd:
                          return "GUI_ERR_WEB_STORE_NO_DATA";
                        case -0x7ffeacdc:
                          return "GUI_ERR_WEB_STORE_INVALID_DATA";
                        case -0x7ffeacdb:
                          return "GUI_ERR_OS_IMG_DWNLD_UNEXPECTED";
                        case -0x7ffeacda:
                          return "GUI_ERR_OS_IMG_DWNLD_INVALID_DESCRIPTOR";
                        case -0x7ffeacd9:
                          return "GUI_ERR_OS_IMG_DWNLD_CANNOT_SAVE";
                        case -0x7ffeacd8:
                          return "GUI_ERR_OS_IMG_DWNLD_NO_FREE_SPACE";
                        case -0x7ffeacd7:
                          return "GUI_ERR_OS_IMG_DWNLD_NO_CONNECTION";
                        case -0x7ffeacd0:
                          return "GUI_ERR_OS_IMG_DWNLD_SIZE_MISMATCH";
                        case -0x7ffeaccf:
                          return "GUI_ERR_OS_IMG_DWNLD_CHECKSUM_MISMATCH";
                        case -0x7ffeaccb:
                          return "GUI_ERR_MIGRATE_PC_TRANSPORTER_INIT_FAILURE";
                        case -0x7ffeacca:
                          return "GUI_ERR_MIGRATE_PC_FAILED_TO_REGISTER_VM";
                        case -0x7ffeacc9:
                          return "GUI_ERR_MIGRATE_PC_ALREADY_RUNNING";
                        case -0x7ffeacc8:
                          return "GUI_ERR_DOWNLOADING_APPLIANCE_DESCRIPTOR_FAILED";
                        case -0x7ffeacc7:
                          return "GUI_ERR_APP_RESUME_TIMEOUT";
                        case -0x7ffeacc0:
                          return "GUI_ERR_APP_RESUME_SERVER_DISCONNECTED";
                        case -0x7ffeacbf:
                          return "GUI_ERR_APP_RESUME_VM_ENCRYPTED";
                        case -0x7ffeacbe:
                          return "GUI_ERR_APP_RESUME_INVALID_CONTEXT";
                        case -0x7ffeacbd:
                          return "GUI_ERR_APP_RESUME_SILENT_START";
                        case -0x7ffeacbc:
                          return "GUI_ERR_APP_RESUME_CANT_CREATE_WINDOW";
                        case -0x7ffeacbb:
                          return "GUI_ERR_REGISTRATION_PRODUCT_ERR_TRIAL_KEY_ERROR";
                        case -0x7ffeacba:
                          return "GUI_ERR_CANNOT_FIND_ASSINGED_TO_VMS_PCI_DEVICE";
                        case -0x7ffeacb7:
                          return "GUI_ERR_NO_OPTICAL_DRIVE";
                        case -0x7ffeacb0:
                          return "GUI_WRN_FS_RESIZE_NOT_SUPPORTED";
                        case -0x7ffeacaf:
                          return "GUI_QUESTION_NO_FREE_SPACE";
                        case -0x7ffeacae:
                          return "GUI_ERR_APP_ALREADY_RUNNING";
                        case -0x7ffeacad:
                          return "GUI_ERR_FAILED_TO_INIT_SDK_LIB";
                        case -0x7ffeacab:
                          return "GUI_ERR_APP_RESUME_INSTALLING_UPDATE";
                        case -0x7ffeacaa:
                          return "GUI_QUESTION_CLOSE_VM_WINDOW";
                        case -0x7ffeaca9:
                          return "GUI_ERR_DOWNLOAD_NO_FILE_PERMISSION";
                        case -0x7ffeac9b:
                          return "GUI_WRN_UPGRADE_PURCHASE_MISSING_KEY";
                        case -0x7ffeac9a:
                          return "GUI_ERR_APP_BUNDLE_CHECK_INIT_REQUIRED";
                        case -0x7ffeac99:
                          return "GUI_ERR_APP_BUNDLE_CHECK_INIT_FAILED_TO_START";
                        case -0x7ffeac98:
                          return "GUI_ERR_APP_BUNDLE_CHECK_INIT_ABORTED";
                        case -0x7ffeac97:
                          return "GUI_ERR_APP_BUNDLE_INIT_FAILURE";
                        case -0x7ffeac90:
                          return "GUI_ERR_APP_BUNDLE_INIT_FAILED_TO_START";
                        case -0x7ffeac8f:
                          return "GUI_ERR_APP_BUNDLE_INIT_ABORTED";
                        case -0x7ffeac8e:
                          return "GUI_ERR_APP_EULA_DECLINED";
                        case -0x7ffeac8d:
                          return "GUI_ERR_NEWER_APP_ALREADY_RUNNING";
                        case -0x7ffeac8c:
                          return "GUI_ERR_OLDER_APP_ALREADY_RUNNING";
                        case -0x7ffeac89:
                          return "GUI_ERR_RUN_SERVICES_SCRIPT_FAILURE";
                        case -0x7ffeac88:
                          return "GUI_ERR_RUN_SERVICES_SCRIPT_FAILED_TO_START";
                        case -0x7ffeac87:
                          return "GUI_ERR_RUN_SERVICES_SCRIPT_ABORTED";
                        case -0x7ffeac80:
                          return "GUI_ERR_APP_COULD_NOT_BE_STARTED";
                        case -0x7ffeac7f:
                          return "GUI_ERR_UNABLE_TO_START_SERVICES";
                        case -0x7ffeac7e:
                          return "GUI_WRN_USER_NAME_RESERVED_BY_GUEST";
                        case -0x7ffeac7d:
                          return "GUI_WRN_OPEN_IN_IE_NO_RUNNING_WINDOWS_VMS";
                        case -0x7ffeac7c:
                          return "GUI_ERR_APP_CAN_NOT_BE_STARTED_FROM_LOCATION";
                        case -0x7ffeac78:
                          return "GUI_ERR_APP_RESUME_INIT_BUNDLE";
                        case -0x7ffeac77:
                          return "GUI_QUESTION_REPLACE_PREVIOUS_VERSION";
                        }
                      }
                    }
                    else if (param_1 < -0x7ffeabee) {
                      switch(param_1) {
                      case -0x7ffeabfb:
                        return "GUI_ERR_UPGRADE_REQUEST_UNEXPECTED";
                      case -0x7ffeabfa:
                        return "GUI_ERR_UPGRADE_REQUEST_NETWORK_ERROR";
                      case -0x7ffeabf9:
                        return "GUI_ERR_UPGRADE_REQUEST_INVALID_RESPONSE";
                      case -0x7ffeabf8:
                        return "GUI_ERR_ANTIVIRUS_DOWNLOAD_UNEXPECTED";
                      case -0x7ffeabf7:
                        return "GUI_ERR_ANTIVIRUS_DOWNLOAD_NO_CONNECTION";
                      }
                    }
                    else if (param_1 < -0x7ffeabe0) {
                      switch(param_1) {
                      case -0x7ffeabee:
                        return "GUI_ERR_PENDING_SWITCH_VIEW_MODE_CANCELED";
                      case -0x7ffeabed:
                        return "GUI_ERR_DLCITEM_DWNLD_UNEXPECTED";
                      case -0x7ffeabec:
                        return "GUI_ERR_DLCITEM_DWNLD_INVALID_DESCRIPTOR";
                      case -0x7ffeabeb:
                        return "GUI_ERR_DLCITEM_DWNLD_CANNOT_SAVE";
                      case -0x7ffeabea:
                        return "GUI_ERR_DLCITEM_DWNLD_NO_FREE_SPACE";
                      case -0x7ffeabe9:
                        return "GUI_ERR_DLCITEM_DWNLD_NO_CONNECTION";
                      case -0x7ffeabe8:
                        return "GUI_ERR_DLCITEM_DWNLD_SIZE_MISMATCH";
                      case -0x7ffeabe7:
                        return "GUI_ERR_DLCITEM_DWNLD_CHECKSUM_MISMATCH";
                      }
                    }
                    else if (param_1 < -0x7ffeabd0) {
                      switch(param_1) {
                      case -0x7ffeabe0:
                        return "GUI_ERR_ANTIVIRUS_IMG_DWNLD_UNEXPECTED";
                      case -0x7ffeabdf:
                        return "GUI_ERR_ANTIVIRUS_IMG_DWNLD_INVALID_DESCRIPTOR";
                      case -0x7ffeabde:
                        return "GUI_ERR_ANTIVIRUS_IMG_DWNLD_CANNOT_SAVE";
                      case -0x7ffeabdd:
                        return "GUI_ERR_ANTIVIRUS_IMG_DWNLD_NO_FREE_SPACE";
                      case -0x7ffeabdc:
                        return "GUI_ERR_ANTIVIRUS_IMG_DWNLD_NO_CONNECTION";
                      case -0x7ffeabdb:
                        return "GUI_ERR_ANTIVIRUS_IMG_DWNLD_SIZE_MISMATCH";
                      case -0x7ffeabda:
                        return "GUI_ERR_ANTIVIRUS_IMG_DWNLD_CHECKSUM_MISMATCH";
                      }
                    }
                    else if (param_1 < -0x7ffeabc0) {
                      switch(param_1) {
                      case -0x7ffeabd0:
                        return "GUI_ERR_VOLUME_LICENSE_EXPIRED";
                      case -0x7ffeabcf:
                        return "GUI_ERR_APP_NEED_REINSTALL";
                      case -0x7ffeabce:
                        return "GUI_WRN_MAKE_BACKUP_BEFORE_DISK_RESIZE";
                      case -0x7ffeabcd:
                        return "GUI_ERR_APP_CAN_NOT_BE_STARTED_IN_SAFE_BOOT";
                      case -0x7ffeabcc:
                        return "GUI_ERR_APP_BUNDLE_INIT_SOUND_DRIVER_LOCKED";
                      case -0x7ffeabca:
                        return "GUI_WRN_PURCHASE_MISSING_KEY";
                      case -0x7ffeabc9:
                        return "GUI_ERR_PAX_AGENT_NO_CONNECTION";
                      case -0x7ffeabc8:
                        return "GUI_ERR_PAX_AGENT_DOWNLOAD_ERROR";
                      case -0x7ffeabc7:
                        return "GUI_ERR_DOWNLOADING_WINDOWS7_LOOK_FAILED";
                      }
                    }
                    else if (param_1 < -0x7ffeabb0) {
                      switch(param_1) {
                      case -0x7ffeabc0:
                        return "GUI_ERR_WINDOWS7_LOOK_ERR_TRANSFER_FAILED";
                      case -0x7ffeabbf:
                        return "GUI_ERR_WINDOWS7_LOOK_ERR_INSTALL_FAILED";
                      case -0x7ffeabbe:
                        return "GUI_ERR_WINDOWS7_LOOK_ERR_CANNOT_START_INSTALL";
                      case -0x7ffeabbd:
                        return "GUI_ERR_WINDOWS7_LOOK_ERR_NON_ADMIN";
                      case -0x7ffeabbc:
                        return "GUI_ERR_WINDOWS7_LOOK_ERR_UNKNOWN";
                      case -0x7ffeabbb:
                        return "GUI_ERR_PAX_AGENT_INSTALL_FAILURE";
                      }
                    }
                    else if (param_1 < -0x7ffeab70) {
                      if (param_1 < -0x7ffeab90) {
                        if (param_1 < -0x7ffeab9e) {
                          if (param_1 == -0x7ffeabb0) {
                            return "GUI_ERR_CANNOT_PACK_MAVERICK_IMAGE";
                          }
                          if (param_1 == -0x7ffeaba7) {
                            return "GUI_WRN_OPEN_IN_WIN_EXPLORER_NO_RUNNING_WINDOWS_VMS";
                          }
                        }
                        else {
                          switch(param_1) {
                          case -0x7ffeab9e:
                            return "GUI_ERR_HOST_NOT_SUPPORTED";
                          case -0x7ffeab9c:
                            return "GUI_ERR_CANNOT_COMPACT_BOOTCAMP_VM";
                          case -0x7ffeab9b:
                            return "PRL_ERR_CANNOT_RUN_LINKED_CLONE_FOR_NOT_STOPPED_VM";
                          case -0x7ffeab9a:
                            return "GUI_ERR_CANNOT_RUN_LINKED_CLONE";
                          case -0x7ffeab99:
                            return "GUI_ERR_PARENT_LINKED_VM_NOT_FOUND";
                          case -0x7ffeab97:
                            return "PRL_ERR_CANNOT_CREATE_LINKED_CLONE_FOR_NOT_STOPPED_VM";
                          }
                        }
                      }
                      else if (param_1 < -0x7ffeab7d) {
                        switch(param_1) {
                        case -0x7ffeab90:
                          return "GUI_ERR_DOWNLOADING_FAILED";
                        case -0x7ffeab8f:
                          return "GUI_ERR_INSTALLATION_DOWNLOADING_FAILED";
                        case -0x7ffeab8e:
                          return "GUI_ERR_INSTALLING_FAILED";
                        case -0x7ffeab8b:
                          return "GUI_ERR_NO_FREE_DISK_SPACE_TO_INSTALL";
                        case -0x7ffeab8a:
                          return "GUI_ERR_UID_0_DUPLICATION";
                        case -0x7ffeab89:
                          return "GUI_ERR_CANT_RUN_ON_THIS_SYSTEM";
                        }
                      }
                      else {
                        if (param_1 == -0x7ffeab7d) {
                          return "GUI_WRN_OPEN_IN_WIN_NO_RUNNING_WINDOWS_VMS";
                        }
                        if (param_1 == -0x7ffeab79) {
                          return "GUI_ERR_RESTART_TO_COMPLETE_INSTALL";
                        }
                      }
                    }
                    else {
                      switch(param_1) {
                      case -0x7ffeab70:
                        return "GUI_ERR_CANNOT_SHARE_FILE";
                      case -0x7ffeab6f:
                        return "GUI_ERR_CANNOT_UNSHARE_FILE";
                      case -0x7ffeab68:
                        return "GUI_ERR_SIGN_OUT_CANCELLED";
                      case -0x7ffeab67:
                        return "GUI_ERR_TRIAL_ALREADY_USE";
                      }
                    }
                  }
                  else if (param_1 < -0x7ffeaaf0) {
                    switch(param_1) {
                    case -0x7ffeaaff:
                      return "GUI_ERR_CHECK_INTERNET_CONNECTION";
                    case -0x7ffeaafe:
                      return "GUI_ERR_NETWORK_ACTIVATION_FAILED";
                    case -0x7ffeaafd:
                      return "GUI_QUESTION_VIDEO_MEMORY_IS_TOO_LOW_FOR_5K_RESOLUTION";
                    case -0x7ffeaafc:
                      return "GUI_ERR_WEB_PORTAL_LIC_ALREADY_IN_USE";
                    case -0x7ffeaafb:
                      return "GUI_ERR_APP_STORE_BETA_EXPIRED";
                    case -0x7ffeaafa:
                      return "GUI_ERR_NOT_COMPATIBLE_WITH_APPLE_HYPERVISOR";
                    case -0x7ffeaaf7:
                      return "GUI_ERR_LICENSE_WAS_DEACTIVATED";
                    }
                  }
                  else {
                    if (param_1 == -0x7ffeaaf0) {
                      return "GUI_ERR_LICENSE_WAS_DEACTIVATED_CONSUMER";
                    }
                    if (param_1 == -0x7ffeaade) {
                      return "GUI_ERR_KEXT_LOADING_IS_BLOCKED_BY_SYSTEM_SECURITY_POLICY";
                    }
                  }
                }
                else if (param_1 < -0x7ffc0000) {
                  if (param_1 < -0x7ffc8000) {
                    if (param_1 < -0x7ffc9000) {
                      if (param_1 < -0x7ffca000) {
                        if (param_1 < -0x7ffcb000) {
                          if (param_1 < -0x7ffcc000) {
                            if (param_1 < -0x7ffd0000) {
                              if (param_1 < -0x7ffd7000) {
                                if (param_1 < -0x7ffd9000) {
                                  if (param_1 < -0x7ffd9b00) {
                                    if (param_1 < -0x7ffda000) {
                                      if (param_1 < -0x7ffdc000) {
                                        if (param_1 < -0x7ffe0000) {
                                          if (param_1 < -0x7ffe7000) {
                                            if (param_1 < -0x7ffe8ffe) {
                                              if (param_1 == -0x7ffe9000) {
                                                return "PRL_ERR_UPD_UPDATER_CONFIG";
                                              }
                                              if (param_1 == -0x7ffe8fff) {
                                                return "PRL_ERR_UPD_UPDATES";
                                              }
                                            }
                                            else {
                                              if (param_1 == -0x7ffe8ffe) {
                                                return "PRL_ERR_CREATE_PRIVELEGED_PROCESS";
                                              }
                                              if (param_1 == -0x7ffe8000) {
                                                return "PRL_ERR_VA_CONFIG";
                                              }
                                            }
                                          }
                                          else {
                                            switch(param_1) {
                                            case -0x7ffe7000:
                                              return "PRL_ERR_STATE_UNEXPECTED_ERROR";
                                            case -0x7ffe6fff:
                                              return "PRL_ERR_STATE_NO_DISKS";
                                            case -0x7ffe6ffe:
                                              return "PRL_ERR_STATE_PROCESS_RUNNING";
                                            case -0x7ffe6ffd:
                                              return "PRL_ERR_STATE_STOPPING_STATE";
                                            case -0x7ffe6ffc:
                                              return "PRL_ERR_STATE_ROLLBACK_IN_PROGRESS";
                                            case -0x7ffe6ffb:
                                              return "PRL_ERR_STATE_ROLLBACK_ERROR";
                                            case -0x7ffe6ffa:
                                              return "PRL_ERR_STATE_INVALID_PARAMETERS";
                                            case -0x7ffe6ff9:
                                              return "PRL_ERR_STATE_ERROR_CREATE_IMAGE";
                                            case -0x7ffe6ff8:
                                              return "PRL_ERR_STATE_ERROR_RENAMING_IMAGE";
                                            case -0x7ffe6ff7:
                                              return "PRL_ERR_STATE_CANT_OPEN_IMAGE";
                                            case -0x7ffe6ff0:
                                              return "PRL_ERR_STATE_CANT_OPEN_FOR_WRITE";
                                            case -0x7ffe6fef:
                                              return "PRL_ERR_STATE_CANT_OPEN_LOCKED";
                                            case -0x7ffe6fee:
                                              return "PRL_ERR_STATE_CANT_SAVE_LOCKED";
                                            case -0x7ffe6fed:
                                              return "PRL_ERR_STATE_INT_CORRUPTED";
                                            case -0x7ffe6fec:
                                              return "PRL_ERR_STATE_NO_STATE";
                                            case -0x7ffe6feb:
                                              return "PRL_ERR_STATE_ALREADY_EXISTS";
                                            case -0x7ffe6fea:
                                              return "PRL_ERR_STATE_NOT_OPENED";
                                            case -0x7ffe6fe9:
                                              return "PRL_ERR_STATE_NOT_PERMITTED";
                                            case -0x7ffe6fe8:
                                              return "PRL_ERR_STATE_FULL_DELETE_FAILED";
                                            case -0x7ffe6fe7:
                                              return "PRL_ERR_STATE_MERGE_FAILED";
                                            case -0x7ffe6fe0:
                                              return "PRL_ERR_STATE_MERGE_NO_SPACE";
                                            case -0x7ffe6fdf:
                                              return "PRL_ERR_STATE_MEMORY_ERROR";
                                            case -0x7ffe6fde:
                                              return "PRL_ERR_STATE_INVALID_IMAGE_TYPE";
                                            case -0x7ffe6fdd:
                                              return "PRL_ERR_STATE_DELETE_NONCLOSED";
                                            case -0x7ffe6fdc:
                                              return "PRL_ERR_STATE_CANT_LOAD_SPECIFIED_CFG";
                                            case -0x7ffe6fdb:
                                              return "PRL_ERR_STATE_GETFREESPACE_FAILED";
                                            case -0x7ffe6fda:
                                              return "PRL_ERR_STATE_STATFS_FAILED";
                                            case -0x7ffe6fd9:
                                              return "PRL_ERR_STATE_NOT_RELEASED";
                                            }
                                          }
                                        }
                                        else if (param_1 < -0x7ffdf000) {
                                          switch(param_1) {
                                          case -0x7ffe0000:
                                            return "PRL_ERR_CORE_STATE_ERROR_COMMON";
                                          case -0x7ffdffff:
                                            return "PRL_ERR_CORE_STATE_INV_SAV_VERSION";
                                          case -0x7ffdfffe:
                                            return "PRL_ERR_CORE_STATE_CORRUPT_SAV_FILE";
                                          case -0x7ffdfffd:
                                            return "PRL_ERR_CORE_STATE_CORRUPT_MEM_FILE";
                                          case -0x7ffdfffc:
                                            return "PRL_ERR_CORE_STATE_CHANGE_VM_CONFIG";
                                          case -0x7ffdfffb:
                                            return "PRL_ERR_VM_SUSPEND_FAILED";
                                          case -0x7ffdfffa:
                                            return "PRL_ERR_VM_RESUME_FAILED";
                                          case -0x7ffdfff8:
                                            return "PRL_ERR_VM_SUSPEND_CHANGED_VM_CONFIG";
                                          case -0x7ffdfff7:
                                            return "PRL_ERR_VM_MEMORY_SWAPPING_IN_PROGRESS";
                                          case -0x7ffdfff0:
                                            return "PRL_ERR_CANT_SUSPEND_VM_WITH_BOOTCAMP";
                                          case -0x7ffdffef:
                                            return "PRL_ERR_SAFE_MODE_START_DURING_SUSPENDING_SYNC";
                                          case -0x7ffdffee:
                                            return "PRL_ERR_CORE_STATE_VM_WOULD_STOP";
                                          case -0x7ffdffed:
                                            return 
                                            "PRL_ERR_RESUME_BOOTCAMP_CORRUPT_DISK_STATE_PARAM";
                                          case -0x7ffdffec:
                                            return "PRL_ERR_RESUME_BOOTCAMP_CHANGED_DISK_CONTENTS";
                                          case -0x7ffdffeb:
                                            return "PRL_ERR_SUSPEND_BOOTCAMP_NOT_NTFS_ONLY_DISK";
                                          case -0x7ffdffea:
                                            return 
                                            "PRL_ERR_SUSPEND_BOOTCAMP_NTFS_RW_MOUNTERS_DETECTED";
                                          case -0x7ffdffe9:
                                            return "PRL_ERR_CORE_STATE_NO_FILE";
                                          case -0x7ffdffe8:
                                            return "PRL_ERR_CORE_STATE_CANCELLED";
                                          case -0x7ffdffe7:
                                            return "PRL_ERR_CORE_STATE_VM_WOULD_RESTART";
                                          case -0x7ffdffe0:
                                            return "PRL_ERR_INTERNAL_VM_STATE_INCOMPATIBLE";
                                          }
                                        }
                                        else if (param_1 < -0x7ffde000) {
                                          switch(param_1) {
                                          case -0x7ffdf000:
                                            return "PRL_ERR_DISK_GENERIC_ERROR";
                                          case -0x7ffdefff:
                                            return "PRL_ERR_DISK_XML_OPEN_FAILED";
                                          case -0x7ffdeffe:
                                            return "PRL_ERR_DISK_XML_INVALID";
                                          case -0x7ffdeffd:
                                            return "PRL_ERR_DISK_XML_INVALID_VERSION";
                                          case -0x7ffdeffc:
                                            return "PRL_ERR_DISK_XML_SAVE_ERROR";
                                          case -0x7ffdeffb:
                                            return "PRL_ERR_DISK_XML_LARGE_FILE";
                                          case -0x7ffdeffa:
                                            return "PRL_ERR_DISK_SNAPSHOTS_CORRUPTED";
                                          case -0x7ffdeff9:
                                            return "PRL_ERR_DISK_STORAGE_CORRUPTED";
                                          case -0x7ffdeff8:
                                            return "PRL_ERR_DISK_IMAGES_CORRUPTED";
                                          case -0x7ffdeff7:
                                            return "PRL_ERR_DISK_INVALID_BLOCKSIZE";
                                          case -0x7ffdeff0:
                                            return "PRL_ERR_DISK_STATES_ERROR";
                                          case -0x7ffdefef:
                                            return "PRL_ERR_DISK_INVALID_PARAMETERS";
                                          case -0x7ffdefee:
                                            return "PRL_ERR_DISK_FILE_EXISTS";
                                          case -0x7ffdefed:
                                            return "PRL_ERR_DISK_FILE_CREATE_ERROR";
                                          case -0x7ffdefec:
                                            return "PRL_ERR_DISK_FILE_OPEN_ERROR";
                                          case -0x7ffdefeb:
                                            return "PRL_ERR_DISK_DIR_CREATE_ERROR";
                                          case -0x7ffdefea:
                                            return "PRL_ERR_DISK_CREATE_IMAGE_ERROR";
                                          case -0x7ffdefe9:
                                            return "PRL_ERR_DISK_OPERATION_IN_PROGRESS";
                                          case -0x7ffdefe8:
                                            return "PRL_ERR_DISK_BLOCK_SKIPPED";
                                          case -0x7ffdefe7:
                                            return "PRL_ERR_DISK_BLOCK_PARTIALLY_PROCESSED";
                                          case -0x7ffdefe0:
                                            return "PRL_ERR_DISK_MEMORY_ERROR";
                                          case -0x7ffdefdf:
                                            return "PRL_ERR_DISK_DISK_NOT_OPENED";
                                          case -0x7ffdefde:
                                            return "PRL_ERR_DISK_INSUFFICIENT_SPACE";
                                          case -0x7ffdefdd:
                                            return "PRL_ERR_DISK_FAT32_SIZE_EXCEEDED";
                                          case -0x7ffdefdc:
                                            return "PRL_ERR_DISK_NOT_PERMITTED";
                                          case -0x7ffdefdb:
                                            return "PRL_ERR_DISK_INTERNAL_CLASS_ERROR";
                                          case -0x7ffdefda:
                                            return "PRL_ERR_DISK_WRITE_OUT_DISK";
                                          case -0x7ffdefd9:
                                            return "PRL_ERR_DISK_WRITE_FAILED";
                                          case -0x7ffdefd8:
                                            return "PRL_ERR_DISK_READ_OUT_DISK";
                                          case -0x7ffdefd7:
                                            return "PRL_ERR_DISK_READ_FAILED";
                                          case -0x7ffdefd0:
                                            return "PRL_ERR_DISK_SET_CACHING_FAILED";
                                          case -0x7ffdefcf:
                                            return "PRL_ERR_DISK_FSYNC_FAILED";
                                          case -0x7ffdefce:
                                            return "PRL_ERR_DISK_FULLFSYNC_FAILED";
                                          case -0x7ffdefcd:
                                            return "PRL_ERR_DISK_INVALID_FORMAT";
                                          case -0x7ffdefcc:
                                            return "PRL_ERR_DISK_RENAME_ERROR";
                                          case -0x7ffdefcb:
                                            return "PRL_ERR_DISK_OPERATION_NOT_ALLOWED";
                                          case -0x7ffdefca:
                                            return "PRL_ERR_DISK_OPERATION_ABORTED";
                                          case -0x7ffdefc9:
                                            return "PRL_ERR_DISK_SHARING_VIOLATION";
                                          case -0x7ffdefc8:
                                            return "PRL_ERR_DISK_USER_INTERRUPTED";
                                          case -0x7ffdefc7:
                                            return "PRL_ERR_DISK_XML_SAVE_REMOVE_ERROR";
                                          case -0x7ffdefc0:
                                            return "PRL_ERR_DISK_XML_SAVE_RENAME_ERROR";
                                          case -0x7ffdefbf:
                                            return "PRL_ERR_DISK_WRITE_REAL_FAILED";
                                          case -0x7ffdefbe:
                                            return "PRL_ERR_DISK_NOT_IMPLEMENTED";
                                          case -0x7ffdefbd:
                                            return "PRL_ERR_DISK_PARTITIONS_TABLE_CYCLE";
                                          case -0x7ffdefbc:
                                            return "PRL_ERR_DISK_IMAGE_BUSY";
                                          case -0x7ffdefbb:
                                            return "PRL_ERR_DISK_BLOCK_CREATED";
                                          case -0x7ffdefba:
                                            return "PRL_ERR_DISK_GROUP_INTERSECT";
                                          case -0x7ffdefb9:
                                            return "PRL_ERR_DISK_INCORRECTLY_CLOSED";
                                          case -0x7ffdefb8:
                                            return "PRL_ERR_DISK_OFFSETS_FIXED";
                                          case -0x7ffdefb7:
                                            return "PRL_ERR_DISK_CANT_INITIALIZE_IMAGE";
                                          case -0x7ffdefb0:
                                            return "PRL_ERR_DISK_SMALL_IMAGE_SIZE";
                                          case -0x7ffdefaf:
                                            return "PRL_ERR_DISK_NULL_PART_SIZE";
                                          case -0x7ffdefae:
                                            return "PRL_ERR_DISK_XML_LOCKED";
                                          case -0x7ffdefad:
                                            return "PRL_ERR_DISK_PARTITION_NOT_FOUND";
                                          case -0x7ffdefac:
                                            return "PRL_ERR_DISK_PARTITION_INVALID_NAME";
                                          case -0x7ffdefab:
                                            return "PRL_ERR_DISK_UNALIGNED";
                                          case -0x7ffdefaa:
                                            return "PRL_ERR_DISK_NOT_VALID_OFFSET";
                                          case -0x7ffdefa9:
                                            return "PRL_ERR_DISK_ENLARGE_FAILED";
                                          case -0x7ffdefa8:
                                            return "PRL_ERR_DISK_POSSIBLE_OVERRUN";
                                          case -0x7ffdefa7:
                                            return "PRL_ERR_DISK_BOOTCAMP_WRITE_MBR";
                                          case -0x7ffdefa0:
                                            return "PRL_ERR_DISK_IMPERSONATE_FAILED";
                                          case -0x7ffdef9f:
                                            return "PRL_ERR_DISK_XML_MISSING";
                                          case -0x7ffdef9e:
                                            return "PRL_ERR_DISK_UNCOMMITED_OPERATION";
                                          case -0x7ffdef9d:
                                            return "PRL_ERR_DISK_MOUNTED_OVERLAP";
                                          case -0x7ffdef9c:
                                            return "PRL_ERR_DISK_GET_SIZE_FAILED";
                                          case -0x7ffdef9b:
                                            return "PRL_ERR_DISK_GPT_MBR_NOT_EQUAL";
                                          case -0x7ffdef9a:
                                            return "PRL_ERR_DISK_XML_DIFFERS_FROM_REAL";
                                          case -0x7ffdef99:
                                            return "PRL_ERR_DISK_XML_PARTITION_NOT_FOUND";
                                          }
                                        }
                                        else if (param_1 < -0x7ffdd000) {
                                          switch(param_1) {
                                          case -0x7ffde000:
                                            return "PRL_ERR_DISK_SHARED_BLOCK";
                                          case -0x7ffddfff:
                                            return "PRL_ERR_DISK_COMPRESSED_FILE_EMPTY";
                                          case -0x7ffddffe:
                                            return "PRL_ERR_DISK_TRUNCATE_FAILED";
                                          case -0x7ffddffd:
                                            return "PRL_ERR_DISK_BLOCK_SEARCH_FAILED";
                                          case -0x7ffddffc:
                                            return "PRL_ERR_DISK_POINTERS_MIXED_UP";
                                          case -0x7ffddffb:
                                            return "PRL_ERR_DISK_SET_FILE_SIZE_FAILED";
                                          }
                                        }
                                        else {
                                          if (param_1 == -0x7ffdd000) {
                                            return "PRL_ERR_DISK_DATA_NOT_FOUND";
                                          }
                                          if (param_1 == -0x7ffdcfff) {
                                            return "PRL_ERR_DISK_RESERVED_WORD";
                                          }
                                        }
                                      }
                                      else {
                                        switch(param_1) {
                                        case -0x7ffdc000:
                                          return "PRL_ERR_DISK_GET_MOUNTPATH_FAILED";
                                        case -0x7ffdbfff:
                                          return "PRL_ERR_DISK_MOUNT_FAILED";
                                        case -0x7ffdbffe:
                                          return "PRL_ERR_DISK_UNMOUNT_FAILED";
                                        case -0x7ffdbffd:
                                          return "PRL_ERR_DISK_GET_PARAMS_FAILED";
                                        case -0x7ffdbffc:
                                          return "PRL_ERR_DISK_IDENTIFY_FAILED";
                                        }
                                      }
                                    }
                                    else {
                                      switch(param_1) {
                                      case -0x7ffda000:
                                        return "PRL_ERR_FILE_TRANSFER_CLIENT_NOT_CONNECTED";
                                      case -0x7ffd9fff:
                                        return "PRL_ERR_FILE_TRANSFER_CANT_LOCATE_SRC_FILE";
                                      case -0x7ffd9ffe:
                                        return "PRL_ERR_FILE_TRANSFER_CANT_READ_SRC_FILE";
                                      case -0x7ffd9ffd:
                                        return "PRL_ERR_FILE_TRANSFER_INVALID_CREDENTIALS";
                                      case -0x7ffd9ffc:
                                        return "PRL_ERR_FILE_TRANSFER_CANT_CREATE_DST_FILE";
                                      case -0x7ffd9ffb:
                                        return "PRL_ERR_FILE_TRANSFER_CANT_WRITE_DATA_TO_DST_FILE";
                                      case -0x7ffd9ffa:
                                        return "PRL_ERR_FILE_TRANSFER_DST_FILE_ALREADY_EXIST";
                                      case -0x7ffd9ff9:
                                        return "PRL_ERR_FILE_TRANSFER_OPERATION_NOT_SUPPORTED";
                                      case -0x7ffd9ff8:
                                        return "PRL_ERR_FILE_TRANSFER_UPLOAD_CANCELED_BY_USER";
                                      case -0x7ffd9ff7:
                                        return "PRL_ERR_FILE_TRANSFER_INVALID_ARGUMENTS";
                                      }
                                    }
                                  }
                                  else {
                                    switch(param_1) {
                                    case -0x7ffd9b00:
                                      return "PRL_ERR_VMCONF_RESTRICTED_OS_VERSION";
                                    case -0x7ffd9aff:
                                      return "PRL_ERR_VMCONF_RESTRICTED_CPU_COUNT";
                                    case -0x7ffd9afe:
                                      return "PRL_ERR_VMCONF_RESTRICTED_MEMORY_SIZE";
                                    case -0x7ffd9afd:
                                      return "PRL_ERR_VMCONF_RESTRICTED_UNDO_DISKS";
                                    case -0x7ffd9afc:
                                      return "PRL_ERR_VMCONF_RESTRICTED_SMART_GUARD";
                                    case -0x7ffd9afb:
                                      return "PRL_ERR_VMCONF_RESTRICTED_CPU_AND_MEMORY_RANGES";
                                    }
                                  }
                                }
                                else if (param_1 < -0x7ffd8f00) {
                                  switch(param_1) {
                                  case -0x7ffd9000:
                                    return "PRL_ERR_VMCONF_VALIDATION_FAILED";
                                  case -0x7ffd8fff:
                                    return "PRL_ERR_VMCONF_VM_NAME_IS_EMPTY";
                                  case -0x7ffd8ffe:
                                    return "PRL_ERR_VMCONF_UNKNOWN_OS_TYPE";
                                  case -0x7ffd8ffd:
                                    return "PRL_ERR_VMCONF_UNKNOWN_OS_VERSION";
                                  case -0x7ffd8ffc:
                                    return "PRL_ERR_VMCONF_VM_NAME_HAS_INVALID_SYMBOL";
                                  case -0x7ffd8ffb:
                                    return "PRL_ERR_VMCONF_INVALID_DEVICE_MAIN_INDEX";
                                  case -0x7ffd8ffa:
                                    return "PRL_ERR_VMCONF_DESKTOP_MODE_REMOTE_DEVICES";
                                  case -0x7ffd8ff9:
                                    return "PRL_ERR_VMCONF_REAL_HARD_UNDO_DISKS_NOT_ALLOW";
                                  case -0x7ffd8ff8:
                                    return "PRL_ERR_VMCONF_BOOTCAMP_HARD_UNDO_DISKS_NOT_ALLOW";
                                  case -0x7ffd8ff7:
                                    return "PRL_ERR_VMCONF_INCOMPAT_HARD_UNDO_DISKS_NOT_ALLOW";
                                  case -0x7ffd8ff0:
                                    return "PRL_ERR_VMCONF_BOOTCAMP_HARD_SNAPSHOTS_NOT_ALLOW";
                                  case -0x7ffd8fef:
                                    return "PRL_ERR_VMCONF_REAL_HARD_SAFE_MODE_NOT_ALLOW";
                                  case -0x7ffd8fee:
                                    return "PRL_ERR_VMCONF_BOOTCAMP_SAFE_MODE_NOT_ALLOW";
                                  case -0x7ffd8fed:
                                    return "PRL_ERR_VMCONF_INCOMPAT_SAFE_MODE_NOT_ALLOW";
                                  case -0x7ffd8fec:
                                    return "PRL_ERR_VMCONF_NO_HD_IMAGES_IN_UNDO_DISKS_MODE";
                                  case -0x7ffd8feb:
                                    return "PRL_ERR_VMCONF_NO_HD_IMAGES_IN_SAFE_MODE";
                                  case -0x7ffd8fea:
                                    return "PRL_ERR_VMCONF_BOOTCAMP_HARD_DISK_SMART_GUARD_NOT_ALLOW"
                                    ;
                                  case -0x7ffd8fe9:
                                    return "PRL_ERR_VMCONF_INCOMPAT_HARD_DISK_SMART_GUARD_NOT_ALLOW"
                                    ;
                                  case -0x7ffd8fe8:
                                    return "PRL_ERR_VMCONF_VIDEO_NOT_ENABLED";
                                  case -0x7ffd8fe7:
                                    return "PRL_ERR_VMCONF_NO_AUTO_COMPRESS_WITH_UNDO_DISKS";
                                  case -0x7ffd8fe0:
                                    return "PRL_ERR_VMCONF_NO_AUTO_COMPRESS_WITH_SMART_GUARD";
                                  case -0x7ffd8fdf:
                                    return "PRL_ERR_VMCONF_NO_SMART_GUARD_WITH_UNDO_DISKS";
                                  case -0x7ffd8fde:
                                    return "PRL_ERR_VMCONF_CPUUNITS_NOT_SUPPORTED";
                                  case -0x7ffd8fdd:
                                    return "PRL_ERR_VMCONF_CPULIMIT_NOT_SUPPORTED";
                                  case -0x7ffd8fdc:
                                    return "PRL_ERR_VMCONF_IOPRIO_NOT_SUPPORTED";
                                  case -0x7ffd8fdb:
                                    return "PRL_ERR_VMCONF_IOLIMIT_NOT_SUPPORTED";
                                  case -0x7ffd8fda:
                                    return "PRL_ERR_VZ_API_NOT_INITIALIZED";
                                  case -0x7ffd8fd9:
                                    return "PRL_ERR_CT_NOT_FOUND";
                                  case -0x7ffd8fd8:
                                    return "PRL_ERR_VMCONF_IOPSLIMIT_NOT_SUPPORTED";
                                  case -0x7ffd8fd7:
                                    return "PRL_ERR_SAMPLE_CONFIG_NOT_FOUND";
                                  case -0x7ffd8fd0:
                                    return "PRL_ERR_VMCONF_NEED_HEADLESS_MODE_FOR_AUTOSTART";
                                  case -0x7ffd8fcf:
                                    return "PRL_ERR_VMCONF_NEED_HEADLESS_MODE_FOR_AUTOSTOP";
                                  case -0x7ffd8fce:
                                    return 
                                    "PRL_ERR_VMCONF_NEED_HEADLESS_MODE_FOR_KEEP_VM_ALIVE_ON_GUI_EXIT"
                                    ;
                                  case -0x7ffd8fb0:
                                    return "PRL_ERR_VMCONF_BOOT_OPTION_INVALID_DEVICE_TYPE";
                                  case -0x7ffd8faf:
                                    return "PRL_ERR_VMCONF_BOOT_OPTION_DUPLICATE_DEVICE";
                                  case -0x7ffd8fae:
                                    return "PRL_ERR_VMCONF_BOOT_OPTION_DEVICE_NOT_EXISTS";
                                  case -0x7ffd8fad:
                                    return "PRL_ERR_VMCONF_AUTOSTART_FROM_CURRENT_USER_FORBIDDEN";
                                  }
                                }
                                else if (param_1 < -0x7ffd8eb0) {
                                  switch(param_1) {
                                  case -0x7ffd8f00:
                                    return "PRL_ERR_VMCONF_REMOTE_DISPLAY_PORT_NUMBER_IS_ZERO";
                                  case -0x7ffd8eff:
                                    return "PRL_ERR_VMCONF_REMOTE_DISPLAY_HOST_IP_ADDRESS_IS_ZERO";
                                  case -0x7ffd8efe:
                                    return "PRL_ERR_VMCONF_REMOTE_DISPLAY_INVALID_HOST_IP_ADDRESS";
                                  case -0x7ffd8efd:
                                    return "PRL_ERR_VMCONF_REMOTE_DISPLAY_EMPTY_PASSWORD";
                                  case -0x7ffd8efc:
                                    return "PRL_ERR_VMCONF_REMOTE_DISPLAY_PASSWORD_TOO_LONG";
                                  }
                                }
                                else if (param_1 < -0x7ffd8e00) {
                                  switch(param_1) {
                                  case -0x7ffd8eb0:
                                    return "PRL_ERR_VMCONF_SHARED_FOLDERS_EMPTY_FOLDER_NAME";
                                  case -0x7ffd8eaf:
                                    return "PRL_ERR_VMCONF_SHARED_FOLDERS_DUPLICATE_FOLDER_NAME";
                                  case -0x7ffd8eae:
                                    return "PRL_ERR_VMCONF_SHARED_FOLDERS_INVALID_FOLDER_PATH";
                                  case -0x7ffd8ead:
                                    return "PRL_ERR_VMCONF_SHARED_FOLDERS_DUPLICATE_FOLDER_PATH";
                                  }
                                }
                                else if (param_1 < -0x7ffd8db0) {
                                  switch(param_1) {
                                  case -0x7ffd8e00:
                                    return "PRL_ERR_VMCONF_CPU_ZERO_COUNT";
                                  case -0x7ffd8dff:
                                    return "PRL_ERR_VMCONF_CPU_COUNT_MORE_MAX_CPU_COUNT";
                                  case -0x7ffd8dfe:
                                    return "PRL_ERR_VMCONF_CPU_COUNT_MORE_HOST_CPU_COUNT";
                                  case -0x7ffd8dfd:
                                    return "PRL_ERR_VMCONF_CPU_MASK_INVALID";
                                  case -0x7ffd8dfc:
                                    return "PRL_ERR_VMCONF_CPU_MASK_INVALID_CPU_NUM";
                                  }
                                }
                                else if (param_1 < -0x7ffd8d00) {
                                  switch(param_1) {
                                  case -0x7ffd8db0:
                                    return "PRL_ERR_VMCONF_MAIN_MEMORY_ZERO_SIZE";
                                  case -0x7ffd8daf:
                                    return "PRL_ERR_VMCONF_MAIN_MEMORY_OUT_OF_RANGE";
                                  case -0x7ffd8dae:
                                    return "PRL_ERR_VMCONF_MAIN_MEMORY_NOT_4_RATIO_SIZE";
                                  case -0x7ffd8dac:
                                    return 
                                    "PRL_ERR_VMCONF_MAIN_MEMORY_MAX_BALLOON_SIZE_MORE_100_PERCENT";
                                  case -0x7ffd8dab:
                                    return "PRL_ERR_VMCONF_MAIN_MEMORY_MQ_PRIOR_ZERO";
                                  case -0x7ffd8daa:
                                    return "PRL_ERR_VMCONF_MAIN_MEMORY_MQ_PRIOR_OUT_OF_RANGE";
                                  case -0x7ffd8da9:
                                    return "PRL_ERR_VMCONF_MAIN_MEMORY_MQ_INVALID_RANGE";
                                  case -0x7ffd8da8:
                                    return 
                                    "PRL_ERR_VMCONF_MAIN_MEMORY_MQ_MIN_LESS_VMM_OVERHEAD_VALUE";
                                  case -0x7ffd8da7:
                                    return "PRL_ERR_VMCONF_MAIN_MEMORY_MQ_MIN_OUT_OF_RANGE";
                                  case -0x7ffd8da0:
                                    return "PRL_ERR_VMCONF_MAIN_MEMORY_SIZE_ABOVE_MAX";
                                  }
                                }
                                else if (param_1 < -0x7ffd8c00) {
                                  if (param_1 < -0x7ffd8cb0) {
                                    if (param_1 == -0x7ffd8d00) {
                                      return "PRL_ERR_VMCONF_VIDEO_MEMORY_OUT_OF_RANGE";
                                    }
                                    if (param_1 == -0x7ffd8cfe) {
                                      return "PRL_ERR_VMCONF_VIDEO_MEMORY_SIZE_ABOVE_MAX";
                                    }
                                  }
                                  else {
                                    switch(param_1) {
                                    case -0x7ffd8cb0:
                                      return "PRL_ERR_VMCONF_FLOPPY_DISK_SYS_NAME_IS_EMPTY";
                                    case -0x7ffd8caf:
                                      return "PRL_ERR_VMCONF_FLOPPY_DISK_IMAGE_IS_NOT_EXIST";
                                    case -0x7ffd8cae:
                                      return "PRL_ERR_VMCONF_FLOPPY_DISK_IS_NOT_ACCESSIBLE";
                                    case -0x7ffd8cad:
                                      return "PRL_ERR_VMCONF_FLOPPY_DISK_IMAGE_IS_NOT_VALID";
                                    case -0x7ffd8cac:
                                      return 
                                      "PRL_ERR_VMCONF_FLOPPY_DISK_SYS_NAME_HAS_INVALID_SYMBOL";
                                    case -0x7ffd8cab:
                                      return "PRL_ERR_VMCONF_FLOPPY_DISK_URL_FORMAT_SYS_NAME";
                                    }
                                  }
                                }
                                else if (param_1 < -0x7ffd8bb0) {
                                  switch(param_1) {
                                  case -0x7ffd8c00:
                                    return "PRL_ERR_VMCONF_CD_DVD_ROM_SYS_NAME_IS_EMPTY";
                                  case -0x7ffd8bff:
                                    return "PRL_ERR_VMCONF_CD_DVD_ROM_DUPLICATE_SYS_NAME";
                                  case -0x7ffd8bfe:
                                    return "PRL_ERR_VMCONF_CD_DVD_ROM_IMAGE_IS_NOT_EXIST";
                                  case -0x7ffd8bfd:
                                    return "PRL_ERR_VMCONF_CD_DVD_ROM_URL_FORMAT_SYS_NAME";
                                  case -0x7ffd8bfc:
                                    return "PRL_ERR_VMCONF_CD_DVD_ROM_SET_SATA_FOR_UNSUPPORTED_OS";
                                  case -0x7ffd8bfb:
                                    return "PRL_ERR_VMCONF_CD_DVD_ROM_SET_SATA_FOR_OLD_CHIPSET";
                                  }
                                }
                                else if (param_1 < -0x7ffd8b00) {
                                  switch(param_1) {
                                  case -0x7ffd8bb0:
                                    return "PRL_ERR_VMCONF_HARD_DISK_SYS_NAME_IS_EMPTY";
                                  case -0x7ffd8baf:
                                    return "PRL_ERR_VMCONF_HARD_DISK_IMAGE_IS_NOT_EXIST";
                                  case -0x7ffd8bae:
                                    return "PRL_ERR_VMCONF_HARD_DISK_IMAGE_IS_NOT_VALID";
                                  case -0x7ffd8bad:
                                    return "PRL_ERR_VMCONF_HARD_DISK_DUPLICATE_SYS_NAME";
                                  case -0x7ffd8bac:
                                    return "PRL_ERR_VMCONF_HARD_DISK_SYS_NAME_HAS_INVALID_SYMBOL";
                                  case -0x7ffd8bab:
                                    return "PRL_ERR_VMCONF_HARD_DISK_URL_FORMAT_SYS_NAME";
                                  case -0x7ffd8baa:
                                    return "PRL_ERR_VMCONF_HARD_DISK_WRONG_TYPE_BOOTCAMP_PARTITION";
                                  case -0x7ffd8ba9:
                                    return "PRL_ERR_VMCONF_HARD_DISK_MISS_BOOTCAMP_PARTITION";
                                  case -0x7ffd8ba8:
                                    return "PRL_ERR_VMCONF_HARD_DISK_WRONG_TYPE_FOR_ENCRYPTRED_VM";
                                  case -0x7ffd8ba7:
                                    return 
                                    "PRL_ERR_VMCONF_HARD_DISK_NOT_ENOUGH_SPACE_FOR_ENCRYPT_DISK";
                                  case -0x7ffd8ba0:
                                    return "PRL_ERR_VMCONF_HARD_DISK_SET_SATA_FOR_UNSUPPORTED_OS";
                                  case -0x7ffd8b9f:
                                    return "PRL_ERR_VMCONF_HARD_DISK_SET_SATA_FOR_OLD_CHIPSET";
                                  case -0x7ffd8b9e:
                                    return 
                                    "PRL_ERR_VMCONF_HARD_DISK_UNABLE_DELETE_DISK_WITH_SNAPSHOTS";
                                  }
                                }
                                else if (param_1 < -0x7ffd8ab0) {
                                  switch(param_1) {
                                  case -0x7ffd8b00:
                                    return "PRL_ERR_VMCONF_NETWORK_ADAPTER_INVALID_BOUND_INDEX";
                                  case -0x7ffd8aff:
                                    return "PRL_ERR_VMCONF_NETWORK_ADAPTER_INVALID_MAC_ADDRESS";
                                  case -0x7ffd8afe:
                                    return "PRL_ERR_VMCONF_NETWORK_ADAPTER_DUPLICATE_MAC_ADDRESS";
                                  case -0x7ffd8afd:
                                    return "PRL_ERR_VMCONF_NETWORK_ADAPTER_DUPLICATE_IP_ADDRESS";
                                  case -0x7ffd8afc:
                                    return "PRL_ERR_VMCONF_NETWORK_ADAPTER_ETHLIST_CREATE_ERROR";
                                  case -0x7ffd8afb:
                                    return "PRL_ERR_VMCONF_NETWORK_ADAPTER_INVALID_IP_ADDRESS";
                                  case -0x7ffd8afa:
                                    return 
                                    "PRL_ERR_VMCONF_NETWORK_ADAPTER_GUEST_TOOLS_NOT_AVAILABLE";
                                  case -0x7ffd8af9:
                                    return "PRL_ERR_VMCONF_DUPLICATE_IP_ADDRESS";
                                  case -0x7ffd8af8:
                                    return "PRL_ERR_VMCONF_NETWORK_ADAPTER_MULTICAST_IP_ADDRESS";
                                  case -0x7ffd8af7:
                                    return "PRL_ERR_VMCONF_NETWORK_ADAPTER_BROADCAST_IP_ADDRESS";
                                  case -0x7ffd8af0:
                                    return 
                                    "PRL_ERR_VMCONF_NETWORK_ADAPTER_INVALID_GATEWAY_IP_ADDRESS";
                                  case -0x7ffd8aef:
                                    return "PRL_ERR_VMCONF_NETWORK_ADAPTER_GATEWAY_NOT_IN_SUBNET";
                                  case -0x7ffd8aee:
                                    return "PRL_ERR_VMCONF_NETWORK_ADAPTER_INVALID_DNS_IP_ADDRESS";
                                  case -0x7ffd8aed:
                                    return 
                                    "PRL_ERR_VMCONF_NETWORK_ADAPTER_INVALID_SEARCH_DOMAIN_NAME";
                                  case -0x7ffd8aec:
                                    return "PRL_ERR_VMCONF_NETWORK_ADAPTER_ROUTED_NO_STATIC_ADDRESS"
                                    ;
                                  }
                                }
                                else if (param_1 < -0x7ffd8000) {
                                  if (param_1 < -0x7ffd8900) {
                                    if (param_1 < -0x7ffd89b0) {
                                      if (param_1 < -0x7ffd8a00) {
                                        if (param_1 == -0x7ffd8ab0) {
                                          return "PRL_ERR_VMCONF_SOUND_MIXER_IS_EMPTY";
                                        }
                                        if (param_1 == -0x7ffd8aaf) {
                                          return "PRL_ERR_VMCONF_SOUND_OUTPUT_IS_EMPTY";
                                        }
                                      }
                                      else {
                                        switch(param_1) {
                                        case -0x7ffd8a00:
                                          return "PRL_ERR_VMCONF_SERIAL_PORT_SYS_NAME_IS_EMPTY";
                                        case -0x7ffd89ff:
                                          return "PRL_ERR_VMCONF_SERIAL_PORT_IMAGE_IS_NOT_EXIST";
                                        case -0x7ffd89fe:
                                          return 
                                          "PRL_ERR_VMCONF_SERIAL_PORT_SYS_NAME_HAS_INVALID_SYMBOL";
                                        case -0x7ffd89fd:
                                          return "PRL_ERR_VMCONF_SERIAL_PORT_URL_FORMAT_SYS_NAME";
                                        }
                                      }
                                    }
                                    else {
                                      switch(param_1) {
                                      case -0x7ffd89b0:
                                        return "PRL_ERR_VMCONF_PARALLEL_PORT_SYS_NAME_IS_EMPTY";
                                      case -0x7ffd89af:
                                        return "PRL_ERR_VMCONF_PARALLEL_PORT_IMAGE_IS_NOT_EXIST";
                                      case -0x7ffd89ae:
                                        return 
                                        "PRL_ERR_VMCONF_PARALLEL_PORT_SYS_NAME_HAS_INVALID_SYMBOL";
                                      case -0x7ffd89ad:
                                        return "PRL_ERR_VMCONF_PARALLEL_PORT_URL_FORMAT_SYS_NAME";
                                      }
                                    }
                                  }
                                  else if (param_1 < -0x7ffd88b0) {
                                    switch(param_1) {
                                    case -0x7ffd8900:
                                      return "PRL_ERR_VMCONF_IDE_DEVICES_COUNT_OUT_OF_RANGE";
                                    case -0x7ffd88ff:
                                      return "PRL_ERR_VMCONF_IDE_DEVICES_DUPLICATE_STACK_INDEX";
                                    case -0x7ffd88fe:
                                      return "PRL_ERR_VMCONF_SATA_DEVICES_COUNT_OUT_OF_RANGE";
                                    case -0x7ffd88fd:
                                      return "PRL_ERR_VMCONF_SATA_DEVICES_DUPLICATE_STACK_INDEX";
                                    }
                                  }
                                  else if (param_1 < -0x7ffd8800) {
                                    if (param_1 < -0x7ffd88a0) {
                                      if (param_1 == -0x7ffd88b0) {
                                        return "PRL_ERR_VMCONF_SCSI_DEVICES_COUNT_OUT_OF_RANGE";
                                      }
                                      if (param_1 == -0x7ffd88af) {
                                        return "PRL_ERR_VMCONF_SCSI_DEVICES_DUPLICATE_STACK_INDEX";
                                      }
                                      if (param_1 == -0x7ffd88ae) {
                                        return "PRL_ERR_VMCONF_SCSI_BUSLOGIC_WITH_EFI_NOT_SUPPORTED"
                                        ;
                                      }
                                    }
                                    else {
                                      switch(param_1) {
                                      case -0x7ffd88a0:
                                        return "PRL_ERR_VMCONF_GENERIC_PCI_DEVICE_CANNOT_BE_ADDED";
                                      case -0x7ffd889f:
                                        return "PRL_ERR_VMCONF_GENERIC_PCI_DEVICE_NOT_FOUND";
                                      case -0x7ffd889e:
                                        return "PRL_ERR_VMCONF_GENERIC_PCI_DEVICE_NOT_CONNECTED";
                                      case -0x7ffd889d:
                                        return "PRL_ERR_VMCONF_GENERIC_PCI_VIDEO_DEVICE_IS_ONE";
                                      case -0x7ffd889c:
                                        return 
                                        "PRL_ERR_VMCONF_GENERIC_PCI_DEVICE_DUPLICATE_IN_ANOTHER_VM";
                                      case -0x7ffd889b:
                                        return "PRL_ERR_VMCONF_GENERIC_PCI_WRONG_DEVICE";
                                      case -0x7ffd889a:
                                        return "PRL_ERR_VMCONF_GENERIC_PCI_DUPLICATE_SYS_NAME";
                                      case -0x7ffd8899:
                                        return "PRL_ERR_VMCONF_GENERIC_PCI_VIDEO_NOT_SINGLE";
                                      case -0x7ffd8890:
                                        return 
                                        "PRL_ERR_VMCONF_NO_IP_ADDRESSES_SPECIFIED_FOR_OFFLINE_MANAGEMENT"
                                        ;
                                      case -0x7ffd888e:
                                        return 
                                        "PRL_ERR_VMCONF_NO_CONFIGURED_TOTALRATE_FOR_NETWORK_CLASS";
                                      }
                                    }
                                  }
                                  else if (param_1 == -0x7ffd8800) {
                                    return "PRL_ERR_TIS_INVALID_UID";
                                  }
                                }
                                else {
                                  if (param_1 == -0x7ffd8000) {
                                    return "PRL_ERR_VM_COMPACT_PROCESSING";
                                  }
                                  if (param_1 == -0x7ffd7fff) {
                                    return "PRL_WARN_COMPACT_THROUGH_COPY";
                                  }
                                  if (param_1 == -0x7ffd7ffe) {
                                    return "PRL_WARN_COMPACT_DESTRUCTIVE";
                                  }
                                }
                              }
                              else {
                                switch(param_1) {
                                case -0x7ffd7000:
                                  return "PRL_ERR_IPFO_SOCKET_CREATE_FAILED";
                                case -0x7ffd6fff:
                                  return "PRL_ERR_IPFO_SOCKET_BIND_FAILED";
                                case -0x7ffd6ffe:
                                  return "PRL_ERR_IPFO_SOCKET_LISTEN_FAILED";
                                case -0x7ffd6ffd:
                                  return "PRL_ERR_IPFO_SOCKET_ACCEPT_FAILED";
                                case -0x7ffd6ffc:
                                  return "PRL_ERR_IPFO_SOCKET_CONNECT_FAILED";
                                case -0x7ffd6ffb:
                                  return "PRL_ERR_IPFO_SOCKET_NOT_OPENED";
                                case -0x7ffd6ffa:
                                  return "PRL_ERR_IPFO_INVALID_MODE";
                                case -0x7ffd6ff9:
                                  return "PRL_ERR_IPFO_SEND_FAILED";
                                case -0x7ffd6ff8:
                                  return "PRL_ERR_IPFO_RECEIVE_FAILED";
                                case -0x7ffd6ff7:
                                  return "PRL_ERR_IPC_CREATE_MAP_FAILED";
                                case -0x7ffd6ff0:
                                  return "PRL_ERR_IPC_ATTACH_FAILED";
                                case -0x7ffd6fef:
                                  return "PRL_ERR_IPC_FTOK_FAILED";
                                }
                              }
                            }
                            else if (param_1 < -0x7ffce000) {
                              if (param_1 < -0x7ffcf000) {
                                if (param_1 == -0x7ffd0000) {
                                  return "PRL_ERR_DISP2DISP_SESSION_ALREADY_AUTHORIZED";
                                }
                                if (param_1 == -0x7ffcffff) {
                                  return "PRL_ERR_DISP2DISP_WRONG_USER_SESSION_UUID";
                                }
                              }
                              else {
                                switch(param_1) {
                                case -0x7ffcf000:
                                  return "PRL_ERR_VM_MIGRATE_CHECKING_PRECONDITIONS_FAILED";
                                case -0x7ffcefff:
                                  return "PRL_ERR_VM_MIGRATE_NOT_ENOUGH_DISK_SPACE_ON_SOURCE";
                                case -0x7ffceffe:
                                  return "PRL_ERR_VM_MIGRATE_OUT_OF_MEMORY_ON_TARGET";
                                case -0x7ffceffd:
                                  return "PRL_ERR_VM_MIGRATE_TARGET_VM_HOME_PATH_NOT_EXISTS";
                                case -0x7ffceffc:
                                  return "PRL_ERR_VM_MIGRATE_NOT_ENOUGH_CPUS_ON_TARGET";
                                case -0x7ffceffb:
                                  return "PRL_ERR_VM_MIGRATE_NON_COMPATIBLE_CPU_ON_TARGET";
                                case -0x7ffceffa:
                                  return "PRL_ERR_VM_MIGRATE_NETWORK_SHARE_IS_ABSENT_ON_TARGET";
                                case -0x7ffceff9:
                                  return "PRL_ERR_VM_MIGRATE_FLOPPY_DISK_IS_ABSENT_ON_TARGET";
                                case -0x7ffceff8:
                                  return "PRL_ERR_VM_MIGRATE_OPTICAL_DISK_IS_ABSENT_ON_TARGET";
                                case -0x7ffceff7:
                                  return "PRL_ERR_VM_MIGRATE_SERIAL_PORT_IS_ABSENT_ON_TARGET";
                                case -0x7ffceff0:
                                  return "PRL_ERR_VM_MIGRATE_PARALLEL_PORT_IS_ABSENT_ON_TARGET";
                                case -0x7ffcefef:
                                  return "PRL_ERR_VM_MIGRATE_NETWORK_ADAPTER_IS_ABSENT_ON_TARGET";
                                case -0x7ffcefee:
                                  return "PRL_ERR_VM_MIGRATE_USB_CONTROLLER_IS_ABSENT_ON_TARGET";
                                case -0x7ffcefed:
                                  return "PRL_ERR_VM_MIGRATE_SOUND_DEVICE_IS_ABSENT_ON_TARGET";
                                case -0x7ffcefec:
                                  return "PRL_ERR_VM_MIGRATE_VM_ALREADY_EXISTS_ON_TARGET";
                                case -0x7ffcefeb:
                                  return "PRL_ERR_VM_MIGRATE_NOT_ENOUGH_DISK_SPACE_ON_TARGET";
                                case -0x7ffcefea:
                                  return "PRL_ERR_VM_MIGRATE_COULDNT_DETACH_TARGET_CONNECTION";
                                case -0x7ffcefe9:
                                  return "PRL_ERR_VM_MIGRATE_UNSUITABLE_VM_STATE";
                                case -0x7ffcefe8:
                                  return "PRL_ERR_FILECOPY_PROTOCOL";
                                case -0x7ffcefe7:
                                  return "PRL_ERR_FILECOPY_DIR_EXIST";
                                case -0x7ffcefe0:
                                  return "PRL_ERR_FILECOPY_FILE_EXIST";
                                case -0x7ffcefdf:
                                  return "PRL_ERR_FILECOPY_CANT_CREATE_DIR";
                                case -0x7ffcefde:
                                  return "PRL_ERR_FILECOPY_CANT_OPEN_FILE";
                                case -0x7ffcefdd:
                                  return "PRL_ERR_FILECOPY_CANT_WRITE";
                                case -0x7ffcefdc:
                                  return "PRL_ERR_FILECOPY_INTERNAL";
                                case -0x7ffcefdb:
                                  return "PRL_ERR_VM_MIGRATE_VM_UUID_ALREADY_EXISTS_ON_TARGET";
                                case -0x7ffcefda:
                                  return "PRL_ERR_VM_MIGRATE_VM_HOME_ALREADY_EXISTS_ON_TARGET";
                                case -0x7ffcefd9:
                                  return "PRL_ERR_VM_MIGRATE_REMOTE_DEVICE_IS_ATTACHED";
                                case -0x7ffcefd7:
                                  return "PRL_ERR_VM_MIGRATE_RESUME_FAILED";
                                case -0x7ffcefd0:
                                  return "PRL_ERR_VM_MIGRATE_STORAGE_INFO_PARSE";
                                case -0x7ffcefcf:
                                  return "PRL_ERR_VM_MIGRATE_REGISTER_VM_FAILED";
                                case -0x7ffcefce:
                                  return "PRL_ERR_VM_MIGRATE_SUSPEND_VM_FAILED";
                                case -0x7ffcefcd:
                                  return "PRL_ERR_VM_MIGRATE_RESUME_VM_FAILED";
                                case -0x7ffcefcc:
                                  return "PRL_ERR_VM_MIGRATE_VM_ALREADY_MIGRATE_ON_TARGET";
                                case -0x7ffcefcb:
                                  return "PRL_ERR_CT_MIGRATE_INTERNAL_ERROR";
                                case -0x7ffcefca:
                                  return "PRL_ERR_COPY_CT_TMPL_INTERNAL_ERROR";
                                case -0x7ffcefc9:
                                  return "PRL_ERR_VM_MIGRATE_CANNOT_REMOTE_CLONE_SHARED_VM";
                                case -0x7ffcefc8:
                                  return "PRL_ERR_VM_MIGRATE_CONTINUE_START_FAILED";
                                case -0x7ffcefc7:
                                  return "PRL_ERR_VM_MIGRATE_BREAK_BY_DISK_CONDITION";
                                case -0x7ffcefc0:
                                  return "PRL_ERR_VM_MIGRATE_WARM_MODE_NOT_SUPPORTED";
                                case -0x7ffcefbf:
                                  return "PRL_ERR_VM_MIGRATE_DEVICE_IMAGE_OUT_OF_BUNDLE";
                                case -0x7ffcefbe:
                                  return "PRL_ERR_VM_MIGRATE_INVALID_DISK_TYPE";
                                case -0x7ffcefbd:
                                  return "PRL_ERR_VM_MIGRATE_NON_COMPATIBLE_CPU_ON_TARGET_SHORT";
                                case -0x7ffcefbc:
                                  return "PRL_ERR_CT_MIGRATE_ID_ALREADY_EXIST";
                                case -0x7ffcefbb:
                                  return "PRL_ERR_VM_MIGRATE_TO_THE_SAME_NODE";
                                case -0x7ffcefba:
                                  return "PRL_ERR_VM_MIGRATE_ACCESS_TO_VM_DENIED";
                                case -0x7ffcefb9:
                                  return "PRL_ERR_VM_MIGRATE_ERROR_DELETE_VM";
                                case -0x7ffcefb8:
                                  return "PRL_ERR_VM_MIGRATE_ERROR_UNREGISTER_VM";
                                case -0x7ffcefb7:
                                  return "PRL_ERR_CT_MIGRATE_TARGET_ALREADY_EXISTS";
                                case -0x7ffcefb0:
                                  return "PRL_ERR_VM_MIGRATE_EXTERNAL_DISKS_NOT_SUPPORTED";
                                case -0x7ffcefaf:
                                  return "PRL_ERR_VM_MIGRATE_EXT_DISK_DIR_ALREADY_EXISTS_ON_TARGET";
                                case -0x7ffcefae:
                                  return "PRL_ERR_VM_MIGRATE_CANNOT_CREATE_DIRECTORY";
                                case -0x7ffcefad:
                                  return "PRL_ERR_VM_MIGRATE_TARGET_INSIDE_SHARED_VM_PRIVATE";
                                }
                              }
                            }
                            else {
                              if (param_1 < -0x7ffcdfff) {
                                return "PRL_ERR_IPHONE_PROXY_CANNOT_START";
                              }
                              if (param_1 < -0x7ffcdffe) {
                                return "PRL_ERR_IPHONE_PROXY_CANNOT_STOP";
                              }
                              if (param_1 < -0x7ffccfff) {
                                if (param_1 == -0x7ffcdffe) {
                                  return "PRL_ERR_IPHONE_PROXY_ALREADY_STARTED";
                                }
                                if (param_1 == -0x7ffcd000) {
                                  return "PRL_ERR_VM_TOOLS_CANT_PARSE_UPDATE_PARAMETERS";
                                }
                              }
                              else {
                                if (param_1 == -0x7ffccfff) {
                                  return "PRL_ERR_VM_TOOLS_CANT_UPDATE_WITHOUT_RESTART";
                                }
                                if (param_1 == -0x7ffccffe) {
                                  return "PRL_ERR_VM_TOOL_NOT_AVAILABLE";
                                }
                              }
                            }
                          }
                          else {
                            switch(param_1) {
                            case -0x7ffcc000:
                              return "PRL_ERR_ONLY_ADMIN_OR_VM_OWNER_CAN_OPEN_THIS_SESSION";
                            case -0x7ffcbfff:
                              return "PRL_ERR_VM_EXEC_GUEST_TOOL_NOT_AVAILABLE";
                            case -0x7ffcbffe:
                              return "PRL_ERR_VM_GUEST_SESSION_EXPIRED";
                            case -0x7ffcbffd:
                              return "PRL_ERR_VM_EXEC_PROGRAM_NOT_FOUND";
                            case -0x7ffcbffc:
                              return "PRL_ERR_GUEST_PROGRAM_EXECUTION_FAILED";
                            case -0x7ffcbffb:
                              return "PRL_ERR_SET_NETWORK_SETTINGS_FAILED";
                            }
                          }
                        }
                        else {
                          switch(param_1) {
                          case -0x7ffcb000:
                            return "PRL_ERR_VNC_SERVER_ALREADY_STARTED";
                          case -0x7ffcafff:
                            return "PRL_ERR_VNC_SERVER_DISABLED";
                          case -0x7ffcaffe:
                            return "PRL_ERR_VNC_SERVER_AUTOSET_PORT_FAILED";
                          case -0x7ffcaffd:
                            return "PRL_ERR_FAILED_TO_START_VNC_SERVER";
                          case -0x7ffcaffc:
                            return "PRL_ERR_FAILED_TO_STOP_VNC_SERVER";
                          case -0x7ffcaffb:
                            return "PRL_ERR_VNC_SERVER_NOT_STARTED";
                          }
                        }
                      }
                      else {
                        switch(param_1) {
                        case -0x7ffca000:
                          return "PRL_ERR_SUSPEND_VM_VTD_PAUSED";
                        case -0x7ffc9fff:
                          return "PRL_ERR_SUSPEND_VM_VTD_WITH_UNSUPPORTED_SHUTDOWN_TOOL";
                        case -0x7ffc9ffe:
                          return "PRL_ERR_SUSPEND_VM_VTD_BY_GUEST_SLEEP_TIMEOUT";
                        case -0x7ffc9ffd:
                          return "PRL_ERR_CREATE_SNAPSHOT_VM_VTD_PAUSED";
                        case -0x7ffc9ffc:
                          return "PRL_ERR_CREATE_SNAPSHOT_VM_VTD_WITH_UNSUPPORTED_SHUTDOWN_TOOL";
                        case -0x7ffc9ffb:
                          return "PRL_ERR_CREATE_SNAPSHOT_VM_VTD_BY_GUEST_SLEEP_TIMEOUT";
                        case -0x7ffc9ffa:
                          return "PRL_ERR_SUSPEND_VM_VTD_WITH_UNLOADED_SHUTDOWN_TOOL";
                        case -0x7ffc9ff9:
                          return "PRL_ERR_SUSPEND_VM_VTD_WITH_OUTDATED_SHUTDOWN_TOOL";
                        case -0x7ffc9ff8:
                          return "PRL_ERR_CREATE_SNAPSHOT_VM_VTD_WITH_UNLOADED_SHUTDOWN_TOOL";
                        case -0x7ffc9ff7:
                          return "PRL_ERR_CREATE_SNAPSHOT_VM_VTD_WITH_OUTDATED_SHUTDOWN_TOOL";
                        case -0x7ffc9ff0:
                          return "PRL_ERR_REVERT_SNAPSHOT_VM_VTD_PAUSED";
                        case -0x7ffc9fef:
                          return "PRL_ERR_REVERT_SNAPSHOT_VM_VTD_BY_GUEST_SLEEP_TIMEOUT";
                        case -0x7ffc9fee:
                          return "PRL_ERR_REVERT_SNAPSHOT_VM_VTD_WITH_UNSUPPORTED_SHUTDOWN_TOOL";
                        case -0x7ffc9fed:
                          return "PRL_ERR_REVERT_SNAPSHOT_VM_VTD_WITH_UNLOADED_SHUTDOWN_TOOL";
                        case -0x7ffc9fec:
                          return "PRL_ERR_REVERT_SNAPSHOT_VM_VTD_WITH_OUTDATED_SHUTDOWN_TOOL";
                        case -0x7ffc9feb:
                          return "PRL_ERR_STAND_BY_VM_PAUSED";
                        case -0x7ffc9fea:
                          return "PRL_ERR_STAND_BY_VM_WITH_UNLOADED_SHUTDOWN_TOOL";
                        case -0x7ffc9fe9:
                          return "PRL_ERR_STAND_BY_VM_WITH_OUTDATED_SHUTDOWN_TOOL";
                        case -0x7ffc9fe8:
                          return "PRL_ERR_STAND_BY_VM_WITH_UNSUPPORTED_SHUTDOWN_TOOL";
                        case -0x7ffc9fe7:
                          return "PRL_ERR_STAND_BY_VM_BY_GUEST_SLEEP_TIMEOUT";
                        case -0x7ffc9fe0:
                          return "PRL_ERR_VM_SHUTDOWN_FAILED";
                        case -0x7ffc9fdf:
                          return "PRL_ERR_VM_SHUTDOWN_MACHINE_LOCKED";
                        case -0x7ffc9fde:
                          return "PRL_ERR_VM_SHUTDOWN_HIBERNATE_NOT_SUPPORTED";
                        case -0x7ffc9fdd:
                          return "PRL_ERR_VM_SHUTDOWN_SUSPEND_NOT_SUPPORTED";
                        case -0x7ffc9fdc:
                          return "PRL_ERR_VM_SHUTDOWN_HIBERNATE_FAILED";
                        case -0x7ffc9fdb:
                          return "PRL_ERR_SUSPEND_VM_VTD_WITH_UNSUPPORTED_CAPS";
                        case -0x7ffc9fda:
                          return "PRL_ERR_CREATE_SNAPSHOT_VM_VTD_WITH_UNSUPPORTED_CAPS";
                        case -0x7ffc9fd9:
                          return "PRL_ERR_REVERT_SNAPSHOT_VM_VTD_WITH_UNSUPPORTED_CAPS";
                        case -0x7ffc9fd8:
                          return "PRL_ERR_HVT_NOT_PRESENT_WARNING";
                        case -0x7ffc9fd7:
                          return "PRL_ERR_SUSPEND_WITH_USB_BOOTDISK";
                        case -0x7ffc9fd0:
                          return "PRL_ERR_SECURE_BOOT_VIOLATION";
                        case -0x7ffc9fcf:
                          return "PRL_ERR_SUSPEND_SNAPSHOT_WITH_VGPU";
                        }
                      }
                    }
                    else {
                      switch(param_1) {
                      case -0x7ffc9000:
                        return "PRL_ERR_BACKUP_INTERNAL_PROTO_ERROR";
                      case -0x7ffc8fff:
                        return "PRL_ERR_BACKUP_INTERNAL_ERROR";
                      case -0x7ffc8ffe:
                        return "PRL_ERR_BACKUP_TIMEOUT_EXCEEDED";
                      case -0x7ffc8ffd:
                        return "PRL_ERR_BACKUP_ACCESS_TO_VM_DENIED";
                      case -0x7ffc8ffc:
                        return "PRL_ERR_BACKUP_BACKUP_UUID_NOT_FOUND";
                      case -0x7ffc8ffb:
                        return "PRL_ERR_BACKUP_CREATE_SNAPSHOT_FAILED";
                      case -0x7ffc8ffa:
                        return "PRL_ERR_BACKUP_SWITCH_TO_SNAPSHOT_FAILED";
                      case -0x7ffc8ff9:
                        return "PRL_ERR_BACKUP_REGISTER_VM_FAILED";
                      case -0x7ffc8ff8:
                        return "PRL_ERR_BACKUP_DIRECTORY_ALREADY_EXIST";
                      case -0x7ffc8ff7:
                        return "PRL_ERR_BACKUP_CANNOT_CREATE_DIRECTORY";
                      case -0x7ffc8ff0:
                        return "PRL_ERR_BACKUP_RESTORE_VM_RUNNING";
                      case -0x7ffc8fef:
                        return "PRL_ERR_BACKUP_BACKUP_NOT_FOUND";
                      case -0x7ffc8fee:
                        return "PRL_ERR_BACKUP_CANNOT_REMOVE_DIRECTORY";
                      case -0x7ffc8fed:
                        return "PRL_ERR_BACKUP_LOCKED_FOR_READING";
                      case -0x7ffc8fec:
                        return "PRL_ERR_BACKUP_LOCKED_FOR_WRITING";
                      case -0x7ffc8feb:
                        return "PRL_ERR_BACKUP_REQUIRE_LOGIN_PASSWORD";
                      case -0x7ffc8fea:
                        return "PRL_ERR_BACKUP_ACRONIS_ERR";
                      case -0x7ffc8fe8:
                        return "PRL_ERR_BACKUP_BACKUP_CMD_FAILED";
                      case -0x7ffc8fe7:
                        return "PRL_ERR_BACKUP_RESTORE_CMD_FAILED";
                      case -0x7ffc8fdf:
                        return "PRL_ERR_BACKUP_SNAPSHOT_OF_PAUSED_VM";
                      case -0x7ffc8fde:
                        return "PRL_ERR_FAILED_TO_CONNECT_TO_BACKUP_SERVER";
                      case -0x7ffc8fdd:
                        return "PRL_ERR_FAILED_TO_AUTH_ON_BACKUP_SERVER";
                      case -0x7ffc8fdc:
                        return "PRL_ERR_BACKUP_CANNOT_SET_PERMISSIONS";
                      case -0x7ffc8fdb:
                        return "PRL_WARN_BACKUP_DEVICE_IMAGE_NOT_FOUND";
                      case -0x7ffc8fd9:
                        return "PRL_ERR_BACKUP_RESTORE_NOT_ENOUGH_FREE_DISK_SPACE";
                      case -0x7ffc8fd8:
                        return "PRL_ERR_BACKUP_CREATE_NOT_ENOUGH_FREE_DISK_SPACE";
                      case -0x7ffc8fd0:
                        return "PRL_ERR_USER_NO_AUTH_TO_SAVE_BACKUP_FILES";
                      case -0x7ffc8fcf:
                        return "PRL_ERR_PATH_IS_NOT_DIRECTORY";
                      case -0x7ffc8fce:
                        return "PRL_ERR_BACKUP_TOOL_CANNOT_START";
                      case -0x7ffc8fcd:
                        return "PRL_ERR_BACKUP_CT_ID_ALREADY_EXIST";
                      case -0x7ffc8fcc:
                        return "PRL_ERR_BACKUP_REMOVE_PERMISSIONS_DENIED";
                      case -0x7ffc8fcb:
                        return "PRL_ERR_VM_BACKUP_HDD_IMAGE_OUT_OF_BUNDLE";
                      case -0x7ffc8fca:
                        return "PRL_ERR_VM_BACKUP_INVALID_DISK_TYPE";
                      case -0x7ffc8fc8:
                        return "PRL_ERR_BACKUP_RESTORE_INTERNAL_ERROR";
                      case -0x7ffc8fc7:
                        return "PRL_ERR_BACKUP_RESTORE_INTERNAL_PROTO_ERROR";
                      case -0x7ffc8fc0:
                        return "PRL_ERR_BACKUP_RESTORE_DIRECTORY_ALREADY_EXIST";
                      case -0x7ffc8fbf:
                        return "PRL_ERR_BACKUP_RESTORE_CANNOT_CREATE_DIRECTORY";
                      case -0x7ffc8fbe:
                        return "PRL_ERR_BACKUP_RESTORE_PROHIBIT_WHEN_ATTACHED";
                      }
                    }
                  }
                  else if (param_1 < -0x7ffc7f00) {
                    switch(param_1) {
                    case -0x7ffc8000:
                      return "PRL_ERR_HTTP_HOST_NOT_FOUND";
                    case -0x7ffc7fff:
                      return "PRL_ERR_HTTP_CONNECTION_REFUSED";
                    case -0x7ffc7ffe:
                      return "PRL_ERR_HTTP_UNEXPECTED_CLOSE";
                    case -0x7ffc7ffd:
                      return "PRL_ERR_HTTP_INVALID_RESPONSE_HEADER";
                    case -0x7ffc7ffc:
                      return "PRL_ERR_HTTP_WRONG_CONTENT_LENGTH";
                    case -0x7ffc7ffb:
                      return "PRL_ERR_HTTP_PROXY_AUTH_REQUIRED";
                    case -0x7ffc7ffa:
                      return "PRL_ERR_HTTP_AUTH_REQUIRED";
                    case -0x7ffc7ff9:
                      return "PRL_ERR_HTTP_PROBLEM_REPORT_SEND_FAILURE";
                    case -0x7ffc7ff8:
                      return "PRL_ERR_XMLRPC_WRONG_METHOD_CALL";
                    case -0x7ffc7ff7:
                      return "PRL_ERR_XMLRPC_INVALID_CREDENTIALS";
                    case -0x7ffc7ff0:
                      return "PRL_ERR_XMLRPC_LIMITS_EXHAUSTED";
                    case -0x7ffc7fef:
                      return "PRL_ERR_XMLRPC_INVALID_REQUEST_INFO";
                    case -0x7ffc7fee:
                      return "PRL_ERR_XMLRPC_INTERNAL_ERROR";
                    }
                  }
                  else if (param_1 < -0x7ffc7000) {
                    switch(param_1) {
                    case -0x7ffc7f00:
                      return "PRL_ERR_VM_LOCKED_FOR_CLONE";
                    case -0x7ffc7eff:
                      return "PRL_ERR_VM_LOCKED_FOR_DELETE";
                    case -0x7ffc7efe:
                      return "PRL_ERR_VM_LOCKED_FOR_UNREGISTER";
                    case -0x7ffc7efd:
                      return "PRL_ERR_VM_LOCKED_FOR_EDIT_COMMIT";
                    case -0x7ffc7efc:
                      return "PRL_ERR_VM_LOCKED_FOR_EXECUTE";
                    case -0x7ffc7efb:
                      return "PRL_ERR_VM_LOCKED_FOR_EXECUTE_EX";
                    case -0x7ffc7efa:
                      return "PRL_ERR_VM_LOCKED_FOR_INTERNAL_REASON";
                    case -0x7ffc7ef9:
                      return "PRL_ERR_VM_LOCKED_FOR_EDIT_COMMIT_WITH_RENAME";
                    case -0x7ffc7ef8:
                      return "PRL_ERR_VM_LOCKED_FOR_UPDATE_SECURITY";
                    case -0x7ffc7ef7:
                      return "PRL_ERR_VM_LOCKED_FOR_MIGRATE";
                    case -0x7ffc7ef0:
                      return "PRL_ERR_VM_LOCKED_FOR_CREATE_SNAPSHOT";
                    case -0x7ffc7eef:
                      return "PRL_ERR_VM_LOCKED_FOR_SWITCH_TO_SNAPSHOT";
                    case -0x7ffc7eee:
                      return "PRL_ERR_VM_LOCKED_FOR_DELETE_TO_SNAPSHOT";
                    case -0x7ffc7eed:
                      return "PRL_ERR_VM_LOCKED_FOR_BACKUP";
                    case -0x7ffc7eec:
                      return "PRL_ERR_VM_LOCKED_FOR_RESTORE_FROM_BACKUP";
                    case -0x7ffc7eeb:
                      return "PRL_ERR_VM_LOCKED_CTL_FOR_BACKUP";
                    case -0x7ffc7eea:
                      return "PRL_ERR_VM_LOCKED_FOR_DISK_RESIZE";
                    case -0x7ffc7ee9:
                      return "PRL_ERR_VM_LOCKED_FOR_DISK_COMPACT";
                    case -0x7ffc7ee8:
                      return "PRL_ERR_VM_LOCKED_FOR_DISK_CONVERT";
                    case -0x7ffc7ee7:
                      return "PRL_ERR_VM_LOCKED_FOR_ENCRYPT";
                    case -0x7ffc7ee0:
                      return "PRL_ERR_VM_LOCKED_FOR_DECRYPT";
                    case -0x7ffc7edf:
                      return "PRL_ERR_VM_LOCKED_FOR_CHANGE_PASSWORD";
                    case -0x7ffc7ede:
                      return "PRL_ERR_VM_LOCKED_FOR_CHANGE_FIREWALL";
                    case -0x7ffc7edd:
                      return "PRL_ERR_VM_LOCKED_FOR_COPY_IMAGE";
                    case -0x7ffc7edc:
                      return "PRL_ERR_VM_LOCKED_FOR_MOVE";
                    case -0x7ffc7edb:
                      return "PRL_ERR_VM_LOCKED_FOR_SET_PROTECTION";
                    case -0x7ffc7eda:
                      return "PRL_ERR_VM_LOCKED_FOR_REMOVE_PROTECTION";
                    case -0x7ffc7ed9:
                      return "PRL_ERR_VM_LOCKED_FOR_ARCHIVE";
                    case -0x7ffc7ed8:
                      return "PRL_ERR_VM_LOCKED_FOR_UNARCHIVE";
                    }
                  }
                  else if (param_1 == -0x7ffc7000) {
                    return "PRL_ERR_NOT_SENTILLION_CLIENT";
                  }
                }
                else if (param_1 < -0x7ffbe000) {
                  if (param_1 < -0x7ffbea00) {
                    if (param_1 < -0x7ffbeb00) {
                      if (param_1 < -0x7ffbec00) {
                        if (param_1 < -0x7ffbed00) {
                          if (param_1 < -0x7ffbee00) {
                            if (param_1 < -0x7ffbef00) {
                              if (param_1 < -0x7ffbf000) {
                                if (param_1 == -0x7ffc0000) {
                                  return "PRL_ERR_CREATE_BOOTABLE_ISO";
                                }
                                if (param_1 == -0x7ffbffff) {
                                  return "PRL_ERR_UNATTENDED_UNSUPPORTED_GUEST";
                                }
                              }
                              else {
                                switch(param_1) {
                                case -0x7ffbf000:
                                  return "PRL_ERR_DISK_RESIZER_NOT_FOUND";
                                case -0x7ffbefff:
                                  return "PRL_ERR_DISK_RESIZE_WITH_SNAPSHOTS_NOT_ALLOWED";
                                case -0x7ffbeffe:
                                  return "PRL_ERR_DISK_RESIZE_SIZE_TOO_LOW";
                                case -0x7ffbeffd:
                                  return "PRL_ERR_DISK_RESIZE_FAILED";
                                }
                              }
                            }
                            else {
                              switch(param_1) {
                              case -0x7ffbef00:
                                return "PRL_ERR_CONFIRMATION_MODE_UNABLE_CHANGE_BY_NOT_ADMIN";
                              case -0x7ffbeeff:
                                return "PRL_ERR_CONFIRMATION_MODE_ALREADY_ENABLED";
                              case -0x7ffbeefe:
                                return "PRL_ERR_CONFIRMATION_MODE_ALREADY_DISABLED";
                              case -0x7ffbeefd:
                                return "PRL_ERR_ADMIN_CONFIRMATION_IS_REQUIRED_FOR_OPERATION";
                              case -0x7ffbeefc:
                                return "PRL_ERR_ADMIN_CONFIRMATION_IS_REQUIRED_FOR_VM_OPERATION";
                              case -0x7ffbeefb:
                                return "PRL_ERR_PASSWORD_IS_REQUIRED_FOR_OPERATION";
                              }
                            }
                          }
                          else {
                            switch(param_1) {
                            case -0x7ffbee00:
                              return "PRL_ERR_CHANGESID_FAILED";
                            case -0x7ffbedff:
                              return "PRL_ERR_CHANGESID_GUEST_TOOLS_NOT_AVAILABLE";
                            case -0x7ffbedfe:
                              return "PRL_ERR_CHANGESID_VM_START_FAILED";
                            case -0x7ffbedfd:
                              return "PRL_ERR_CHANGESID_NOT_SUPPORTED";
                            case -0x7ffbedfc:
                              return "PRL_ERR_CHANGESID_NOT_AVAILABLE";
                            }
                          }
                        }
                        else {
                          switch(param_1) {
                          case -0x7ffbed00:
                            return "PRL_ERR_CONVERT_3RD_PARTY_VM_FAILED";
                          case -0x7ffbecff:
                            return "PRL_ERR_CONVERT_3RD_PARTY_VM_NO_SPACE";
                          case -0x7ffbecfe:
                            return "PRL_ERR_IMPORT_BOOTCAMP_VM_FAILED";
                          case -0x7ffbecfd:
                            return "PRL_ERR_IMPORT_BOOTCAMP_VM_NO_SPACE";
                          case -0x7ffbecfc:
                            return "PRL_ERR_CONVERT_NO_GUEST_OS_FOUND";
                          case -0x7ffbecfb:
                            return "PRL_ERR_CONVERT_EFI_CONFIG_INVALID";
                          case -0x7ffbecfa:
                            return "PRL_ERR_CONVERT_EFI_GUEST_OS_UNSUPPORTED";
                          case -0x7ffbecf9:
                            return "PRL_ERR_CONVERT_GUEST_OS_IS_HIBERNATED";
                          case -0x7ffbecf8:
                            return "PRL_ERR_CONVERT_HDD_NO_GUEST_OS_FOUND";
                          case -0x7ffbecf7:
                            return "PRL_ERR_CONVERT_VM_IS_ENCRYPTED";
                          case -0x7ffbecf0:
                            return "PRL_ERR_CONVERT_VM_IS_BOOTCAMP";
                          case -0x7ffbecef:
                            return "PRL_ERR_CONVERT_VM_DISK_NOT_FOUND";
                          case -0x7ffbecee:
                            return "PRL_ERR_CONVERT_VM_NO_DISK_FOUND";
                          }
                        }
                      }
                      else {
                        switch(param_1) {
                        case -0x7ffbec00:
                          return "PRL_ERR_VMHELPER_CREATEVM_FAILED";
                        case -0x7ffbebff:
                          return "PRL_ERR_VMHELPER_GETTING_AVAILABLE_DRIVE_FAILED";
                        case -0x7ffbebfe:
                          return "PRL_ERR_VMHELPER_DISK_MOUNT_FAILED";
                        case -0x7ffbebfd:
                          return "PRL_ERR_VMHELPER_DISK_UNMOUNT_FAILED";
                        case -0x7ffbebfc:
                          return "PRL_ERR_VMHELPER_DIR_PATH_INVALID";
                        }
                      }
                    }
                    else {
                      switch(param_1) {
                      case -0x7ffbeb00:
                        return "PRL_ERR_APPLIANCE_INVALID_CONFIG";
                      case -0x7ffbeaff:
                        return "PRL_ERR_APPLIANCE_USER_NOT_FOUND";
                      case -0x7ffbeafe:
                        return "PRL_ERR_APPLIANCE_DOWNLOAD_PARENT_PATH_NOT_DIR";
                      case -0x7ffbeafd:
                        return "PRL_ERR_APPLIANCE_DOWNLOAD_PARENT_PATH_NOT_EXISTS";
                      case -0x7ffbeafc:
                        return "PRL_ERR_APPLIANCE_DOWNLOAD_PATH_CANNOT_CREATE";
                      case -0x7ffbeafb:
                        return "PRL_ERR_APPLIANCE_DOWNLOAD_UTILITY_NOT_FOUND";
                      case -0x7ffbeafa:
                        return "PRL_ERR_APPLIANCE_DOWNLOAD_UTILITY_NOT_STARTED";
                      case -0x7ffbeaf9:
                        return "PRL_ERR_APPLIANCE_EXIT_WITH_ERROR";
                      case -0x7ffbeaf8:
                        return "PRL_ERR_APPLIANCE_CANNOT_EXTRACT_VM";
                      case -0x7ffbeaf7:
                        return "PRL_ERR_APPLIANCE_INSTALL_ALREADY_IN_PROCESS";
                      case -0x7ffbeaf0:
                        return "PRL_ERR_APPLIANCE_CANNOT_CHANGE_OWNER";
                      case -0x7ffbeaef:
                        return "PRL_ERR_APPLIANCE_NAME_NOT_MATCH_VM_BUNDLE";
                      case -0x7ffbeaee:
                        return "PRL_ERR_APPLIANCE_CANNOT_MOVE_VM_BUNDLE";
                      case -0x7ffbeaed:
                        return "PRL_ERR_APPLIANCE_INSTALL_WAS_NOT_STARTED";
                      case -0x7ffbeaec:
                        return "PRL_ERR_APPLIANCE_CANNOT_CALCULATE_MD5";
                      case -0x7ffbeaeb:
                        return "PRL_ERR_APPLIANCE_MISMATCH_MD5";
                      case -0x7ffbeaea:
                        return "PRL_ERR_APPLIANCE_DOWNLOAD_LOST_CONNECTION";
                      }
                    }
                  }
                  else {
                    switch(param_1) {
                    case -0x7ffbea00:
                      return "PRL_ERR_CONV_HD_WRONG_VM_STATE";
                    case -0x7ffbe9ff:
                      return "PRL_ERR_CONV_HD_EXIT_WITH_ERROR";
                    case -0x7ffbe9fe:
                      return "PRL_ERR_CONV_HD_NO_ONE_DISK_FOR_CONVERSION";
                    case -0x7ffbe9fd:
                      return "PRL_ERR_CONV_HD_DISK_TOOL_NOT_STARTED";
                    case -0x7ffbe9fc:
                      return "PRL_ERR_CONV_HD_CONFLICT";
                    }
                  }
                }
                else if (param_1 < -0x7ffbd000) {
                  switch(param_1) {
                  case -0x7ffbe000:
                    return "PRL_ERR_OBJECT_NOT_FOUND";
                  case -0x7ffbdfff:
                    return "PRL_ERR_OBJECT_LIB_LOAD_ERROR";
                  case -0x7ffbdffe:
                    return "PRL_ERR_OBJECT_LIB_NO_FUNCTIONS";
                  case -0x7ffbdffd:
                    return "PRL_ERR_OBJECT_DUPLICATE_UID";
                  case -0x7ffbdffc:
                    return "PRL_ERR_OBJECT_BAD_INTERFACE";
                  case -0x7ffbdffb:
                    return "PRL_ERR_OBJECT_LIB_WRONG_PERMS";
                  case -0x7ffbdffa:
                    return "PRL_ERR_OBJECT_LIB_CANT_GET_PERMS";
                  case -0x7ffbdff9:
                    return "PRL_ERR_OBJECT_DUPLICATE_CLASS";
                  case -0x7ffbdff8:
                    return "PRL_ERR_OBJECT_CLASS_NOT_FOUND";
                  }
                }
                else if (param_1 < -0x7ffbc000) {
                  if (param_1 < -0x7ffbcd00) {
                    if (param_1 < -0x7ffbcf00) {
                      if (param_1 == -0x7ffbd000) {
                        return "PRL_ERR_ENC_KEY_NOT_SET";
                      }
                      if (param_1 == -0x7ffbcfff) {
                        return "PRL_ERR_ENC_WRONG_KEY";
                      }
                    }
                    else if (param_1 < -0x7ffbce00) {
                      switch(param_1) {
                      case -0x7ffbcf00:
                        return "PRL_ERR_PCMOVER_NOT_INSTALLED";
                      case -0x7ffbceff:
                        return "PRL_ERR_PCMOVER_VAN_FILE_PREPARE_FAILED";
                      case -0x7ffbcefe:
                        return "PRL_ERR_PCMOVER_MIGRATE_FAILED";
                      case -0x7ffbcefd:
                        return "PRL_ERR_PCMOVER_EXEC_FAILED";
                      case -0x7ffbcefc:
                        return "PRL_ERR_PCMOVER_POLICY_FILE_WRITE_ERROR";
                      case -0x7ffbcefb:
                        return "PRL_ERR_PCMOVER_POLICY_FILE_OPEN_ERROR";
                      case -0x7ffbcefa:
                        return "PRL_ERR_PCMOVER_VAN_FILE_CREATE_ERROR";
                      case -0x7ffbcef9:
                        return "PRL_ERR_PCMOVER_VAN_FILE_OPEN_ERROR";
                      case -0x7ffbcef8:
                        return "PRL_ERR_PCMOVER_WINDOWS_DIR_NOT_EXIST";
                      }
                    }
                    else {
                      if (param_1 == -0x7ffbce00) {
                        return "PRL_ERR_TEST_TEXT_MESSAGES";
                      }
                      if (param_1 == -0x7ffbcdff) {
                        return "PRL_ERR_TEST_TEXT_MESSAGES_PS";
                      }
                    }
                  }
                  else {
                    switch(param_1) {
                    case -0x7ffbcd00:
                      return "PRL_ERR_TEST_GET_ERR_STRING_LINK";
                    case -0x7ffbccff:
                      return "PRL_ERR_TEST_GET_ERR_STRING_PRODUCT_NAME";
                    case -0x7ffbccfe:
                      return "PRL_ERR_TEST_GET_ERR_STRING_KB_LINK";
                    case -0x7ffbccfd:
                      return "PRL_ERR_TEST_GET_ERR_STRING_TRASH_NAME";
                    case -0x7ffbccfc:
                      return "PRL_ERR_TEST_GET_ERR_STRING_PRL_SUPPORT_URL";
                    case -0x7ffbccfb:
                      return "PRL_ERR_TEST_GET_ERR_STRING_PRL_BUY_URL";
                    case -0x7ffbccfa:
                      return "PRL_ERR_TEST_GET_ERR_STRING_PRL_DOWNLOAD_URL";
                    case -0x7ffbccf9:
                      return "PRL_ERR_TEST_GET_ERR_STRING_CRASH_REPORT_URL";
                    }
                  }
                }
                else if (param_1 < -0x7ffbbe00) {
                  switch(param_1) {
                  case -0x7ffbc000:
                    return "PRL_ERR_SET_CPULIMIT";
                  case -0x7ffbbfff:
                    return "PRL_ERR_SET_CPUUNITS";
                  case -0x7ffbbffe:
                    return "PRL_ERR_SET_IOPRIO";
                  case -0x7ffbbffd:
                    return "PRL_ERR_ACTION_NOT_SUPPORTED_FOR_CT";
                  case -0x7ffbbffc:
                    return "PRL_ERR_SET_IOLIMIT";
                  case -0x7ffbbffb:
                    return "PRL_ERR_SET_CPUMASK";
                  case -0x7ffbbffa:
                    return "PRL_ERR_VZ_OPERATION_FAILED";
                  case -0x7ffbbff9:
                    return "PRL_ERR_VZ_OSTEMPLATE_NOT_FOUND";
                  case -0x7ffbbff8:
                    return "PRL_ERR_CT_IS_RUNNING";
                  case -0x7ffbbff7:
                    return "PRL_ERR_UNNAMED_CT_MOVE";
                  case -0x7ffbbff0:
                    return "PRL_ERR_VZCTL_OPERATION_FAILED";
                  }
                }
                else if (param_1 < -0x7ffbbc00) {
                  switch(param_1) {
                  case -0x7ffbbe00:
                    return "PRL_ERR_WRONG_PASSWORD_TO_ENCRYPTED_VM";
                  case -0x7ffbbdff:
                    return "PRL_ERR_UNABLE_TO_CREATE_ENCRYPTED_VM";
                  case -0x7ffbbdfe:
                    return "PRL_ERR_UNABLE_TO_REGISTER_ENCRYPTED_VM_WO_PASSWD";
                  case -0x7ffbbdfd:
                    return "PRL_ERR_AUTH_REQUIRED_TO_ENCRYPTED_VM";
                  case -0x7ffbbdfc:
                    return "PRL_ERR_WRONG_VM_STATE_TO_ENCRYPTED_OP";
                  case -0x7ffbbdfb:
                    return "PRL_ERR_WRONG_CIPHER_ID_FORMAT";
                  case -0x7ffbbdfa:
                    return "PRL_ERR_WRONG_TRANSACTION_STATE";
                  case -0x7ffbbdf9:
                    return "PRL_ERR_UNABLE_TO_PATCH_CONFIG_FILE";
                  case -0x7ffbbdf8:
                    return "PRL_ERR_UNABLE_TO_ROLLBACK_TRANSACTION";
                  case -0x7ffbbdf7:
                    return "PRL_ERR_UNABLE_TO_COMMIT_TRANSACTION";
                  case -0x7ffbbdf0:
                    return "PRL_ERR_UNABLE_TO_FINALIZE_TRANSACTION";
                  case -0x7ffbbdef:
                    return "PRL_ERR_PASSWORD_FOR_ENCRYPTED_VM_WAS_CHANGED";
                  case -0x7ffbbdee:
                    return "PRL_ERR_NOT_ENOUGH_DISK_SPACE_TO_ENCRYPT_VM";
                  case -0x7ffbbded:
                    return "PRL_ERR_NOT_ENOUGH_DISK_SPACE_TO_DECRYPT_VM";
                  case -0x7ffbbdec:
                    return "PRL_ERR_WRONG_ENCRYPTED_CONFIG_FORMAT";
                  case -0x7ffbbdeb:
                    return "PRL_ERR_ADD_ENCRYPTED_HDD_TO_NON_ENCRYPTED_VM";
                  case -0x7ffbbdea:
                    return "PRL_ERR_WRONG_PASSWORD_TO_ENCRYPTED_HDD";
                  case -0x7ffbbde9:
                    return "PRL_ERR_NOT_ENOUGH_DISK_SPACE_TO_ENCRYPT_HDD";
                  case -0x7ffbbde8:
                    return "PRL_ERR_VM_ALREADY_ENCRYPTED";
                  case -0x7ffbbde7:
                    return "PRL_ERR_UNABLE_TO_DECRYPT_UNENCRYPTED_VM";
                  case -0x7ffbbde0:
                    return "PRL_ERR_MEMFILE_ENCRYPT_FAILED";
                  case -0x7ffbbddf:
                    return "PRL_ERR_MEMFILE_DECRYPT_FAILED";
                  case -0x7ffbbdde:
                    return "PRL_ERR_WRONG_HDD_TYPE_FOR_ENCRYPT";
                  case -0x7ffbbddd:
                    return "PRL_ERR_CANT_CHANGE_DEFAULT_PLUGIN_BY_NON_ADMIN";
                  case -0x7ffbbddc:
                    return "PRL_ERR_CANT_SET_DEFAULT_ENCRYPTION_PLUGIN";
                  case -0x7ffbbddb:
                    return "PRL_ERR_CANT_SET_DEFAULT_ENCRYPTION_PLUGIN_BY_WRONG_FORMAT";
                  case -0x7ffbbdda:
                    return "PRL_ERR_WRONG_CIPHER_ID_FORMAT_IN_CONFIG";
                  case -0x7ffbbdd9:
                    return "PRL_ERR_UNABLE_TO_CLEANUP_BROKEN_TRANSACTIONS";
                  case -0x7ffbbdd8:
                    return "PRL_ERR_UNABLE_TO_COMMIT_BROKEN_TRANSACTION";
                  case -0x7ffbbdd7:
                    return "PRL_ERR_UNABLE_TO_ROLLBACK_BROKEN_TRANSACTION";
                  case -0x7ffbbdd0:
                    return "PRL_ERR_ENC_UNABLE_UNLOAD_PLUGINS_IN_USE";
                  case -0x7ffbbdcf:
                    return "PRL_ERR_ENC_PLUGINS_FEATURE_IS_ALREADY_DISABLED";
                  case -0x7ffbbdce:
                    return "PRL_ERR_ENC_PLUGINS_FEATURE_IS_DISABLED";
                  case -0x7ffbbdcd:
                    return "PRL_ERR_ENC_PLUGIN_UUID_NOT_FOUND";
                  case -0x7ffbbdcc:
                    return "PRL_ERR_ENC_PLUGINS_FEATURE_IS_ALREADY_ENABLED";
                  case -0x7ffbbdcb:
                    return "PRL_ERR_ENC_PLUGINS_UNABLE_LOAD_DIR_ALREADY";
                  case -0x7ffbbdca:
                    return "PRL_ERR_ENC_ENABLE_PLUGINS_NOT_PERMITTED";
                  case -0x7ffbbdc9:
                    return "PRL_ERR_ENC_DISABLE_PLUGINS_NOT_PERMITTED";
                  case -0x7ffbbdc8:
                    return "PRL_ERR_ENC_RESCAN_PLUGINS_NOT_PERMITTED";
                  case -0x7ffbbdc7:
                    return "PRL_ERR_SET_DEFAULT_ENCRYPTION_PLUGIN_FEATURE_DISABLED";
                  case -0x7ffbbdc0:
                    return "PRL_ERR_ENC_HDD_CANT_OPEN";
                  case -0x7ffbbdbf:
                    return "PRL_ERR_ENC_HDD_IS_ALREADY_ENCRYPTED";
                  case -0x7ffbbdbe:
                    return "PRL_ERR_ENC_HDD_IS_UNENCRYPTED";
                  case -0x7ffbbdbd:
                    return "PRL_ERR_ENC_HDD_WRONG_ENCRYPTION_ENGINE";
                  case -0x7ffbbdbc:
                    return "PRL_ERR_ENC_WRONG_HDD_PASSWORD";
                  case -0x7ffbbdbb:
                    return "PRL_ERR_CANT_EDIT_EXPIRATION_VM_IS_PROTECTED";
                  case -0x7ffbbdba:
                    return "PRL_ERR_UNABLE_TO_PROTECT_VM_IS_ALREADY_PROTECTED";
                  case -0x7ffbbdb9:
                    return "PRL_ERR_UNABLE_TO_UNPROTECT_VM_IS_NOT_PROTECTED";
                  case -0x7ffbbdb8:
                    return "PRL_ERR_WRONG_PASSWORD_TO_PROTECTED_VM";
                  case -0x7ffbbdb7:
                    return "PRL_ERR_WRONG_VM_STATE_OF_PROTECTION_OP";
                  case -0x7ffbbdb0:
                    return "PRL_ERR_UNABLE_TO_PROTECT_UNENCRYPTED_VM";
                  case -0x7ffbbdaf:
                    return "PRL_ERR_CANT_PROTECT_VM_WRONG_EXPIRATION_DATE";
                  case -0x7ffbbdae:
                    return "PRL_ERR_VM_PROTECT_PASSWORD_IS_EMPTY";
                  case -0x7ffbbdad:
                    return "PRL_ERR_UNABLE_TO_DECRYPT_PROTECTED_VM";
                  case -0x7ffbbdac:
                    return "PRL_ERR_UNABLE_TO_ENCRYPT_LINKED_CLONE_VM";
                  case -0x7ffbbdab:
                    return "PRL_ERR_UNABLE_TO_DECRYPT_LINKED_CLONE_VM";
                  }
                }
                else if (param_1 < -0x7ffbb000) {
                  switch(param_1) {
                  case -0x7ffbbc00:
                    return "PRL_ERR_ISCSI_STORAGE_LIBRARY";
                  case -0x7ffbbbff:
                    return "PRL_ERR_ISCSI_STORAGE_START";
                  case -0x7ffbbbfe:
                    return "PRL_ERR_ISCSI_STORAGE_CREATE";
                  case -0x7ffbbbfd:
                    return "PRL_ERR_ISCSI_STORAGE_REMOVE";
                  case -0x7ffbbbfc:
                    return "PRL_ERR_ISCSI_STORAGE_MOUNT";
                  case -0x7ffbbbfb:
                    return "PRL_ERR_ISCSI_STORAGE_UMOUNT";
                  case -0x7ffbbbfa:
                    return "PRL_ERR_ISCSI_STORAGE_EXTEND";
                  case -0x7ffbbbf9:
                    return "PRL_ERR_ISCSI_STORAGE_GET_STATE";
                  case -0x7ffbbbf8:
                    return "PRL_ERR_ISCSI_STORAGE_MOUNTED";
                  case -0x7ffbbbf7:
                    return "PRL_ERR_ISCSI_STORAGE_NOT_MOUNTED";
                  case -0x7ffbbbf0:
                    return "PRL_ERR_ISCSI_STORAGE_NOT_SUPPORTED";
                  case -0x7ffbbbef:
                    return "PRL_ERR_ISCSI_STORAGE_INVALID_FSTYPE";
                  case -0x7ffbbbee:
                    return "PRL_ERR_ISCSI_STORAGE_NOT_FOUND";
                  case -0x7ffbbbed:
                    return "PRL_ERR_ISCSI_STORAGE_ALREADY_REGISTERED";
                  case -0x7ffbbbec:
                    return "PRL_ERR_ISCSI_STORAGE_CANNOT_CREATE_MOUNT_POINT";
                  case -0x7ffbbbeb:
                    return "PRL_ERR_ISCSI_STORAGE_MOUNT_POINT_ALREADY_EXISTS";
                  }
                }
                else if (param_1 < -0x7ffba000) {
                  switch(param_1) {
                  case -0x7ffbb000:
                    return "PRL_ERR_UNSUPPORTED_VIRTUAL_SOURCE";
                  case -0x7ffbafff:
                    return "PRL_ERR_CANT_UNPACK_ARCHIVE";
                  case -0x7ffbaffe:
                    return "PRL_ERR_CANT_CONVERT_CONFIG";
                  case -0x7ffbaffd:
                    return "PRL_ERR_CANT_CONVERT_OTHER_VENDOR_VM";
                  case -0x7ffbaffc:
                    return "PRL_ERR_CANT_CONVERT_OTHER_VENDOR_HDD";
                  case -0x7ffbaffb:
                    return "PRL_ERR_CANT_RECONFIG_GUEST_OS";
                  case -0x7ffbaffa:
                    return "PRL_ERR_CANT_PREPARE_RECONFIG_DATA";
                  case -0x7ffbaff9:
                    return "PRL_ERR_NO_GUEST_OS_FOUND";
                  case -0x7ffbaff8:
                    return "PRL_ERR_UNSUPPORTED_LAYOUTS_STRUCTURE";
                  case -0x7ffbaff7:
                    return "PRL_ERR_SOURCE_ISNT_BOOTCAMP_DISK";
                  case -0x7ffbaff0:
                    return "PRL_ERR_OS_RECONFIG_DATA_ABSENT";
                  }
                }
                else if (param_1 < -0x7ffb9f00) {
                  switch(param_1) {
                  case -0x7ffba000:
                    return "PRL_WRN_IT_FIRST_WARNING";
                  case -0x7ffb9fff:
                    return "PRL_WRN_IT_EMPTY_MBR";
                  case -0x7ffb9ffe:
                    return "PRL_WRN_IT_VOLUME_RESIZING";
                  case -0x7ffb9ffd:
                    return "PRL_WRN_IT_CANT_RESIZE_VOLUME";
                  case -0x7ffb9ffc:
                    return "PRL_WRN_IT_CANT_RESIZE_LDM_DISK";
                  }
                }
                else if (param_1 < -0x7ffb9c00) {
                  if (param_1 < -0x7ffb9e00) {
                    if (param_1 == -0x7ffb9f00) {
                      return "PRL_ERR_IT_FIRST_FAILURE";
                    }
                    if (param_1 == -0x7ffb9eff) {
                      return "PRL_ERR_IT_FAST_RESIZE_FAILURE";
                    }
                    if (param_1 == -0x7ffb9efe) {
                      return "PRL_ERR_IT_ROLLBACK_FAILURE";
                    }
                  }
                  else {
                    switch(param_1) {
                    case -0x7ffb9e00:
                      return "PRL_ERR_IT_FIRST_ERROR";
                    case -0x7ffb9dff:
                      return "PRL_ERR_IT_USER_INTERRUPTED";
                    case -0x7ffb9dfe:
                      return "PRL_ERR_IT_SIZE_CHANGED";
                    case -0x7ffb9dfd:
                      return "PRL_ERR_IT_CANT_OPEN_IMAGE";
                    case -0x7ffb9dfc:
                      return "PRL_ERR_IT_CANT_GET_PARAMS_FROM_OLD_IMAGE";
                    case -0x7ffb9dfb:
                      return "PRL_ERR_IT_GUEST_TOOLS_UNKNOWN_STATE";
                    case -0x7ffb9dfa:
                      return "PRL_ERR_IT_CANT_VALIDATE_BOOTCAMP";
                    case -0x7ffb9df9:
                      return "PRL_ERR_IT_CANT_RECONFIG";
                    case -0x7ffb9df8:
                      return "PRL_ERR_IT_CANT_RECONFIG_BOOTCAMP";
                    case -0x7ffb9df7:
                      return "PRL_ERR_IT_CANT_PREPARE_RECONFIG_DATA";
                    case -0x7ffb9df0:
                      return "PRL_ERR_IT_RECONFIG_PATH_NEEDED";
                    case -0x7ffb9def:
                      return "PRL_ERR_IT_UNKNOWN_OS";
                    case -0x7ffb9dee:
                      return "PRL_ERR_IT_HAL_NOT_FOUND";
                    case -0x7ffb9ded:
                      return "PRL_ERR_IT_SNAPSHOTS_MERGE_IS_NEEDED";
                    case -0x7ffb9dec:
                      return "PRL_ERR_IT_CONVERT_TO_CURRENT_ERROR";
                    case -0x7ffb9deb:
                      return "PRL_ERR_IT_DISK_SMALL_FOR_SPLIT";
                    case -0x7ffb9dea:
                      return "PRL_ERR_IT_CANT_RESIZE_VOLUME";
                    case -0x7ffb9de9:
                      return "PRL_ERR_IT_CANT_RESIZE_LDM_DISK";
                    case -0x7ffb9de8:
                      return "PRL_ERR_IT_FS_NOT_SUPPORTED_FOR_RESIZE";
                    case -0x7ffb9de7:
                      return "PRL_ERR_IT_CANT_COMPACT";
                    case -0x7ffb9de0:
                      return "PRL_ERR_IT_CANT_COMPACT_LDM_DISK";
                    case -0x7ffb9ddf:
                      return "PRL_ERR_IT_CANT_GET_BITMAP";
                    case -0x7ffb9dde:
                      return "PRL_ERR_IT_CANT_COMPACT_PLAIN_DISK";
                    case -0x7ffb9ddd:
                      return "PRL_ERR_IT_CANT_RESIZE_BELOW_MIN";
                    case -0x7ffb9ddc:
                      return "PRL_ERR_IT_CANT_RESIZE_OVER_MAX";
                    case -0x7ffb9ddb:
                      return "PRL_ERR_IT_CANT_RESIZE_LVM";
                    case -0x7ffb9dda:
                      return "PRL_ERR_IT_CANT_RESIZE_TYPE_SWAP";
                    case -0x7ffb9dd9:
                      return "PRL_ERR_IT_CANT_RESIZE_TYPE_RECOVERY";
                    case -0x7ffb9dd8:
                      return "PRL_ERR_IT_CANT_RESIZE_HYBRID_SHUTDOWN";
                    case -0x7ffb9dd7:
                      return "PRL_ERR_IT_CANT_COMPACT_HYBRID_SHUTDOWN";
                    }
                  }
                }
                else if (param_1 < -0x7ffb8000) {
                  if (param_1 < -0x7ffb8ffe) {
                    if (param_1 < -0x7ffb9800) {
                      if (param_1 < -0x7ffb9a00) {
                        if (param_1 == -0x7ffb9c00) {
                          return "PRL_ERR_TEMPLATE_HAS_APPS";
                        }
                        if (param_1 == -0x7ffb9bff) {
                          return "PRL_ERR_TEMPLATE_NOT_FOUND";
                        }
                      }
                      else if (param_1 < -0x7ffb9900) {
                        switch(param_1) {
                        case -0x7ffb9a00:
                          return "PRL_ERR_VM_MOUNT";
                        case -0x7ffb99ff:
                          return "PRL_ERR_VM_UNMOUNT";
                        case -0x7ffb99fe:
                          return "PRL_ERR_CONNECT_TO_MOUNTER";
                        case -0x7ffb99fd:
                          return "PRL_ERR_PERFORM_MOUNTER_COMMAND";
                        case -0x7ffb99fc:
                          return "PRL_ERR_MOUNTER_LIST_NO_OBJECT";
                        }
                      }
                      else {
                        if (param_1 == -0x7ffb9900) {
                          return "PRL_ERR_CI_DEVICE_IS_NOT_VIRTUAL";
                        }
                        if (param_1 == -0x7ffb98ff) {
                          return "PRL_ERR_CI_CANNOT_COPY_IMAGE_NON_STOPPED_VM";
                        }
                        if (param_1 == -0x7ffb98fe) {
                          return "PRL_ERR_CI_PERMISSIONS_DENIED";
                        }
                      }
                    }
                    else {
                      if (param_1 < -0x7ffb97ff) {
                        return "PRL_ERR_CVSRC_IO_ERROR";
                      }
                      if (param_1 < -0x7ffb97fe) {
                        return "PRL_ERR_CVSRC_NO_OPEN_REQUEST";
                      }
                      if (param_1 < -0x7ffb96ff) {
                        if (param_1 == -0x7ffb97fe) {
                          return "PRL_ERR_CVSRC_NO_CHANNEL";
                        }
                        if (param_1 == -0x7ffb9700) {
                          return "PRL_ERR_CLUSTER_RESOURCE_ERROR";
                        }
                      }
                      else {
                        if (param_1 == -0x7ffb96ff) {
                          return "PRL_ERR_REG_PSTORAGE_REVOKE_IS_NEEDS";
                        }
                        if (param_1 == -0x7ffb96fe) {
                          return "PRL_ERR_KEYCHAIN_AUTH_FAILED";
                        }
                      }
                    }
                  }
                  else {
                    switch(param_1) {
                    case -0x7ffb8ffe:
                      return "PRL_ERR_WEB_PORTAL_BAD_REQUEST";
                    case -0x7ffb8ffd:
                      return "PRL_ERR_WEB_PORTAL_NOT_FOUND";
                    case -0x7ffb8ffc:
                      return "PRL_ERR_WEB_PORTAL_UNAUTHORIZED";
                    case -0x7ffb8ffb:
                      return "PRL_ERR_WEB_PORTAL_INVALID_PARAMETERS";
                    case -0x7ffb8ffa:
                      return "PRL_ERR_WEB_PORTAL_CONFLICT";
                    case -0x7ffb8ff9:
                      return "PRL_ERR_WEB_PORTAL_SERVICE_UNAVAILABLE";
                    case -0x7ffb8ff8:
                      return "PRL_ERR_WEB_PORTAL_INVALID_EMAIL";
                    case -0x7ffb8ff0:
                      return "PRL_ERR_WEB_PORTAL_FORBIDDEN";
                    case -0x7ffb8fef:
                      return "PRL_ERR_WEB_PORTAL_SOCIAL_CONFIRM_EMAIL_SENT";
                    case -0x7ffb8fee:
                      return "PRL_ERR_WEB_PORTAL_SOCIAL_UNCONFIRMED_ACCOUNT";
                    case -0x7ffb8fed:
                      return "PRL_ERR_WEB_PORTAL_SOCIAL_APP_DENIED";
                    case -0x7ffb8fec:
                      return "PRL_ERR_WEB_PORTAL_SOCIAL_SERVICE_BAD_RESPONSE";
                    case -0x7ffb8feb:
                      return "PRL_ERR_WEB_PORTAL_SOCIAL_SERVICE_UNAVAILABLE";
                    case -0x7ffb8fea:
                      return "PRL_ERR_WEB_PORTAL_SOCIAL_PROHIBITED_FOR_BA";
                    case -0x7ffb8fe9:
                      return "PRL_ERR_WEB_PORTAL_LIC_MASTER_KEY_INVALID";
                    case -0x7ffb8fe8:
                      return "PRL_ERR_WEB_PORTAL_LIC_MASTER_KEY_EXPIRED";
                    case -0x7ffb8fe7:
                      return "PRL_ERR_WEB_PORTAL_LIC_MASTER_KEY_BLACKLISTED";
                    case -0x7ffb8fe0:
                      return "PRL_ERR_WEB_PORTAL_LIC_MASTER_KEY_LIMIT_REACHED";
                    case -0x7ffb8fdf:
                      return "PRL_ERR_WEB_PORTAL_LIC_HOST_IS_BLOCKED";
                    case -0x7ffb8fde:
                      return "PRL_ERR_WEB_PORTAL_LIC_HOST_IS_DEACTIVATED";
                    case -0x7ffb8fdd:
                      return "PRL_ERR_WEB_PORTAL_LIC_TEMP_KEY_INVALID";
                    case -0x7ffb8fdc:
                      return "PRL_ERR_WEB_PORTAL_LIC_KEY_IS_UP_TO_DATE";
                    case -0x7ffb8fdb:
                      return "PRL_ERR_WEB_PORTAL_UNEXPECTED";
                    case -0x7ffb8fda:
                      return "PRL_ERR_WEB_PORTAL_LIC_COMMON_ERROR";
                    case -0x7ffb8fd9:
                      return "PRL_ERR_WEB_PORTAL_SOCIAL_NO_EMAIL";
                    case -0x7ffb8fd8:
                      return "PRL_ERR_WEB_PORTAL_LIC_KA_MASTER_KEY_INVALID";
                    case -0x7ffb8fd7:
                      return "PRL_ERR_WEB_PORTAL_LIC_KA_TEMP_KEY_INVALID";
                    case -0x7ffb8fd0:
                      return "PRL_ERR_WEB_PORTAL_LIC_USER_TOKEN_INVALID";
                    case -0x7ffb8fcf:
                      return "PRL_ERR_WEB_PORTAL_LIC_KEY_SHOULD_BE_RENEWED";
                    case -0x7ffb8fce:
                      return "PRL_ERR_WEB_PORTAL_TOO_LONG_PASSWORD";
                    case -0x7ffb8fcd:
                      return "PRL_ERR_WEB_PORTAL_TOO_SHORT_PASSWORD";
                    case -0x7ffb8fcb:
                      return "PRL_ERR_WEB_PORTAL_LIC_UPGRADE_IS_UNAVAILABLE";
                    case -0x7ffb8fca:
                      return "PRL_ERR_WEB_PORTAL_LIC_OWNER_INVALID";
                    case -0x7ffb8fc9:
                      return "PRL_ERR_WEB_PORTAL_HOSTS_POOL_EXCEEDED";
                    case -0x7ffb8fc8:
                      return "PRL_ERR_WEB_PORTAL_LIC_MASTER_KEY_LIMIT_REACHED_CONSUMER";
                    case -0x7ffb8fc7:
                      return "PRL_ERR_WEB_PORTAL_LIC_PERM_KEY_IS_INVALID";
                    case -0x7ffb8fc0:
                      return "PRL_ERR_WEB_PORTAL_UNABLE_SIGNOUT_OFFLINE";
                    case -0x7ffb8fbf:
                      return "PRL_ERR_WEB_PORTAL_LIC_PERM_KEY_IS_ALREADY_ACTIVATED";
                    case -0x7ffb8fbe:
                      return "PRL_ERR_WEB_PORTAL_LIC_NEED_PREVIOUS_KEY";
                    case -0x7ffb8fbd:
                      return "PRL_ERR_WEB_PORTAL_LIC_HOST_IS_BLOCKED_WITH_MSG";
                    case -0x7ffb8fbc:
                      return "PRL_ERR_WEB_PORTAL_LIC_OWNER_EMPTY";
                    case -0x7ffb8fbb:
                      return "PRL_ERR_WEB_PORTAL_BA_SIGNED_IN";
                    case -0x7ffb8fba:
                      return "PRL_ERR_WEB_PORTAL_MAS_IN_PROGRESS";
                    case -0x7ffb8fb8:
                      return "PRL_ERR_WEB_PORTAL_MAS_OWNER_INVALID";
                    case -0x7ffb8fb7:
                      return "PRL_ERR_WEB_PORTAL_MAS_INVALID_PRODUCT";
                    case -0x7ffb8fb0:
                      return "PRL_ERR_WEB_PORTAL_MAS_INVALID_RECEIPT";
                    case -0x7ffb8faf:
                      return "PRL_ERR_WEB_PORTAL_MAS_RECEIPT_EXPIRED";
                    case -0x7ffb8fae:
                      return "PRL_ERR_WEB_PORTAL_MAS_SERVICE_UNAVAILABLE";
                    case -0x7ffb8fad:
                      return "PRL_ERR_WEB_PORTAL_MAS_INVALID_PURCHASE_UUID";
                    case -0x7ffb8fac:
                      return "PRL_ERR_WEB_PORTAL_MAS_NO_IN_APP_PURCHASE";
                    case -0x7ffb8fab:
                      return "PRL_ERR_WEB_PORTAL_MAS_UNEXPECTED";
                    case -0x7ffb8faa:
                      return "PRL_ERR_WEB_PORTAL_LIC_HOST_IS_DEACTIVATED_CONSUMER";
                    case -0x7ffb8fa9:
                      return "PRL_ERR_WEB_PORTAL_LIC_PREVIOUS_KEY_REQUESTED";
                    case -0x7ffb8fa8:
                      return "PRL_ERR_WEB_PORTAL_LIC_PREVIOUS_KEY_IS_INVALID";
                    case -0x7ffb8fa7:
                      return "PRL_ERR_WEB_PORTAL_LIC_UNIVERSAL_KEY_INVALID";
                    case -0x7ffb8fa0:
                      return "PRL_ERR_WEB_PORTAL_LIC_POSA_INVALID";
                    case -0x7ffb8f9f:
                      return "PRL_ERR_WEB_PORTAL_LIC_KEY_NOT_FOR_EXTENDING";
                    case -0x7ffb8f9e:
                      return "PRL_ERR_WEB_PORTAL_LIC_SUBSCR_CANT_BE_EXTENDED";
                    case -0x7ffb8f9d:
                      return "PRL_ERR_WEB_PORTAL_LIC_CANT_BE_USED_ANYMORE";
                    case -0x7ffb8f9c:
                      return "PRL_ERR_WEB_PORTAL_LIC_SUBSCR_EXTEND_TIMEOUT";
                    }
                  }
                }
                else if (param_1 < -0x7ffb7000) {
                  switch(param_1) {
                  case -0x7ffb8000:
                    return "PRL_ERR_IAP_STORE_NO_CONNECTION";
                  case -0x7ffb7fff:
                    return "PRL_ERR_IAP_INVALID_PRODUCT_ID";
                  case -0x7ffb7ffe:
                    return "PRL_ERR_IAP_PAYMENT_FAILED";
                  case -0x7ffb7ffd:
                    return "PRL_ERR_IAP_PAYMENT_TRANSACTIONS_RESTORE_FAILED";
                  case -0x7ffb7ffc:
                    return "PRL_ERR_IAP_PAYMENT_RECEIPT_REGISTRATION_FAILED";
                  case -0x7ffb7ffb:
                    return "PRL_ERR_IAP_PAYMENT_RECEIPT_INVALID";
                  case -0x7ffb7ff9:
                    return "PRL_ERR_IAP_PAYMENT_RECEIPT_EXPIRED";
                  case -0x7ffb7ff8:
                    return "PRL_ERR_IAP_PRODUCT_PURCHASE_RESTRICTED";
                  case -0x7ffb7ff7:
                    return "PRL_ERR_IAP_PAYMENT_NOT_ALLOWED";
                  }
                }
                else if (param_1 < -0x7ffb0000) {
                  switch(param_1) {
                  case -0x7ffb7000:
                    return "PRL_ERR_RCC_PAX_LOGIN_ERROR";
                  case -0x7ffb6fff:
                    return "PRL_ERR_RCC_PAX_AUTHENTICATION_FAILED";
                  case -0x7ffb6ffe:
                    return "PRL_ERR_RCC_CONNECT_SERVER_ERROR";
                  case -0x7ffb6ffd:
                    return "PRL_ERR_RCC_SERVER_AUTHENTICATION_FAILED";
                  case -0x7ffb6ffc:
                    return "PRL_ERR_RCC_CONNECT_DESKTOP_ERROR";
                  case -0x7ffb6ffb:
                    return "PRL_ERR_RCC_OPEN_APP_ERROR";
                  case -0x7ffb6ffa:
                    return "PRL_ERR_RCC_VIDEO_STREAM_UNAVAILABLE";
                  case -0x7ffb6ff9:
                    return "PRL_ERR_RCC_DESKTOP_SUSPENDED";
                  case -0x7ffb6ff8:
                    return "PRL_ERR_PAX_LOGIN_MISMATCH_ERROR";
                  case -0x7ffb6ff7:
                    return "PRL_ERR_RCC_DEVICE_BLACKLISTED";
                  case -0x7ffb6ff0:
                    return "PRL_ERR_RCC_DEVICE_GREYLISTED";
                  case -0x7ffb6fef:
                    return "PRL_ERR_RCC_WAKEUP_SERVER_ERROR";
                  }
                }
                else {
                  if (param_1 == -0x7ffb0000) {
                    return "PRL_ERR_SDK_TRY_AGAIN";
                  }
                  if (param_1 == -0x7ffaf000) {
                    return "PRL_ERR_FILE_MANAGER_CANT_PASTE_AN_ITEM_INTO_ITSELF";
                  }
                  if (param_1 == -0x7ffaefff) {
                    return "PRL_ERR_FILE_MANAGER_CANT_PASTE_AN_ITEM_INTO_THIS_DESTINATION";
                  }
                }
              }
              else {
                switch(param_1) {
                case -0x7ffae000:
                  return "PRL_ERR_BUSE_NOT_MOUNTED";
                case -0x7ffadfff:
                  return "PRL_ERR_BUSE_INTERNAL_ERROR";
                case -0x7ffadffe:
                  return "PRL_ERR_BUSE_ENTRY_INVALID";
                case -0x7ffadffd:
                  return "PRL_ERR_BUSE_ENTRY_ALREADY_EXIST";
                case -0x7ffadffc:
                  return "PRL_ERR_BUSE_ENTRY_ALREADY_INITIALIZED";
                case -0x7ffadffb:
                  return "PRL_ERR_BUSE_ENTRY_IO_ERROR";
                }
              }
            }
            else {
              switch(param_1) {
              case -0x7ffac000:
                return "PRL_ERR_ATTACH_BACKUP_INTERNAL_ERROR";
              case -0x7ffabfff:
                return "PRL_ERR_ATTACH_BACKUP_INVALID_STORAGE_URL";
              case -0x7ffabffe:
                return "PRL_ERR_ATTACH_BACKUP_CUSTOM_BACKUP_SERVER_NOT_SUPPORTED";
              case -0x7ffabffd:
                return "PRL_ERR_ATTACH_BACKUP_PROTO_ERROR";
              case -0x7ffabffc:
                return "PRL_ERR_ATTACH_BACKUP_FORMAT_NOT_SUPPORTED";
              case -0x7ffabffb:
                return "PRL_ERR_ATTACH_BACKUP_ALREADY_ATTACHED";
              case -0x7ffabffa:
                return "PRL_ERR_ATTACH_BACKUP_BUSE_NOT_MOUNTED";
              case -0x7ffabff9:
                return "PRL_ERR_ATTACH_BACKUP_URL_CHANGE_PROHIBITED";
              }
            }
          }
          else {
            switch(param_1) {
            case -0x7ffab000:
              return "PRL_ERR_MFS_GOOGLE_DRIVE_DOCUMENT_IS_NON_DOWNLOADABLE";
            case -0x7ffaafff:
              return "PRL_ERR_MFS_WEBLINKS_GENERATION_MISMATCH";
            case -0x7ffaaffe:
              return "PRL_ERR_MFS_CAPTCHA_MISMATCH";
            case -0x7ffaaffd:
              return "PRL_ERR_MFS_SUBSCRIPTION_EXPIRED";
            }
          }
        }
        else {
          switch(param_1) {
          case -0x7ffaa000:
            return "PRL_ERR_BACKUP_VM_IS_NOT_REGISTERED";
          case -0x7ffa9fff:
            return "PRL_ERR_BACKUP_UNABLE_TO_LOCK_VM";
          case -0x7ffa9ffe:
            return "PRL_ERR_BACKUP_ALREADY_IN_PROGRESS";
          case -0x7ffa9ffd:
            return "PRL_ERR_BACKUP_SESSION_NOT_FOUND";
          case -0x7ffa9ffc:
            return "PRL_ERR_BACKUP_SESSION_BUSY";
          case -0x7ffa9ffb:
            return "PRL_ERR_BACKUP_OPERATION_NOT_PERMITTED";
          case -0x7ffa9ffa:
            return "PRL_ERR_BACKUP_OPERATION_COULD_NOT_BE_PERFORMED";
          case -0x7ffa9ff9:
            return "PRL_ERR_BACKUP_BOOTCAMP_VM_NOT_SUPPORTED";
          }
        }
      }
      else {
        switch(param_1) {
        case -0x7ffa9b00:
          return "PRL_ERR_VM_COMPRESS_VM_SHUTDOWN_TIMEOUT";
        case -0x7ffa9aff:
          return "PRL_ERR_DISP_AUTH_WITH_PASSWORD_REACHED_UP_LIMIT";
        case -0x7ffa9afe:
          return "PRL_ERR_DISP_AUTH_WRONG_PASSWORD";
        case -0x7ffa9afd:
          return "PRL_ERR_DISP_ALREADY_AUTHORIZED_WITH_PASSWORD";
        }
      }
    }
    else if (param_1 < 0x4e27) {
      if (param_1 < 16000) {
        if (param_1 < 15000) {
          if (param_1 < 14000) {
            if (param_1 < 13000) {
              if (param_1 < 0xfb6) {
                if (param_1 < 0x1e2) {
                  if (param_1 < 0x1b7) {
                    if (param_1 == 0) {
                      return "PRL_ERR_SUCCESS";
                    }
                    if (param_1 == 0x1aa) {
                      return "PRL_ERR_NEED_KILL_PREV_SETTING";
                    }
                  }
                  else {
                    if (param_1 == 0x1b7) {
                      return "PRL_WNG_START_VM_ON_MOUNTED_DISK";
                    }
                    if (param_1 == 0x1b9) {
                      return "PET_ERR_WARN_REACH_OVERCOMMIT_STATE_ON_SETMEM";
                    }
                  }
                }
                else if (param_1 < 0x1ee) {
                  if (param_1 == 0x1e2) {
                    return "PRL_WARN_PREPARE_FOR_HIBERNATE_UNABLE_SUSPEND_DO_STOP";
                  }
                  if (param_1 == 0x1ea) {
                    return "PRL_ERR_NO_ONE_HARD_DISK_TO_COMPRESS";
                  }
                }
                else {
                  if (param_1 == 0x1ee) {
                    return "PRL_ERR_COMPACT_ALREADY_SWITCHED_ON";
                  }
                  if (param_1 == 0x1ef) {
                    return "PRL_WARN_VERBOSE_LOGGING";
                  }
                }
              }
              else if (param_1 == 0xfb6) {
                return "PRL_NET_IPADDRESS_MODIFY_FAILED_WARNING";
              }
            }
            else {
              switch(param_1) {
              case 13000:
                return "PET_QUESTION_SAMPLE_1";
              case 0x32c9:
                return "PET_QUESTION_SAMPLE_2";
              case 0x32ca:
                return "PET_QUESTION_DO_YOU_WANT_TO_OVERWRITE_FILE";
              case 0x32cb:
                return "PET_QUESTION_TXT_ERROR";
              case 0x32cc:
                return "PET_QUESTION_OLD_CONFIG_CONVERTION";
              case 0x32cd:
                return "PET_QUESTION_FREE_SIZE_FOR_COMPRESSED_DISK";
              case 0x32ce:
                return "PET_QUESTION_DELETE_FILES_OUT_OF_VM_DIR";
              case 0x32cf:
                return "PET_QUESTION_DELETE_PARALLELS_FILES_IN_VM_DIR";
              case 0x32d0:
                return "PET_QUESTION_REGISTER_VM_TEMPLATE";
              case 0x32d1:
                return "PET_QUESTION_DELETE_VM_WITH_CORRUPTED_CONFIG";
              case 0x32d2:
                return "PET_QUESTION_REGISTER_USED_VM";
              case 0x32d3:
                return "PET_QUESTION_CREATE_NEW_MAC_ADDRESS";
              case 0x32d4:
                return "PET_QUESTION_CHANGE_VM_MIGRATION_TYPE";
              case 0x32d5:
                return "PET_QUESTION_VM_COPY_OR_MOVE";
              case 0x32d6:
                return "PET_QUESTION_REACH_OVERCOMMIT_STATE";
              case 0x32d7:
                return "PET_QUESTION_BOOTCAMP_HELPER_INIT_FAILURE";
              case 0x32d8:
                return "PET_QUESTION_BOOTCAMP_HELPER_OS_UNSUPPORTED";
              case 0x32d9:
                return "PET_QUESTION_REACH_OVERCOMMIT_STATE_ON_SETMEM";
              case 0x32da:
                return "PET_QUESTION_UNDO_DISKS_MODE";
              case 0x32db:
                return "PET_QUESTION_MAC_PHYSICAL_MEMORY_MAP_BUG";
              case 0x32dc:
                return "PET_QUESTION_CREATE_OS2_GUEST_WITHOUT_FDD_IMAGE";
              case 0x32dd:
                return "PET_QUESTION_APPLY_WHEN_HYP_CANNOT_ALLOC_VMS_MEM";
              case 0x32de:
                return "PET_QUESTION_ALLOW_TO_SUSPEND_VM_WITH_BOOTCAMP_DISK";
              case 0x32df:
                return "PET_QUESTION_RESTORE_VM_CONFIG_FROM_BACKUP";
              case 0x32e0:
                return "PET_QUESTION_CANCEL_CLONE_OPERATION";
              case 0x32e1:
                return "PET_QUESTION_CANCEL_CLONE_TO_TEMPLATE_OPERATION";
              case 0x32e2:
                return "PET_QUESTION_CANCEL_DEPLOY_OPERATION";
              case 0x32e3:
                return "PET_QUESTION_REBOOT_HOST_ON_PCI_DRIVER_INSTALL_OR_REVERT";
              case 0x32e4:
                return "PET_QUESTION_VM_ROOT_DIRECTORY_NOT_EXISTS";
              case 0x32e5:
                return "PET_QUESTION_RESTART_VM_GUEST_TO_COMPACT";
              case 0x32e6:
                return "PET_QUESTION_COMPACT_VM_DISKS";
              case 0x32e7:
                return "PET_QUESTION_CONTINUE_IF_HVT_DISABLED";
              case 0x32e8:
                return "PET_QUESTION_DELAYED_COMPACT_VM_DISKS";
              case 0x32e9:
                return "PET_QUESTION_SWITCH_OFF_AUTO_COMPRESS";
              case 0x32ea:
                return "PET_QUESTION_FORCE_COMPACT_VM_DISKS";
              case 0x32ed:
                return "PET_QUESTION_APPLIANCE_CORRUPTED_INSTALLATION";
              case 0x32ee:
                return "PET_QUESTION_ON_QUERY_END_SESSION";
              case 0x32ef:
                return "PET_QUESTION_ON_QUERY_END_SESSION_RESTRICTED";
              case 0x32f0:
                return "PRL_QUESTION_CONVERT_3RD_PARTY_CANNOT_MIGRATE";
              case 0x32f1:
                return "PET_QUESTION_VM_REBOOT_REQUIRED_BY_PRL_TOOLS";
              case 0x32f2:
                return "PRL_QUESTION_CONVERT_VM_SPECIFY_DISTRO_PATH";
              case 0x32f3:
                return "PRL_QUESTION_ASK_ENCRYPTED_VM_PASSWORD";
              case 0x32f4:
                return "PET_QUESTION_CANCEL_IMPORT_BOOTCAMP_OPERATION";
              case 0x32f5:
                return "PRL_QUESTION_CONVERT_VM_CANT_DETECT_OS";
              case 0x32f6:
                return "PET_QUESTION_CANCEL_CONVERT_3RD_VM_OPERATION";
              case 0x32f7:
                return "PET_QUESTION_COMMON_HDD_ERROR";
              case 0x32f9:
                return "PRL_QUESTION_FINALIZE_VM_PROCESS";
              case 0x32fa:
                return "PET_QUESTION_SUSPEND_STATE_INCOMPATIBLE_CPU";
              case 0x32fb:
                return "PET_QUESTION_SNAPSHOT_STATE_INCOMPATIBLE_CPU";
              case 0x32fc:
                return "PET_QUESTION_CREATE_VM_FROM_LION_RECOVERY_PART";
              case 0x32fd:
                return "PET_QUESTION_SUSPEND_STATE_INCOMPATIBLE";
              case 0x32fe:
                return "PET_QUESTION_SNAPSHOT_STATE_INCOMPATIBLE";
              case 0x32ff:
                return "PRL_QUESTION_CONVERT_GUEST_OS_IS_HIBERNATED";
              case 0x3300:
                return "PRL_QUESTION_SETUP_YANDEX_SEARCH";
              case 0x3301:
                return "PRL_QUESTION_REVERT_TOO_LARGE_MEM";
              case 0x3302:
                return "PRL_QUESTION_CONVERT_VM_NO_DISK_FOUND";
              case 0x3303:
                return "PET_QUESTION_NOTHING_TO_COMPRESS";
              case 0x3304:
                return "PRL_QUESTION_CANNOT_RESTORE_SUSPEND_STATE";
              case 0x3305:
                return "PET_QUESTION_SUSPEND_STATE_INCOMPATIBLE_CPU_PDL";
              case 0x3306:
                return "PET_QUESTION_SNAPSHOT_STATE_INCOMPATIBLE_CPU_PDL";
              }
            }
          }
          else {
            switch(param_1) {
            case 14000:
              return "GUI_QUESTION_CANCEL_CLONE_OPERATION";
            case 0x36b1:
              return "GUI_QUESTION_SWAP_SLOTS";
            case 0x36b2:
              return "GUI_QUESTION_RESTORE_DEFAULT_SETTINGS";
            case 0x36b3:
              return "GUI_QUESTION_FDD_IMAGE_ALREADY_EXIST";
            case 0x36b4:
              return "GUI_QUESTION_QUIT_APPLICATION";
            case 0x36b5:
              return "GUI_QUESTION_WARN_ALLOCATE_MEM";
            case 0x36b6:
              return "GUI_QUESTION_DELETE_NET_ADAPTER";
            case 0x36b7:
              return "GUI_QUESTION_RECREATE_HDD";
            case 0x36b8:
              return "GUI_QUESTION_OVERWRITE_HDD_IMAGE";
            case 0x36b9:
              return "GUI_QUESTION_REMOVE_SERVER_FROM_LIST";
            case 0x36ba:
              return "GUI_QUESTION_CANCEL_DEPLOY_OPERATION";
            case 0x36bb:
              return "GUI_QUESTION_COMPRESSED_DISK_IN_EXPRESS_MODE";
            case 0x36bc:
              return "GUI_QUESTION_LOST_TASK_CONTINUE";
            case 0x36bd:
              return "GUI_QUESTION_ENABLE_GLOBAL_HOST_SHARING";
            case 0x36be:
              return "GUI_QUESTION_ENABLE_LOCAL_HOST_SHARING";
            case 0x36bf:
              return "GUI_QUESTION_REVERT_TO_SPECIFIED_SNAPSHOT";
            case 0x36c0:
              return "GUI_QUESTION_REVERT_TO_LAST_SNAPSHOT";
            case 0x36c1:
              return "GUI_QUESTION_ENABLE_MOUNT_ON_DESKTOP";
            case 0x36c2:
              return "GUI_QUESTION_NEED_TO_DISABLE_SHARED_PROFILE";
            case 0x36c3:
              return "GUI_QUESTION_NEED_TO_SHARE_HOME_FOLDER";
            case 0x36c4:
              return "GUI_QUESTION_DISABLING_SHARED_FOLDERS_RUNTIME";
            case 0x36c5:
              return "GUI_QUESTION_SAME_FUNCTION_NET_ASSIGN";
            case 0x36c6:
              return "GUI_QUESTION_RECONNECT_USB_TO_ANOTHER_VM";
            case 0x36c7:
              return "GUI_TRY_DISCONNECT_CONNECTING_USB";
            case 0x36c8:
              return "GUI_QUESTION_REMOVE_BACKUP";
            case 0x36c9:
              return "GUI_QUESTION_RESTORE_FROM_BACKUP";
            case 0x36ca:
              return "GUI_WNG_NO_FREE_NETWORK_ADAPTERS_FOR_HOST";
            case 0x36cb:
              return "GUI_QUESTION_DELETE_VM_IMMEDIATELY";
            case 0x36cc:
              return "GUI_QUESTION_MOVE_TO_TRASH_DISK";
            case 0x36cd:
              return "GUI_QUESTION_MOVE_TO_TRASH_VM";
            case 0x36ce:
              return "GUI_QUESTION_GOING_TO_TAKE_SMART_GUARD_SNAPSHOT";
            case 0x36cf:
              return "GUI_QUESTION_STOP_APPLIANCE";
            case 0x36d0:
              return "GUI_QUESTION_RUN_VM_FOR_INSTALL_ANTIVIRUS";
            case 0x36d1:
              return "GUI_QUESTION_USB_CONTROLLER_REMOVE";
            case 0x36d2:
              return "GUI_QUESTION_ENABLE_VTX_EPT_SUPPORT";
            case 0x36d3:
              return "GUI_QUESTION_DISABLE_HOST_SLEEP";
            case 0x36d4:
              return "GUI_QUESTION_DISABLE_COPY_PAST_ALL_DISKS";
            case 0x36d5:
              return "GUI_QUESTION_DISABLE_COPY_PAST_SHARE_WINDOWS";
            case 0x36d6:
              return "GUI_QUESTION_ENABLE_PMU_SUPPORT";
            case 0x36d7:
              return "GUI_OTHER_VM_HAS_SAME_EXTERNAl_BOOT";
            case 0x36d8:
              return "GUI_QUESTION_INSTALL_MAJOR_UPDATE";
            case 0x36d9:
              return "GUI_QUESTION_DISABLE_VERBOSE_LOG";
            case 0x36da:
              return "GUI_QUESTION_QUIT_PARALLELS_ACCESS";
            case 0x36db:
              return "GUI_QUESTION_PREPARE_MAVERICK_IMAGE";
            case 0x36dc:
              return "GUI_QUESTION_ENABLE_CEP";
            case 0x36dd:
              return "GUI_QUESTION_ENABLE_GUEST_SHARING";
            case 0x36de:
              return "GUI_QUESTION_DELETE_VM_WITH_LINKED_CLONES";
            case 0x36df:
              return "GUI_QUESTION_PARENT_LINKED_VM_NOT_AVAILABLE";
            case 0x36e0:
              return "GUI_QUESTION_DELETE_PARENT_LINKED_SNAPSHOT";
            case 0x36e1:
              return "GUI_QUESTION_ENABLE_VIRTUAL_DISK_OPTIMIZATION";
            case 0x36e2:
              return "GUI_QUESTION_SHARE_FROM_WIN_TO_MAC";
            case 0x36e3:
              return "GUI_QUESTION_SHARE_FROM_MAC_TO_WIN";
            case 0x36e4:
              return "GUI_QUESTION_MAC_ADDRESS_CHANGE";
            case 0x36e5:
              return "GUI_QUESTION_CANCEL_IMPORT_WIZARD";
            case 0x36e6:
              return "GUI_QUESTION_USB_BLUETOOTH_CONTROLLER_REMOVE";
            case 0x36e7:
              return "GUI_QUESTION_ALLOW_IE_ACCESS_TO_KEYCHAIN";
            case 0x36e8:
              return "GUI_QUESTION_ALLOW_EDGE_ACCESS_TO_KEYCHAIN";
            case 0x36e9:
              return "GUI_QUESTION_ALLOW_CC_ACCESS_TO_KEYCHAIN";
            case 0x36ea:
              return "GUI_QUESTION_ARCHIVE_VM";
            case 0x36eb:
              return "GUI_QUESTION_UNARCHIVE_VM";
            case 0x36ec:
              return "GUI_QUESTION_UNARCHIVE_VM_BEFORE_START";
            case 0x36ed:
              return "GUI_QUESTION_RESUME_VM_BEFORE_ARCHIVE";
            case 0x36ee:
              return "GUI_QUESTION_CANT_DND_TO_SAME_FOLDER";
            case 0x36ef:
              return "GUI_QUESTION_CANT_DND_TO_SAME_FOLDER_MULTIPLE";
            case 0x36f0:
              return "GUI_QUESTION_CREATE_LOCKED_OPERATIONS_CUSTOM_PASSWORD";
            }
          }
        }
        else {
          switch(param_1) {
          case 15000:
            return "GUI_ERR_CANT_ADD_PCI_INSTANTLY";
          case 0x3a99:
            return "GUI_ERR_CANT_ADD_SCSI_INSTANTLY";
          case 0x3a9a:
            return "GUI_INFO_INSTALL_PRL_TOOLS_BETA";
          case 0x3a9b:
            return "GUI_INFO_LICENSE_ACTIVATION_SUCCESSFUL";
          case 0x3a9c:
            return "GUI_INFO_IDE_NODE_ALREADY_TAKEN";
          case 0x3a9d:
            return "GUI_INFO_SCSI_NODE_ALREADY_TAKEN";
          case 0x3a9e:
            return "GUI_INFO_CANT_DISPLAY_HELP_FILE";
          case 0x3a9f:
            return "GUI_ERR_VM_INVALID_EXTENSION";
          case 0x3aa0:
            return "GUI_ERR_CANT_ENABLE_MISSING_DEVICE";
          case 0x3aa1:
            return "GUI_ERR_INVALID_IMAGE_PATH";
          case 0x3aa2:
            return "GUI_ERR_SERVER_ALREADY_REGISTERED";
          case 0x3aa3:
            return "GUI_INFO_PROBLEM_REPORT_POST_SUCCESS";
          case 0x3aa4:
            return "GUI_ERR_REPORT_POST_ID_REGISTER_FAILED";
          case 0x3aa5:
            return "GUI_ERR_SHORTCUT_EXISTS";
          case 0x3aa6:
            return "GUI_ERR_VM_NAME_NOT_SPECIFIED";
          case 0x3aa7:
            return "GUI_ERR_VM_DIR_NOT_SPECIFIED";
          case 0x3aa8:
            return "GUI_ERR_WRONG_CDD_IMAGE_PATH_SPECIFIED";
          case 0x3aa9:
            return "GUI_ERR_SHARED_FOLDER_NAME_EXISTS";
          case 0x3aaa:
            return "GUI_ERR_SHARED_FOLDER_PATH_EXISTS";
          case 0x3aab:
            return "GUI_INFO_CANT_INSTALL_TOOLS_WITHOUT_CD";
          case 0x3aad:
            return "GUI_INFO_INSTALL_TOOLS_WIN";
          case 0x3aae:
            return "GUI_INFO_INSTALL_TOOLS_MAC";
          case 0x3aaf:
            return "GUI_INFO_INSTALL_TOOLS_LIN";
          case 0x3ab0:
            return "GUI_ERR_SHORTCUT_HAS_EMPTY_MODIFIERS";
          case 0x3ab1:
            return "GUI_INFO_VM_SHUTDOWN_CONDITIONS";
          case 0x3ab2:
            return "GUI_ERR_INVALID_OUTPUT_PATH";
          case 0x3ab3:
            return "GUI_ERR_SERVER_CUSTOM_NAME_EXISTS";
          case 0x3ab4:
            return "GUI_ERR_IMAGE_PATH_NOT_SPECIFIED";
          case 0x3ab5:
            return "GUI_ERR_SOCKET_NOT_SPECIFIED";
          case 0x3ab6:
            return "GUI_ERR_OUTPUT_PATH_NOT_SPECIFIED";
          case 0x3ab7:
            return "GUI_ERR_SERVER_CUSTOM_NAME_EMPTY";
          case 0x3ab8:
            return "GUI_ERR_CANT_CHANGE_CDROM_CONNECT_OPTION";
          case 0x3ab9:
            return "GUI_ERR_CANT_CLONE_SUSPENDED_VM";
          case 0x3aba:
            return "GUI_INFO_SERVER_RESTART_IS_NEEDED";
          case 0x3abb:
            return "GUI_ERR_INVALID_SHARED_FOLDER_PATH";
          case 0x3abc:
            return "GUI_ERR_CANT_CHANGE_SHARED_FOLDER";
          case 0x3abd:
            return "GUI_ERR_SERVER_WRONG_CUSTOM_NAME";
          case 0x3abe:
            return "GUI_ERR_CANT_CHANGE_CLIENT_CDROM_CONNECT_OPTION";
          case 0x3abf:
            return "GUI_ERR_NEED_TO_RESET_DISK_PRM_ON_FAT_FS";
          case 0x3ac0:
            return "GUI_ERR_NEED_TO_RESET_DISK_PRM_ON_FAT_FS_ON_CUSTOM_BRANCH";
          case 0x3ac1:
            return "GUI_ERR_NEED_TO_SET_SPLIT_ON_FAT_FS_WITH_RECREATE";
          case 0x3ac3:
            return "GUI_INFO_CANT_DISPLAY_HELP_TOPIC";
          case 0x3ac4:
            return "GUI_ERR_INCORRECT_SHARED_FOLDER_NAME";
          case 0x3ac5:
            return "GUI_ERR_INVALID_VM_NAME_SPECIFIED";
          case 0x3ac6:
            return "GUI_ERR_SHARED_FOLDER_NAME_IS_RESERVED_BY_SYSTEM";
          case 0x3ac7:
            return "GUI_ERR_DHCP_INCORRECT_START_IP";
          case 0x3ac8:
            return "GUI_ERR_DHCP_INCORRECT_END_IP";
          case 0x3ac9:
            return "GUI_ERR_DHCP_INCORRECT_MASK_IP";
          case 0x3aca:
            return "GUI_ERR_DHCP_ZERO_FIRST_OCTET_IN_START_IP";
          case 0x3acb:
            return "GUI_ERR_DHCP_ZERO_FIRST_OCTET_IN_END_IP";
          case 0x3acc:
            return "GUI_ERR_DHCP_ZERO_FIRST_OCTET_IN_MASK_IP";
          case 0x3acd:
            return "GUI_ERR_DHCP_ZERO_LAST_OCTET_IN_START_IP";
          case 0x3ace:
            return "GUI_ERR_DHCP_ZERO_LAST_OCTET_IN_END_IP";
          case 0x3acf:
            return "GUI_ERR_DHCP_START_IP_IS_LESS_THAN_END_IP";
          case 0x3ad0:
            return "GUI_ERR_DHCP_SCOPE_END_OUT_OF_SUBNET";
          case 0x3ad1:
            return "GUI_QUESTION_CANCEL_CLONE_TO_TEMPLATE_OPERATION";
          case 0x3ad2:
            return "GUI_QUESTION_DROP_SUSPEND_FOR_HDD_QUEST_CFG_EDITOR";
          case 0x3ad3:
            return "GUI_QUESTION_DROP_SUSPEND_FOR_HDD_QUEST_WIZARDS";
          case 0x3ad4:
            return "GUI_ERR_INVALID_MAC_ADDRESS";
          case 0x3ad5:
            return "GUI_QUESTION_CANT_USE_DEVICE_CLIENT_OPTION_ON_HOST";
          case 0x3ad6:
            return "GUI_ERR_SHARED_FOLDER_NAME_IS_NOT_SPECIFIED";
          case 0x3ad7:
            return "GUI_ERR_SHARED_FOLDER_PATH_IS_NOT_SPECIFIED";
          case 0x3ad8:
            return "GUI_ERR_INCORRECT_SHARED_FOLDER_PATH";
          case 0x3ad9:
            return "GUI_INFO_SWITCH_TO_FULLSCREEN";
          case 0x3ada:
            return "GUI_INFO_CANT_RUN_COMPRESSOR_WITHOUT_CD";
          case 0x3adb:
            return "GUI_INFO_RUN_COMPRESSOR_WIN";
          case 0x3adc:
            return "GUI_ERR_COMPRESSOR_UNSUPPORTED_GUEST";
          case 0x3add:
            return "GUI_WNG_CONNECT_HID_USB_DEVICE";
          case 0x3ade:
            return "GUI_WNG_AUTOCONNECT_HID_USB_DEVICE";
          case 0x3adf:
            return "GUI_WNG_ADD_HID_USB_DEVICE_TO_UDP_LIST";
          case 0x3ae0:
            return "GUI_WNG_STOP_VM_WITH_BOOTCAMP";
          case 0x3ae1:
            return "GUI_ERR_SNAPSHOT_VM_WITH_BOOTCAMP";
          case 0x3ae2:
            return "GUI_WRN_VIDEO_MEMORY_IS_TOO_LOW";
          case 0x3ae3:
            return "GUI_INFO_TOOLS_INSTALL_OTHER";
          case 0x3ae4:
            return "PRL_QUEST_RESTART";
          case 0x3ae5:
            return "GUI_QUESTION_COHERENCE_NOTIFICATION";
          case 0x3ae6:
            return "GUI_QUESTION_LEAVE_AUTO_HW_UPGRADING";
          case 0x3ae8:
            return "GUI_INFO_VM_HW_UPGRADE_COMPLETED";
          case 0x3ae9:
            return "GUI_ERR_VM_HW_UPGRADE_UNKNOWN_ERROR";
          case 0x3aea:
            return "GUI_ERR_VM_HW_UPGRADE_INIT_TIMEOUT";
          case 0x3aeb:
            return "GUI_WRN_SNAPSHOT_NAME_IS_EMPTY";
          case 0x3aec:
            return "GUI_INFO_VM_HW_UPGRADE_VMXPHY_COMPLETED";
          case 0x3aed:
            return "GUI_ERR_VM_HW_UPGRADE_VMXPHY_UNKNOWN_ERROR";
          case 0x3aee:
            return "GUI_ERR_VM_HW_UPGRADE_VMXPHY_INIT_TIMEOUT";
          case 0x3aef:
            return "GUI_QUESTION_LEAVE_AUTO_HW_UPGRADING_VMXPHY";
          case 0x3af1:
            return "GUI_ERR_OLD_VERSION_LICENSE_WRONG_LANGUAGE";
          case 0x3af2:
            return "GUI_ERR_OLD_VERSION_LICENSE_WRONG_DISTRIBUTOR";
          case 0x3af3:
            return "GUI_ERR_OLD_VERSION_LICENSE_NOT_VALID";
          case 0x3af4:
            return "GUI_INFO_NETWORK_MISCONFIGURATION_REPAIRED";
          case 0x3af5:
            return "GUI_QUESTION_EDIT_SUSPENDED_VM";
          case 0x3af6:
            return "GUI_ERR_SNAPSHOT_VM_WITH_VTD";
          case 0x3af7:
            return "GUI_ERR_SUSPEND_VM_VTD_WITH_UNSUPPORTED_GUEST";
          case 0x3af8:
            return "GUI_ERR_SUSPEND_VM_VTD_WITH_UNSUPPORTED_SHUTDOWN_TOOL";
          case 0x3af9:
            return "GUI_ERR_REGISTERED_VM_PATH_NOT_AVAILABLE";
          case 0x3afe:
            return "GUI_ERR_BACKUP_FAILED_TOO_LARGE_FOR_FAT";
          case 0x3aff:
            return "GUI_ERR_BACKUP_FAILED_NOT_ENOUGH_SPACE";
          case 0x3b00:
            return "GUI_ERR_BACKUP_FAILED_GENERAL_MSG";
          case 0x3b01:
            return "GUI_INFO_PRODUCT_ACTIVATED_SUCCESSFULLY";
          case 0x3b02:
            return "GUI_ERR_CANT_ADD_VIDEO_ADAPTER_INSTANTLY";
          case 0x3b03:
            return "GUI_ERR_SUSPEND_VM_WITH_VTD";
          case 0x3b04:
            return "GUI_ERR_VTD_INSTALLATION_FAILED_FOR_DEVICES";
          case 0x3b05:
            return "GUI_ERR_VTD_REVERT_FAILED_FOR_DEVICES";
          case 0x3b06:
            return "GUI_ERR_PARALLELS_IMAGE_INTERNET_LOCATION";
          case 0x3b07:
            return "GUI_ERR_PARALLELS_OUTPUT_FILE_INTERNET_LOCATION";
          case 0x3b08:
            return "GUI_ERR_LEGACY_HDD_NOT_SUPPORTED";
          case 0x3b09:
            return "GUI_INFO_RUNNING_UNDER_UNSUPPORTED_WM";
          case 0x3b0a:
            return "GUI_ERR_VTD_HOOK_DEVICE_CURRENTLY_IN_USE";
          case 0x3b0b:
            return "GUI_ERR_NO_TEMPLATE_SUPPORT_IN_PLAYER_MODE";
          case 0x3b0c:
            return "GUI_ERR_NO_PVS_FILE_SPECIFIED_IN_PLAYER_MODE";
          case 0x3b0d:
            return "GUI_ERR_CANNOT_RUN_SNAPSHOT_OPERATION_ON_VM_BACKUP";
          case 0x3b0e:
            return "GUI_ERR_CANNOT_RUN_SNAPSHOT_OPERATION_ON_VM_RESTORE";
          case 0x3b0f:
            return "GUI_WRN_MAIN_MEMORY_IS_NOT_OPTIMAL";
          case 0x3b10:
            return "GUI_INFO_CONFIGURING_THE_DOCK";
          case 0x3b11:
            return "GUI_INFO_VM_IN_ISOLATION_WIN";
          case 0x3b12:
            return "GUI_INFO_VM_IN_ISOLATION_MAC";
          case 0x3b13:
            return "GUI_INFO_SHARE_WIN_APPLICATIONS_DISABLED";
          case 0x3b14:
            return "GUI_INFO_IN_SEAMLESS_NOTIFICATION";
          case 0x3b15:
            return "GUI_INFO_APPS_FOLDER_ADDED_TO_DOCK";
          case 0x3b16:
            return "GUI_INFO_APPS_FOLDER_REMOVED_FROM_DOCK";
          case 0x3b17:
            return "GUI_ERR_CANNOT_MOVE_VM_TO_TRASH";
          case 0x3b18:
            return "GUI_INFO_IN_FULLSCREEN_NOTIFICATION";
          case 0x3b19:
            return "GUI_INFO_LOCK_IN_FULLSCREEN_RELEASE_INPUT_NOTIFICATION";
          case 0x3b1a:
            return "GUI_ID_WRNG_CDROM_CANNOT_CONNECT_FROM_CLIENT_SCSI";
          case 0x3b1c:
            return "GUI_ERR_CANNOT_MOVE_DISK_TO_TRASH";
          case 0x3b1d:
            return "GUI_ERR_CANNOT_DELETE_DISK_FILES";
          case 0x3b1e:
            return "GUI_QUESTION_TRIAL_EXPIRES_TEXT1";
          case 0x3b1f:
            return "GUI_QUESTION_TRIAL_EXPIRES_TEXT2";
          case 0x3b20:
            return "GUI_QUESTION_TRIAL_EXPIRES_TEXT3";
          case 0x3b21:
            return "GUI_QUESTION_TRIAL_EXPIRES_TEXT4";
          case 0x3b22:
            return "GUI_WRN_MOUSE_SYNC_OFF_FOR_LINUX_WITH3D";
          case 0x3b23:
            return "GUI_INFO_FEATURE_RESTRICTED";
          case 0x3b24:
            return "GUI_ERR_POST_REPORT";
          case 0x3b25:
            return "GUI_INFO_INSTALL_GHOSTSCRIPT_ON_HOST";
          case 0x3b26:
            return "GUI_QUESTION_STOP_SUSPENDED_VM";
          case 0x3b28:
            return "GUI_INFO_REINSTALL_TOOLS_WIN";
          case 0x3b29:
            return "GUI_INFO_REINSTALL_TOOLS_MAC";
          case 0x3b2a:
            return "GUI_INFO_REINSTALL_TOOLS_LIN";
          case 0x3b2b:
            return "GUI_INFO_REINSTALL_TOOLS_OTHER";
          case 0x3b2c:
            return "GUI_INFO_UPDATE_TOOLS_WIN";
          case 0x3b2d:
            return "GUI_INFO_UPDATE_TOOLS_MAC";
          case 0x3b2e:
            return "GUI_INFO_UPDATE_TOOLS_LIN";
          case 0x3b2f:
            return "GUI_INFO_UPDATE_TOOLS_OTHER";
          case 0x3b30:
            return "GUI_INFO_APPS_FOLDER_UPDATED_IN_DOCK";
          case 0x3b31:
            return "GUI_WRN_AUTOPLAY_CD_NOT_PRESENT_IN_CONFIGURATION";
          case 0x3b32:
            return "GUI_INFO_APPS_FOLDER_REMOVED_FROM_DOCK_NO_VM";
          case 0x3b33:
            return "GUI_INFO_ISIGHT_CAMERA_CONNECT_TO_VM";
          case 0x3b34:
            return "GUI_INFO_BLUETOOTH_USB_CONTROLLER_CONNECT_TO_VM";
          case 0x3b35:
            return "GUI_INFO_CTRL_ALT_DEL_PRESSED";
          case 0x3b36:
            return "GUI_INFO_HIDDEN_MESSAGES_RESTORED";
          case 0x3b37:
            return "GUI_INFO_USER_REGISTRATION_DLG_SEND_OK";
          case 0x3b39:
            return "GUI_QUESTION_SM_ENABLE_SHARED_APPS";
          case 0x3b3d:
            return "GUI_QUESTION_ISOLATE_VM";
          case 0x3b3e:
            return "GUI_QUESTION_ENABLE_SHARED_APPS";
          case 0x3b3f:
            return "GUI_QUESTION_DISABLE_OPTIONS";
          case 0x3b56:
            return "GUI_QUESTION_SNAPSHOT_SINGLE_DELETE";
          case 0x3b57:
            return "GUI_QUESTION_SNAPSHOT_DELETE_WITH_CHILDRENS";
          case 0x3b59:
            return "GUI_INFO_SHARED_PROFILE_FOR_BOOTCAMP_VM";
          case 0x3b5e:
            return "GUI_QUESTION_ASK_TO_CANCEL_TUTORIAL_DOWNLOAD";
          case 0x3b65:
            return "GUI_QUESTION_RESET_VIRTUAL_NETWORK";
          case 0x3b6b:
            return "GUI_QUESTION_VM_DIR_CANT_START_TEMPLATE";
          case 0x3b6c:
            return "GUI_QUESTION_CONVERT_SUCCEDED";
          case 0x3b6d:
            return "GUI_QUESTION_CONVERT_3RDPARTY_VM_SUCCEDED";
          case 0x3b6f:
            return "GUI_QUESTION_CONVERT_AND_BACKUP_SUCCEDED";
          case 0x3b70:
            return "GUI_INFO_CONVERT_SUCCEDED_OTHER_OS";
          case 0x3b71:
            return "GUI_QUESTION_CONVERT_AND_BACKUP_OTHER_OS_SUCCEDED";
          case 0x3b73:
            return "GUI_QUESTION_NO_BACKUP";
          case 0x3b74:
            return "GUI_QUESTION_DELETE_OLD_VM";
          case 0x3b76:
            return "GUI_QUESTION_IMPORT_BOOTCAMP_VM_SUCCEDED_AND_START";
          case 0x3b77:
            return "GUI_QUESTION_IMPORT_BOOTCAMP_VM_COMPLETE";
          case 0x3b83:
            return "GUI_QUESTION_REMAP_VM_KEY_SEQUENCE_ALREADY_USED_BY_VM_SHORTCUT";
          case 0x3b8b:
            return "GUI_INFO_REGISTRATION_PRODUCT_ACTIVATED_OK";
          case 0x3b8d:
            return "GUI_INFO_REGISTRATION_PRODUCT_ALREADY_REGISTERED";
          case 0x3b90:
            return "GUI_INFO_REGISTRATION_ACCOUNT_SUCCESSFULLY_UPDATED";
          case 0x3b93:
            return "GUI_QUESTION_PROFILE_DELETE";
          case 0x3b99:
            return "GUI_INFO_UNINSTALLING_HOST_ANTIVIRUS_SUCCESS";
          case 0x3bb2:
            return "GUI_INFO_SOFTWARE_UP_TO_DATE";
          case 0x3bb3:
            return "GUI_INFO_VM_DECRYPTED_SUCCESSFULLY";
          case 0x3bb4:
            return "GUI_INFO_VM_ENCRYPTED_SUCCESSFULLY";
          case 0x3bb5:
            return "GUI_INFO_PASSWORD_RESET_ENTER_EMAIL";
          case 0x3bb6:
            return "GUI_INFO_PASSWORD_RESET_CHECK_EMAIL";
          case 0x3bb8:
            return "GUI_QUESTION_DONT_USE_DIRECT_CONECTION";
          case 0x3bbe:
            return "GUI_INFO_REG_OK";
          case 0x3bc9:
            return "GUI_QUESTION_SHARED_GUEST_APPS_OPEN_DOC_NEED_GUEST_SHARING";
          case 0x3bca:
            return "GUI_QUESTION_SHARED_GUEST_APPS_OPEN_DOC_NEED_GLOBAL_SHARING";
          case 0x3bcb:
            return "GUI_QUESTION_SHARED_GUEST_APPS_OPEN_DOC_NEED_LOCAL_SHARING";
          case 0x3bcc:
            return "GUI_QUESTION_SHARED_GUEST_APPS_OPEN_DOC_NEED_USER_SHARED_FOLDERS";
          case 0x3bcd:
            return "GUI_QUESTION_SMART_SELECT_ASK_TO_ENABLE_FOR";
          case 0x3bce:
            return "GUI_QUESTION_SHARED_HOST_APPS_ASK_TO_ENABLE_DLG";
          case 0x3bcf:
            return "GUI_INFO_SHARED_GUEST_APPS_OPEN_DOC_NEED_ADD_USER_SHARED_FOLDER";
          case 0x3bd0:
            return "GUI_QUESTION_CANCEL_INSTALL_SUSUPEND";
          case 0x3bd1:
            return "GUI_QUESTION_CANCEL_INSTALL_DELETE";
          case 0x3bd5:
            return "GUI_QUESTION_DELETE_CREATED_VM";
          case 0x3bd6:
            return "GUI_QUESTION_CREATE_SNAPSHOT_WITH_ENABLED_AUTOCOMPRESS";
          case 0x3bd7:
            return "GUI_QUESTION_ISOLATE_VM_LIN";
          case 0x3bd8:
            return "GUI_QUESTION_MANUAL_INSTALL";
          case 0x3be4:
            return "GUI_QUESTION_OS_IMG_DWNLD_RETRY_ON_CHECKSUM_MISMATCH";
          case 0x3be5:
            return "GUI_QUESTION_OS_IMG_DWNLD_NO_FREE_DISK_SPACE";
          case 0x3be6:
            return "GUI_QUESTION_OS_IMG_DWNLD_CLOSE_WINDOW";
          case 0x3bf3:
            return "GUI_QUESTION_ENABLE_VIDEO_POWER_OPTIMIZATION";
          case 0x3bf4:
            return "GUI_QUESTION_ENABLE_VIDEO_POWER_OPTIMIZATION_ON_BATTERY_SWITCH";
          case 0x3bfa:
            return "GUI_INFO_TASK_STEP_SKIPPED";
          case 0x3bfe:
            return "GUI_QUESTION_DWNLD_RETRY";
          case 0x3bff:
            return "GUI_QUESTION_DWNLD_RETRY_ON_CANNOT_SAVE";
          case 0x3c00:
            return "GUI_QUESTION_DWNLD_RETRY_ON_NO_CONNECTION";
          case 0x3c01:
            return "GUI_QUESTION_DWNLD_RETRY_ON_CHECKSUM_MISMATCH";
          case 0x3c02:
            return "GUI_QUESTION_CLOSE_UPGRADE_PURCHASE_DIALOG";
          case 0x3c03:
            return "GUI_QUESTION_CLOSE_UPGRADE_PURCHASE_DIALOG_WHILE_PURCHASE_PROCESSING";
          case 0x3c04:
            return "GUI_QUESTION_POSTPONE_UPGRADE";
          case 0x3c0f:
            return "GUI_QUESTION_COPY_APP_TO_LOCAL_FOLDER";
          case 0x3c10:
            return "GUI_INFO_FIREWALL_MAY_BLOCK_REMOTE_MANAGE";
          case 0x3c19:
            return "GUI_INFO_CTRL_ALT_DEL_FROM_MENU";
          case 0x3c1a:
            return "GUI_QUESTION_REMOVE_PREVIOUS_VERSION";
          case 0x3c1b:
            return "GUI_QUESTION_FREE_SIZE_FOR_COMPRESSED_DISK";
          case 0x3c1e:
            return "GUI_QUESTION_CONFIRM_UPDATE_CANCEL";
          case 0x3c1f:
            return "GUI_QUESTION_OS_IMG_DWNLD_CLOSE_WINDOW_WIN8";
          case 0x3c20:
            return "GUI_INFO_VM_CLEANUP_NOTHING_TO_DO";
          case 0x3c21:
            return "GUI_QUESTION_VM_CLEANUP_CONFIRM";
          case 0x3c22:
            return "GUI_INFO_DOWNLOAD_APPLIANCE_FINISHED";
          case 0x3c23:
            return "GUI_INFO_EXPRESS_INSTALLATION_FINISHED";
          case 0x3c24:
            return "GUI_INFO_VM_COMPACTING_FINISHED";
          case 0x3c25:
            return "GUI_INFO_SNAPSHOT_DELETE_FINISHED";
          case 0x3c26:
            return "GUI_INFO_EXIT_FROM_PRESENTATION_MODE";
          case 0x3c27:
            return "GUI_INFO_ENTER_IN_POWERSAVE_MODE";
          case 0x3c28:
            return "GUI_INFO_UPDATE_FINISHED";
          case 0x3c29:
            return "GUI_INFO_UPGRADE_FINISHED";
          case 0x3c2a:
            return "GUI_INFO_ENTER_TO_PRESENTATION_MODE";
          case 0x3c2b:
            return "GUI_QUESTION_UPDATER_NO_CONNECTION";
          case 0x3c2c:
            return "GUI_INFO_TASK_ALREADY_RUNNING";
          case 0x3c32:
            return "GUI_INFO_GUEST_HIRES_OPTION_CHANGED";
          case 0x3c33:
            return "GUI_WRN_VIDEO_MEMORY_IS_TOO_LOW_FOR_HIDPI";
          case 0x3c43:
            return "GUI_INFO_ANTIVIRUS_DETECTED_ON_INSTALL";
          case 0x3c44:
            return "GUI_INFO_USB3_DRIVERS_REQUIRED_WIN";
          case 0x3c45:
            return "GUI_INFO_USB3_DRIVERS_REQUIRED_OTHER";
          case 0x3c4b:
            return "GUI_QUESTION_ENABLE_ACCESSIBILITY_MODE";
          case 0x3c56:
            return "GUI_QUESTION_DISABLE_WINDOWS7_LOOK";
          case 0x3c57:
            return "GUI_QUESTION_PAX_ENABLE_REMOTE_ACCESS";
          case 0x3c58:
            return "GUI_INFO_IN_SEAMLESS_NOTIFICATION_DOCK_ICON";
          case 0x3c59:
            return "GUI_QUESTION_INSTALL_WINDOWS7_LOOK";
          case 0x3c5b:
            return "GUI_QUESTION_RESTART_PD_ON_HEADLESS_CHANGE";
          case 0x3c5c:
            return "GUI_INFO_NEW_VERSION_AVAILABLE";
          case 0x3c5d:
            return "GUI_QUESTION_ENABLE_BACKGROUND_UPDATE";
          case 0x3c5e:
            return "GUI_INFO_MOUNT_SOURCE_READY_TO_INSTALL";
          case 0x3c5f:
            return "GUI_INFO_WINDOWS_UPDATE_IN_PROGRESS";
          case 0x3c60:
            return "GUI_INFO_IPN_MESSAGE";
          case 0x3c61:
            return "GUI_INFO_INSTALLED_GUEST_APPS_DIALOG";
          case 0x3c62:
            return "GUI_INFO_FEEDBACK_SUCCESS";
          case 0x3c64:
            return "GUI_INFO_SHARE_APPS_GUEST_TOOLS_NOT_INSTALLED";
          case 0x3c65:
            return "GUI_INFO_OFFICE_SHARED_CLOUDS_KB";
          case 0x3c67:
            return "GUI_INFO_TRIAL_GUEST_WARNING";
          case 0x3c6c:
            return "GUI_INFO_CLEAN_UP_DISK_SPACE";
          case 0x3c71:
            return "GUI_INFO_PRODUCT_DEACTIVATED_SUCCESSFULLY";
          case 0x3c72:
            return "GUI_INFO_LICENSE_RENEWED_SUCCESSFULLY";
          case 0x3c76:
            return "GUI_INFO_OFFER_TO_INSTALL_PARALLELS_VAGRANT";
          case 0x3c77:
            return "GUI_INFO_VM_CLEANUP_RUN_AUTOMATIC";
          case 0x3c78:
            return "GUI_INFO_IN_FULLSCREEN_NOTIFICATION_IN_GAME_MODE";
          case 0x3c79:
            return "GUI_INFO_REMOTE_SESSION_ACTIVE";
          case 0x3c7a:
            return "GUI_INFO_PROXY_AUTHENTIFICATION_REQUIRED";
          case 0x3c7c:
            return "GUI_INFO_USB_TO_VM_CONNECTED";
          case 0x3c7d:
            return "GUI_INFO_USB_TO_HOST_CONNECTED";
          case 0x3c7e:
            return "GUI_QUESTION_GUEST_HIRES_OPTION_CHANGED";
          case 0x3c80:
            return "GUI_INFO_APPLY_EXTENSION_TO_SHARED_APP";
          case 0x3c81:
            return "GUI_INFO_SHARED_FILE_URL_COPIED_TO_CLIPBOARD";
          case 0x3c84:
            return "GUI_QUESTION_RESTORE_DEFAULT_NETWORK_SETTINGS";
          case 0x3c85:
            return "GUI_INFO_TRAVEL_MODE_ACTIVATED";
          case 0x3c86:
            return "GUI_ERR_VIRTUAL_NETWORKS_MAX_NUMBER_EXCEEDED";
          case 0x3c87:
            return "GUI_INFO_OFFER_TO_ENABLE_TRAVEL_MODE";
          case 0x3c88:
            return "GUI_QUESTION_CONFIRM_SIGN_OUT";
          case 0x3c89:
            return "GUI_QUESTION_CONFIRM_UNSHARE_FILE";
          case 0x3c8c:
            return "GUI_INFO_PRODUCT_TRIAL_ACTIVATED_SUCCESSFULLY";
          case 0x3c93:
            return "GUI_INFO_ACCESS_TO_VOLUMES_NOT_GRANTED";
          case 0x3c94:
            return "GUI_INFO_IPN_NATIVE_NOTIFICATION_MESSAGE";
          case 0x3c97:
            return "GUI_INFO_WINDOWS_MAINTENANCE_IN_PROGRESS";
          case 0x3c98:
            return "GUI_INFO_WINDOWS_MAINTENANCE_SKIPPED_OFF";
          case 0x3c99:
            return "GUI_INFO_WINDOWS_MAINTENANCE_SKIPPED_BATTERY";
          case 0x3c9a:
            return "GUI_INFO_WINDOWS_MAINTENANCE_DUE_SOON";
          case 0x3c9b:
            return "GUI_INFO_STORE_INTERNET_PASSWORDS_IN_KEYCHAIN_ON";
          case 0x3c9c:
            return "GUI_INFO_STORE_INTERNET_PASSWORDS_IN_KEYCHAIN_OFF";
          case 0x3c9d:
            return "GUI_INFO_USE_APPLE_ASSISTANT_TO_COMPLETE_PC_MIGRATION";
          case 0x3c9e:
            return "GUI_INFO_BACKGROUND_VM_ON_INSTALLATION";
          case 0x3c9f:
            return "GUI_INFO_REPORT_ID_COPIED_TO_CLIPBOARD";
          case 0x3ca0:
            return "GUI_QUESTION_RUNNING_VM_CLEANUP_CONFIRM";
          case 0x3ca1:
            return "GUI_INFO_NETWORK_IP_COPIED_TO_CLIPBOARD";
          }
        }
      }
      else {
        switch(param_1) {
        case 16000:
          return "PET_ANSWER_OK";
        case 0x3e81:
          return "PET_ANSWER_CANCEL";
        case 0x3e82:
          return "PET_ANSWER_YES";
        case 0x3e83:
          return "PET_ANSWER_NO";
        case 0x3e84:
          return "PET_ANSWER_BREAK";
        case 0x3e85:
          return "PET_ANSWER_OVERIDE";
        case 0x3e86:
          return "PET_ANSWER_SHUTDOWN";
        case 0x3e87:
          return "PET_ANSWER_STOP";
        case 0x3e88:
          return "PET_ANSWER_CONTINUE";
        case 0x3e89:
          return "PET_ANSWER_CREATE_NEW";
        case 0x3e8a:
          return "PET_ANSWER_USE_CURRENT";
        case 0x3e8b:
          return "PET_ANSWER_APPEND";
        case 0x3e8c:
          return "PET_ANSWER_REPLACE";
        case 0x3e8d:
          return "PET_ANSWER_COPIED";
        case 0x3e8e:
          return "PET_ANSWER_MOVED";
        case 0x3e8f:
          return "PET_ANSWER_STARTVM";
        case 0x3e90:
          return "PET_ANSWER_COMMIT";
        case 0x3e91:
          return "PET_ANSWER_REVERT";
        case 0x3e92:
          return "PET_ANSWER_DISCONNECT_ANYWAY";
        case 0x3e93:
          return "PET_ANSWER_CREATE";
        case 0x3e94:
          return "PET_ANSWER_SKIP";
        case 0x3e95:
          return "PET_ANSWER_SUSPEND_ANYWAY";
        case 0x3e96:
          return "PET_ANSWER_RESTART_NOW";
        case 0x3e97:
          return "PET_ANSWER_LATER";
        case 0x3e98:
          return "PET_ANSWER_COMPACT";
        case 0x3e99:
          return "PET_ANSWER_SUSPEND";
        case 0x3e9a:
          return "PET_ANSWER_STOP_AND_RESTORE";
        case 0x3e9b:
          return "PET_ANSWER_RESTORE";
        case 0x3e9c:
          return "PET_ANSWER_BROWSE";
        case 0x3e9d:
          return "PET_ANSWER_RETRY";
        case 0x3e9e:
          return "PET_ANSWER_RESTART";
        case 0x3e9f:
          return "PET_ANSWER_RESUME";
        case 0x3ea0:
          return "PET_ANSWER_CHANGE";
        case 0x3ea1:
          return "PET_ANSWER_DONT_CHANGE";
        case 0x3ea2:
          return "PET_ANSWER_USE_MAX_ALLOWED";
        case 0x3ea3:
          return "PET_ANSWER_SET_RECOMMENDED";
        case 0x3ea4:
          return "PET_ANSWER_OPEN_FINDER";
        case 0x3ea5:
          return "PET_ANSWER_STARTVM_ANYWAY";
        case 0x3ea6:
          return "PET_ANSWER_DO_NOT_STARTVM";
        }
      }
    }
    else if (param_1 < 47000) {
      if (param_1 < 0x9099) {
        if (param_1 < 0x6a75) {
          if (param_1 < 0x61a9) {
            if (param_1 == 0x4e27) {
              return "PRL_ERR_VM_RESUME_INV_SAV_VERSION_CANCEL_RESUME";
            }
            if (param_1 == 25000) {
              return "PRL_CHECKED_DISK_VALID";
            }
          }
          else {
            if (param_1 == 0x61a9) {
              return "PRL_CHECKED_DISK_OLD_VERSION";
            }
            if (param_1 == 0x61aa) {
              return "PRL_CHECKED_DISK_INVALID";
            }
          }
        }
        else if (param_1 < 0x88be) {
          if (param_1 < 0x6c7b) {
            if (param_1 == 0x6a75) {
              return "PRL_ERR_VMCONF_MAIN_MEMORY_SIZE_NOT_EAQUAL_RECOMMENDED";
            }
            if (param_1 == 0x6aa5) {
              return "PRL_ERR_VMCONF_VIDEO_MEMORY_SIZE_NOT_EQUAL_RECOMMENDED";
            }
          }
          else {
            if (param_1 == 0x6c7b) {
              return "PRL_WARN_NO_SHARED_NETWORK_FOR_OFFLINE_MANAGEMENT";
            }
            if (param_1 == 0x7934) {
              return "PRL_INFO_VM_MIGRATE_STORAGE_IS_SHARED";
            }
          }
        }
        else if (param_1 == 0x88be) {
          return "PRL_WARN_FAILED_TO_START_VNC_SERVER";
        }
      }
      else if (param_1 < 0x90ad) {
        if (param_1 < 0x90a2) {
          if (param_1 == 0x9099) {
            return "PRL_WARN_BACKUP_HAS_NOT_FULL_BACKUP";
          }
          if (param_1 == 0x909c) {
            return "PRL_WARN_BACKUP_GUEST_SYNCHRONIZATION_FAILED";
          }
        }
        else {
          if (param_1 == 0x90a2) {
            return "PRL_WARN_BACKUP_SP_GUEST_SYNCHRONIZATION_FAILED";
          }
          if (param_1 == 0x90a5) {
            return "PRL_WARN_BACKUP_GUEST_UNABLE_TO_SYNCHRONIZE";
          }
        }
      }
      else if (param_1 == 0x90ad) {
        return "PRL_WARN_BACKUP_NON_IMAGE_HDD";
      }
    }
    else if (param_1 < 0xbb86) {
      if (param_1 < 0xb7c7) {
        if (param_1 < 0xb7a1) {
          if (param_1 == 47000) {
            return "PRL_ERR_WEB_PORTAL_CREATED";
          }
          if (param_1 == 0xb799) {
            return "PRL_ERR_WEB_PORTAL_ACCEPTED";
          }
        }
        else {
          if (param_1 == 0xb7a1) {
            return "PRL_ERR_WEB_PORTAL_NO_CONTENT";
          }
          if (param_1 == 0xb7ba) {
            return "PRL_ERR_WEB_PORTAL_RESEND_EMAIL_ALREADY_CONFIRMED";
          }
        }
      }
      else if (param_1 == 0xb7c7) {
        return "PRL_ERR_WEB_PORTAL_MAS_ALREADY_REGISTERED";
      }
    }
    else if (param_1 == 0xbb86) {
      return "PRL_ERR_IAP_PAYMENT_RECEIPT_ALREDY_REGISTERED";
    }
  }
  else {
    switch(param_1) {
    case 53000:
      return "GUI_ANSWER_RUN_FREE_SPACE_WIZARD";
    case 0xcf09:
      return "GUI_ANSWER_RUN_PROBLEM_REPORT";
    case 0xcf0a:
      return "GUI_ANSWER_SHOW_LICENSE_DIALOG";
    case 0xcf0b:
      return "GUI_ANSWER_VM_STOP";
    case 0xcf0c:
      return "GUI_ANSWER_VM_CONFIGURE";
    }
  }
  FUN_100df99c0("","Std",0,"Unknown PRL_RESULT code %p",param_1);
  return "Unknown";
}

