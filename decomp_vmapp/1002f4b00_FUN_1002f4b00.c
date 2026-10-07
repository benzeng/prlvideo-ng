
undefined8 FUN_1002f4b00(long param_1,uint param_2,uint param_3,int param_4)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 1;
  if (param_4 == 0) {
    plVar1 = *(long **)(param_1 + 0x30 + (ulong)param_2 * 8);
    iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,param_3 & 0xff);
    if (iVar2 != 0) {
      if (-1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] SetAlternateInterface(%u,%u) failed (%x)!",
                      *(long *)(param_1 + 8) + 0x838,param_2,param_3,iVar2);
      }
      *(int *)(param_1 + 0x20) = iVar2;
      uVar3 = 0;
    }
  }
  return uVar3;
}

