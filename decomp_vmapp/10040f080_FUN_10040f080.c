
undefined8
FUN_10040f080(undefined8 param_1,uint *param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined1 local_28 [4];
  uint local_24;
  
  lVar1 = *(long *)(param_5 + 0x68);
  if ((*(int *)(lVar1 + 0x68) - *(int *)(lVar1 + 100) & *(uint *)(lVar1 + 0x70)) < *param_2) {
    lVar1 = *(long *)(param_5 + 0x68);
    uVar3 = *(int *)(lVar1 + 0x68) - *(int *)(lVar1 + 100) & *(uint *)(lVar1 + 0x70);
    *param_2 = uVar3;
  }
  else {
    uVar3 = *param_2;
  }
  if (uVar3 == 0) {
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    uVar2 = 0xffffffff;
  }
  else {
    FUN_1007d7220(*(long *)(param_5 + 0x68) + 0x5c,uVar3,&local_30,&local_24,local_38,local_28);
    *param_2 = local_24;
    lVar1 = *(long *)(param_5 + 0x68);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(lVar1 + 8);
    *(uint *)(param_3 + 0xc) = *(int *)(lVar1 + 0x60) * local_24;
    *(undefined8 *)(param_3 + 0x10) = local_30;
    *(uint *)(lVar1 + 100) = local_24 + *(int *)(lVar1 + 100) & *(uint *)(lVar1 + 0x70);
    uVar2 = 0;
  }
  return uVar2;
}

