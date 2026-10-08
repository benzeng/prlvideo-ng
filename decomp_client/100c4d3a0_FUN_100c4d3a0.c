
undefined4 * FUN_100c4d3a0(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  
  puVar2 = (undefined4 *)FUN_100bf3540(0x88,"dsa_lib.c",0x84);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_100c62ee0(10,0x67,0x41,"dsa_lib.c",0x86);
    return (undefined4 *)0x0;
  }
  if (DAT_102316288 == 0) {
    DAT_102316288 = FUN_100c4dcd0();
  }
  *(long *)(puVar2 + 0x1e) = DAT_102316288;
  if (param_1 == 0) {
    param_1 = FUN_100c56d60();
    *(long *)(puVar2 + 0x20) = param_1;
    if (param_1 != 0) goto LAB_100c4d451;
    lVar3 = *(long *)(puVar2 + 0x1e);
  }
  else {
    iVar1 = FUN_100c55720(param_1);
    if (iVar1 == 0) {
      FUN_100c62ee0(10,0x67,0x26,"dsa_lib.c",0x8d);
      goto LAB_100c4d56d;
    }
    *(long *)(puVar2 + 0x20) = param_1;
LAB_100c4d451:
    lVar3 = FUN_100c56d80(param_1);
    *(long *)(puVar2 + 0x1e) = lVar3;
    if (lVar3 == 0) {
      FUN_100c62ee0(10,0x67,0x26,"dsa_lib.c",0x97);
      FUN_100c557e0(*(undefined8 *)(puVar2 + 0x20));
      goto LAB_100c4d56d;
    }
  }
  *puVar2 = 0;
  *(undefined8 *)(puVar2 + 2) = 0;
  puVar2[4] = 1;
  *(undefined8 *)(puVar2 + 0x16) = 0;
  *(undefined8 *)(puVar2 + 0x12) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0xe) = 0;
  *(undefined8 *)(puVar2 + 0xc) = 0;
  *(undefined8 *)(puVar2 + 10) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  puVar2[0x18] = 1;
  puVar2[0x14] = *(uint *)(lVar3 + 0x40) & 0xfffffbff;
  FUN_100bf50a0(7,puVar2,puVar2 + 0x1a);
  if (*(code **)(*(long *)(puVar2 + 0x1e) + 0x30) == (code *)0x0) {
    return puVar2;
  }
  iVar1 = (**(code **)(*(long *)(puVar2 + 0x1e) + 0x30))(puVar2);
  if (iVar1 != 0) {
    return puVar2;
  }
  if (*(long *)(puVar2 + 0x20) != 0) {
    FUN_100c557e0();
  }
  FUN_100bf51c0(7,puVar2,puVar2 + 0x1a);
LAB_100c4d56d:
  FUN_100bf3910(puVar2);
  return (undefined4 *)0x0;
}

