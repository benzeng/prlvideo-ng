
undefined8 FUN_100c54fa0(long *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if (param_1 == (long *)0x0) {
    uVar3 = 0x43;
    uVar5 = 0x102;
LAB_100c55098:
    FUN_100c62ee0(0x26,0x69,uVar3,"eng_list.c",uVar5);
    return 0;
  }
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    uVar3 = 0x6c;
    uVar5 = 0x106;
    goto LAB_100c55098;
  }
  FUN_100bf2780(9,0x1e,"eng_list.c",0x109);
  if (DAT_1023162c0 == (long *)0x0) {
    if (DAT_1023162c8 == (long *)0x0) {
      DAT_1023162c0 = param_1;
      param_1[0x19] = 0;
      FUN_100c54b00(FUN_100c555e0);
LAB_100c55147:
      *(int *)((long)param_1 + 0xac) = *(int *)((long)param_1 + 0xac) + 1;
      DAT_1023162c8 = param_1;
      param_1[0x1a] = 0;
      uVar3 = 1;
      goto LAB_100c55165;
    }
    uVar3 = 0x6e;
    uVar5 = 0x7b;
  }
  else {
    pcVar1 = (char *)*param_1;
    plVar4 = DAT_1023162c0;
    do {
      iVar2 = _strcmp((char *)*plVar4,pcVar1);
      if (iVar2 == 0) break;
      plVar4 = (long *)plVar4[0x1a];
    } while (plVar4 != (long *)0x0);
    if (iVar2 == 0) {
      uVar3 = 0x67;
      uVar5 = 0x75;
    }
    else {
      if ((DAT_1023162c8 != (long *)0x0) && (DAT_1023162c8[0x1a] == 0)) {
        DAT_1023162c8[0x1a] = (long)param_1;
        param_1[0x19] = (long)DAT_1023162c8;
        goto LAB_100c55147;
      }
      uVar3 = 0x6e;
      uVar5 = 0x87;
    }
  }
  FUN_100c62ee0(0x26,0x78,uVar3,"eng_list.c",uVar5);
  FUN_100c62ee0(0x26,0x69,0x6e,"eng_list.c",0x10b);
  uVar3 = 0;
LAB_100c55165:
  FUN_100bf2780(10,0x1e,"eng_list.c",0x10e);
  return uVar3;
}

