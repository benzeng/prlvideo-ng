
void FUN_1006ffc00(long param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  uVar2 = *(ushort *)(param_2 + 4) & 0xf000;
  if (uVar2 < 0x8000) {
    if (uVar2 < 0x4000) {
      if (uVar2 == 0x1000) goto LAB_1006ffc57;
      if (uVar2 != 0x2000) goto LAB_1006ffd24;
      *(undefined1 *)(param_1 + 0xbc) = 0x33;
    }
    else {
      if (uVar2 == 0x4000) {
        *(undefined1 *)(param_1 + 0xbc) = 0x35;
        goto LAB_1006ffd24;
      }
      if (uVar2 != 0x6000) goto LAB_1006ffd24;
      *(undefined1 *)(param_1 + 0xbc) = 0x34;
    }
  }
  else {
    if (uVar2 == 0x8000) {
      *(undefined1 *)(param_1 + 0xbc) = 0x30;
      goto LAB_1006ffd24;
    }
    if (uVar2 != 0xc000) {
      if (uVar2 == 0xa000) {
        *(undefined1 *)(param_1 + 0xbc) = 0x32;
      }
      goto LAB_1006ffd24;
    }
LAB_1006ffc57:
    *(undefined1 *)(param_1 + 0xbc) = 0x36;
    if ((uVar2 | 0x4000) != 0x6000) goto LAB_1006ffd24;
  }
  uVar1 = *(uint *)(param_2 + 0x18);
  ___snprintf_chk(param_1 + 0x169,8,0,0xffffffffffffffff,"%0*lo",7,uVar1 >> 0x18);
  ___snprintf_chk(param_1 + 0x171,8,0,0xffffffffffffffff,"%0*lo",7,uVar1 & 0xffffff);
LAB_1006ffd24:
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  puVar3 = (undefined8 *)_getpwuid(uVar4);
  if (puVar3 != (undefined8 *)0x0) {
    ___strlcpy_chk(param_1 + 0x129,*puVar3,0x20,0xffffffffffffffff);
  }
  ___snprintf_chk(param_1 + 0x8c,8,0,0xffffffffffffffff,"%0*lo",7,uVar4);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  puVar3 = (undefined8 *)_getgrgid(uVar4);
  if (puVar3 != (undefined8 *)0x0) {
    ___strlcpy_chk(param_1 + 0x149,*puVar3,0x20,0xffffffffffffffff);
  }
  ___snprintf_chk(param_1 + 0x94,8,0,0xffffffffffffffff,"%0*lo",7,uVar4);
  uVar2 = *(ushort *)(param_2 + 4);
  if ((uVar2 & 0xf000) == 0xc000) {
    uVar2 = uVar2 & 0x2fff;
  }
  ___snprintf_chk(param_1 + 0x84,8,0,0xffffffffffffffff,"%0*lo",7,uVar2 & 0xfff);
  FUN_1006fe350(*(undefined4 *)(param_2 + 0x30),param_1 + 0xa8,0xc);
  if ((*(ushort *)(param_2 + 4) & 0xf000) == 0x8000) {
    uVar4 = *(undefined4 *)(param_2 + 0x60);
  }
  else {
    uVar4 = 0;
  }
  FUN_1006fe350(uVar4,param_1 + 0x9c,0xc);
  return;
}

