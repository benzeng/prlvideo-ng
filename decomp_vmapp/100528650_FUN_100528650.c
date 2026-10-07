
undefined8 FUN_100528650(long *param_1,uint *param_2,int param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 local_30 [8];
  
  if (param_3 < 0x30) {
    uVar7 = 0xf0000003;
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrDAStorage",2,
                    "Invalid size of main window data (is %d; need %ld)",param_3,0x30);
    }
  }
  else {
    uVar1 = *param_2;
    uVar3 = uVar1 >> 0x10 ^ uVar1;
    uVar5 = (ulong)((uVar3 >> 8 ^ uVar3) & 0xff);
    uVar7 = 0;
    if ((long *)param_1[uVar5 + 1] != (long *)0x0) {
      plVar2 = (long *)param_1[uVar5 + 1];
      plVar6 = param_1 + uVar5 + 1;
      do {
        plVar4 = plVar2;
        if (*(uint *)(plVar4 + 1) == uVar1) {
          if ((plVar4[0x11] != 0) && (plVar2 = (long *)*param_1, plVar2 != (long *)0x0)) {
            (**(code **)(*plVar2 + 0x10))(plVar2,plVar4[0x11],0xf0000000);
            plVar4 = (long *)*plVar6;
          }
          plVar4[0x11] = param_4;
          FUN_100529480(param_1 + 0x108,plVar6,local_30);
          return 0xffffffff;
        }
        plVar2 = (long *)*plVar4;
        plVar6 = plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return uVar7;
}

