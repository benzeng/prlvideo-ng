
undefined1 FUN_1004ae020(long param_1)

{
  undefined1 uVar1;
  long local_28;
  
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"COHERENCE RESTARTED. State=%d startInProgress=%d",
                  *(undefined4 *)(param_1 + 0x88),*(undefined1 *)(param_1 + 0x8c));
  }
  if ((*(uint *)(param_1 + 0x88) & 0xfffffffe) == 2) {
    if (*(uint *)(param_1 + 0x88) == 2) {
      *(undefined4 *)(param_1 + 0x88) = 3;
      uVar1 = 1;
    }
    else if (DAT_1011b55f8 < 2) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                    "[SetCoherenceServerState] cannot set state %d (curr state=%d)",3);
    }
    if (*(char *)(param_1 + 0x8c) == '\0') {
      local_28 = 0;
      FUN_1004b43e0(&local_28,0xc,0,0);
      if (local_28 != 0) {
        FUN_1004b4c70(*(undefined8 *)(param_1 + 0x80),param_1 + 0x120);
      }
      FUN_1004b4800(*(undefined8 *)(param_1 + 0x138));
      FUN_1004b6d20(*(undefined8 *)(param_1 + 0xf0),param_1 + 0x120,0);
    }
  }
  else {
    uVar1 = 1;
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",2," >> ignore while not in Coherence");
    }
  }
  return uVar1;
}

