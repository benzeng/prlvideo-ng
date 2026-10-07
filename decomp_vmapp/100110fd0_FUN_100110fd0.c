
undefined8 FUN_100110fd0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_100110bf0();
  uVar5 = 0x80000275;
  if (iVar2 != 0) {
    uVar3 = FUN_1007da300("hyp.ipi_freq",0xffff);
    uVar5 = FUN_1000a7e20(*(undefined8 *)(param_1 + 0x10));
    uVar4 = FUN_1000a7060(*(undefined8 *)(param_1 + 0x10));
    cVar1 = FUN_1006842b0(param_1 + 0xc,uVar5,uVar4,uVar3);
    if (cVar1 == '\0') {
      FUN_1008e3970("","vm",0,"Failed to init hypervisor");
      uVar5 = 0x80000016;
    }
    else {
      FUN_100110640(param_1);
      uVar5 = 0;
    }
  }
  return uVar5;
}

