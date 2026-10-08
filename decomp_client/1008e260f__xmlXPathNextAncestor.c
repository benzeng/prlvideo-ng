
long _xmlXPathNextAncestor(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long local_48;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    local_48 = 0;
  }
  else if (param_2 == 0) {
    if (*(long *)(*(long *)(param_1 + 0x18) + 8) == 0) {
      local_48 = 0;
    }
    else {
      switch(*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 8)) {
      default:
        local_48 = 0;
        break;
      case 1:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x13:
      case 0x14:
        if (*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x28) == 0) {
          local_48 = **(long **)(param_1 + 0x18);
        }
        else if ((*(int *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x28) + 8) == 1) &&
                ((**(char **)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x28) + 0x10) ==
                  ' ' || (iVar2 = _xmlStrEqual(*(xmlChar **)
                                                (*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8)
                                                          + 0x28) + 0x10),
                                               (xmlChar *)"fake node libxslt"), iVar2 != 0)))) {
          local_48 = 0;
        }
        else {
          local_48 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x28);
        }
        break;
      case 2:
        local_48 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x28);
        break;
      case 9:
      case 10:
      case 0xb:
      case 0xd:
      case 0x15:
        local_48 = 0;
        break;
      case 0x12:
        plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 8);
        if ((*plVar1 == 0) || (*(int *)(*plVar1 + 8) == 0x12)) {
          local_48 = 0;
        }
        else {
          local_48 = *plVar1;
        }
      }
    }
  }
  else if (*(long *)(**(long **)(param_1 + 0x18) + 0x18) == param_2) {
    local_48 = **(long **)(param_1 + 0x18);
  }
  else if (**(long **)(param_1 + 0x18) == param_2) {
    local_48 = 0;
  }
  else {
    switch(*(undefined4 *)(param_2 + 8)) {
    default:
      local_48 = 0;
      break;
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xc:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x13:
    case 0x14:
      if (*(long *)(param_2 + 0x28) == 0) {
        local_48 = 0;
      }
      else if ((*(int *)(*(long *)(param_2 + 0x28) + 8) == 1) &&
              ((**(char **)(*(long *)(param_2 + 0x28) + 0x10) == ' ' ||
               (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_2 + 0x28) + 0x10),
                                     (xmlChar *)"fake node libxslt"), iVar2 != 0)))) {
        local_48 = 0;
      }
      else {
        local_48 = *(long *)(param_2 + 0x28);
      }
      break;
    case 2:
      local_48 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x28);
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xd:
    case 0x15:
      local_48 = 0;
      break;
    case 0x12:
      plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 8);
      if ((*plVar1 == 0) || (*(int *)(*plVar1 + 8) == 0x12)) {
        local_48 = 0;
      }
      else {
        local_48 = *plVar1;
      }
    }
  }
  return local_48;
}

