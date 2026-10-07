
void FUN_1000eee30(long param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 & 0xffffffff;
  *param_2 = 0;
  FUN_1000ef420(*(undefined4 *)(param_1 + 4),param_2,param_3,FUN_1000ef530);
  FUN_1000ef420(*(undefined4 *)(param_1 + 8),param_2,uVar1,FUN_1000ef7e0);
  FUN_1000ef420(*(undefined4 *)(param_1 + 0xc),param_2,param_3 & 0xffffffff,FUN_1000efa70);
  FUN_1000ef420(*(undefined4 *)(param_1 + 0x10),param_2,uVar1,FUN_1000efae0);
  FUN_1000ef420(*(undefined4 *)(param_1 + 0x14),param_2,param_3 & 0xffffffff,FUN_1000efd20);
  FUN_1000ef420(*(undefined4 *)(param_1 + 0x1c),param_2,param_3 & 0xffffffff,FUN_1000efd40);
  FUN_1000ef420(*(undefined4 *)(param_1 + 0x20),param_2,param_3 & 0xffffffff,FUN_1000efec0);
  FUN_1000ef420(*(undefined4 *)(param_1 + 0x24),param_2,uVar1,FUN_1000efef0);
  return;
}

