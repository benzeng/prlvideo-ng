
undefined8
FUN_1008b0780(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 local_58;
  undefined4 local_50 [10];
  
  local_58 = 0;
  puVar4 = &local_58;
  if (param_1 != (undefined8 *)0x0) {
    puVar4 = param_1;
  }
  local_50[0] = param_5;
  lVar2 = FUN_100822740(local_50,&DAT_100b59f10,0x13,0x28,FUN_1008b0aa0);
  if (lVar2 == 0) {
    if (DAT_1011c2988 != 0) {
      iVar1 = FUN_100885160(DAT_1011c2988,local_50);
      if (-1 < iVar1) {
        lVar2 = FUN_100885620(DAT_1011c2988,iVar1);
        if (lVar2 != 0) goto LAB_1008b0801;
      }
    }
    iVar1 = FUN_10089df80(puVar4,param_2,param_3,param_4,DAT_1011b0860 & 0x2806);
  }
  else {
LAB_1008b0801:
    uVar5 = *(ulong *)(lVar2 + 0x18);
    if ((*(byte *)(lVar2 + 0x20) & 2) == 0) {
      uVar5 = uVar5 & DAT_1011b0860;
    }
    iVar1 = FUN_10089dfa0(puVar4,param_2,param_3,param_4,uVar5,*(undefined8 *)(lVar2 + 8),
                          *(undefined8 *)(lVar2 + 0x10));
  }
  uVar3 = 0;
  if (0 < iVar1) {
    uVar3 = *puVar4;
  }
  return uVar3;
}

