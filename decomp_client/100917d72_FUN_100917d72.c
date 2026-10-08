
undefined * FUN_100917d72(xmlExpCtxtPtr param_1,undefined1 *param_2,long param_3)

{
  xmlExpNodePtr expr;
  long lVar1;
  undefined *puVar2;
  undefined *local_48;
  undefined *local_28;
  int local_18;
  int local_14;
  
  switch(*param_2) {
  case 0:
    local_48 = _forbiddenExp;
    break;
  case 1:
    local_48 = _forbiddenExp;
    break;
  case 2:
    if (*(long *)(param_2 + 0x20) == param_3) {
      local_28 = _emptyExp;
    }
    else {
      local_28 = _forbiddenExp;
    }
    local_48 = local_28;
    break;
  case 3:
    local_28 = (undefined *)FUN_100917d72(param_1,*(undefined8 *)(param_2 + 0x10),param_3);
    if (local_28 == (undefined *)0x0) {
      local_48 = (undefined *)0x0;
    }
    else {
      if (local_28 == _forbiddenExp) {
        if ((*(byte *)(*(long *)(param_2 + 0x10) + 1) & 1) != 0) {
          local_28 = (undefined *)FUN_100917d72(param_1,*(undefined8 *)(param_2 + 0x20),param_3);
        }
      }
      else {
        *(int *)(*(long *)(param_2 + 0x20) + 4) = *(int *)(*(long *)(param_2 + 0x20) + 4) + 1;
        local_28 = (undefined *)
                   FUN_100916b89(param_1,3,local_28,*(undefined8 *)(param_2 + 0x20),0,0,0);
      }
      local_48 = local_28;
    }
    break;
  case 4:
    expr = (xmlExpNodePtr)FUN_100917d72(param_1,*(undefined8 *)(param_2 + 0x10),param_3);
    if (expr == (xmlExpNodePtr)0x0) {
      local_48 = (undefined *)0x0;
    }
    else {
      lVar1 = FUN_100917d72(param_1,*(undefined8 *)(param_2 + 0x20),param_3);
      if (lVar1 == 0) {
        _xmlExpFree(param_1,expr);
        local_48 = (undefined *)0x0;
      }
      else {
        local_48 = (undefined *)FUN_100916b89(param_1,4,expr,lVar1,0,0,0);
      }
    }
    break;
  case 5:
    if (*(int *)(param_2 + 0x24) == 0) {
      local_48 = _forbiddenExp;
    }
    else {
      puVar2 = (undefined *)FUN_100917d72(param_1,*(undefined8 *)(param_2 + 0x10),param_3);
      if (puVar2 == (undefined *)0x0) {
        local_48 = (undefined *)0x0;
      }
      else {
        local_48 = puVar2;
        if ((puVar2 != _forbiddenExp) && (*(int *)(param_2 + 0x24) != 1)) {
          if (*(int *)(param_2 + 0x24) < 0) {
            local_14 = -1;
          }
          else {
            local_14 = *(int *)(param_2 + 0x24) + -1;
          }
          if (*(int *)(param_2 + 0x20) < 1) {
            local_18 = 0;
          }
          else {
            local_18 = *(int *)(param_2 + 0x20) + -1;
          }
          *(int *)(*(long *)(param_2 + 0x10) + 4) = *(int *)(*(long *)(param_2 + 0x10) + 4) + 1;
          local_48 = (undefined *)
                     FUN_100916b89(param_1,5,*(undefined8 *)(param_2 + 0x10),0,0,local_18,local_14);
          if (puVar2 != _emptyExp) {
            local_48 = (undefined *)FUN_100916b89(param_1,3,puVar2,local_48,0,0,0);
          }
        }
      }
    }
    break;
  default:
    local_48 = (undefined *)0x0;
  }
  return local_48;
}

