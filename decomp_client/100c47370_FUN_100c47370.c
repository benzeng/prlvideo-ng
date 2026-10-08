
undefined4 * FUN_100c47370(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  
  puVar2 = (undefined4 *)FUN_100bf3540(0xa8,"rsa_lib.c",0x8d);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_100c62ee0(4,0x6a,0x41,"rsa_lib.c",0x8f);
    return (undefined4 *)0x0;
  }
  if (DAT_102316280 == 0) {
    DAT_102316280 = FUN_100c45520();
  }
  *(long *)(puVar2 + 4) = DAT_102316280;
  if (param_1 == 0) {
    param_1 = FUN_100c56bf0();
    *(long *)(puVar2 + 6) = param_1;
    if (param_1 != 0) goto LAB_100c47415;
    lVar3 = *(long *)(puVar2 + 4);
  }
  else {
    iVar1 = FUN_100c55720(param_1);
    if (iVar1 == 0) {
      FUN_100c62ee0(4,0x6a,0x26,"rsa_lib.c",0x97);
      goto LAB_100c4757a;
    }
    *(long *)(puVar2 + 6) = param_1;
LAB_100c47415:
    lVar3 = FUN_100c56c10(param_1);
    *(long *)(puVar2 + 4) = lVar3;
    if (lVar3 == 0) {
      FUN_100c62ee0(4,0x6a,0x26,"rsa_lib.c",0xa1);
      FUN_100c557e0(*(undefined8 *)(puVar2 + 6));
      goto LAB_100c4757a;
    }
  }
  *puVar2 = 0;
  *(undefined8 *)(puVar2 + 2) = 0;
  *(undefined8 *)(puVar2 + 0x16) = 0;
  *(undefined8 *)(puVar2 + 0x14) = 0;
  *(undefined8 *)(puVar2 + 0x12) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0xe) = 0;
  *(undefined8 *)(puVar2 + 0xc) = 0;
  *(undefined8 *)(puVar2 + 10) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x1c] = 1;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(undefined8 *)(puVar2 + 0x26) = 0;
  *(undefined8 *)(puVar2 + 0x24) = 0;
  *(undefined8 *)(puVar2 + 0x22) = 0;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x1e) = 0;
  puVar2[0x1d] = *(uint *)(lVar3 + 0x48) & 0xfffffbff;
  iVar1 = FUN_100bf50a0(6,puVar2,puVar2 + 0x18);
  if (iVar1 == 0) {
    if (*(long *)(puVar2 + 6) != 0) {
      FUN_100c557e0();
    }
  }
  else {
    if (*(code **)(*(long *)(puVar2 + 4) + 0x38) == (code *)0x0) {
      return puVar2;
    }
    iVar1 = (**(code **)(*(long *)(puVar2 + 4) + 0x38))(puVar2);
    if (iVar1 != 0) {
      return puVar2;
    }
    if (*(long *)(puVar2 + 6) != 0) {
      FUN_100c557e0();
    }
    FUN_100bf51c0(6,puVar2,puVar2 + 0x18);
  }
LAB_100c4757a:
  FUN_100bf3910(puVar2);
  return (undefined4 *)0x0;
}

