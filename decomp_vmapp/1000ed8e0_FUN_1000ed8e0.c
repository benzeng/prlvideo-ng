
undefined1
FUN_1000ed8e0(long param_1,long param_2,long param_3,undefined4 *param_4,long param_5,uint param_6,
             undefined4 param_7)

{
  long lVar1;
  long *plVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = (ulong)*(uint *)(param_2 + 0xc);
  if ((ulong)param_6 + param_5 < param_3 + uVar5 * 4) {
    uVar3 = 0;
    FUN_1008e3970("","vm",0,
                  "Function ID assigning failed. Ptr is out of range. Item %s (%p,0x%zx,%p,0x%x)",
                  *(undefined8 *)(param_2 + 0x2c),param_3,uVar5 * 4,param_5,param_6);
  }
  else {
    if (*(uint *)(param_2 + 0xc) != 0) {
      uVar4 = 0;
      do {
        lVar1 = *(long *)(param_1 + uVar4 * 8);
        plVar2 = (long *)(param_2 + 4);
        while( true ) {
          if (*(int *)((long)plVar2 + -4) == 1) {
            FUN_1008e3970("","vm",0,"Function ID assigning failed. Name=%s[%u], FuncId=%p, line=%u",
                          *(undefined8 *)(param_2 + 0x2c),uVar4 & 0xffffffff,lVar1,0x649);
            return 0;
          }
          if ((*(int *)((long)plVar2 + -4) == 9) && (*plVar2 == lVar1)) break;
          plVar2 = (long *)((long)plVar2 + 0x3c);
        }
        *(int *)(param_3 + uVar4 * 4) = (int)plVar2[4];
        if ((int)DAT_1011c37a0 != 0) {
          FUN_1008e3970("","vm",0,"Function %s (%p) is set for %s[%05u] item, line=%u",plVar2[5],
                        *plVar2,*(undefined8 *)(param_2 + 0x2c),uVar4 & 0xffffffff,0x64f);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    *param_4 = param_7;
    param_4[1] = 0x8a9ffffc;
    param_4[2] = (int)(uVar5 * 4);
    uVar3 = 1;
  }
  return uVar3;
}

