
undefined8 * FUN_100790f30(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *local_20;
  
  FUN_10078f4f0(&local_20,*(undefined4 *)(*(long *)(*param_2 + 0x10) + 0x40),param_3,&DAT_1011ccb98,
                1);
  if ((local_20 == (long *)0x0) || (puVar2 = (undefined8 *)local_20[2], puVar2 == (undefined8 *)0x0)
     ) {
    *param_1 = 0;
  }
  else {
    puVar5 = (undefined8 *)0x0;
    if (*param_2 != 0) {
      puVar5 = *(undefined8 **)(*param_2 + 0x10);
    }
    uVar3 = *puVar5;
    puVar2[1] = puVar5[1];
    *puVar2 = uVar3;
    lVar4 = local_20[2];
    lVar6 = 0;
    if (*param_2 != 0) {
      lVar6 = *(long *)(*param_2 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar6 + 0x10);
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar6 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = uVar3;
    lVar4 = local_20[2];
    lVar6 = 0;
    if (*param_2 != 0) {
      lVar6 = *(long *)(*param_2 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar6 + 0x20);
    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar4 + 0x20) = uVar3;
    lVar4 = local_20[2];
    lVar6 = 0;
    if (*param_2 != 0) {
      lVar6 = *(long *)(*param_2 + 0x10);
    }
    uVar3 = *(undefined8 *)(lVar6 + 0x30);
    *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar6 + 0x38);
    *(undefined8 *)(lVar4 + 0x30) = uVar3;
    *param_1 = local_20;
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  if (local_20 != (long *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  return param_1;
}

