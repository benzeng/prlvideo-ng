
ulong FUN_100c47970(int param_1,void *param_2,int param_3,undefined8 param_4,int *param_5,
                   long param_6)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  void *ptr;
  undefined8 uVar7;
  void *pvVar8;
  int local_80 [2];
  void *local_78;
  long local_68 [2];
  void *local_58;
  undefined4 local_50 [2];
  undefined8 local_48;
  long *local_40;
  int *local_38;
  
  if (((*(byte *)(param_6 + 0x74) & 0x40) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_6 + 0x10) + 0x58),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100c479c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar4;
  }
  if (param_1 == 0x72) {
    iVar3 = 0x24;
    pvVar8 = param_2;
    if (param_3 != 0x24) {
      uVar6 = 0x83;
      uVar7 = 0x5d;
      goto LAB_100c47b96;
    }
  }
  else {
    local_40 = local_68;
    lVar5 = FUN_100bf6fe0(param_1);
    plVar1 = local_40;
    *local_40 = lVar5;
    if (lVar5 == 0) {
      uVar6 = 0x75;
      uVar7 = 0x66;
      goto LAB_100c47b96;
    }
    if (*(int *)(lVar5 + 0x14) == 0) {
      uVar6 = 0x74;
      uVar7 = 0x6b;
      goto LAB_100c47b96;
    }
    local_50[0] = 5;
    local_48 = 0;
    plVar1[1] = (long)local_50;
    local_38 = local_80;
    pvVar8 = (void *)0x0;
    local_80[0] = param_3;
    local_78 = param_2;
    iVar3 = FUN_100c7ba50(&local_40,0);
  }
  iVar2 = FUN_100c4c150(param_6);
  if (iVar2 + -0xb < iVar3) {
    uVar6 = 0x70;
    uVar7 = 0x7a;
LAB_100c47b96:
    FUN_100c62ee0(4,0x75,uVar6,"rsa_sign.c",uVar7);
    return 0;
  }
  ptr = (void *)0x0;
  if (param_1 != 0x72) {
    ptr = (void *)FUN_100bf3540(iVar2 + 1,"rsa_sign.c",0x7e);
    if (ptr == (void *)0x0) {
      uVar6 = 0x41;
      uVar7 = 0x80;
      goto LAB_100c47b96;
    }
    local_58 = ptr;
    FUN_100c7ba50(&local_40,&local_58);
    pvVar8 = ptr;
  }
  iVar3 = FUN_100c4c180(iVar3,pvVar8,param_4,param_6,1);
  if (0 < iVar3) {
    *param_5 = iVar3;
  }
  uVar4 = (ulong)(0 < iVar3);
  if (param_1 == 0x72) {
    return uVar4;
  }
  _OPENSSL_cleanse(ptr,(ulong)(iVar2 + 1));
  FUN_100bf3910(ptr);
  return uVar4;
}

