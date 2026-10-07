
undefined8 FUN_1000ec3b0(void *param_1,uint param_2,undefined4 *param_3,uint *param_4)

{
  void *pvVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulong uVar8;
  
  *param_3 = 0;
  uVar6 = 1;
  if (param_1 != (void *)0x0) {
    if ((DAT_1011b6d60 == (void *)0x0) || (DAT_1011b6d40 == 0)) {
      uVar6 = 0;
      FUN_1008e3970("","vm",0,"Invlalid custom subsys state. NULL ptr, line=%u",0x370);
    }
    else {
      pvVar7 = (void *)((long)DAT_1011b6d60 + 0x10);
      pvVar1 = (void *)(DAT_1011b6d50 + (ulong)DAT_1011b6d58);
      if (pvVar1 < pvVar7) {
        uVar5 = *(undefined8 *)(DAT_1011b6d40 + 0x2c);
        uVar8 = 0x10;
        pcVar3 = "Ptr is out of range. Item %s[%u] (%p,0x%zx,%p,%x), line=%u";
        pvVar7 = DAT_1011b6d60;
      }
      else {
        uVar4 = *(uint *)((long)DAT_1011b6d60 + 0xc) >> 4;
        uVar8 = (ulong)uVar4 * 0x10;
        if (pvVar1 < (void *)(uVar8 + 0x10 + (long)DAT_1011b6d60)) {
          uVar5 = *(undefined8 *)(DAT_1011b6d40 + 0x2c);
          pcVar3 = "Ptr is out of range. Item %s[%u] (%p,0x%zx,%p,0x%x), line=%u";
        }
        else if (DAT_1011b6d6c < uVar4) {
          lVar2 = (ulong)DAT_1011b6d6c * 0x10;
          uVar4 = *(uint *)(lVar2 + 0x18 + (long)DAT_1011b6d60);
          uVar8 = (ulong)*(uint *)(lVar2 + 0x1c + (long)DAT_1011b6d60);
          pvVar7 = (void *)(DAT_1011b6d50 + uVar8);
          if ((ulong)DAT_1011b6d58 < uVar4 + uVar8) {
            uVar5 = *(undefined8 *)(DAT_1011b6d40 + 0x2c);
            uVar8 = (ulong)uVar4;
            pcVar3 = "Ptr is out of range. Item %s[%u] (%p,0x%x,%p,0x%x), line=%u";
          }
          else {
            if (uVar4 <= param_2) {
              if ((uint)DAT_1011c37a0 != 0) {
                FUN_1008e3970("","vm",0,
                              "Custom data loading: loading 0x%08x bytes from %p to %p \'%s[%u]\', line=%u"
                              ,param_2,pvVar7,param_1,*(undefined8 *)(DAT_1011b6d40 + 0x2c),
                              DAT_1011b6d6c,0x3a0);
              }
              _memcpy(param_1,pvVar7,(ulong)param_2);
              if (1 < (uint)DAT_1011c37a0) {
                FUN_1000eae00(param_1,param_2);
              }
              DAT_1011b6d6c = DAT_1011b6d6c + 1;
              *param_3 = 1;
              if (param_4 == (uint *)0x0) {
                return 1;
              }
              *param_4 = param_2;
              return 1;
            }
            uVar5 = *(undefined8 *)(DAT_1011b6d40 + 0x2c);
            uVar8 = (ulong)DAT_1011b6d58;
            pvVar7 = (void *)(ulong)uVar4;
            pcVar3 = "Custom data overhead. Item %s[%u] (0x%x,0x%x), line=%u";
          }
        }
        else {
          uVar5 = *(undefined8 *)(DAT_1011b6d40 + 0x2c);
          pvVar7 = (void *)(ulong)uVar4;
          uVar8 = 0x38d;
          pcVar3 = "Invalid index. Item %s[%u], %u, line=%u";
        }
      }
      uVar6 = 0;
      FUN_1008e3970("","vm",0,pcVar3,uVar5,(ulong)DAT_1011b6d6c,pvVar7,uVar8);
    }
  }
  return uVar6;
}

