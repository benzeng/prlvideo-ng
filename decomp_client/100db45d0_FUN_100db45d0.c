
undefined4
FUN_100db45d0(long *param_1,QString *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  long lVar2;
  
  QString::operator=((QString *)(param_1 + 3),param_2);
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 5) = param_5;
  *(undefined4 *)((long)param_1 + 0x2c) = param_6;
  lVar2 = FUN_100db4670(param_1,0);
  if (lVar2 == 0) {
    FUN_100df99c0("","AbstractFile",0,"Can\'t open handle at Open");
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*(long *)param_1[2] + 0xa0))((long *)param_1[2],0,0,0);
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  return uVar1;
}

