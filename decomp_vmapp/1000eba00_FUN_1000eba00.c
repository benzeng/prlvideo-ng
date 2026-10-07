
undefined1 FUN_1000eba00(long param_1,int *param_2,long param_3,uint param_4)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  
  uVar2 = (ulong)(uint)param_2[3];
  if (uVar2 * 4 < (ulong)param_4 || uVar2 * 4 - (ulong)param_4 == 0) {
    uVar4 = 1;
    if (param_2[3] != 0) {
      uVar3 = 0;
      do {
        piVar1 = param_2;
        while( true ) {
          if (*piVar1 == 1) {
            FUN_1008e3970("","vm",0,"Function ID assigning failed. Name=%s, FuncId=%p, line=%u",
                          *(undefined8 *)(param_2 + 0xb),*(undefined8 *)(param_3 + uVar3 * 8),0x259)
            ;
            return 0;
          }
          if ((*piVar1 == 9) && (*(ulong *)(piVar1 + 9) == (ulong)*(uint *)(param_3 + uVar3 * 4)))
          break;
          piVar1 = piVar1 + 0xf;
        }
        *(undefined8 *)(param_1 + uVar3 * 8) = *(undefined8 *)(piVar1 + 1);
        if ((int)DAT_1011c37a0 != 0) {
          FUN_1008e3970("","vm",0,
                        "SaReGetFuncPtrById Function %s (%p) is set for %s[%05u] item, line=%u",
                        *(undefined8 *)(piVar1 + 0xb),*(undefined8 *)(piVar1 + 1),
                        *(undefined8 *)(param_2 + 0xb),(int)uVar3,0x25f);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
  }
  else {
    uVar4 = 0;
    FUN_1008e3970("","vm",0,"Function ID assigning failed. RecSize=0x%x, Len=0x%x , line=%u",uVar2,
                  param_4,0x24c);
  }
  return uVar4;
}

