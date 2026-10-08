
int FUN_100db5040(long *param_1,undefined4 param_2,char param_3,undefined1 param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_100db4670(param_1,0);
  if (lVar2 == 0) {
    FUN_100df99c0("","AbstractFile",0,"Can\'t open handle at GetHandle()");
    iVar1 = -1;
  }
  else {
    iVar1 = (**(code **)(*(long *)param_1[2] + 0xa0))((long *)param_1[2],param_2,0,param_4);
    if ((iVar1 == -1) && (param_3 == '\x01')) {
      iVar1 = (**(code **)(*(long *)param_1[2] + 0xa0))((long *)param_1[2],param_2,1,param_4);
    }
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  return iVar1;
}

