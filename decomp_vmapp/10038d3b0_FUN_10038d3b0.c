
void FUN_10038d3b0(long param_1,long param_2,uint param_3,uint param_4,uint param_5,ulong param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar6 = (ulong)param_4;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0x8893) {
    (*DAT_1011c5770)(0);
    iVar1 = *(int *)(param_1 + 0xc);
  }
  (*DAT_1011c5708)(iVar1);
  uVar5 = *(uint *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8);
  uVar4 = param_5 + param_4;
  if ((((param_4 == 0) && (uVar2 = param_5, uVar5 == param_5)) ||
      (uVar2 = uVar5, (param_6 & 0x2000) != 0)) || (uVar5 < uVar4)) {
    if (uVar2 < uVar4) {
      *(uint *)(param_1 + 4) = uVar4;
      uVar2 = uVar4;
    }
    uVar5 = 0;
    if ((int)param_3 < 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      if (param_4 == 0 && uVar2 == param_5) {
        lVar3 = (ulong)param_3 + *(long *)(param_2 + 0x920);
      }
    }
    (*DAT_1011c57d8)(*(undefined4 *)(param_1 + 0xc),uVar2,lVar3,iVar1);
    if (lVar3 != 0) goto LAB_10038d554;
  }
  else {
    uVar5 = ~((uint)(param_6 >> 0xc) & 0xfffff) & 1;
  }
  (*DAT_1011c7490)(*(undefined4 *)(param_1 + 0xc),0x8a12,uVar5);
  (*DAT_1011c7490)(*(undefined4 *)(param_1 + 0xc),0x8a13,iVar1 == 0x88e4);
  lVar3 = (*DAT_1011c64a0)(*(undefined4 *)(param_1 + 0xc),0x88b9);
  if ((param_4 < *(uint *)(param_1 + 4)) && (param_5 <= *(uint *)(param_1 + 4) - param_4)) {
    FUN_1002fcbe0(param_2,param_3,param_5,lVar3 + uVar6);
    if (iVar1 != 0x88e4) {
      (*DAT_1011c7498)(*(undefined4 *)(param_1 + 0xc),uVar6,param_5);
    }
  }
  else {
    FUN_1008e3970("","LocalDevices",0,"invalid load %u %u %u\n",param_3,uVar6,param_5);
  }
  (*DAT_1011c6ed0)(*(undefined4 *)(param_1 + 0xc));
LAB_10038d554:
  (*DAT_1011c7490)(*(undefined4 *)(param_1 + 0xc),0x8a13,0);
                    /* WARNING: Could not recover jumptable at 0x00010038d583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c7490)(*(undefined4 *)(param_1 + 0xc),0x8a12,0);
  return;
}

