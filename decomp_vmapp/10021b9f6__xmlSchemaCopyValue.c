
long _xmlSchemaCopyValue(undefined4 *param_1)

{
  xmlChar *pxVar1;
  undefined4 *local_30;
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  local_18 = 0;
  for (local_30 = param_1; local_30 != (undefined4 *)0x0; local_30 = *(undefined4 **)(local_30 + 2))
  {
    switch(*local_30) {
    default:
      local_10 = FUN_10021b97a(local_30);
      break;
    case 1:
    case 2:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1a:
    case 0x1d:
    case 0x2e:
      local_10 = FUN_10021b97a(local_30);
      if (*(long *)(local_30 + 4) != 0) {
        pxVar1 = _xmlStrdup(*(xmlChar **)(local_30 + 4));
        *(xmlChar **)(local_10 + 0x10) = pxVar1;
      }
      break;
    case 0x13:
    case 0x19:
    case 0x1b:
    case 0x2d:
      _xmlSchemaFreeValue(local_20);
      return 0;
    case 0x15:
    case 0x1c:
      local_10 = FUN_10021b97a(local_30);
      if (*(long *)(local_30 + 4) != 0) {
        pxVar1 = _xmlStrdup(*(xmlChar **)(local_30 + 4));
        *(xmlChar **)(local_10 + 0x10) = pxVar1;
      }
      if (*(long *)(local_30 + 6) != 0) {
        pxVar1 = _xmlStrdup(*(xmlChar **)(local_30 + 6));
        *(xmlChar **)(local_10 + 0x18) = pxVar1;
      }
      break;
    case 0x2b:
      local_10 = FUN_10021b97a(local_30);
      if (*(long *)(local_30 + 4) != 0) {
        pxVar1 = _xmlStrdup(*(xmlChar **)(local_30 + 4));
        *(xmlChar **)(local_10 + 0x10) = pxVar1;
      }
      break;
    case 0x2c:
      local_10 = FUN_10021b97a(local_30);
      if (*(long *)(local_30 + 4) != 0) {
        pxVar1 = _xmlStrdup(*(xmlChar **)(local_30 + 4));
        *(xmlChar **)(local_10 + 0x10) = pxVar1;
      }
    }
    if (local_20 == 0) {
      local_20 = local_10;
    }
    else {
      *(long *)(local_18 + 8) = local_10;
    }
    local_18 = local_10;
  }
  return local_20;
}

