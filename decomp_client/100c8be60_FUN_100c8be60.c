
undefined8
FUN_100c8be60(undefined4 param_1,long param_2,long param_3,undefined8 param_4,ulong param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 local_58 [10];
  
  if (DAT_1023183c8 == 0) {
    DAT_1023183c8 = FUN_100c5ff30(FUN_100c8bfc0);
    if (DAT_1023183c8 != 0) goto LAB_100c8bea6;
    uVar4 = 0xf5;
LAB_100c8bfa7:
    FUN_100c62ee0(0xd,0x81,0x41,"a_strnid.c",uVar4);
    uVar4 = 0;
  }
  else {
LAB_100c8bea6:
    local_58[0] = param_1;
    puVar3 = (undefined4 *)FUN_100bf7eb0(local_58,&DAT_101daebd0,0x13,0x28,FUN_100c8c020);
    if (puVar3 == (undefined4 *)0x0) {
      if (DAT_1023183c8 != 0) {
        iVar2 = FUN_100c60360(DAT_1023183c8,local_58);
        if (-1 < iVar2) {
          puVar3 = (undefined4 *)FUN_100c60820(DAT_1023183c8,iVar2);
          if (puVar3 != (undefined4 *)0x0) goto LAB_100c8befc;
        }
      }
      puVar3 = (undefined4 *)FUN_100bf3540(0x28,"a_strnid.c",0xf9);
      if (puVar3 == (undefined4 *)0x0) {
        uVar4 = 0xfb;
        goto LAB_100c8bfa7;
      }
      *(ulong *)(puVar3 + 8) = param_5 | 1;
      *puVar3 = param_1;
      bVar1 = true;
    }
    else {
LAB_100c8befc:
      *(ulong *)(puVar3 + 8) = *(ulong *)(puVar3 + 8) & 1 | param_5 & 0xfffffffffffffffe;
      bVar1 = false;
    }
    if (param_2 != -1) {
      *(long *)(puVar3 + 2) = param_2;
    }
    if (param_3 != -1) {
      *(long *)(puVar3 + 4) = param_3;
    }
    *(undefined8 *)(puVar3 + 6) = param_4;
    uVar4 = 1;
    if (bVar1) {
      FUN_100c604e0(DAT_1023183c8,puVar3);
    }
  }
  return uVar4;
}

