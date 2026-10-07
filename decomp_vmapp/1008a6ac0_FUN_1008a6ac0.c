
undefined8
FUN_1008a6ac0(long param_1,undefined8 *param_2,undefined8 param_3,uint *param_4,char param_5,
             undefined8 param_6)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char local_42;
  char local_41;
  char *local_40;
  char *local_38;
  
  if (param_1 == 0) {
    return 0;
  }
  local_40 = (char *)*param_2;
  if ((*param_4 & 0x10) == 0) {
    uVar3 = FUN_1008a7740(param_1,param_2,param_3,param_4,(int)param_5,param_6);
    return uVar3;
  }
  iVar2 = FUN_1008a71c0(&local_38,0,0,&local_41,&local_42,&local_40,param_3,param_4[2],
                        *param_4 & 0xc0,(int)param_5,param_6);
  pcVar1 = local_40;
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  if (iVar2 == 0) {
    FUN_100887ce0(0xd,0x84,0x3a,"tasn_dec.c",0x224);
  }
  else if (local_42 == '\0') {
    FUN_100887ce0(0xd,0x84,0x78,"tasn_dec.c",0x22a);
  }
  else {
    iVar2 = FUN_1008a7740(param_1,&local_40,local_38,param_4,0,param_6);
    if (iVar2 == 0) {
      FUN_100887ce0(0xd,0x84,0x3a,"tasn_dec.c",0x230);
      return 0;
    }
    local_38 = pcVar1 + ((long)local_38 - (long)local_40);
    if (local_41 == '\0') {
      if (local_38 == (char *)0x0) goto LAB_1008a6c9a;
      uVar3 = 0x77;
      uVar4 = 0x241;
    }
    else {
      if (((1 < (long)local_38) && (*local_40 == '\0')) && (local_40[1] == '\0')) {
        local_40 = local_40 + 2;
LAB_1008a6c9a:
        *param_2 = local_40;
        return 1;
      }
      uVar3 = 0x89;
      uVar4 = 0x238;
    }
    FUN_100887ce0(0xd,0x84,uVar3,"tasn_dec.c",uVar4);
    FUN_1008a5080(param_1,param_4);
  }
  return 0;
}

