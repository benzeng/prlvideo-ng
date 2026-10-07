
undefined1 FUN_100707e20(long *param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  long lVar2;
  undefined1 uVar3;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x98))(param_1);
  if (cVar1 == '\0') {
    uVar3 = 0;
    FUN_1008e3970("","AbstractFile",0,"Write to non opened file");
  }
  else {
    (**(code **)(*param_1 + 0x88))(param_1,0,1,param_1[3],param_3);
    lVar2 = (**(code **)(*param_1 + 0xd0))(param_1,param_2,param_3,0,PTR__write_100ba2638);
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = (int)lVar2;
    }
    param_1[3] = param_1[3] + lVar2;
    uVar3 = 1;
    if (lVar2 != param_3) {
      uVar3 = 0;
      FUN_1008e3970("","AbstractFile",0,
                    "Written data size [%zd] not equal to requested one [%d]. Error %u",lVar2,
                    param_3,*(undefined4 *)((long)param_1 + 0x14));
    }
  }
  return uVar3;
}

