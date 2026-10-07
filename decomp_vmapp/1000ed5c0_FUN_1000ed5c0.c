
undefined8 FUN_1000ed5c0(void *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  void *pvVar11;
  
  uVar3 = DAT_1011b6d6c;
  lVar2 = DAT_1011b6d60;
  if (param_1 == (void *)0x0) {
    pcVar4 = "Invalid parameter in saving custom data";
  }
  else {
    if ((DAT_1011b6d60 != 0) && (DAT_1011b6d40 != 0)) {
      uVar6 = (ulong)*(uint *)(DAT_1011b6d60 + 0xc);
      uVar7 = *(uint *)(uVar6 + 0xc + DAT_1011b6d50) >> 4;
      if (DAT_1011b6d6c < uVar7) {
        lVar8 = (ulong)DAT_1011b6d6c * 0x10;
        uVar5 = (ulong)*(uint *)(lVar8 + 0x1c + uVar6 + DAT_1011b6d50);
        pvVar11 = (void *)(DAT_1011b6d50 + uVar5);
        if (uVar5 + param_2 <= (ulong)DAT_1011b6d58) {
          lVar1 = uVar6 + 0x10 + DAT_1011b6d50;
          *(uint *)(lVar1 + 8 + lVar8) = param_2;
          *(uint *)(lVar1 + lVar8) = uVar3;
          *(undefined4 *)(lVar1 + 4 + lVar8) = 0x8a9ffffc;
          if (((uint)DAT_1011c37a0 != 0) &&
             (FUN_1008e3970("","vm",0,
                            "Custom data saving: item saving 0x%08x bytes from %p to %p \'%s[%u]\'",
                            param_2,param_1,pvVar11,*(undefined8 *)(DAT_1011b6d40 + 0x2c),uVar3),
             1 < (uint)DAT_1011c37a0)) {
            FUN_1000eae00(param_1,param_2);
          }
          _memcpy(pvVar11,param_1,(ulong)param_2);
          if ((param_2 & 0xf) != 0) {
            param_2 = (param_2 + 0x10) - (param_2 & 0xf);
          }
          iVar10 = param_2 + *(int *)(lVar2 + 8);
          *(int *)(lVar2 + 8) = iVar10;
          *(int *)(lVar1 + 0xc + (ulong)(uVar3 + 1) * 0x10) = iVar10 + *(int *)(lVar2 + 0xc);
          DAT_1011b6d6c = uVar3 + 1;
          return 1;
        }
        uVar9 = *(undefined8 *)(DAT_1011b6d40 + 0x2c);
        pcVar4 = "Ptr is out of range. Item %s[%u] (%p,0x%x,%p,0x%x)";
      }
      else {
        uVar9 = *(undefined8 *)(DAT_1011b6d40 + 0x2c);
        pvVar11 = (void *)(ulong)uVar7;
        param_2 = 0x5aa;
        pcVar4 = "Custom data index out of range %s[%u], 0x%x, line=%u";
      }
      FUN_1008e3970("","vm",0,pcVar4,uVar9,(ulong)DAT_1011b6d6c,pvVar11,param_2);
      return 0;
    }
    pcVar4 = "Invalid custom data state";
  }
  FUN_1008e3970("","vm",0,pcVar4);
  return 0;
}

