
int FUN_100c79220(undefined8 param_1,undefined8 *param_2,int *param_3,undefined8 param_4,
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
LAB_100c79349:
    FUN_100c62ee0(0xd,0xc5,uVar7,"a_verify.c",uVar8);
    return -1;
  }
  if ((param_3[1] == 3) && ((*(byte *)(param_3 + 4) & 7) != 0)) {
    uVar7 = 0xdc;
    uVar8 = 0x97;
    goto LAB_100c79349;
  }
  FUN_100c65850(local_60);
  uVar2 = FUN_100bf7220(*param_2);
  iVar3 = FUN_100bf8880(uVar2,&local_6c,&local_70);
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
      if (iVar4 != 2) goto LAB_100c794bd;
LAB_100c793ba:
      uVar5 = FUN_100c80850(param_4,&local_68,param_1);
      if (local_68 != (void *)0x0) {
        iVar3 = FUN_100c65b10(local_60,local_68,(long)(int)uVar5);
        if (iVar3 == 0) {
          uVar7 = 0xd0;
        }
        else {
          _OPENSSL_cleanse(local_68,(ulong)uVar5);
          FUN_100bf3910(local_68);
          iVar3 = FUN_100c73010(local_60,*(undefined8 *)(param_3 + 2),(long)*param_3);
          iVar4 = 1;
          if (0 < iVar3) goto LAB_100c794bd;
          uVar7 = 0xda;
        }
        FUN_100c62ee0(0xd,0xc5,6,"a_verify.c",uVar7);
        iVar4 = 0;
        goto LAB_100c794bd;
      }
      uVar7 = 0x41;
      uVar8 = 0xcb;
    }
  }
  else {
    uVar7 = FUN_100bf70a0();
    lVar6 = FUN_100c6bd60(uVar7);
    if (lVar6 == 0) {
      uVar7 = 0xa1;
      uVar8 = 0xb6;
    }
    else {
      iVar3 = FUN_100c6d830(local_70);
      if (iVar3 == **(int **)(param_5 + 0x10)) {
        iVar4 = 0;
        iVar3 = FUN_100c72eb0(local_60,0,lVar6,0,param_5);
        if (iVar3 == 0) {
          FUN_100c62ee0(0xd,0xc5,6,"a_verify.c",0xc1);
          goto LAB_100c794bd;
        }
        goto LAB_100c793ba;
      }
      uVar7 = 200;
      uVar8 = 0xbc;
    }
  }
  FUN_100c62ee0(0xd,0xc5,uVar7,"a_verify.c",uVar8);
  iVar4 = -1;
LAB_100c794bd:
  FUN_100c65c50(local_60);
  return iVar4;
}

