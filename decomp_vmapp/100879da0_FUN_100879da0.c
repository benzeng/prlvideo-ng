
undefined8 FUN_100879da0(long *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if (param_1 == (long *)0x0) {
    uVar3 = 0x43;
    uVar5 = 0x102;
LAB_100879e98:
    FUN_100887ce0(0x26,0x69,uVar3,"eng_list.c",uVar5);
    return 0;
  }
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    uVar3 = 0x6c;
    uVar5 = 0x106;
    goto LAB_100879e98;
  }
  FUN_10081d010(9,0x1e,"eng_list.c",0x109);
  if (DAT_1011c0880 == (long *)0x0) {
    if (DAT_1011c0888 == (long *)0x0) {
      DAT_1011c0880 = param_1;
      param_1[0x19] = 0;
      FUN_100879900(FUN_10087a3e0);
LAB_100879f47:
      *(int *)((long)param_1 + 0xac) = *(int *)((long)param_1 + 0xac) + 1;
      DAT_1011c0888 = param_1;
      param_1[0x1a] = 0;
      uVar3 = 1;
      goto LAB_100879f65;
    }
    uVar3 = 0x6e;
    uVar5 = 0x7b;
  }
  else {
    pcVar1 = (char *)*param_1;
    plVar4 = DAT_1011c0880;
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
      if ((DAT_1011c0888 != (long *)0x0) && (DAT_1011c0888[0x1a] == 0)) {
        DAT_1011c0888[0x1a] = (long)param_1;
        param_1[0x19] = (long)DAT_1011c0888;
        goto LAB_100879f47;
      }
      uVar3 = 0x6e;
      uVar5 = 0x87;
    }
  }
  FUN_100887ce0(0x26,0x78,uVar3,"eng_list.c",uVar5);
  FUN_100887ce0(0x26,0x69,0x6e,"eng_list.c",0x10b);
  uVar3 = 0;
LAB_100879f65:
  FUN_10081d010(10,0x1e,"eng_list.c",0x10e);
  return uVar3;
}

