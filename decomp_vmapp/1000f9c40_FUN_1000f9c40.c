
undefined8 FUN_1000f9c40(long param_1,long param_2)

{
  undefined1 uVar1;
  short *psVar2;
  undefined8 uVar3;
  
  if (*(short *)(param_2 + 0x14) == 8) {
    psVar2 = (short *)FUN_1002a6010(param_2);
    if (DAT_1011ccc18 != (code *)0x0) {
      (*DAT_1011ccc18)(0,0x13,5);
    }
    FUN_1008e3970("","vm",0,"hdd: SF: Init. Version 0x%x",*psVar2);
    if (*psVar2 == *(short *)(param_1 + 0x20)) {
      uVar1 = FUN_1000f9a90(param_1,psVar2[1]);
      *(undefined1 *)(psVar2 + 2) = uVar1;
      *(long *)(param_1 + 0x10) = param_2;
      uVar3 = 0xffffffff;
    }
    else {
      FUN_1008e3970("","vm",0,"hdd: WARNING: incompatible sfilter driver version");
      uVar3 = 0xf000001f;
    }
  }
  else {
    FUN_1008e3970("","vm",0,"hdd: SF ERROR: wrong SFLT_INIT_DISK request size %d (must be %ld)",
                  *(short *)(param_2 + 0x14),8);
    uVar3 = 0xf0000003;
  }
  return uVar3;
}

