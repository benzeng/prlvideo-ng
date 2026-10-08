
undefined2 FUN_1001773b0(long param_1,byte param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  char *pcVar5;
  long local_30;
  undefined2 local_22;
  
  local_22 = 0;
  local_30 = 0;
  lVar1 = *(long *)(param_1 + 0x80);
  if ((lVar1 != 0) && (_PrlHandle_AddRef(lVar1), local_30 != 0)) {
    _PrlHandle_Free();
  }
  local_30 = 0;
  iVar2 = _PrlSrv_GetSupportedOses(lVar1,&local_30);
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  if (iVar2 != -0x7fffffec) {
    if (iVar2 < 0) {
      uVar3 = FUN_100dddcf0(iVar2);
      FUN_100df99c0("","prl_client_app",0,
                    "Failed to execute SDK method \'PrlSrv_GetSupportedOses\': %.8X \'%s\'",iVar2,
                    uVar3);
      uVar4 = 0;
    }
    else {
      iVar2 = _PrlOsesMatrix_GetDefaultOsVersion(local_30,param_2,&local_22);
      uVar4 = local_22;
      if (iVar2 < 0) {
        uVar3 = FUN_100dddcf0(iVar2);
        FUN_100df99c0("","prl_client_app",0,
                      "Failed to execute SDK method \'PrlOsesMatrix_GetDefaultOsVersion\': %.8X \'%s\'"
                      ,iVar2,uVar3);
        uVar4 = 0;
      }
    }
    goto LAB_10017754c;
  }
  iVar2 = _PrlApi_GetDefaultOsVersion(param_2,&local_22);
  uVar4 = local_22;
  if (-1 < iVar2) goto LAB_10017754c;
  if (param_2 < 0xff) {
    pcVar5 = "macOS";
    switch(param_2) {
    case 7:
      break;
    case 8:
      pcVar5 = "Windows";
      break;
    case 9:
      pcVar5 = "Linux";
      break;
    case 10:
      pcVar5 = "FreeBSD";
      break;
    case 0xb:
      pcVar5 = "OS/2";
      break;
    case 0xc:
      pcVar5 = "MS-DOS";
      break;
    case 0xd:
      pcVar5 = "NetWare";
      break;
    case 0xe:
      pcVar5 = "Solaris";
      break;
    case 0xf:
      pcVar5 = "Chromium OS";
      break;
    case 0x10:
      pcVar5 = "Android";
      break;
    default:
switchD_100177461_default:
      pcVar5 = "unknown";
    }
  }
  else {
    if (param_2 != 0xff) goto switchD_100177461_default;
    pcVar5 = "Other";
  }
  uVar3 = FUN_100dddcf0(iVar2);
  FUN_100df99c0("","prl_client_app",0,
                "Failed to get default OS version for OS type \'%s\': %.8X, \'%s\'",pcVar5,iVar2,
                uVar3);
  uVar4 = 0;
LAB_10017754c:
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  return uVar4;
}

