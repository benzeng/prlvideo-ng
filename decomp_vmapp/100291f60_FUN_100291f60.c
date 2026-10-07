
void FUN_100291f60(undefined8 *param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  
  FUN_10028e810();
  *param_1 = &PTR_FUN_100bb1390;
  param_1[1] = &PTR_metaObject_100bb14c8;
  param_1[0xd] = &PTR_FUN_100bb1540;
  param_1[0x20d] = &PTR_FUN_100bb1570;
  FUN_10026b650(param_1 + 0x20d,param_1 + 0xd,param_2,0xffffffff);
  *param_1 = &PTR_FUN_100bb1390;
  param_1[1] = &PTR_metaObject_100bb14c8;
  param_1[0xd] = &PTR_FUN_100bb1540;
  param_1[0x20d] = &PTR_FUN_100bb1570;
  param_1[0x239] = 0;
  *(undefined1 *)((long)param_1 + 0xfed) = 1;
  uVar1 = *(ushort *)(param_1 + 0x1fe);
  lVar2 = (ulong)*(ushort *)((long)param_1 + 0xfee) * 0x300 + param_1[0x200];
  lVar3 = (ulong)uVar1 * 0x80;
  *(undefined4 *)(lVar3 + 0x4694 + lVar2) = 1;
  FUN_1003fb1f0(lVar3 + 0x4690 + lVar2,(char)uVar1,1);
  return;
}

