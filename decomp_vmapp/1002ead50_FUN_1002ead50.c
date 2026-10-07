
undefined8
FUN_1002ead50(long param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4,
             undefined2 param_5,ushort *param_6,uint *param_7)

{
  long lVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  uint local_2c;
  
  if (1 < DAT_1011c568c) {
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] Process command %02x %02x %04x %04x %d (%p)",param_2
                  ,param_3,param_4,param_5,*param_7,param_6);
  }
  if (*param_7 < 3) {
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] Invalid command size (%d/%ld)",*param_7,3);
    }
    return 0x20;
  }
  local_2c = (uint)*param_6;
  plVar2 = (long *)FUN_1002ee1c0(param_1 + 0x50,&local_2c);
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x18);
    plVar2 = (long *)(param_1 + *(long *)(lVar1 + 0x20));
    if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar2 + -1);
    }
                    /* WARNING: Could not recover jumptable at 0x0001002eae47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(plVar2,param_6);
    return uVar3;
  }
  uVar3 = FUN_1002e9f10(param_1,param_6,&DAT_100bb5fd0);
  return uVar3;
}

