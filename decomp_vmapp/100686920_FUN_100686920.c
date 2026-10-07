
undefined8
FUN_100686920(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,uint param_5,
             uint param_6,uint param_7,int param_8,int param_9,long param_10,uint param_11)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = 0;
  if (param_11 != 0) {
    uVar2 = 0;
    do {
      iVar1 = *(int *)(param_10 + 8 + uVar2 * 0x10);
      if (((iVar1 == -1) || (iVar1 == param_9)) && (param_5 < param_6)) {
        piVar5 = (int *)(*(long *)(param_10 + uVar2 * 0x10) + 0xc + (ulong)param_5 * 0x20);
        uVar3 = param_5;
        do {
          if (*piVar5 != param_8) {
            FUN_1008e3970("","dimg",0,
                          "Error: invalid table offsets, block %u is occupied by storage %u, but should be %u"
                          ,uVar3,*piVar5,param_8);
            FUN_1008e3970("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskImagePlain.cpp",
                          0x148,"FillTableAsync");
            uVar4 = 0x80021025;
            goto LAB_100686a3b;
          }
          if (piVar5[-1] < param_9) {
            piVar5[-1] = param_9;
            *(long *)(piVar5 + -3) = param_4;
          }
          uVar3 = uVar3 + 1;
          param_4 = param_4 + (ulong)param_7;
          piVar5 = piVar5 + 8;
        } while (uVar3 < param_6);
      }
      uVar2 = uVar2 + 1;
      uVar4 = 0;
    } while (uVar2 < param_11);
  }
LAB_100686a3b:
  (*param_2)(param_3,uVar4);
  return 0;
}

