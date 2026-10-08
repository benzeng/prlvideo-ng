
undefined8 FUN_100beccd0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  lVar4 = FUN_100c929a0(param_2);
  if (lVar4 == 0) {
    FUN_100c62ee0(0x14,0xbf,0x10c,"ssl_rsa.c",0x181);
    return 0;
  }
  iVar3 = FUN_100bd3c90(param_2,lVar4);
  if (iVar3 < 0) {
    FUN_100c62ee0(0x14,0xbf,0xf7,"ssl_rsa.c",0x187);
    FUN_100c6d8c0(lVar4);
    return 0;
  }
  lVar5 = (long)iVar3;
  plVar1 = param_1 + lVar5 * 3 + 0xc;
  if (param_1[lVar5 * 3 + 0xd] != 0) {
    plVar2 = param_1 + lVar5 * 3 + 0xd;
    FUN_100c6d1c0(lVar4);
    FUN_100c63270();
    piVar7 = (int *)*plVar2;
    if (*piVar7 == 6) {
      uVar6 = FUN_100c4c1b0(*(undefined8 *)(piVar7 + 8));
      if ((uVar6 & 1) != 0) goto LAB_100becd6e;
      piVar7 = (int *)*plVar2;
    }
    iVar3 = FUN_100c929e0(param_2,piVar7);
    if (iVar3 == 0) {
      FUN_100c6d8c0(*plVar2);
      *plVar2 = 0;
      FUN_100c63270();
    }
  }
LAB_100becd6e:
  FUN_100c6d8c0(lVar4);
  if (*plVar1 != 0) {
    FUN_100c7cd70();
  }
  FUN_100bf2cf0(param_2 + 0x1c,1,3,"ssl_rsa.c",0x1af);
  *plVar1 = param_2;
  *param_1 = (long)plVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  return 1;
}

