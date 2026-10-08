
undefined4 * FUN_100c3f210(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) {
    FUN_100c62ee0(0x10,0xb2,0x43,"ec_key.c",0x91);
    return (undefined4 *)0x0;
  }
  if (*(long *)(param_2 + 2) != 0) {
    uVar3 = FUN_100c36a70();
    if (*(long *)(param_1 + 2) != 0) {
      FUN_100c36170();
    }
    lVar4 = FUN_100c36060(uVar3);
    *(long *)(param_1 + 2) = lVar4;
    if (lVar4 == 0) {
      return (undefined4 *)0x0;
    }
    iVar2 = FUN_100c36460(lVar4,*(undefined8 *)(param_2 + 2));
    if (iVar2 == 0) {
      return (undefined4 *)0x0;
    }
  }
  if ((*(long *)(param_2 + 4) != 0) && (lVar4 = *(long *)(param_2 + 2), lVar4 != 0)) {
    if (*(long *)(param_1 + 4) != 0) {
      FUN_100c36280(*(long *)(param_1 + 4));
      lVar4 = *(long *)(param_2 + 2);
    }
    lVar4 = FUN_100c368e0(lVar4);
    *(long *)(param_1 + 4) = lVar4;
    if (lVar4 == 0) {
      return (undefined4 *)0x0;
    }
    iVar2 = FUN_100c369b0(lVar4,*(undefined8 *)(param_2 + 4));
    if (iVar2 == 0) {
      return (undefined4 *)0x0;
    }
  }
  lVar4 = *(long *)(param_2 + 6);
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 6);
    if (lVar5 == 0) {
      lVar5 = FUN_100c26720();
      *(long *)(param_1 + 6) = lVar5;
      if (lVar5 == 0) {
        return (undefined4 *)0x0;
      }
      lVar4 = *(long *)(param_2 + 6);
    }
    lVar4 = FUN_100c26b50(lVar5,lVar4);
    if (lVar4 == 0) {
      return (undefined4 *)0x0;
    }
  }
  FUN_100c36230(param_1 + 0xc);
  puVar1 = *(undefined8 **)(param_2 + 0xc);
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      param_1[8] = param_2[8];
      param_1[9] = param_2[9];
      *param_1 = *param_2;
      param_1[0xb] = param_2[0xb];
      return param_1;
    }
    lVar4 = (*(code *)puVar1[2])(puVar1[1]);
    if (lVar4 == 0) break;
    iVar2 = FUN_100c36810(param_1 + 0xc,lVar4,puVar1[2],puVar1[3],puVar1[4]);
    if (iVar2 == 0) {
      return (undefined4 *)0x0;
    }
    puVar1 = (undefined8 *)*puVar1;
  }
  return (undefined4 *)0x0;
}

