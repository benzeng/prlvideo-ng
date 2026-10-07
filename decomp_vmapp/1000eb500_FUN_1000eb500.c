
undefined1 FUN_1000eb500(void *param_1,void *param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  size_t sVar7;
  undefined4 uVar8;
  
  uVar1 = *(uint *)(param_4 + 8);
  sVar7 = (size_t)uVar1;
  uVar2 = *(uint *)(param_3 + 0xc);
  if ((uVar2 < uVar1) && (DAT_1011c3790 == 0)) {
    FUN_1008e3970("","vm",0,"Data overhead. Item %s 0x%x, 0x%x, line=%u",
                  *(undefined8 *)(param_3 + 0x2c),sVar7,uVar2,0x1d1);
    return 0;
  }
  if (uVar1 == uVar2) {
    if (1 < (uint)DAT_1011c37a0) {
      FUN_1000eae00(param_2,sVar7);
      sVar7 = (size_t)*(uint *)(param_4 + 8);
    }
    _memcpy(param_1,param_2,sVar7);
    return 1;
  }
  if (uVar2 < uVar1) {
    if ((uVar1 % uVar2 == 0) && (uVar5 = sVar7 % (ulong)uVar2, (sVar7 / uVar2 & 1) == 0)) {
      if (7 < uVar1) {
        lVar3 = 0;
        do {
          *(undefined8 *)((long)param_1 + lVar3 * 8) = *(undefined8 *)((long)param_2 + lVar3 * 8);
          lVar3 = lVar3 + 1;
        } while ((uint)lVar3 < *(uint *)(param_4 + 8) >> 3);
      }
LAB_1000eb627:
      if ((uint)DAT_1011c37a0 < 2) {
        return 1;
      }
      FUN_1000eae00(param_1,*(undefined4 *)(param_3 + 0xc),uVar5);
      return 1;
    }
    uVar6 = *(undefined8 *)(param_3 + 0x2c);
    uVar8 = 0x1e5;
    pcVar4 = "Item %s restoring from x64 monitor failed. uSize=0x%x, uLen=0x%x, line=%u";
  }
  else {
    if ((uVar2 % uVar1 == 0) && (uVar5 = (ulong)uVar2 % sVar7, (uVar2 / sVar7 & 1) == 0)) {
      if (3 < uVar1) {
        lVar3 = 0;
        do {
          *(ulong *)((long)param_1 + lVar3 * 8) = (ulong)*(uint *)((long)param_2 + lVar3 * 4);
          lVar3 = lVar3 + 1;
        } while ((uint)lVar3 < *(uint *)(param_4 + 8) >> 2);
      }
      goto LAB_1000eb627;
    }
    uVar6 = *(undefined8 *)(param_3 + 0x2c);
    uVar8 = 0x1f8;
    pcVar4 = "Item %s restoring from x32 monitor failed. uSize=0x%x, uLen=0x%x, line=%u";
  }
  FUN_1008e3970("","vm",0,pcVar4,uVar6,uVar2,uVar1,uVar8);
  return 0;
}

