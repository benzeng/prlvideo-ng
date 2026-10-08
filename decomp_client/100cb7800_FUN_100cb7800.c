
undefined4 FUN_100cb7800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_40;
  undefined8 local_38;
  
  FUN_100c7af60(&local_38,0,0,param_3);
  iVar1 = FUN_100bf7220(local_38);
  lVar4 = FUN_100c593f0(param_2,0x208);
  if (lVar4 != 0) {
    do {
      FUN_100c58d60(lVar4,0x78,0,&local_40);
      uVar5 = FUN_100c6fca0(local_40);
      iVar2 = FUN_100c6fc30(uVar5);
      if (iVar2 == iVar1) {
LAB_100cb78de:
        uVar3 = FUN_100c65d60(param_1,local_40);
        return uVar3;
      }
      uVar5 = FUN_100c6fca0(local_40);
      iVar2 = FUN_100c6fc40(uVar5);
      if (iVar2 == iVar1) goto LAB_100cb78de;
      uVar5 = FUN_100c59460(lVar4);
      lVar4 = FUN_100c593f0(uVar5,0x208);
    } while (lVar4 != 0);
  }
  FUN_100c62ee0(0x2e,0x73,0x83,"cms_lib.c",0x188);
  return 0;
}

