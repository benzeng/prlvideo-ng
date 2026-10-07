
undefined1 FUN_10054d5b0(long param_1,undefined8 param_2)

{
  short *psVar1;
  undefined1 uVar2;
  char *pcVar3;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    pcVar3 = "Uncompress guest memory: not valid";
  }
  else if (*(long *)(param_1 + 0x48) == 0) {
    psVar1 = *(short **)(param_1 + 0x28);
    if (*(long *)(psVar1 + 0xc) == 0) {
      pcVar3 = "Uncompress guest memory: existing file required";
    }
    else {
      if ((*psVar1 == 2) || (*(long *)(param_1 + 0x88) == 0)) {
        FUN_1008e3970("","TransMem",0,"Uncompress guest memory: v.%d (%d, %d), %u workers",*psVar1,
                      (char)psVar1[1],*(undefined1 *)((long)psVar1 + 3),
                      *(undefined4 *)(param_1 + 0x50));
        if (**(short **)(param_1 + 0x28) == 2) {
          return 1;
        }
        uVar2 = FUN_10054d6f0(param_1,param_2);
        return uVar2;
      }
      pcVar3 = "Uncompress guest memory: already active";
    }
  }
  else {
    pcVar3 = "Uncompress guest memory: not clear";
  }
  FUN_1008e3970("","TransMem",0,pcVar3);
  return 0;
}

