
int FUN_0040e0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 local_58 [40];
  
  iVar2 = -2;
  iVar1 = FUN_0040e560(local_58,0x10);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)FUN_0040e210(local_58);
    *puVar4 = 0xe;
    puVar4[2] = 1;
    puVar4[1] = 0;
    puVar4[3] = 0;
    iVar2 = FUN_0040ddf0(local_58);
    if ((iVar2 == 0) &&
       (iVar2 = FUN_0040dfa0(local_58,param_2,param_3,param_4,param_5,param_6,param_7,param_8),
       iVar2 == 0)) {
      uVar3 = FUN_0040e220(local_58);
      uVar5 = FUN_0040e210(local_58);
      iVar1 = FUN_0040e870(param_1,uVar5,uVar3,0,0);
      if (iVar1 != 0) {
        iVar2 = -4;
      }
    }
    FUN_0040e460(local_58);
  }
  return iVar2;
}

