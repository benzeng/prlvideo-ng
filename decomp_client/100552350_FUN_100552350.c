
undefined4 * FUN_100552350(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  if (param_2[2] != 0) {
    lVar2 = *(long *)(param_2[2] + 0x10);
    uVar3 = (ulong)*(uint *)(lVar2 + 8);
    uVar4 = 0;
    if ((int)*(uint *)(lVar2 + 8) < *(int *)(lVar2 + 0xc)) {
      do {
        cVar1 = FUN_100714bd0(*(undefined8 *)(lVar2 + 0x10 + ((long)(int)uVar3 + uVar4) * 8),param_3
                             );
        if (cVar1 != '\0') {
          local_40 = 0xffffffff;
          local_3c = 0xffffffff;
          local_30 = 0;
          local_38 = 0;
          (**(code **)(*param_2 + 0x60))(param_1,param_2,uVar4 & 0xffffffff,0,&local_40);
          return param_1;
        }
        uVar4 = uVar4 + 1;
        lVar2 = *(long *)(param_2[2] + 0x10);
        uVar3 = (ulong)*(int *)(lVar2 + 8);
      } while ((long)uVar4 < (long)((long)*(int *)(lVar2 + 0xc) - uVar3));
    }
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return param_1;
}

