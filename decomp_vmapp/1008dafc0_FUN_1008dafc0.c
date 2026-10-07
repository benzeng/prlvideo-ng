
undefined4 FUN_1008dafc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_40;
  undefined8 local_38;
  
  FUN_10089f9e0(&local_38,0,0,param_3);
  iVar1 = FUN_100821ab0(local_38);
  lVar4 = FUN_10087e1f0(param_2,0x208);
  if (lVar4 != 0) {
    do {
      FUN_10087db60(lVar4,0x78,0,&local_40);
      uVar5 = FUN_100894720(local_40);
      iVar2 = FUN_1008946b0(uVar5);
      if (iVar2 == iVar1) {
LAB_1008db09e:
        uVar3 = FUN_10088ab60(param_1,local_40);
        return uVar3;
      }
      uVar5 = FUN_100894720(local_40);
      iVar2 = FUN_1008946c0(uVar5);
      if (iVar2 == iVar1) goto LAB_1008db09e;
      uVar5 = FUN_10087e260(lVar4);
      lVar4 = FUN_10087e1f0(uVar5,0x208);
    } while (lVar4 != 0);
  }
  FUN_100887ce0(0x2e,0x73,0x83,"cms_lib.c",0x188);
  return 0;
}

