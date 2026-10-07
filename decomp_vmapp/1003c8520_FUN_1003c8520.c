
undefined8
FUN_1003c8520(uint *param_1,undefined8 *param_2,uint *param_3,undefined8 *param_4,undefined2 param_5
             )

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_2 == (undefined8 *)0x0) {
    local_18 = *(undefined8 *)(param_1 + 1);
    local_20 = 0;
  }
  else {
    local_20 = *param_2;
    local_18 = param_2[1];
  }
  if (param_4 == (undefined8 *)0x0) {
    local_28 = *(undefined8 *)(param_3 + 1);
    local_30 = 0;
  }
  else {
    local_30 = *param_4;
    local_28 = param_4[1];
  }
  uVar1 = 1;
  if (((int)local_18 != (int)local_20) &&
     (iVar2 = (int)((ulong)local_20 >> 0x20), iVar4 = (int)((ulong)local_18 >> 0x20), iVar4 != iVar2
     )) {
    if (((int)local_28 != (int)local_30) &&
       (iVar3 = (int)((ulong)local_30 >> 0x20), iVar5 = (int)((ulong)local_28 >> 0x20),
       iVar5 != iVar3)) {
      uVar1 = 0;
      if (((((int)local_18 - (int)local_20 == (int)local_28 - (int)local_30) &&
           (*param_1 == *param_3)) && (iVar4 - iVar2 == iVar5 - iVar3)) &&
         (uVar1 = 0, 0xffffff < *(uint *)(&DAT_100b3f714 + (ulong)*param_1 * 8))) {
        uVar1 = FUN_1003c8640(*(undefined8 *)(param_1 + 4),param_1[3],&local_20,
                              *(undefined8 *)(param_3 + 4),param_3[3],&local_30,
                              *(uint *)(&DAT_100b3f714 + (ulong)*param_1 * 8) >> 0x18,param_5,0);
      }
    }
  }
  return uVar1;
}

