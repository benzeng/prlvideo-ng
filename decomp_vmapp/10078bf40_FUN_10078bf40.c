
ulong FUN_10078bf40(long param_1,uint param_2,ulong param_3,char param_4)

{
  char cVar1;
  ulong in_RAX;
  char *pcVar2;
  ulong uVar3;
  undefined8 local_38;
  
  local_38 = in_RAX;
  cVar1 = (**(code **)(param_1 + 8))
                    ((long)&local_38 + 4,4,(uint)(param_3 >> 0x14) & 0xffc | param_2);
  if ((local_38._4_4_ == 0) || (cVar1 != '\x01')) {
    if (param_4 == '\0') {
      return 0;
    }
    pcVar2 = "can\'t get pd32 cr3=0x%x va=0x%x";
LAB_10078c014:
    uVar3 = 0;
    FUN_1008e3970("","va2pa",0,pcVar2,param_2,param_3 & 0xffffffff);
  }
  else {
    if (((local_38 & 0x100000000) == 0) ||
       (param_2 = local_38._4_4_ & 0xfffff000, (local_38 & 0xfffff00000000000) == 0)) {
LAB_10078c01e:
      if (param_4 == '\0') {
        return 0;
      }
      FUN_1008e3970("","va2pa",0,"can\'t get pte base");
      return 0;
    }
    if ((local_38 & 0x8000000000) == 0) {
      cVar1 = (**(code **)(param_1 + 8))(&local_38,4,(uint)(param_3 >> 10) & 0xffc | param_2);
      if (((uint)local_38 == 0) || (cVar1 != '\x01')) {
        if (param_4 == '\0') {
          return 0;
        }
        pcVar2 = "can\'t get pt32 base=0x%x va=0x%x";
        goto LAB_10078c014;
      }
      if (((local_38 & 1) == 0) ||
         (param_2 = (uint)local_38 & 0xfffff000, (local_38 & 0xfffff000) == 0)) goto LAB_10078c01e;
      param_3 = param_3 & 0xfff;
    }
    else {
      param_3 = param_3 & 0x3fffff;
    }
    uVar3 = param_3 | param_2;
  }
  return uVar3;
}

