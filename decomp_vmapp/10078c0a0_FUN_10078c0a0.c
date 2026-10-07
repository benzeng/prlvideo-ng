
ulong FUN_10078c0a0(long param_1,uint param_2,ulong param_3,char param_4)

{
  char cVar1;
  ulong in_RAX;
  char *pcVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = in_RAX;
  cVar1 = (**(code **)(param_1 + 8))(&local_38,8,(uint)(param_3 >> 0x1b) & 0x18 | param_2);
  if ((local_38 == 0) || (cVar1 != '\x01')) {
    if (param_4 == '\0') {
      return 0;
    }
    FUN_1008e3970("","va2pa",0,"can\'t get pgd32 cr3=0x%x va=0x%x",param_2,param_3 & 0xffffffff);
    return 0;
  }
  if (((local_38 & 1) != 0) && (uVar3 = local_38 & 0xffffff000, uVar3 != 0)) {
    cVar1 = (**(code **)(param_1 + 8))(&local_38,8,param_3 >> 0x12 & 0xff8 | uVar3);
    if ((local_38 == 0) || (cVar1 != '\x01')) {
      if (param_4 == '\0') {
        return 0;
      }
      pcVar2 = "can\'t get pd32 base=0x%llx va=0x%x";
LAB_10078c229:
      FUN_1008e3970("","va2pa",0,pcVar2,uVar3,param_3 & 0xffffffff);
      return 0;
    }
    if (((local_38 & 1) != 0) && (uVar3 = local_38 & 0xffffff000, uVar3 != 0)) {
      if ((local_38 & 0x80) != 0) {
        return uVar3 | param_3 & 0x1fffff;
      }
      cVar1 = (**(code **)(param_1 + 8))(&local_38,8,param_3 >> 9 & 0xff8 | uVar3);
      if ((local_38 == 0) || (cVar1 != '\x01')) {
        if (param_4 == '\0') {
          return 0;
        }
        pcVar2 = "can\'t get pt32 base=0x%llx va=0x%x";
        goto LAB_10078c229;
      }
      if (((local_38 & 1) != 0) && ((local_38 & 0xffffff000) != 0)) {
        return local_38 & 0xffffff000 | param_3 & 0xfff;
      }
    }
  }
  if (param_4 != '\0') {
    FUN_1008e3970("","va2pa",0,"can\'t get pte base");
  }
  return 0;
}

