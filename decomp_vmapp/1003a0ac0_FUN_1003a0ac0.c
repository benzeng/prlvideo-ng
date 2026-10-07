
undefined4 FUN_1003a0ac0(long param_1,uint param_2,undefined4 param_3)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10),"// ");
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10),"dcl");
  uVar3 = param_2 & 0x78000000;
  if (uVar3 == 0) {
    uVar3 = param_2 & 0xf;
    if (uVar3 == 0) {
      if ((*(uint *)(param_1 + 0x18) & 0xffff0000) != 0xfffe0000) goto LAB_1003a0b8b;
      uVar6 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      if (0xd < uVar3) {
        pcVar5 = "_usage?";
        goto LAB_1003a0b84;
      }
    }
    pcVar5 = (&PTR_s__position_100bbd8d0)[uVar3];
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if (uVar3 == 0x10000000) {
      pcVar5 = "_2d";
    }
    else if (uVar3 == 0x20000000) {
      pcVar5 = "_volume";
    }
    else if (uVar3 == 0x18000000) {
      pcVar5 = "_cube";
    }
    else {
      pcVar5 = "_sampler?";
    }
  }
LAB_1003a0b84:
  FUN_10038e8e0(uVar6,pcVar5);
LAB_1003a0b8b:
  if ((param_2 >> 0x10 & 0xf) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10),"%d");
  }
  uVar4 = 0;
  FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10)," ");
  FUN_1003a08c0(param_1,*(undefined8 *)(param_1 + 0x10),param_3,0);
  FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10),"\n");
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    puVar2 = *(uint **)(param_1 + 0x10);
    uVar3 = *puVar2;
    uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3);
    if (uVar3 < *puVar2) {
      FUN_10038e8e0(puVar2,"\n");
    }
  }
  return uVar4;
}

