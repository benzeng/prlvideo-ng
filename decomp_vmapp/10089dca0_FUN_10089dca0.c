
int FUN_10089dca0(undefined8 param_1,undefined8 *param_2,int *param_3,undefined8 param_4,
                 long param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_70;
  int local_6c;
  void *local_68;
  undefined1 local_60 [48];
  
  local_68 = (void *)0x0;
  if (param_5 == 0) {
    uVar7 = 0x43;
    uVar8 = 0x92;
LAB_10089ddc9:
    FUN_100887ce0(0xd,0xc5,uVar7,"a_verify.c",uVar8);
    return -1;
  }
  if ((param_3[1] == 3) && ((*(byte *)(param_3 + 4) & 7) != 0)) {
    uVar7 = 0xdc;
    uVar8 = 0x97;
    goto LAB_10089ddc9;
  }
  FUN_10088a650(local_60);
  uVar2 = FUN_100821ab0(*param_2);
  iVar3 = FUN_100823110(uVar2,&local_6c,&local_70);
  if (iVar3 == 0) {
    uVar7 = 199;
    uVar8 = 0x9f;
  }
  else if (local_6c == 0) {
    if ((*(long *)(param_5 + 0x10) == 0) ||
       (pcVar1 = *(code **)(*(long *)(param_5 + 0x10) + 0xc0), pcVar1 == (code *)0x0)) {
      uVar7 = 199;
      uVar8 = 0xa5;
    }
    else {
      iVar4 = (*pcVar1)(local_60,param_1,param_4,param_2,param_3,param_5);
      if (iVar4 != 2) goto LAB_10089df3d;
LAB_10089de3a:
      uVar5 = FUN_1008a52d0(param_4,&local_68,param_1);
      if (local_68 != (void *)0x0) {
        iVar3 = FUN_10088a910(local_60,local_68,(long)(int)uVar5);
        if (iVar3 == 0) {
          uVar7 = 0xd0;
        }
        else {
          _OPENSSL_cleanse(local_68,(ulong)uVar5);
          FUN_10081e1a0(local_68);
          iVar3 = FUN_100897a90(local_60,*(undefined8 *)(param_3 + 2),(long)*param_3);
          iVar4 = 1;
          if (0 < iVar3) goto LAB_10089df3d;
          uVar7 = 0xda;
        }
        FUN_100887ce0(0xd,0xc5,6,"a_verify.c",uVar7);
        iVar4 = 0;
        goto LAB_10089df3d;
      }
      uVar7 = 0x41;
      uVar8 = 0xcb;
    }
  }
  else {
    uVar7 = FUN_100821930();
    lVar6 = FUN_100890b60(uVar7);
    if (lVar6 == 0) {
      uVar7 = 0xa1;
      uVar8 = 0xb6;
    }
    else {
      iVar3 = FUN_100892450(local_70);
      if (iVar3 == **(int **)(param_5 + 0x10)) {
        iVar4 = 0;
        iVar3 = FUN_100897930(local_60,0,lVar6,0,param_5);
        if (iVar3 == 0) {
          FUN_100887ce0(0xd,0xc5,6,"a_verify.c",0xc1);
          goto LAB_10089df3d;
        }
        goto LAB_10089de3a;
      }
      uVar7 = 200;
      uVar8 = 0xbc;
    }
  }
  FUN_100887ce0(0xd,0xc5,uVar7,"a_verify.c",uVar8);
  iVar4 = -1;
LAB_10089df3d:
  FUN_10088aa50(local_60);
  return iVar4;
}

