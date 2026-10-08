
undefined8
FUN_100c8bd00(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
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
  lVar2 = FUN_100bf7eb0(local_50,&DAT_101daebd0,0x13,0x28,FUN_100c8c020);
  if (lVar2 == 0) {
    if (DAT_1023183c8 != 0) {
      iVar1 = FUN_100c60360(DAT_1023183c8,local_50);
      if (-1 < iVar1) {
        lVar2 = FUN_100c60820(DAT_1023183c8,iVar1);
        if (lVar2 != 0) goto LAB_100c8bd81;
      }
    }
    iVar1 = FUN_100c79500(puVar4,param_2,param_3,param_4,DAT_10230a630 & 0x2806);
  }
  else {
LAB_100c8bd81:
    uVar5 = *(ulong *)(lVar2 + 0x18);
    if ((*(byte *)(lVar2 + 0x20) & 2) == 0) {
      uVar5 = uVar5 & DAT_10230a630;
    }
    iVar1 = FUN_100c79520(puVar4,param_2,param_3,param_4,uVar5,*(undefined8 *)(lVar2 + 8),
                          *(undefined8 *)(lVar2 + 0x10));
  }
  uVar3 = 0;
  if (0 < iVar1) {
    uVar3 = *puVar4;
  }
  return uVar3;
}

