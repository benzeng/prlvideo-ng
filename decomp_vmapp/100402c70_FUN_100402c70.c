
undefined1 FUN_100402c70(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 uVar4;
  long *plVar5;
  
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1,param_2);
    lVar2 = *(long *)(param_1 + 8);
    if ((((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 2) != 0)) && (param_2 != 0)) &&
       (*(char *)(lVar2 + 0x50) != '\0')) {
      FUN_1007685b0(*(undefined4 *)(lVar2 + 0x20));
      (**(code **)(*(long *)(param_1 + 8) + 0x40))(*(long *)(param_1 + 8) + 0x28);
      FUN_1007d9f80(*(long *)(param_1 + 8) + 0x28);
    }
    plVar1 = (long *)(param_1 + 0x20);
    plVar5 = *(long **)(param_1 + 0x20);
    if ((plVar5 != plVar1) && (*(char *)(param_1 + 0x30) == '\0')) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      do {
        lVar2 = *plVar5;
        plVar3 = (long *)plVar5[1];
        *(long **)(lVar2 + 8) = plVar3;
        *plVar3 = lVar2;
        *plVar5 = (long)plVar5;
        plVar5[1] = (long)plVar5;
        (*(code *)plVar5[-0x14])(plVar5 + -0x16);
        FUN_100402d70(param_1);
        do {
          FUN_100402c70(param_1,0xffffffff);
        } while ((int)plVar5[-3] != 0);
        plVar5 = (long *)*plVar1;
      } while (plVar5 != plVar1);
      *(undefined1 *)(param_1 + 0x30) = 0;
    }
  }
  return uVar4;
}

