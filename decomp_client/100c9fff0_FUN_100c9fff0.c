
ulong FUN_100c9fff0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong local_30;
  
  local_30 = 0;
  uVar5 = 0;
  lVar2 = FUN_100c97d30(param_1,0xb1,0,0);
  if (lVar2 != 0) {
    iVar1 = FUN_100c60800(lVar2);
    if (0 < iVar1) {
      do {
        puVar3 = (undefined8 *)FUN_100c60820(lVar2,uVar5);
        iVar1 = FUN_100bf7220(*puVar3);
        if ((iVar1 == 0xb2) && (*(int *)puVar3[1] == 6)) {
          iVar1 = FUN_100ca00a0(&local_30,*(undefined8 *)((int *)puVar3[1] + 2));
          if (iVar1 == 0) break;
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar4;
        iVar1 = FUN_100c60800(lVar2);
      } while ((int)uVar4 < iVar1);
    }
    FUN_100ca69b0(lVar2);
    uVar5 = local_30;
  }
  return uVar5;
}

