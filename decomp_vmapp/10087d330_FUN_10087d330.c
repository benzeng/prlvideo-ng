
long * FUN_10087d330(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_10081ddd0(0x70,"bio_lib.c",0x46);
  if (plVar2 == (long *)0x0) {
    FUN_100887ce0(0x20,0x6c,0x41,"bio_lib.c",0x48);
  }
  else {
    *plVar2 = param_1;
    *(undefined4 *)(plVar2 + 3) = 0;
    plVar2[2] = 0;
    plVar2[1] = 0;
    *(undefined8 *)((long)plVar2 + 0x1c) = 1;
    *(undefined8 *)((long)plVar2 + 0x24) = 0;
    plVar2[8] = 0;
    plVar2[7] = 0;
    plVar2[6] = 0;
    *(undefined4 *)(plVar2 + 9) = 1;
    plVar2[0xb] = 0;
    plVar2[10] = 0;
    FUN_10081f930(0,plVar2,plVar2 + 0xc);
    if (*(code **)(param_1 + 0x38) == (code *)0x0) {
      return plVar2;
    }
    iVar1 = (**(code **)(param_1 + 0x38))(plVar2);
    if (iVar1 != 0) {
      return plVar2;
    }
    FUN_10081fa50(0,plVar2,plVar2 + 0xc);
    FUN_10081e1a0(plVar2);
  }
  return (long *)0x0;
}

