
undefined8 FUN_100bacef0(long param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  
  lVar2 = *(long *)(param_1 + 0xd0);
  if (lVar2 != 0) {
    if ((*(long *)(lVar2 + 8) != 0) && ((*(byte *)(lVar2 + 0x1c) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)(lVar2 + 0x1c) & 1) == 0) {
      *(undefined8 *)(lVar2 + 8) = 0;
    }
    else {
      FUN_100bf3910();
    }
    if ((*(long *)(lVar2 + 0x20) != 0) && ((*(byte *)(lVar2 + 0x34) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)(lVar2 + 0x34) & 1) == 0) {
      *(undefined8 *)(lVar2 + 0x20) = 0;
    }
    else {
      FUN_100bf3910();
    }
    if ((*(long *)(lVar2 + 0x38) != 0) && ((*(byte *)(lVar2 + 0x4c) & 2) == 0)) {
      FUN_100bf3910();
    }
    if ((*(byte *)(lVar2 + 0x4c) & 1) == 0) {
      *(undefined8 *)(lVar2 + 0x38) = 0;
    }
    else {
      FUN_100bf3910();
    }
    if ((*(byte *)(lVar2 + 0x58) & 1) != 0) {
      FUN_100bf3910(lVar2);
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_100bac7b0();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  lVar2 = FUN_100bac3a0(param_1 + 0x68,param_2 + 0x68);
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = FUN_100bac3a0(param_1 + 0x98,param_2 + 0x98);
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = FUN_100bac3a0(param_1 + 0xb0,param_2 + 0xb0);
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  if (*(long *)(param_2 + 0xd0) == 0) goto LAB_100bad120;
  puVar3 = (undefined4 *)FUN_100bf3540(0x60,"../src/snlic/sn_crypto_helper_17.c",0x101);
  if (puVar3 == (undefined4 *)0x0) goto LAB_100bad26e;
  *puVar3 = 0;
  *(undefined8 *)(puVar3 + 6) = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(undefined8 *)(puVar3 + 10) = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0xe) = 0;
  puVar3[0x16] = 1;
  *(undefined4 **)(param_1 + 0xd0) = puVar3;
  puVar1 = *(undefined4 **)(param_2 + 0xd0);
  if (puVar3 == puVar1) {
LAB_100bad120:
    lVar2 = *(long *)(param_2 + 0xd8);
    if (lVar2 == 0) {
      return 1;
    }
    plVar4 = (long *)FUN_100bf3540(0x18,"../src/snlic/sn_crypto_helper_13.c",0x136);
    if (plVar4 != (long *)0x0) {
      *(undefined4 *)((long)plVar4 + 0x14) = 1;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar4[1] = 0;
      *plVar4 = 0;
      lVar2 = FUN_100bac3a0(plVar4,lVar2);
      if (lVar2 != 0) {
        *(long **)(param_1 + 0xd8) = plVar4;
        return 1;
      }
      if ((*plVar4 != 0) && ((*(byte *)((long)plVar4 + 0x14) & 2) == 0)) {
        FUN_100bf3910();
      }
      if ((*(byte *)((long)plVar4 + 0x14) & 1) == 0) {
        *plVar4 = 0;
      }
      else {
        FUN_100bf3910(plVar4);
      }
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  else {
    lVar2 = FUN_100bac3a0(puVar3 + 2,puVar1 + 2);
    if (((lVar2 != 0) && (lVar2 = FUN_100bac3a0(puVar3 + 8,puVar1 + 8), lVar2 != 0)) &&
       (lVar2 = FUN_100bac3a0(puVar3 + 0xe,puVar1 + 0xe), lVar2 != 0)) {
      *puVar3 = *puVar1;
      *(undefined8 *)(puVar3 + 0x14) = *(undefined8 *)(puVar1 + 0x14);
      goto LAB_100bad120;
    }
  }
  lVar2 = *(long *)(param_1 + 0xd0);
  if (lVar2 == 0) {
    return 0;
  }
  if ((*(long *)(lVar2 + 8) != 0) && ((*(byte *)(lVar2 + 0x1c) & 2) == 0)) {
    FUN_100bf3910();
  }
  if ((*(byte *)(lVar2 + 0x1c) & 1) == 0) {
    *(undefined8 *)(lVar2 + 8) = 0;
  }
  else {
    FUN_100bf3910();
  }
  if ((*(long *)(lVar2 + 0x20) != 0) && ((*(byte *)(lVar2 + 0x34) & 2) == 0)) {
    FUN_100bf3910();
  }
  if ((*(byte *)(lVar2 + 0x34) & 1) == 0) {
    *(undefined8 *)(lVar2 + 0x20) = 0;
  }
  else {
    FUN_100bf3910();
  }
  if ((*(long *)(lVar2 + 0x38) != 0) && ((*(byte *)(lVar2 + 0x4c) & 2) == 0)) {
    FUN_100bf3910();
  }
  if ((*(byte *)(lVar2 + 0x4c) & 1) == 0) {
    *(undefined8 *)(lVar2 + 0x38) = 0;
  }
  else {
    FUN_100bf3910();
  }
  if ((*(byte *)(lVar2 + 0x58) & 1) != 0) {
    FUN_100bf3910(lVar2);
  }
LAB_100bad26e:
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return 0;
}

