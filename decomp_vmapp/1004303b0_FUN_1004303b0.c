
undefined4
FUN_1004303b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             long *param_5,undefined8 *param_6,undefined1 param_7)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *local_38;
  
  FUN_10078f4f0(&local_38,0x1896e,(*(int *)(*param_5 + 0xc) + 1) - *(int *)(*param_5 + 8),
                &DAT_1011ccb98,1);
  lVar5 = 0;
  if (local_38 != (long *)0x0) {
    lVar5 = local_38[2];
  }
  FUN_10078f730(lVar5,0,0,param_3,param_4);
  lVar5 = 0;
  while( true ) {
    lVar2 = *param_5;
    if ((long)*(int *)(lVar2 + 0xc) - (long)*(int *)(lVar2 + 8) <= lVar5) break;
    lVar6 = 0;
    if (local_38 != (long *)0x0) {
      lVar6 = local_38[2];
    }
    lVar2 = *(long *)(lVar2 + 0x10 + (*(int *)(lVar2 + 8) + lVar5) * 8);
    FUN_10078f910(lVar6,(int)lVar5 + 1,0,lVar2,*(undefined4 *)(lVar2 + 8));
    lVar5 = lVar5 + 1;
  }
  if (param_6 != (undefined8 *)0x0) {
    lVar5 = 0;
    if (local_38 != (long *)0x0) {
      lVar5 = local_38[2];
    }
    *(undefined8 *)(lVar5 + 0x78) = param_6[4];
    *(undefined8 *)(lVar5 + 0x70) = param_6[3];
    *(undefined8 *)(lVar5 + 0x68) = param_6[2];
    uVar3 = *param_6;
    *(undefined8 *)(lVar5 + 0x60) = param_6[1];
    *(undefined8 *)(lVar5 + 0x58) = uVar3;
  }
  uVar4 = FUN_100433970(param_1,param_2,&local_38,param_7);
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  return uVar4;
}

