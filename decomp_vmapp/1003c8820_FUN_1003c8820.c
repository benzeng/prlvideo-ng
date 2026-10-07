
undefined8
FUN_1003c8820(uint *param_1,undefined8 *param_2,uint *param_3,undefined8 *param_4,undefined4 param_5
             ,undefined4 param_6)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (param_2 == (undefined8 *)0x0) {
    local_28 = *(undefined8 *)(param_1 + 1);
    local_30 = 0;
  }
  else {
    local_30 = *param_2;
    local_28 = param_2[1];
  }
  if (param_4 == (undefined8 *)0x0) {
    local_38 = *(undefined8 *)(param_3 + 1);
    local_40 = 0;
  }
  else {
    local_40 = *param_4;
    local_38 = param_4[1];
  }
  uVar1 = 1;
  if (((((int)local_28 != (int)local_30) &&
       (iVar2 = (int)((ulong)local_30 >> 0x20), iVar5 = (int)((ulong)local_28 >> 0x20),
       iVar5 != iVar2)) && ((int)local_38 != (int)local_40)) &&
     (iVar3 = (int)((ulong)local_38 >> 0x20), iVar6 = (int)((ulong)local_40 >> 0x20), iVar3 != iVar6
     )) {
    uVar1 = 0;
    if ((*param_1 == *param_3) && (0xffffff < *(uint *)(&DAT_100b3f714 + (ulong)*param_1 * 8))) {
      uVar4 = *(uint *)(&DAT_100b3f714 + (ulong)*param_1 * 8) >> 0x18;
      if ((int)local_28 - (int)local_30 == (int)local_38 - (int)local_40 &&
          iVar5 - iVar2 == iVar3 - iVar6) {
        FUN_1003c8970(*(undefined8 *)(param_1 + 4),param_1[3],&local_30,*(undefined8 *)(param_3 + 4)
                      ,param_3[3],&local_40,uVar4,param_5,param_6);
      }
      else {
        FUN_1003c8d80(*(undefined8 *)(param_1 + 4),param_1[3],&local_30,*(undefined8 *)(param_3 + 4)
                      ,param_3[3],&local_40,uVar4,param_5,param_6);
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}

