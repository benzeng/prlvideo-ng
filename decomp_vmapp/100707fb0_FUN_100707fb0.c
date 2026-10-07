
undefined1
FUN_100707fb0(long *param_1,undefined8 param_2,int param_3,undefined4 *param_4,undefined8 param_5)

{
  char cVar1;
  undefined8 in_RAX;
  long lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)in_RAX >> 0x20);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x98))(param_1);
  if (cVar1 == '\0') {
    uVar3 = 0;
    FUN_1008e3970("","AbstractFile",0,"PRead from non opened file");
  }
  else {
    (**(code **)(*param_1 + 0x88))(param_1,0,0,param_5,param_3);
    lVar2 = (**(code **)(*param_1 + 0xd0))(param_1,param_2,param_3,param_5,PTR__pread_100ba2600);
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = (int)lVar2;
    }
    uVar3 = 1;
    if (lVar2 != param_3) {
      uVar3 = 0;
      FUN_1008e3970("","AbstractFile",0,
                    "PRead data size [%zd] not equal to requested one [%d]. Error %u",lVar2,param_3,
                    CONCAT44(uVar4,*(undefined4 *)((long)param_1 + 0x14)));
    }
  }
  return uVar3;
}

