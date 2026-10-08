
undefined8
FUN_100c82cc0(long *param_1,undefined8 *param_2,char *param_3,uint *param_4,char param_5,
             undefined8 param_6)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_58;
  undefined8 local_50;
  char local_41;
  char *local_40;
  char *local_38;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  uVar7 = *param_4;
  uVar2 = uVar7 & 0xc0;
  local_40 = (char *)*param_2;
  local_38 = param_3;
  if ((uVar7 & 6) == 0) {
    if ((uVar7 & 8) == 0) {
      iVar3 = FUN_100c814f0(param_1,&local_40,param_3,*(undefined8 *)(param_4 + 8),0xffffffff,
                            uVar7 & 0x400,(int)param_5,param_6);
      if (iVar3 == -1) {
        return 0xffffffff;
      }
      if (iVar3 != 0) goto LAB_100c82feb;
      uVar5 = 0x3a;
      uVar6 = 0x2b9;
    }
    else {
      iVar3 = FUN_100c814f0(param_1,&local_40,param_3,*(undefined8 *)(param_4 + 8),param_4[2],uVar2,
                            (int)param_5,param_6);
      if (iVar3 == -1) {
        return 0xffffffff;
      }
      if (iVar3 != 0) {
LAB_100c82feb:
        *param_2 = local_40;
        return 1;
      }
      uVar5 = 0x3a;
      uVar6 = 0x2b0;
    }
  }
  else {
    if ((uVar7 & 8) == 0) {
      uVar7 = uVar7 >> 1 & 1 | 0x10;
      uVar2 = 0;
    }
    else {
      uVar7 = param_4[2];
    }
    iVar3 = FUN_100c82740(&local_38,0,0,&local_41,0,&local_40,param_3,uVar7,uVar2,(int)param_5,
                          param_6);
    if (iVar3 == -1) {
      return 0xffffffff;
    }
    if (iVar3 == 0) {
      FUN_100c62ee0(0xd,0x83,0x3a,"tasn_dec.c",0x273);
      return 0;
    }
    lVar4 = *param_1;
    if (lVar4 == 0) {
      lVar4 = FUN_100c60010();
      *param_1 = lVar4;
    }
    else {
      iVar3 = FUN_100c60800(lVar4);
      if (0 < iVar3) {
        do {
          local_50 = FUN_100c60730(lVar4);
          FUN_100c805f0(&local_50,*(undefined8 *)(param_4 + 8));
          iVar3 = FUN_100c60800(lVar4);
        } while (0 < iVar3);
      }
      lVar4 = *param_1;
    }
    if (lVar4 == 0) {
      uVar5 = 0x41;
      uVar6 = 0x286;
    }
    else {
      do {
        pcVar1 = local_40;
        if ((long)local_38 < 1) {
          if (local_41 == '\0') goto LAB_100c82feb;
          uVar5 = 0x89;
          uVar6 = 0x2a7;
          goto LAB_100c82fb9;
        }
        if (((1 < (long)local_38) && (*local_40 == '\0')) && (local_40[1] == '\0')) {
          local_40 = local_40 + 2;
          if (local_41 != '\0') goto LAB_100c82feb;
          uVar5 = 0x9f;
          uVar6 = 0x292;
          goto LAB_100c82fb9;
        }
        local_58 = 0;
        param_3 = (char *)((ulong)param_3 & 0xffffffff00000000);
        iVar3 = FUN_100c814f0(&local_58,&local_40,local_38,*(undefined8 *)(param_4 + 8),0xffffffff,0
                              ,param_3,param_6);
        if (iVar3 == 0) {
          uVar5 = 0x3a;
          uVar6 = 0x29d;
          goto LAB_100c82fb9;
        }
        local_38 = pcVar1 + ((long)local_38 - (long)local_40);
        iVar3 = FUN_100c604e0(*param_1,local_58);
      } while (iVar3 != 0);
      uVar5 = 0x41;
      uVar6 = 0x2a2;
    }
  }
LAB_100c82fb9:
  FUN_100c62ee0(0xd,0x83,uVar5,"tasn_dec.c",uVar6);
  FUN_100c80600(param_1,param_4);
  return 0;
}

