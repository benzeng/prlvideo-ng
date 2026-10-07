
uint FUN_1001dc233(long param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint local_3c;
  int local_20;
  uint local_1c;
  uint local_c;
  
  local_1c = 0;
  if (param_1 == 0) {
LAB_1001dc2f1:
    local_3c = 0xffffffff;
  }
  else {
    if (param_2 < 0x100) {
      if ((((param_2 < 9) || (10 < param_2)) && (param_2 != 0xd)) && (param_2 < 0x20)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) goto LAB_1001dc2f1;
    }
    else {
      if ((((param_2 < 0x100) || (0xd7ff < param_2)) && ((param_2 < 0xe000 || (0xfffd < param_2))))
         && ((param_2 < 0x10000 || (0x10ffff < param_2)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) goto LAB_1001dc2f1;
    }
    switch(*(undefined4 *)(param_1 + 4)) {
    case 1:
    case 4:
      local_3c = 0xffffffff;
      break;
    case 2:
      local_3c = (uint)(*(int *)(param_1 + 0x2c) == param_2);
      break;
    case 3:
      local_c = 0;
      for (local_20 = 0; local_20 < *(int *)(param_1 + 0x44); local_20 = local_20 + 1) {
        piVar1 = *(int **)(*(long *)(param_1 + 0x48) + (long)local_20 * 8);
        if (*piVar1 == 2) {
          iVar3 = FUN_1001dbb4a(piVar1[1],param_2,0,piVar1[2],piVar1[3],*(undefined8 *)(piVar1 + 4))
          ;
          if (iVar3 != 0) {
            return 0;
          }
        }
        else if (*piVar1 == 0) {
          iVar3 = FUN_1001dbb4a(piVar1[1],param_2,0,piVar1[2],piVar1[3],*(undefined8 *)(piVar1 + 4))
          ;
          if (iVar3 != 0) {
            local_c = 1;
          }
        }
        else {
          iVar3 = FUN_1001dbb4a(piVar1[1],param_2,0,piVar1[2],piVar1[3],*(undefined8 *)(piVar1 + 4))
          ;
          if (iVar3 != 0) {
            return 0;
          }
          local_c = 1;
        }
      }
      local_3c = local_c;
      break;
    case 5:
      _puts("TODO: XML_REGEXP_STRING");
      local_3c = 0xffffffff;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
      local_1c = FUN_1001dbb4a(*(undefined4 *)(param_1 + 4),param_2,0,0,0,
                               *(undefined8 *)(param_1 + 0x18));
      if (*(int *)(param_1 + 0x28) != 0) {
        local_1c = (uint)(local_1c == 0);
      }
    default:
      local_3c = local_1c;
    }
  }
  return local_3c;
}

