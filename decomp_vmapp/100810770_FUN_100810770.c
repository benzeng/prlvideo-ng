
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_100810770(long param_1,uint *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int local_38 [2];
  
  local_38[1] = 0;
  local_38[0] = 0;
  lVar4 = *(long *)(*(long *)(param_2 + 0x20) + 0x3a8);
  uVar8 = *(ulong *)(lVar4 + 0x18);
  uVar1 = *(ulong *)(lVar4 + 0x20);
  if ((*(byte *)(lVar4 + 0x40) & 2) != 0) {
    lVar4 = FUN_1008b7420(param_1);
    if (lVar4 == 0) {
      return 0;
    }
    iVar2 = FUN_100891d50(lVar4);
    FUN_1008924e0(lVar4);
    if (0xa3 < iVar2) {
      return 0;
    }
  }
  FUN_1008c9ba0(param_1,0xffffffff,0);
  if ((*(long **)(param_1 + 8) != (long *)0x0) && (**(long **)(param_1 + 8) != 0)) {
    uVar3 = FUN_100821ab0();
    FUN_100823110(uVar3,local_38 + 1,local_38);
  }
  uVar5 = uVar8 & 0x40;
  uVar8 = uVar8 & 0x20;
  if ((uVar8 != 0) || (uVar5 != 0)) {
    if (((*(byte *)(param_1 + 0x48) & 2) != 0) && ((*(byte *)(param_1 + 0x50) & 8) == 0)) {
      uVar6 = 0x13d;
      uVar7 = 0x8f4;
      goto LAB_100810939;
    }
    if (uVar5 != 0) {
      if ((local_38[0] != 0x198) && ((int)*param_2 < 0x303 || (*param_2 & 0xffffff00) != 0x300)) {
        uVar6 = 0x143;
        uVar7 = 0x8fb;
        goto LAB_100810939;
      }
    }
    if (((uVar8 != 0) &&
        ((((int)*param_2 < 0x303 || ((*param_2 & 0xffffff00) != 0x300)) && (local_38[0] != 6)))) &&
       (local_38[0] != 0x13)) {
      uVar6 = 0x142;
      uVar7 = 0x904;
      goto LAB_100810939;
    }
  }
  if ((uVar1 & 0x40) == 0) {
    return 1;
  }
  if ((*(byte *)(param_1 + 0x48) & 2) == 0) {
    return 1;
  }
  if ((*(byte *)(param_1 + 0x50) & 0x80) != 0) {
    return 1;
  }
  uVar6 = 0x13e;
  uVar7 = 0x90d;
LAB_100810939:
  FUN_100887ce0(0x14,0x117,uVar6,"ssl_lib.c",uVar7);
  return 0;
}

