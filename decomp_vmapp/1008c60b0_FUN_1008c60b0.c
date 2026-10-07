
undefined8 FUN_1008c60b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  
  if (*(long *)(param_4 + 0x10) == 0) {
    FUN_100887ce0(0x22,0x75,0x7c,"v3_alt.c",0x213);
    return 0;
  }
  uVar2 = *(undefined8 *)(param_4 + 8);
  iVar1 = FUN_1008c4900(uVar2,"email");
  if ((((iVar1 != 0) && (iVar1 = FUN_1008c4900(uVar2,"URI",extraout_RDX,1), iVar1 != 0)) &&
      (iVar1 = FUN_1008c4900(uVar2,"DNS",extraout_RDX_00,6), iVar1 != 0)) &&
     (((iVar1 = FUN_1008c4900(uVar2,"RID",extraout_RDX_01,2), iVar1 != 0 &&
       (iVar1 = FUN_1008c4900(uVar2,"IP",extraout_RDX_02,8), iVar1 != 0)) &&
      ((iVar1 = FUN_1008c4900(uVar2,"dirName",extraout_RDX_03,7), iVar1 != 0 &&
       (iVar1 = FUN_1008c4900(uVar2,"otherName",extraout_RDX_04,4), iVar1 != 0)))))) {
    FUN_100887ce0(0x22,0x75,0x75,"v3_alt.c",0x226);
    FUN_1008890a0(2,"name=",uVar2);
    return 0;
  }
  uVar2 = FUN_1008c6220(param_1);
  return uVar2;
}

