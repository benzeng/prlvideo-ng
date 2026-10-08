
undefined1 FUN_100db2da0(long *param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  long lVar1;
  char cVar2;
  undefined8 in_RAX;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulong)in_RAX >> 0x20);
  lVar1 = param_1[3];
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  cVar2 = (**(code **)(*param_1 + 0x98))(param_1);
  if (cVar2 == '\0') {
    uVar5 = 0;
    FUN_100df99c0("","AbstractFile",0,"Read from non opened file");
  }
  else {
    (**(code **)(*param_1 + 0x88))(param_1,0,0,param_1[3],param_3);
    lVar3 = (**(code **)(*param_1 + 0xd0))(param_1,param_2,param_3,0,PTR__read_1021e1c90);
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = (int)lVar3;
    }
    param_1[3] = param_1[3] + lVar3;
    uVar5 = 1;
    if (lVar3 != param_3) {
      if (*(int *)((long)param_1 + 0x14) != 0) {
        uVar5 = 0;
        FUN_100df99c0("","AbstractFile",0,
                      "Read data size [%zd] not equal to requested one [%d]. Error %u",lVar3,param_3
                      ,CONCAT44(uVar6,*(int *)((long)param_1 + 0x14)));
        uVar4 = (**(code **)(*param_1 + 0x60))(param_1,0,1);
        FUN_100df99c0("","AbstractFile",0,"Position before read %llu, after %llu",lVar1,uVar4);
      }
    }
  }
  return uVar5;
}

