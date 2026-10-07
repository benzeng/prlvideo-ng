
int FUN_0040deb0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  
  iVar2 = -2;
  iVar1 = FUN_0040e560(auStack_48,0x10);
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)FUN_0040e210(auStack_48);
    *puVar4 = 0xe;
    puVar4[2] = 1;
    puVar4[1] = 0;
    puVar4[3] = 0;
    iVar2 = FUN_0040ddf0(auStack_48);
    if (iVar2 == 0) {
      iVar2 = FUN_0040de50(auStack_48,param_2,param_3);
      if (iVar2 == 0) {
        uVar3 = FUN_0040e220(auStack_48);
        uVar5 = FUN_0040e210(auStack_48);
        iVar1 = FUN_0040e870(param_1,uVar5,uVar3,0,0);
        if (iVar1 != 0) {
          iVar2 = ((iVar1 != -8) - 6) + (uint)(iVar1 != -8);
        }
      }
    }
    FUN_0040e460(auStack_48);
  }
  return iVar2;
}

