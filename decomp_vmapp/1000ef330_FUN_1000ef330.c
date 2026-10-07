
void FUN_1000ef330(long param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_3 & 0xffffffff;
  *param_2 = 0;
  FUN_1000ef420(*(undefined4 *)(param_1 + 0x4e),param_2,param_3,FUN_1000ef530);
  FUN_1000ef420(*(undefined4 *)(param_1 + 0x4a),param_2,uVar1,FUN_1000ef7e0);
  FUN_1000ef420(*(undefined4 *)(param_1 + 0x66),param_2,param_3 & 0xffffffff,FUN_1000efa70);
  FUN_1000ef420(*(undefined4 *)(param_1 + 0x6a),param_2,uVar1,FUN_1000efae0);
  FUN_1000ef420(*(undefined4 *)(param_1 + 0x6e),param_2,param_3 & 0xffffffff,FUN_1000efd20);
  FUN_1000ef420(*(undefined4 *)(param_1 + 0x7a),param_2,param_3 & 0xffffffff,FUN_1000efd40);
  FUN_1000ef420(*(undefined4 *)(param_1 + 0x76),param_2,param_3 & 0xffffffff,FUN_1000efe90);
  FUN_1000ef420(*(undefined4 *)(param_1 + 0x7e),param_2,uVar1,FUN_1000efec0);
  FUN_1000ef420(*(undefined4 *)(param_1 + 0x82),param_2,param_3 & 0xffffffff,FUN_1000efef0);
  return;
}

