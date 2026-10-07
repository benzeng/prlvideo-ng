
ulong FUN_10078c280(long param_1,ulong param_2,ulong param_3,char param_4)

{
  char cVar1;
  ulong in_RAX;
  char *pcVar2;
  ulong local_38;
  
  local_38 = in_RAX;
  cVar1 = (**(code **)(param_1 + 8))(&local_38,8,param_3 >> 0x24 & 0xff8 | param_2);
  if ((local_38 == 0) || (cVar1 != '\x01')) {
    if (param_4 == '\0') {
      return 0;
    }
    pcVar2 = "can\'t get pgd64 cr3=0x%llx va=0x%llx";
LAB_10078c467:
    FUN_1008e3970("","va2pa",0,pcVar2,param_2,param_3);
  }
  else {
    if (((local_38 & 1) != 0) && (param_2 = local_38 & 0xfffffffff000, param_2 != 0)) {
      cVar1 = (**(code **)(param_1 + 8))(&local_38,8,param_3 >> 0x1b & 0xff8 | param_2);
      if ((local_38 == 0) || (cVar1 != '\x01')) {
        if (param_4 == '\0') {
          return 0;
        }
        pcVar2 = "can\'t get pud64 base=0x%llx va=0x%llx";
        goto LAB_10078c467;
      }
      if (((local_38 & 1) != 0) && (param_2 = local_38 & 0xfffffffff000, param_2 != 0)) {
        cVar1 = (**(code **)(param_1 + 8))(&local_38,8,param_3 >> 0x12 & 0xff8 | param_2);
        if ((local_38 == 0) || (cVar1 != '\x01')) {
          if (param_4 == '\0') {
            return 0;
          }
          pcVar2 = "can\'t get pmd64 base=0x%llx va=0x%llx";
          goto LAB_10078c467;
        }
        if (((local_38 & 1) != 0) && (param_2 = local_38 & 0xfffffffff000, param_2 != 0)) {
          if ((local_38 & 0x80) != 0) {
            return param_2 | param_3 & 0x1fffff;
          }
          cVar1 = (**(code **)(param_1 + 8))(&local_38,8,param_3 >> 9 & 0xff8 | param_2);
          if ((local_38 == 0) || (cVar1 != '\x01')) {
            if (param_4 == '\0') {
              return 0;
            }
            pcVar2 = "can\'t get pt64 base=0x%llx va=0x%llx";
            goto LAB_10078c467;
          }
          if (((local_38 & 1) != 0) && ((local_38 & 0xfffffffff000) != 0)) {
            return local_38 & 0xfffffffff000 | param_3 & 0xfff;
          }
        }
      }
    }
    if (param_4 != '\0') {
      FUN_1008e3970("","va2pa",0,"can\'t get pte base");
    }
  }
  return 0;
}

