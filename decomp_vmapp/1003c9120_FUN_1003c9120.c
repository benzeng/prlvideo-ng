
undefined8
FUN_1003c9120(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_2 == (undefined8 *)0x0) {
    local_10 = *(undefined8 *)(param_1 + 4);
    local_18 = 0;
  }
  else {
    local_18 = *param_2;
    local_10 = param_2[1];
  }
  if (param_4 == (undefined8 *)0x0) {
    local_20 = *(undefined8 *)(param_3 + 4);
    local_28 = 0;
  }
  else {
    local_28 = *param_4;
    local_20 = param_4[1];
  }
  if (((int)local_10 != (int)local_18) &&
     (iVar1 = (int)((ulong)local_10 >> 0x20), iVar2 = (int)((ulong)local_18 >> 0x20), iVar1 != iVar2
     )) {
    if (((int)local_20 != (int)local_28) &&
       (iVar3 = (int)((ulong)local_20 >> 0x20), iVar4 = (int)((ulong)local_28 >> 0x20),
       iVar3 != iVar4)) {
      if (((int)local_10 - (int)local_18 == (int)local_20 - (int)local_28) &&
         (iVar1 - iVar2 == iVar3 - iVar4)) {
        FUN_1003c9200(param_1,&local_18,param_3,&local_28,param_5);
      }
      else {
        FUN_1003c93f0(param_1,&local_18,param_3,&local_28,param_5);
      }
    }
  }
  return 1;
}

