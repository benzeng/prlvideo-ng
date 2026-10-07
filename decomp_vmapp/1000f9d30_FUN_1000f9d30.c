
undefined8 FUN_1000f9d30(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  plVar1 = (long *)(*(long *)(param_1 + 0x18) + 0xf0);
  *plVar1 = *plVar1 + 1;
  uVar4 = 0xf0000003;
  if (*(short *)(param_2 + 0x14) == 8) {
    pcVar3 = (char *)FUN_1002a6010(param_2);
    uVar5 = 0xffffffff;
    if ((pcVar3[1] & 1U) != 0) {
      uVar5 = *(undefined4 *)(pcVar3 + 4);
    }
    if (*pcVar3 == '\x02') {
      uVar4 = 8;
    }
    else {
      if (*pcVar3 != '\0') {
        FUN_1008e3970("","vm",0,"hdd: SF ERROR: invalid request %d");
        return 0xf0000002;
      }
      uVar4 = 2;
    }
    cVar2 = FUN_100257f80(uVar4,uVar5);
    uVar4 = 0xf0000012;
    if ((cVar2 != '\0') && (uVar4 = 0, DAT_1011ccc18 != (code *)0x0)) {
      (*DAT_1011ccc18)(uVar5,0x13,2);
    }
  }
  return uVar4;
}

