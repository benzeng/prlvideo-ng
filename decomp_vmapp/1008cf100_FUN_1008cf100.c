
undefined8 FUN_1008cf100(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_4 == (long *)0x0) {
    uVar5 = 0x70;
    uVar4 = 0x43;
    uVar6 = 0x14f;
  }
  else {
    pcVar3 = (char *)FUN_1008cf6d0(param_1,param_2,param_3);
    if (pcVar3 != (char *)0x0) {
      *param_4 = 0;
      iVar2 = (**(code **)(*param_1 + 0x38))(param_1,(int)*pcVar3);
      while (iVar2 != 0) {
        lVar1 = *param_4;
        iVar2 = (**(code **)(*param_1 + 0x40))(param_1,(int)*pcVar3);
        *param_4 = (long)iVar2 + lVar1 * 10;
        iVar2 = (**(code **)(*param_1 + 0x38))(param_1,(int)pcVar3[1]);
        pcVar3 = pcVar3 + 1;
      }
      return 1;
    }
    uVar5 = 0x6d;
    if (param_1 != (long *)0x0) {
      FUN_100887ce0(0xe,0x6d,0x6c,"conf_lib.c",0x144);
      FUN_1008890a0(4,"group=",param_2," name=",param_3);
      return 0;
    }
    uVar4 = 0x6a;
    uVar6 = 0x141;
  }
  FUN_100887ce0(0xe,uVar5,uVar4,"conf_lib.c",uVar6);
  return 0;
}

